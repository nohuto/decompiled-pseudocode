/*
 * XREFs of MiCreateImageOrDataSection @ 0x14098BFCC
 * Callers:
 *     MiCreateSection @ 0x14098B4B4 (MiCreateSection.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x14025A030 (PsReferencePartitionSafe.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoAllowExecution @ 0x14026E724 (IoAllowExecution.c)
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     MiDereferenceControlAreaBySection @ 0x14036F4A8 (MiDereferenceControlAreaBySection.c)
 *     ObReferenceObjectExWithTag @ 0x140446820 (ObReferenceObjectExWithTag.c)
 *     IoSetTopLevelIrp @ 0x140447A40 (IoSetTopLevelIrp.c)
 *     MiGetControlAreaPartition @ 0x14044F7D0 (MiGetControlAreaPartition.c)
 *     IoGetTopLevelIrp @ 0x1404595F0 (IoGetTopLevelIrp.c)
 *     MiReferenceControlArea @ 0x1404694F0 (MiReferenceControlArea.c)
 *     ObDereferenceObjectExWithTag @ 0x1404776D0 (ObDereferenceObjectExWithTag.c)
 *     CcWaitForUninitializeCacheMap @ 0x140485448 (CcWaitForUninitializeCacheMap.c)
 *     IoGetFileMemoryPartitionInformation @ 0x14048A5CC (IoGetFileMemoryPartitionInformation.c)
 *     MiReferenceExistingControlArea @ 0x14049E0E0 (MiReferenceExistingControlArea.c)
 *     MiForceSectionClosed @ 0x1404A9890 (MiForceSectionClosed.c)
 *     MiZeroSectionObjectPointer @ 0x1404D45AC (MiZeroSectionObjectPointer.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCallCreateSectionFilters @ 0x14098C50C (MiCallCreateSectionFilters.c)
 *     MiCreateNewSection @ 0x140A63860 (MiCreateNewSection.c)
 *     MiShareExistingControlArea @ 0x140A63F80 (MiShareExistingControlArea.c)
 *     FsRtlReleaseFile @ 0x140A64120 (FsRtlReleaseFile.c)
 *     MiDereferenceFailedControlArea @ 0x140B275E4 (MiDereferenceFailedControlArea.c)
 */

__int64 __fastcall MiCreateImageOrDataSection(__int64 a1)
{
  int v2; // r15d
  int v3; // eax
  __int64 v4; // r14
  int v5; // eax
  unsigned __int64 v6; // rsi
  int v7; // ebx
  __int64 *FileMemoryPartitionInformation; // rax
  bool v9; // zf
  struct _KTHREAD *CurrentThread; // r12
  int v11; // r14d
  int v12; // eax
  __int64 v13; // r14
  int v14; // edx
  __int64 v15; // rax
  __int64 *v16; // rax
  int v17; // ecx
  __int64 *v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  _QWORD *v21; // r13
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  int v25; // ecx
  char v27; // dl
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // ecx
  __int64 *v32; // rcx
  _BYTE v33[56]; // [rsp+40h] [rbp-59h] BYREF
  int v34; // [rsp+78h] [rbp-21h]
  unsigned __int64 v35; // [rsp+80h] [rbp-19h]
  char v36; // [rsp+100h] [rbp+67h]
  __int64 v37; // [rsp+108h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+110h] [rbp+77h] BYREF

  v37 = 0LL;
  memset_0(v33, 0, 0x80uLL);
  Object = 0LL;
  v2 = 0;
  v36 = 1;
  if ( *(_BYTE *)(a1 + 192) )
    return (unsigned int)-1073741580;
  v3 = *(_DWORD *)(a1 + 16);
  if ( (v3 & 0x80000) != 0 )
    return (unsigned int)-1073741580;
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 )
  {
    v6 = *(_QWORD *)(a1 + 48);
    goto LABEL_8;
  }
  if ( v3 < 0 || (v3 & 0x20000) != 0 )
    return (unsigned int)-1073741580;
  v5 = ObpReferenceObjectByHandleWithTag(
         *(_QWORD *)(a1 + 40),
         *((_DWORD *)MmMakeFileAccess + (*(_DWORD *)(a1 + 32) & 7)),
         (__int64)IoFileObjectType,
         *(_BYTE *)(a1 + 72),
         0x43536D4Du,
         &Object,
         0LL,
         0LL);
  v6 = (unsigned __int64)Object;
  v7 = v5;
  if ( v5 < 0 )
  {
LABEL_40:
    if ( v7 != -1073740682 )
      goto LABEL_41;
    goto LABEL_57;
  }
  v2 = 1;
  if ( !*((_QWORD *)Object + 5) )
  {
    v7 = -1073741792;
    goto LABEL_42;
  }
LABEL_8:
  FileMemoryPartitionInformation = (__int64 *)IoGetFileMemoryPartitionInformation(v6);
  if ( FileMemoryPartitionInformation )
  {
    if ( !PsReferencePartitionSafe(*FileMemoryPartitionInformation) )
    {
      v7 = -1073740640;
      goto LABEL_41;
    }
    *(_QWORD *)(a1 + 176) = v30;
    if ( (*(_DWORD *)(v29 + 8) & 1) != 0 )
      *(_DWORD *)a1 |= 0x200000u;
  }
  if ( !v4 )
  {
    ObfReferenceObjectWithTag((PVOID)v6, 0x43536D4Du);
    ++v2;
LABEL_11:
    v9 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
    *(_QWORD *)(a1 + 56) = v6;
    v34 = 2;
    v35 = v6;
    Object = 0LL;
    if ( !v9 )
    {
      if ( (*(_DWORD *)a1 & 0x200) != 0 && !IoAllowExecution(v6) )
      {
        v7 = -1073741790;
        goto LABEL_41;
      }
      CcWaitForUninitializeCacheMap(v6);
      v27 = *(_BYTE *)(a1 + 24);
      if ( (v27 & 0x10) != 0 )
      {
        if ( (*(_DWORD *)a1 & 0x200) != 0 )
        {
          v31 = *(_DWORD *)a1 | 0x10;
          *(_DWORD *)a1 = v31;
          if ( (v27 & 0x30) == 0x30 )
            *(_DWORD *)a1 = v31 | 0x800;
        }
        *(_BYTE *)(a1 + 24) = v27 & 0xF;
      }
      v36 = 2;
    }
    CurrentThread = KeGetCurrentThread();
    v11 = 0;
    --CurrentThread->KernelApcDisable;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = MiCallCreateSectionFilters(a1);
        if ( v7 < 0 )
          goto LABEL_39;
        if ( (*(_DWORD *)a1 & 0x4000) == 0 || (*(_DWORD *)(a1 + 16) & 0x1000000) == 0 )
          break;
        if ( (*(_DWORD *)a1 & 0x8000) != 0 )
          break;
        v32 = *(__int64 **)(v6 + 40);
        if ( !*v32 || v11 || (unsigned int)MiForceSectionClosed(v32, 1, 2) != 1 )
          break;
        if ( (*(_DWORD *)a1 & 1) == 0 )
          FsRtlReleaseFile((PFILE_OBJECT)v6);
        MiForceSectionClosed(*(__int64 **)(v6 + 40), 1, 1);
        v11 = 1;
      }
      if ( (*(_DWORD *)a1 & 1) == 0 )
      {
        *(_QWORD *)(a1 + 184) = IoGetTopLevelIrp();
        IoSetTopLevelIrp((PIRP)1);
        *(_DWORD *)a1 |= 2u;
      }
      v12 = MiReferenceControlArea(a1, (__int64)v33, &v37);
      v7 = v12;
      if ( v12 >= 0 )
        break;
      if ( v12 == -1073740277 )
      {
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        goto LABEL_41;
      }
      if ( v12 == -1073740682 )
      {
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        goto LABEL_57;
      }
    }
    v13 = v37;
    *(_QWORD *)(a1 + 64) = v37;
    if ( (*(_DWORD *)(v13 + 56) & 2) != 0 )
    {
      v7 = MiCreateNewSection(a1, &Object);
      if ( v7 < 0 )
      {
        if ( Object )
        {
          v13 = *(_QWORD *)Object;
          *(_QWORD *)(a1 + 64) = *(_QWORD *)Object;
        }
        v21 = (_QWORD *)MiZeroSectionObjectPointer(v6, v13, *(_DWORD *)(a1 + 16));
        --v2;
        if ( (_BYTE *)v13 == v33 )
        {
          ObfDereferenceObjectWithTag((PVOID)v6, 0x43536D4Du);
          v24 = _InterlockedExchange64((volatile __int64 *)(v13 + 64), 0LL);
          v6 = v24 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( (v24 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
          {
            v25 = v24 & 0xF;
            if ( v25 )
              _InterlockedAdd64((volatile signed __int64 *)(v6 - 48), -v25);
          }
        }
        else
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition(v13) + 2120)) <= 1 )
            __fastfail(0xEu);
          MiDereferenceControlAreaBySection(v13, 1u);
        }
        MiReleaseControlAreaWaiters(v21, v22, v23);
      }
      else
      {
        v28 = *(_QWORD *)Object;
        *(_QWORD *)(a1 + 64) = *(_QWORD *)Object;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition(v28) + 2120)) <= 1 )
          __fastfail(0xEu);
        v2 -= 2;
      }
LABEL_39:
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      goto LABEL_40;
    }
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v7 = MiShareExistingControlArea(a1);
    if ( v7 >= 0 )
    {
      --v2;
      goto LABEL_41;
    }
    MiDereferenceFailedControlArea(a1);
    goto LABEL_40;
  }
  v14 = *(_DWORD *)(a1 + 16);
  if ( (v14 & 0x1000000) != 0 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
    {
      v7 = -1073741580;
      goto LABEL_41;
    }
    if ( *(_QWORD *)(a1 + 152) )
    {
      v7 = -1073741582;
      goto LABEL_41;
    }
  }
  if ( !*(_QWORD *)(v4 + 40) )
  {
    v7 = -1073741792;
    goto LABEL_41;
  }
  v15 = *(_QWORD *)(a1 + 8);
  if ( v15 && (*(_DWORD *)(v15 + 24) & 0x200) != 0 )
    *(_BYTE *)(a1 + 72) = 0;
  v7 = -1073741823;
  v16 = (__int64 *)(*(_QWORD *)(v4 + 40) + 16LL);
  if ( (v14 & 0x1000000) == 0 )
    v16 = *(__int64 **)(v4 + 40);
  v37 = *v16;
  if ( v37 )
  {
    v7 = MiReferenceExistingControlArea(a1);
    if ( v7 >= 0 )
    {
      v17 = *(_DWORD *)a1 | 4;
      v9 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
      *(_DWORD *)a1 = v17;
      v18 = *(__int64 **)(v4 + 40);
      if ( v9 )
      {
        v19 = *(_QWORD *)(a1 + 152);
        v20 = *v18;
        *(_QWORD *)(a1 + 128) = v19;
        if ( (v17 & 1) != 0 || v19 )
          goto LABEL_31;
      }
      else
      {
        v20 = v18[2];
      }
      *(_QWORD *)(a1 + 128) = _InterlockedCompareExchange64(
                                (volatile signed __int64 *)(*(_QWORD *)v20 + 24LL),
                                -1LL,
                                -1LL);
LABEL_31:
      *(_QWORD *)(a1 + 64) = v20;
      goto LABEL_41;
    }
  }
  ObReferenceObjectExWithTag(v6, 2, 0x43536D4Du);
  v2 += 2;
  if ( v7 != -1073740682 )
    goto LABEL_11;
LABEL_57:
  if ( (*(_DWORD *)a1 & 1) == 0 )
    CcWaitForUninitializeCacheMap(v6);
  if ( (unsigned int)MiForceSectionClosed(*(__int64 **)(v6 + 40), v36, 0) > 1 && (*(_DWORD *)a1 & 0x400000) != 0 )
  {
    ++LODWORD(stru_140E2ED08.CycleTime);
    v7 = -1073740277;
  }
LABEL_41:
  if ( v2 )
LABEL_42:
    ObDereferenceObjectExWithTag(v6, v2, 0x43536D4Du);
  return (unsigned int)v7;
}
