/*
 * XREFs of RtlUnlockMemoryZone @ 0x1800E1600
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x1800E15A0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlLockMemoryBlockLookaside @ 0x1800E16E0 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x1800E169C (RtlpUnregisterLockedMemoryZone.c)
 *     ZwUnlockVirtualMemory @ 0x180162B10 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlUnlockMemoryZone(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rsi
  unsigned int v4; // ebx
  int v5; // eax
  int v7; // eax
  _QWORD *i; // rdi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = (volatile signed __int64 *)(a1 + 32);
  v4 = 0;
  v10 = 0LL;
  v9 = 0LL;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32), a2);
  v5 = *(_DWORD *)(a1 + 40);
  if ( v5 )
  {
    v7 = v5 - 1;
    *(_DWORD *)(a1 + 40) = v7;
    if ( !v7 )
    {
      for ( i = *(_QWORD **)(a1 + 48); i; i = (_QWORD *)*i )
      {
        v10 = i;
        v9 = i[1];
        ZwUnlockVirtualMemory(-1LL, &v10, &v9, 1LL);
      }
      RtlpUnregisterLockedMemoryZone();
    }
  }
  else
  {
    v4 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(v2);
  return v4;
}
