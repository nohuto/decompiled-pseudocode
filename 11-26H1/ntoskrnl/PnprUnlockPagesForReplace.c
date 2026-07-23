/*
 * XREFs of PnprUnlockPagesForReplace @ 0x1407B32FC
 * Callers:
 *     PnprCompleteWake @ 0x1405DE4FC (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x1407B0E20 (PnpReplacePartitionUnit.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140368A50 (MmUnlockPagableImageSection.c)
 *     ExNotifyCallback @ 0x140474150 (ExNotifyCallback.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExpSysDbgLock.Header.WaitListHead.Flink, (PVOID)3, (PVOID)1);
}
