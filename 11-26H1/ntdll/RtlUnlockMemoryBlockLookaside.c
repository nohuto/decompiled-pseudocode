/*
 * XREFs of RtlUnlockMemoryBlockLookaside @ 0x1800E15A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlUnlockMemoryZone @ 0x1800E1600 (RtlUnlockMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x1800E18F4 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 */

__int64 __fastcall RtlUnlockMemoryBlockLookaside(__int64 a1, __int64 a2)
{
  int v3; // ecx
  unsigned int v4; // edi
  int v5; // ecx

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1, a2);
  v3 = *(_DWORD *)(a1 + 44);
  v4 = 0;
  if ( v3 )
  {
    v5 = v3 - 1;
    *(_DWORD *)(a1 + 44) = v5;
    if ( !v5 )
    {
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 16));
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 8));
      RtlpUnregisterLockedMemoryBlockLookaside();
    }
  }
  else
  {
    v4 = -1073741823;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v4;
}
