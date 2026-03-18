/*
 * XREFs of ViDeadlockDetectionTryConvertSharedToExclusive @ 0x140607FC8
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x140608018 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140608178 (ViDeadlockRemoveMemoryRangeThreads.c)
 * Callees:
 *     ExTryConvertSharedSpinLockExclusive @ 0x1402FCD10 (ExTryConvertSharedSpinLockExclusive.c)
 */

LOGICAL ViDeadlockDetectionTryConvertSharedToExclusive()
{
  LOGICAL result; // eax

  result = ExTryConvertSharedSpinLockExclusive(&ViDeadlockDatabaseLock);
  if ( result )
    ViDeadlockDatabaseOwner = (__int64)KeGetCurrentThread();
  return result;
}
