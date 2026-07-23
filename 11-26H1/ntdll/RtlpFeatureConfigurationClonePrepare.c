/*
 * XREFs of RtlpFeatureConfigurationClonePrepare @ 0x180148D4C
 * Callers:
 *     RtlCloneUserProcess @ 0x18015C500 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015C9C0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlRunOnceBeginInitialize @ 0x18005A390 (RtlRunOnceBeginInitialize.c)
 */

void RtlpFeatureConfigurationClonePrepare()
{
  RtlRunOnceBeginInitialize(&stru_1801CBD70, 0, 0LL);
  RtlAcquireSRWLockExclusive(&RtlpFcProcessManager);
  RtlAcquireSRWLockExclusive(&stru_1801CBD80);
}
