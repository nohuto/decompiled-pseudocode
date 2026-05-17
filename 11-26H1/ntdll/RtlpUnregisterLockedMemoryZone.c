/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x1800E169C
 * Callers:
 *     RtlUnlockMemoryZone @ 0x1800E1600 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x180112BE0 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x1800E19F0 (RtlUnlockModuleSection.c)
 */

struct _TEB *__fastcall RtlpUnregisterLockedMemoryZone(__int64 a1, __int64 a2)
{
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock, a2);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  return RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}
