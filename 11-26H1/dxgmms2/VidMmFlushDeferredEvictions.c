/*
 * XREFs of VidMmFlushDeferredEvictions @ 0x14010065C
 * Callers:
 *     VidMmHandleRecoverablePageInFailure @ 0x14010048C (VidMmHandleRecoverablePageInFailure.c)
 * Callees:
 *     VidMmProcessPendingTerminations @ 0x1400CFDF0 (VidMmProcessPendingTerminations.c)
 *     VidMmFlushEvictQueue @ 0x1400FEA50 (VidMmFlushEvictQueue.c)
 *     ?ProcessReleaseResourceCommands@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400FFB34 (-ProcessReleaseResourceCommands@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     VidMmSelectReadyEvictQueue @ 0x140100334 (VidMmSelectReadyEvictQueue.c)
 *     VidMmProcessFrozenProcesses @ 0x1401020A8 (VidMmProcessFrozenProcesses.c)
 */

char __fastcall VidMmFlushDeferredEvictions(__int64 a1, __int64 a2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v5; // rbx
  char v6; // r14
  char v7; // bp
  __int64 **v8; // rax
  char v9; // di
  bool v11; // [rsp+50h] [rbp+8h] BYREF

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  ++*(_DWORD *)(a1 + 368);
  v11 = 0;
  v5 = PerformanceCounter;
  v6 = VidMmProcessPendingTerminations((KSPIN_LOCK **)a1, 1, &v11);
  KeWaitForSingleObject((PVOID)(*(_QWORD *)a1 + 41328LL), Executive, 0, 0, 0LL);
  VIDMM_GLOBAL::ProcessReleaseResourceCommands(*(struct _KTHREAD ***)a1);
  v7 = 0;
  v8 = VidMmSelectReadyEvictQueue((_QWORD *)a1);
  if ( v8 )
  {
    v7 = 1;
    do
    {
      VidMmFlushEvictQueue((VIDMM_GLOBAL **)a1, (struct VIDMM_PAGING_QUEUE *)v8);
      v8 = VidMmSelectReadyEvictQueue((_QWORD *)a1);
    }
    while ( v8 );
  }
  v9 = v6 | v7 | VidMmProcessFrozenProcesses(a1, a2);
  *(_QWORD *)(a1 + 320) += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v5.QuadPart;
  return v9;
}
