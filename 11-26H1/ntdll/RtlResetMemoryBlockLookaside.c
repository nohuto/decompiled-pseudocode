/*
 * XREFs of RtlResetMemoryBlockLookaside @ 0x1801404A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlInitializeSListHead @ 0x180075D90 (RtlInitializeSListHead.c)
 *     RtlResetMemoryZone @ 0x180140500 (RtlResetMemoryZone.c)
 */

__int64 __fastcall RtlResetMemoryBlockLookaside(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  unsigned int v4; // ebx

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1, a2);
  for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
    RtlInitializeSListHead((PSLIST_HEADER)(a1 + 32LL * i + 48));
  v4 = RtlResetMemoryZone(*(_QWORD *)(a1 + 16));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v4;
}
