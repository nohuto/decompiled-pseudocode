/*
 * XREFs of RtlpFeatureConfigurationCloneComplete @ 0x180148CE0
 * Callers:
 *     RtlCloneUserProcess @ 0x18015C500 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C810 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015C9C0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 */

NTSTATUS __fastcall RtlpFeatureConfigurationCloneComplete(int a1)
{
  if ( a1 )
  {
    *(_QWORD *)&xmmword_1801CBC88 = xmmword_1801CBC88 & 1;
    stru_1801CBD80.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
    RtlpFcProcessManager.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
    if ( ((__int64)stru_1801CBD70.Ptr & 3) == 1 )
      stru_1801CBD70.Value = 1LL;
  }
  RtlReleaseSRWLockExclusive(&stru_1801CBD80);
  RtlReleaseSRWLockExclusive(&RtlpFcProcessManager);
  return RtlRunOnceComplete(&stru_1801CBD70, 4u, 0LL);
}
