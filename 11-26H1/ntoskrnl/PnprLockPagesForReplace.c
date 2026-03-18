/*
 * XREFs of PnprLockPagesForReplace @ 0x1407AF998
 * Callers:
 *     PnprQuiesce @ 0x1405DBDC8 (PnprQuiesce.c)
 *     PnpReplacePartitionUnit @ 0x1407ADDC0 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140BF2BF0 (PnprQuiesceWorker.c)
 * Callees:
 *     ExNotifyCallback @ 0x14047A7E0 (ExNotifyCallback.c)
 *     MmLockPagableSectionByHandle @ 0x140A9C420 (MmLockPagableSectionByHandle.c)
 */

void PnprLockPagesForReplace()
{
  MmLockPagableSectionByHandle(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}
