/*
 * XREFs of RtlpFeatureConfigurationClonePrepare @ 0x180148E9C
 * Callers:
 *     RtlCloneUserProcess @ 0x18015C640 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015CB00 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18000EC60 (RtlRunOnceBeginInitialize.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 RtlpFeatureConfigurationClonePrepare()
{
  __int64 v0; // rdx
  __int64 v1; // rdx

  RtlRunOnceBeginInitialize(&qword_1801CCD30, 0, 0LL);
  RtlAcquireSRWLockExclusive(RtlpFcProcessManager, v0);
  return RtlAcquireSRWLockExclusive(&qword_1801CCD40, v1);
}
