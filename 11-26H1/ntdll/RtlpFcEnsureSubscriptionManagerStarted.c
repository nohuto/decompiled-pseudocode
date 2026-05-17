/*
 * XREFs of RtlpFcEnsureSubscriptionManagerStarted @ 0x18006EA7C
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x18006E9E0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     RtlpFtInitialize @ 0x18011D868 (RtlpFtInitialize.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18000EC60 (RtlRunOnceBeginInitialize.c)
 *     RtlpFcStartSubscriptionManager @ 0x18006EBBC (RtlpFcStartSubscriptionManager.c)
 *     RtlRunOnceComplete @ 0x18006EFF0 (RtlRunOnceComplete.c)
 */

__int64 RtlpFcEnsureSubscriptionManagerStarted()
{
  int started; // ebx

  started = RtlRunOnceBeginInitialize(&qword_1801CCD30, 0, 0LL);
  if ( started )
  {
    started = RtlpFcStartSubscriptionManager();
    RtlRunOnceComplete(&qword_1801CCD30, (started >> 31) & 4, 0LL);
  }
  return (unsigned int)started;
}
