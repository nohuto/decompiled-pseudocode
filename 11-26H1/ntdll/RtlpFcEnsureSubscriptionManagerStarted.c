/*
 * XREFs of RtlpFcEnsureSubscriptionManagerStarted @ 0x18008EECC
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x18008EE30 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     RtlpFtInitialize @ 0x18011D618 (RtlpFtInitialize.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18005A390 (RtlRunOnceBeginInitialize.c)
 *     RtlpFcStartSubscriptionManager @ 0x18008F00C (RtlpFcStartSubscriptionManager.c)
 *     RtlRunOnceComplete @ 0x18008F440 (RtlRunOnceComplete.c)
 */

__int64 RtlpFcEnsureSubscriptionManagerStarted()
{
  NTSTATUS started; // ebx

  started = RtlRunOnceBeginInitialize(&stru_1801CBD70, 0, 0LL);
  if ( started )
  {
    started = RtlpFcStartSubscriptionManager();
    RtlRunOnceComplete(&stru_1801CBD70, (started >> 31) & 4, 0LL);
  }
  return (unsigned int)started;
}
