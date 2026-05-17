/*
 * XREFs of RtlpRegisterLockedMemoryZone @ 0x1800E1880
 * Callers:
 *     RtlLockMemoryZone @ 0x1800E1760 (RtlLockMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlLockModuleSection @ 0x1800E1AA0 (RtlLockModuleSection.c)
 */

__int64 __fastcall RtlpRegisterLockedMemoryZone(__int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // eax
  __int64 i; // rbx

  v2 = 0;
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock, a2);
  v3 = RtlpLockedMemoryZoneCount;
  if ( !RtlpLockedMemoryZoneCount )
  {
    for ( i = 0LL; !(_DWORD)i; i = 1LL )
    {
      v2 = RtlLockModuleSection(*(&RtlpMemoryZoneCriticalRoutines + i));
      if ( v2 < 0 )
        goto LABEL_3;
    }
    v3 = RtlpLockedMemoryZoneCount;
  }
  RtlpLockedMemoryZoneCount = v3 + 1;
LABEL_3:
  RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
  return (unsigned int)v2;
}
