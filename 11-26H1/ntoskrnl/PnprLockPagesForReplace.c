/*
 * XREFs of PnprLockPagesForReplace @ 0x1407B29F8
 * Callers:
 *     PnprQuiesce @ 0x1405DE678 (PnprQuiesce.c)
 *     PnpReplacePartitionUnit @ 0x1407B0E20 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140BF8BF0 (PnprQuiesceWorker.c)
 * Callees:
 *     ExNotifyCallback @ 0x140474150 (ExNotifyCallback.c)
 *     MmLockPagableSectionByHandle @ 0x140A9F220 (MmLockPagableSectionByHandle.c)
 */

void PnprLockPagesForReplace()
{
  MmLockPagableSectionByHandle(ExPageLockHandle);
  ExNotifyCallback(ExpSysDbgLock.Header.WaitListHead.Flink, (PVOID)3, 0LL);
}
