/*
 * XREFs of RtlDestroyMemoryBlockLookaside @ 0x180140440
 * Callers:
 *     RtlpInitializeStackTraceLog @ 0x180122340 (RtlpInitializeStackTraceLog.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x1800E18F4 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlDestroyMemoryZone @ 0x180112BE0 (RtlDestroyMemoryZone.c)
 */

__int64 __fastcall RtlDestroyMemoryBlockLookaside(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1, a2);
  if ( *(_DWORD *)(a1 + 44) )
    RtlpUnregisterLockedMemoryBlockLookaside(v6, v5);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  v8 = RtlDestroyMemoryZone(v2, v7);
  result = RtlDestroyMemoryZone(v4, v9);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return result;
}
