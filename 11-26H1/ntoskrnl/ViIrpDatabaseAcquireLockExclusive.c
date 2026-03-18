/*
 * XREFs of ViIrpDatabaseAcquireLockExclusive @ 0x140647E5C
 * Callers:
 *     ViPendingCompleteAfterWait @ 0x140C301B4 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x140C39C9C (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140C39D70 (VfIrpDatabaseEntryReleaseLock.c)
 *     IovpCompleteRequest2 @ 0x140C4589C (IovpCompleteRequest2.c)
 *     IovFreeIrpPrivate @ 0x140C459C0 (IovFreeIrpPrivate.c)
 *     VfPendingMoreProcessingRequired @ 0x140C45F00 (VfPendingMoreProcessingRequired.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall ViIrpDatabaseAcquireLockExclusive(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockExclusive(&ViIrpDatabaseLock);
  *a1 = result;
  return result;
}
