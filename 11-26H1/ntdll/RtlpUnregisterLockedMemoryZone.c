/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x1800DEF3C
 * Callers:
 *     RtlUnlockMemoryZone @ 0x1800DEEA0 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x180112690 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x1800DF290 (RtlUnlockModuleSection.c)
 */

void RtlpUnregisterLockedMemoryZone()
{
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}
