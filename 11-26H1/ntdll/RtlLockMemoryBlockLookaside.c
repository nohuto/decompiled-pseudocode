/*
 * XREFs of RtlLockMemoryBlockLookaside @ 0x1800E16E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlUnlockMemoryZone @ 0x1800E1600 (RtlUnlockMemoryZone.c)
 *     RtlLockMemoryZone @ 0x1800E1760 (RtlLockMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x1800E1950 (RtlpRegisterLockedMemoryBlockLookaside.c)
 */

__int64 __fastcall RtlLockMemoryBlockLookaside(__int64 a1, __int64 a2)
{
  int locked; // edi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v7; // rcx

  locked = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1, a2);
  if ( *(_DWORD *)(a1 + 44) )
    goto LABEL_5;
  locked = RtlLockMemoryZone(*(_QWORD *)(a1 + 8));
  if ( locked >= 0 )
  {
    locked = RtlLockMemoryZone(*(_QWORD *)(a1 + 16));
    if ( locked < 0 )
    {
      v7 = *(_QWORD *)(a1 + 8);
    }
    else
    {
      locked = RtlpRegisterLockedMemoryBlockLookaside();
      if ( locked >= 0 )
      {
LABEL_5:
        ++*(_DWORD *)(a1 + 44);
        goto LABEL_6;
      }
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 8), v5);
      v7 = *(_QWORD *)(a1 + 16);
    }
    RtlUnlockMemoryZone(v7, v4);
  }
LABEL_6:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return (unsigned int)locked;
}
