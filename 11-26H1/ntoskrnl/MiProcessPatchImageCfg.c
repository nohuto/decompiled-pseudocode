/*
 * XREFs of MiProcessPatchImageCfg @ 0x14087A0F8
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiReadVadFlags2 @ 0x1404739E0 (MiReadVadFlags2.c)
 *     MiVadDeleted @ 0x14047A3A8 (MiVadDeleted.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     RtlEnumerateHotPatchPatches @ 0x1408B13A8 (RtlEnumerateHotPatchPatches.c)
 *     MiPopulateCfgBitMap @ 0x1409993B4 (MiPopulateCfgBitMap.c)
 *     MiSelectCfgBitMap @ 0x140AA2A44 (MiSelectCfgBitMap.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiProcessPatchImageCfg(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // r15
  int v8; // ebx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  int CurrentProcessorColor; // eax
  __int64 v12; // rdx
  void *PoolMm; // rax
  __int64 v14; // rax
  _QWORD *v15; // r8
  unsigned int v16; // edx
  int v17; // r14d
  unsigned int v18; // ecx
  __int64 v19; // rax
  int v20; // r10d
  __int64 v21; // r15
  __int64 v23; // [rsp+20h] [rbp-40h]
  __int64 v24; // [rsp+28h] [rbp-38h]
  void *Base[2]; // [rsp+40h] [rbp-20h] BYREF
  size_t *p_NumOfElements; // [rsp+50h] [rbp-10h]
  size_t NumOfElements; // [rsp+A8h] [rbp+48h] BYREF

  LODWORD(NumOfElements) = 0;
  p_NumOfElements = 0LL;
  *(_OWORD *)Base = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( Process[2].ActiveProcessors[5].StaticBitmap[8] )
  {
    RtlEnumerateHotPatchPatches(a2, a3, MiFillPatchCallTargets, Base);
    LODWORD(NumOfElements) = Base[0];
    if ( LODWORD(Base[0]) )
    {
      CurrentProcessorColor = MmGetCurrentProcessorColor();
      PoolMm = (void *)ExAllocatePoolMm(256LL, 16 * v12, 1665690957, CurrentProcessorColor | 0x80000000);
      Base[1] = PoolMm;
      if ( !PoolMm )
      {
        v8 = -1073741670;
        goto LABEL_25;
      }
      LODWORD(Base[0]) = 0;
      RtlEnumerateHotPatchPatches(a2, a3, MiFillPatchCallTargets, Base);
      qsort(
        Base[1],
        (unsigned int)NumOfElements,
        0x10uLL,
        (int (__cdecl *)(const void *, const void *))VmpPinRangeInfoSort);
    }
    MiLockVad((__int64)CurrentThread, a1, v9, v10);
    if ( (unsigned int)MiVadDeleted(a1) )
    {
      v8 = -1073741800;
    }
    else
    {
      v14 = MiSelectCfgBitMap(
              Process,
              (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12,
              **(_QWORD **)(a1 + 80));
      v15 = Base[1];
      v16 = 0;
      v17 = v14;
      while ( v16 < LODWORD(Base[0]) )
      {
        if ( (*((_DWORD *)Base[1] + 4 * v16) & 0xF) != (unsigned __int64)*(unsigned int *)(v14 + 24) )
        {
          v8 = -1073741654;
          goto LABEL_23;
        }
        ++v16;
      }
      v18 = 0;
      if ( (_DWORD)NumOfElements )
      {
        while ( 1 )
        {
          v19 = v18++;
          v15[2 * v19 + 1] = 1LL;
          if ( v18 >= (unsigned int)NumOfElements )
            break;
          v15 = Base[1];
        }
      }
      if ( (MiReadVadFlags2(a1) & 0x20) != 0 )
        v20 = *(_DWORD *)&stru_140E2D2D0.BamQosLevel;
      v21 = (unsigned int)(v20 - 1);
      v8 = MiPopulateCfgBitMap(
             v17,
             (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12,
             (((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF)
           - v21,
             0LL);
      if ( v8 >= 0 )
      {
        if ( !(_DWORD)NumOfElements
          || (v24 = (((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF)
                  - v21,
              v23 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12,
              LODWORD(NumOfElements) = 0,
              p_NumOfElements = &NumOfElements,
              v8 = MiPopulateCfgBitMap(v17, v23, v24, 0LL),
              v8 >= 0) )
        {
          v8 = 0;
        }
      }
    }
LABEL_23:
    MiUnlockVad((__int64)CurrentThread, a1);
  }
  else
  {
    v8 = 0;
  }
  PoolMm = Base[1];
LABEL_25:
  if ( PoolMm )
    ExFreePoolWithTag(PoolMm, 0);
  return (unsigned int)v8;
}
