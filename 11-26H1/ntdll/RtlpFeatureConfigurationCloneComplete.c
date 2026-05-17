/*
 * XREFs of RtlpFeatureConfigurationCloneComplete @ 0x180148E30
 * Callers:
 *     RtlCloneUserProcess @ 0x18015C640 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C950 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015CB00 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpFeatureConfigurationCloneComplete(int a1)
{
  if ( a1 )
  {
    *(_QWORD *)&xmmword_1801CCC48 = xmmword_1801CCC48 & 1;
    qword_1801CCD40 = 1LL;
    RtlpFcProcessManager[0] = 1LL;
    if ( (qword_1801CCD30 & 3) == 1 )
      qword_1801CCD30 = 1LL;
  }
  RtlReleaseSRWLockExclusive(&qword_1801CCD40);
  RtlReleaseSRWLockExclusive(RtlpFcProcessManager);
  return RtlRunOnceComplete(&qword_1801CCD30, 4u, 0LL);
}
