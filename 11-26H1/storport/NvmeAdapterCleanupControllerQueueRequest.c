/*
 * XREFs of NvmeAdapterCleanupControllerQueueRequest @ 0x1400E4FA8
 * Callers:
 *     NvmeAdapterCompleteControllerQueueRequest @ 0x1400E51B0 (NvmeAdapterCompleteControllerQueueRequest.c)
 *     NvmeAdapterProcessControllerQueueRequestAsync @ 0x1400EC344 (NvmeAdapterProcessControllerQueueRequestAsync.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400EC530 (NvmeAdapterProcessControllerQueueRequestSync.c)
 * Callees:
 *     NvmeAdapterDetachXrbFromSrb @ 0x1400E78A0 (NvmeAdapterDetachXrbFromSrb.c)
 *     NvmeAdapterReleaseControllerQueueSlot @ 0x1400ECFA4 (NvmeAdapterReleaseControllerQueueSlot.c)
 */

void __fastcall NvmeAdapterCleanupControllerQueueRequest(__int64 a1, __int64 a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 104), &LockHandle);
  NvmeAdapterReleaseControllerQueueSlot(a1, *(unsigned __int16 *)(a2 + 780));
  NvmeAdapterDetachXrbFromSrb(a2);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
