/*
 * XREFs of RtlReleasePath @ 0x1800E03A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 */

struct _TEB *__fastcall RtlReleasePath(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  struct _TEB *result; // rax

  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock, a2);
  --*(_QWORD *)(a1 - 48);
  v3 = a1 - 128;
  if ( *(_QWORD *)(a1 - 48) )
    v3 = 0LL;
  result = RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v3 )
    return (struct _TEB *)RtlFreeHeap_0();
  return result;
}
