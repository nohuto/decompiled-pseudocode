/*
 * XREFs of RtlpUnregisterLockedMemoryBlockLookaside @ 0x1800E18F4
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x1800E15A0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180140440 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x1800E19F0 (RtlUnlockModuleSection.c)
 */

struct _TEB *__fastcall RtlpUnregisterLockedMemoryBlockLookaside(__int64 a1, __int64 a2)
{
  __int64 (__fastcall **v3)(); // rbx
  __int64 v4; // rdi

  RtlAcquireSRWLockExclusive(&RtlpMemoryBlockLookasideLock, a2);
  if ( !--RtlpLockedMemoryBlockLookasideCount )
  {
    v3 = RtlpMemoryBlockLookasideCriticalRoutines;
    v4 = 4LL;
    do
    {
      RtlUnlockModuleSection(*v3++);
      --v4;
    }
    while ( v4 );
  }
  return RtlReleaseSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
}
