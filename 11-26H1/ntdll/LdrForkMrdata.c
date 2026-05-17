/*
 * XREFs of LdrForkMrdata @ 0x18013811C
 * Callers:
 *     RtlCloneUserProcess @ 0x18015C640 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C950 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015CB00 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall LdrForkMrdata(int a1, __int64 a2)
{
  if ( !a1 )
    return (struct _TEB *)RtlAcquireSRWLockExclusive(&LdrpMrdataLock, a2);
  if ( a1 == 1 )
    LdrpMrdataLock = 1LL;
  return RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
