/*
 * XREFs of RtlDeleteBarrier @ 0x180141810
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

struct _TEB *__fastcall RtlDeleteBarrier(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  struct _TEB *result; // rax

  v2 = (a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v2 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v2 + 8), a2);
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v2 + 8));
  }
  return result;
}
