/*
 * XREFs of ViIrpDatabaseReleaseLockExclusive @ 0x140609750
 * Callers:
 *     ViPendingCompleteAfterWait @ 0x140B81D48 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x140B93F30 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140B94004 (VfIrpDatabaseEntryReleaseLock.c)
 *     IovpCompleteRequest2 @ 0x140B96E04 (IovpCompleteRequest2.c)
 *     IovFreeIrpPrivate @ 0x140B96F50 (IovFreeIrpPrivate.c)
 *     VfPendingMoreProcessingRequired @ 0x140B97020 (VfPendingMoreProcessingRequired.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall ViIrpDatabaseReleaseLockExclusive(KIRQL a1)
{
  ExReleaseSpinLockExclusive(&ViIrpDatabaseLock, a1);
}
