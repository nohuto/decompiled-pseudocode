/*
 * XREFs of KiScheduleBugcheckRecoveryWorkItem @ 0x1405FD050
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void KiScheduleBugcheckRecoveryWorkItem()
{
  LOWORD(KsepShimDbLock.UserAffinity) = 1;
  HIDWORD(KsepShimDbLock.UserAffinity) = 0;
  KsepShimDbLock.AffinityVersion = (unsigned __int64)&KsepShimDbLock.UserAffinityPrimaryGroup;
  *(_QWORD *)&KsepShimDbLock.UserAffinityPrimaryGroup = &KsepShimDbLock.UserAffinityPrimaryGroup;
  KsepShimDbLock.SavedApcState.ApcListHead[0].Blink = 0LL;
  *(_QWORD *)&KsepShimDbLock.AffinityPrimaryGroup = 0LL;
  BYTE2(KsepShimDbLock.UserAffinity) = 6;
  KsepShimDbLock.SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)KiDeferredBugcheckRecoveryWorker;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&KsepShimDbLock.AffinityPrimaryGroup, RealTimeWorkQueue);
}
