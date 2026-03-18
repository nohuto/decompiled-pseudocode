/*
 * XREFs of PnprUnlockPagesForReplace @ 0x1407B029C
 * Callers:
 *     PnprCompleteWake @ 0x1405DBC4C (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x1407ADDC0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140366CB0 (MmUnlockPagableImageSection.c)
 *     ExNotifyCallback @ 0x14047A7E0 (ExNotifyCallback.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}
