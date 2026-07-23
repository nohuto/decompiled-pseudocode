/*
 * XREFs of ViIrpDatabaseReleaseLockExclusive @ 0x14064BA84
 * Callers:
 *     ViPendingCompleteAfterWait @ 0x140C361C4 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x140C3FCAC (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140C3FD80 (VfIrpDatabaseEntryReleaseLock.c)
 *     IovpCompleteRequest2 @ 0x140C4B8AC (IovpCompleteRequest2.c)
 *     IovFreeIrpPrivate @ 0x140C4B9D0 (IovFreeIrpPrivate.c)
 *     VfPendingMoreProcessingRequired @ 0x140C4BF10 (VfPendingMoreProcessingRequired.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall ViIrpDatabaseReleaseLockExclusive(KIRQL a1)
{
  ExReleaseSpinLockExclusive(&ViIrpDatabaseLock, a1);
}
