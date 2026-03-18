/*
 * XREFs of KiScheduleBugcheckRecoveryWorkItem @ 0x1405FA630
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void KiScheduleBugcheckRecoveryWorkItem()
{
  LOWORD(KsepShimDbLock.AffinityVersion) = 1;
  HIDWORD(KsepShimDbLock.AffinityVersion) = 0;
  *(_QWORD *)&KsepShimDbLock.AffinityPrimaryGroup = &KsepShimDbLock.Affinity;
  KsepShimDbLock.Affinity = (_KAFFINITY_EX *)&KsepShimDbLock.Affinity;
  KsepShimDbLock.SavedApcState.ApcListHead[1].Blink = 0LL;
  KsepShimDbLock.SavedApcState.ApcListHead[0].Flink = 0LL;
  BYTE2(KsepShimDbLock.AffinityVersion) = 6;
  KsepShimDbLock.SavedApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)KiDeferredBugcheckRecoveryWorker;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&KsepShimDbLock.600, RealTimeWorkQueue);
}
