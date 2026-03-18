/*
 * XREFs of ?VidMmResumePagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x140101BB4
 * Callers:
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x140101B04 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 * Callees:
 *     EnqueuePagingQueueTask @ 0x1400A94DC (EnqueuePagingQueueTask.c)
 *     ?VidMmSetPagingQueueStatus@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@W4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x140101C80 (-VidMmSetPagingQueueStatus@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@W4VIDMM_PAGING_Q.c)
 */

void __fastcall VidMmResumePagingQueue(struct VIDMM_WORKER_THREAD *a1, struct VIDMM_PAGING_QUEUE **a2)
{
  char *v3; // rsi

  v3 = (char *)a1 + 184;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  if ( *((_DWORD *)a2 + 26) )
  {
    if ( a2[4] == (struct VIDMM_PAGING_QUEUE *)(a2 + 4) )
    {
      VidMmSetPagingQueueStatus(a1, a2, 0LL);
    }
    else
    {
      VidMmSetPagingQueueStatus(a1, a2, 1LL);
      if ( (*(_BYTE *)(*(_QWORD *)a1 + 41065LL) & 0x10) != 0 )
        EnqueuePagingQueueTask(a1, (__int64)a2);
    }
  }
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
