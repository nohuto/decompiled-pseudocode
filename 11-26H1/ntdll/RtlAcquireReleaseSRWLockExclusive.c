/*
 * XREFs of RtlAcquireReleaseSRWLockExclusive @ 0x18008E480
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x18008E320 (RtlpHpHeapExtendContext.c)
 *     RtlRcuSynchronize @ 0x180149A40 (RtlRcuSynchronize.c)
 *     RtlCloneUserProcess @ 0x18015C640 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C950 (RtlCompleteProcessCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall RtlAcquireReleaseSRWLockExclusive(volatile signed __int64 *a1, __int64 a2)
{
  struct _TEB *result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v4, 0);
  result = (struct _TEB *)*a1;
  if ( (*a1 & 1) != 0 )
  {
    RtlAcquireSRWLockExclusive(a1, a2);
    return RtlReleaseSRWLockExclusive(a1);
  }
  return result;
}
