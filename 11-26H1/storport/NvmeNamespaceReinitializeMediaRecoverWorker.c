/*
 * XREFs of NvmeNamespaceReinitializeMediaRecoverWorker @ 0x14010CBE0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceAcquireRemoveLock @ 0x140041680 (NvmeNamespaceAcquireRemoveLock.c)
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1400C59A4 (BuildGetLogPageCommand.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     NvmeNamespaceCleanupSanitizeContext @ 0x140102008 (NvmeNamespaceCleanupSanitizeContext.c)
 *     NvmeControllerReuseExtendedCommand @ 0x14011FE74 (NvmeControllerReuseExtendedCommand.c)
 */

void __fastcall NvmeNamespaceReinitializeMediaRecoverWorker(PVOID IoObject, __int64 Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rdi
  int v5; // ebp
  __int64 v6; // r8
  __int64 v7; // r8
  int DmaBuffer; // eax
  unsigned int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int128 v18; // [rsp+A0h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(Context + 616);
  v5 = 1;
  v18 = 0LL;
  NvmeControllerReuseExtendedCommand(*(_QWORD *)(Context + 16), v3);
  if ( (int)NvmeNamespaceAcquireRemoveLock(Context, *(_QWORD *)(Context + 624)) >= 0 )
  {
    DmaBuffer = NvmeAllocateDmaBuffer(*(_QWORD *)(Context + 16), 0x200u, v6, (void **)&v18, (_QWORD *)&v18 + 1, 0);
    v10 = *(_QWORD *)v3;
    if ( DmaBuffer >= 0 )
    {
      LOBYTE(v9) = -127;
      *(_DWORD *)(*(_QWORD *)v3 + 4256LL) = *(_DWORD *)(v10 + 4256) | 1;
      *(_DWORD *)(*(_QWORD *)v3 + 4256LL) |= 2u;
      *(_WORD *)(*(_QWORD *)v3 + 4252LL) = 0;
      *(_QWORD *)(*(_QWORD *)v3 + 4192LL) = NvmeNamespaceSanitizeRecoverCompletionRoutine;
      *(_QWORD *)(*(_QWORD *)v3 + 4216LL) = Context;
      *(_OWORD *)(*(_QWORD *)v3 + 4160LL) = v18;
      *(_QWORD *)(*(_QWORD *)v3 + 4200LL) = v3;
      *(_QWORD *)(*(_QWORD *)v3 + 4240LL) = v3;
      v11 = *(_QWORD *)v3;
      *(_WORD *)(v3 + 52) = *(_WORD *)(Context + 640);
      BuildGetLogPageCommand(
        *(_QWORD *)(Context + 16),
        v11 + 4096,
        v9,
        0x200u,
        *((__int64 *)&v18 + 1),
        -1,
        0LL,
        0,
        v11,
        *(_QWORD *)(v3 + 8));
      v12 = NvmeControllerProcessCommandSync(*(PVOID *)(Context + 16), v3);
      v13 = *(_QWORD *)v3;
      if ( v12 >= 0 )
      {
        v14 = *(_QWORD *)(v13 + 4160);
        if ( (*(_BYTE *)(v14 + 2) & 7) == 3 )
        {
          NvmeControllerReuseExtendedCommand(*(_QWORD *)(Context + 16), v3);
          v15 = *(_DWORD *)(v14 + 4);
          if ( (v15 & 8) == 0 )
            v5 = v15 & 7;
          *(_DWORD *)(*(_QWORD *)v3 + 4256LL) |= 1u;
          *(_DWORD *)(*(_QWORD *)v3 + 4256LL) &= ~2u;
          *(_WORD *)(*(_QWORD *)v3 + 4252LL) = 0;
          *(_QWORD *)(*(_QWORD *)v3 + 4192LL) = NvmeNamespaceSanitizeRecoverCompletionRoutine;
          v16 = *(_QWORD *)v3;
          v17 = *(_DWORD *)(*(_QWORD *)v3 + 4136LL) & 0xFFFFFFF8;
          *(_BYTE *)(v16 + 4096) = -124;
          *(_DWORD *)(v16 + 4140) = 0;
          *(_DWORD *)(v16 + 4136) = ((v5 | v17) & 0xFFFFFFF7 ^ (8 * ((v15 & 8) != 0))) & 0xFFFFFC0F;
          if ( (int)NvmeControllerProcessCommandSync(*(PVOID *)(Context + 16), v3) < 0 )
            StorEtwNvmeControllerEvent(
              *(_QWORD *)(Context + 16),
              1,
              2LL,
              (__int64)L"Sanitize Recover Command Failed",
              L"NVMeStatus",
              *(_WORD *)(*(_QWORD *)v3 + 4260LL),
              (void *)&word_140152E7C,
              0,
              (void *)&word_140152E7C,
              0,
              (void *)&word_140152E7C,
              0,
              (void *)&word_140152E7C,
              0,
              (void *)&word_140152E7C,
              0,
              (void *)&word_140152E7C,
              0,
              (void *)&word_140152E7C,
              0);
        }
        else
        {
          StorEtwNvmeControllerEvent(
            *(_QWORD *)(Context + 16),
            1,
            2LL,
            (__int64)L"Last sanitize command completed successfully. Bail out.",
            L"NVMeStatus",
            *(_WORD *)(v13 + 4260),
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0);
        }
      }
      else
      {
        StorEtwNvmeControllerEvent(
          *(_QWORD *)(Context + 16),
          1,
          2LL,
          (__int64)L"Get Sanitize Log Page Failed",
          L"NVMeStatus",
          *(_WORD *)(v13 + 4260),
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0,
          (void *)&word_140152E7C,
          0);
      }
    }
    else
    {
      StorEtwNvmeControllerEvent(
        *(_QWORD *)(Context + 16),
        1,
        2LL,
        (__int64)L"Failed to Allocate DMA buffer for sanitize recover.",
        L"NVMeStatus",
        *(_WORD *)(v10 + 4260),
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 120));
  }
  else
  {
    StorEtwNvmeControllerEvent(
      *(_QWORD *)(Context + 16),
      1,
      2LL,
      (__int64)L"Failed to acquire remove lock for sanitize recover.",
      L"NVMeStatus",
      *(_WORD *)(*(_QWORD *)v3 + 4260LL),
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
  }
  if ( (_QWORD)v18 )
    NvmeFreeDmaBuffer(*(_QWORD *)(Context + 16), 0x200u, v7, v18, *((__int64 *)&v18 + 1));
  NvmeNamespaceCleanupSanitizeContext(Context);
}
