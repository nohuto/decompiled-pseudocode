/*
 * XREFs of ViIrpDatabaseReleaseLockShared @ 0x140609770
 * Callers:
 *     VfIrpDatabaseCheckExFreePool @ 0x140B93E84 (VfIrpDatabaseCheckExFreePool.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140B970A4 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 */

void __fastcall ViIrpDatabaseReleaseLockShared(KIRQL a1)
{
  ExReleaseSpinLockShared(&ViIrpDatabaseLock, a1);
}
