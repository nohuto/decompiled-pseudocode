/*
 * XREFs of RtlDestroyMemoryZone @ 0x180112BE0
 * Callers:
 *     RtlCreateMemoryBlockLookaside @ 0x180075B80 (RtlCreateMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180140440 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x1800E169C (RtlpUnregisterLockedMemoryZone.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlDestroyMemoryZone(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v8; // [rsp+38h] [rbp+10h] BYREF

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32), a2);
  if ( *(_DWORD *)(a1 + 40) )
    RtlpUnregisterLockedMemoryZone(v4, v3);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  v5 = *(_QWORD **)(a1 + 48);
  while ( v5 )
  {
    v8 = v5;
    v7 = v5[1];
    v5 = (_QWORD *)*v5;
    ZwFreeVirtualMemory(-1LL, &v8, &v7, 0x8000LL);
  }
  return 0LL;
}
