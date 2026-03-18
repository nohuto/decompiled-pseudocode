/*
 * XREFs of ViIrpDatabaseReleaseLockShared @ 0x140647EC4
 * Callers:
 *     VfIrpDatabaseCheckExFreePool @ 0x140C39BE8 (VfIrpDatabaseCheckExFreePool.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140C45F84 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 */

void __fastcall ViIrpDatabaseReleaseLockShared(KIRQL a1)
{
  ExReleaseSpinLockShared(&ViIrpDatabaseLock, a1);
}
