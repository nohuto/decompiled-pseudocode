/*
 * XREFs of LdrForkMrdata @ 0x180137E8C
 * Callers:
 *     RtlCloneUserProcess @ 0x18015C500 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C810 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015C9C0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     <none>
 */

void __fastcall LdrForkMrdata(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      LdrpMrdataLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  else
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  }
}
