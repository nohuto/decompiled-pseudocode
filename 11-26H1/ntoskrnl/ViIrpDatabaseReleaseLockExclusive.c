/*
 * XREFs of ViIrpDatabaseReleaseLockExclusive @ 0x140647EA4
 * Callers:
 *     ViPendingCompleteAfterWait @ 0x140C301B4 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x140C39C9C (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140C39D70 (VfIrpDatabaseEntryReleaseLock.c)
 *     IovpCompleteRequest2 @ 0x140C4589C (IovpCompleteRequest2.c)
 *     IovFreeIrpPrivate @ 0x140C459C0 (IovFreeIrpPrivate.c)
 *     VfPendingMoreProcessingRequired @ 0x140C45F00 (VfPendingMoreProcessingRequired.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall ViIrpDatabaseReleaseLockExclusive(KIRQL a1)
{
  ExReleaseSpinLockExclusive(&ViIrpDatabaseLock, a1);
}
