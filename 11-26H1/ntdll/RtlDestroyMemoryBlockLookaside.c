/*
 * XREFs of RtlDestroyMemoryBlockLookaside @ 0x180140340
 * Callers:
 *     RtlpInitializeStackTraceLog @ 0x1801220E0 (RtlpInitializeStackTraceLog.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x1800DF194 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlDestroyMemoryZone @ 0x180112690 (RtlDestroyMemoryZone.c)
 */

NTSTATUS __cdecl RtlDestroyMemoryBlockLookaside(PVOID MemoryBlockLookaside)
{
  void *v1; // rdi
  void *v3; // rsi
  int v4; // ebx
  NTSTATUS result; // eax

  v1 = (void *)*((_QWORD *)MemoryBlockLookaside + 2);
  v3 = (void *)*((_QWORD *)MemoryBlockLookaside + 1);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  if ( *((_DWORD *)MemoryBlockLookaside + 11) )
    RtlpUnregisterLockedMemoryBlockLookaside();
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  v4 = RtlDestroyMemoryZone(v1);
  result = RtlDestroyMemoryZone(v3);
  if ( v4 < 0 )
    return v4;
  return result;
}
