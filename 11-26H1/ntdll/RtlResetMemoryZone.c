/*
 * XREFs of RtlResetMemoryZone @ 0x180140500
 * Callers:
 *     RtlResetMemoryBlockLookaside @ 0x1801404A0 (RtlResetMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlResetMemoryZone(__int64 a1, __int64 a2)
{
  __int64 *i; // rdx

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32), a2);
  for ( i = *(__int64 **)(a1 + 48); i != (__int64 *)a1; i = (__int64 *)*i )
    _InterlockedExchange64(i + 2, (__int64)(i + 4));
  _InterlockedExchange64((volatile __int64 *)(a1 + 16), a1 + 56);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  return 0LL;
}
