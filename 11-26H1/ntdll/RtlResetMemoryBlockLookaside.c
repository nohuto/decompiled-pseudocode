/*
 * XREFs of RtlResetMemoryBlockLookaside @ 0x1801403A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlInitializeSListHead @ 0x180096990 (RtlInitializeSListHead.c)
 *     RtlResetMemoryZone @ 0x180140400 (RtlResetMemoryZone.c)
 */

NTSTATUS __cdecl RtlResetMemoryBlockLookaside(PVOID MemoryBlockLookaside)
{
  unsigned int i; // ebx
  NTSTATUS v3; // ebx

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  for ( i = 0; i < *((_DWORD *)MemoryBlockLookaside + 10); ++i )
    RtlInitializeSListHead((PSLIST_HEADER)MemoryBlockLookaside + 2 * i + 3);
  v3 = RtlResetMemoryZone(*((PVOID *)MemoryBlockLookaside + 2));
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  return v3;
}
