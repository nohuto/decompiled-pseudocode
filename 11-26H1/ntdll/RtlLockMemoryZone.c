/*
 * XREFs of RtlLockMemoryZone @ 0x1800E1760
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x1800E16E0 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpRegisterLockedMemoryZone @ 0x1800E1880 (RtlpRegisterLockedMemoryZone.c)
 *     NtLockVirtualMemory @ 0x180161210 (NtLockVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x180162B10 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlLockMemoryZone(__int64 a1, __int64 a2)
{
  int locked; // r14d
  _DWORD *v4; // rcx
  _QWORD *i; // rdi
  _QWORD *j; // rsi
  _QWORD *k; // rdi
  __int64 v9; // [rsp+50h] [rbp+30h] BYREF
  _QWORD *v10; // [rsp+58h] [rbp+38h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  locked = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32), a2);
  v4 = (_DWORD *)(a1 + 40);
  if ( *(_DWORD *)(a1 + 40) )
  {
LABEL_6:
    *v4 = *(_DWORD *)(a1 + 40) + 1;
  }
  else
  {
    for ( i = *(_QWORD **)(a1 + 48); i; i = (_QWORD *)*i )
    {
      v10 = i;
      v9 = i[1];
      locked = NtLockVirtualMemory(-1LL, &v10, &v9, 1LL);
      if ( locked < 0 )
      {
        for ( j = *(_QWORD **)(a1 + 48); j != i; j = (_QWORD *)*j )
        {
          v10 = j;
          v9 = j[1];
          ZwUnlockVirtualMemory(-1LL, &v10, &v9, 1LL);
        }
        goto LABEL_7;
      }
    }
    locked = RtlpRegisterLockedMemoryZone(v4);
    if ( locked >= 0 )
    {
      v4 = (_DWORD *)(a1 + 40);
      goto LABEL_6;
    }
    for ( k = *(_QWORD **)(a1 + 48); k; k = (_QWORD *)*k )
    {
      v10 = k;
      v9 = k[1];
      ZwUnlockVirtualMemory(-1LL, &v10, &v9, 1LL);
    }
  }
LABEL_7:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  return (unsigned int)locked;
}
