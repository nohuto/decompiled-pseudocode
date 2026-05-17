/*
 * XREFs of RtlpRegisterLockedMemoryBlockLookaside @ 0x1800E1950
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x1800E16E0 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x1800E19F0 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x1800E1AA0 (RtlLockModuleSection.c)
 */

__int64 __fastcall RtlpRegisterLockedMemoryBlockLookaside(__int64 a1, __int64 a2)
{
  int v2; // esi
  int v3; // eax
  __int64 i; // rbx
  __int64 (__fastcall **v6)(); // rdi

  v2 = 0;
  RtlAcquireSRWLockExclusive(&RtlpMemoryBlockLookasideLock, a2);
  v3 = RtlpLockedMemoryBlockLookasideCount;
  if ( RtlpLockedMemoryBlockLookasideCount )
  {
LABEL_2:
    RtlpLockedMemoryBlockLookasideCount = v3 + 1;
  }
  else
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 4 )
      {
        v3 = RtlpLockedMemoryBlockLookasideCount;
        goto LABEL_2;
      }
      v6 = &RtlpMemoryBlockLookasideCriticalRoutines[i];
      v2 = RtlLockModuleSection(*v6);
      if ( v2 < 0 )
        break;
    }
    for ( ; (_DWORD)i; LODWORD(i) = i - 1 )
      RtlUnlockModuleSection(*--v6);
  }
  RtlReleaseSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
  return (unsigned int)v2;
}
