/*
 * XREFs of ?VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z @ 0x1400990DC
 * Callers:
 *     VidMmSuspendDevice @ 0x14009A77C (VidMmSuspendDevice.c)
 *     ?Execute@VIDMM_TASK_PENALTY_BOX@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z @ 0x1400B84D0 (-Execute@VIDMM_TASK_PENALTY_BOX@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z.c)
 *     QueryPendingTerminations @ 0x1400B8E64 (QueryPendingTerminations.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400E2070 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1400E6BC0 (-VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QU.c)
 *     ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400E95E8 (-TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLA.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400E9BD0 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     VidMmTransitionToState @ 0x1401154D8 (VidMmTransitionToState.c)
 * Callees:
 *     ?VidMmEnqueueTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@@Z @ 0x140099190 (-VidMmEnqueueTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@@Z.c)
 */

char __fastcall VidMmNotifyTaskWork(
        struct VIDMM_WORKER_THREAD2 *a1,
        struct VIDMM_SCHCLASS *a2,
        struct VIDMM_TASK *a3,
        unsigned int a4)
{
  char *v7; // rbx

  if ( a4 + _InterlockedExchangeAdd((volatile signed __int32 *)a3 + 18, a4) != a4 )
    return 0;
  v7 = (char *)a1 + 5344;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  *((_QWORD *)v7 + 1) = KeGetCurrentThread();
  VidMmEnqueueTask(a1, a2, a3);
  *((_QWORD *)v7 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
  return 1;
}
