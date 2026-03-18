/*
 * XREFs of Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline @ 0x1406D0F2C
 * Callers:
 *     ExpWorkQueueHealthMetricsMonitorCallback @ 0x1406D0CF0 (ExpWorkQueueHealthMetricsMonitorCallback.c)
 *     ExStartStopWorkQueueProvider @ 0x14083F6BC (ExStartStopWorkQueueProvider.c)
 *     ExpWorkQueueInitializeHealthMetricsMonitor @ 0x140840160 (ExpWorkQueueInitializeHealthMetricsMonitor.c)
 *     ExpWorkerInitialization @ 0x140CE6768 (ExpWorkerInitialization.c)
 * Callees:
 *     Feature_WorkQueueShardingWithinNodes__private_IsEnabledFallback @ 0x140532DB4 (Feature_WorkQueueShardingWithinNodes__private_IsEnabledFallback.c)
 */

__int64 Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_WorkQueueShardingWithinNodes__private_featureState & 0x10) != 0 )
    return Feature_WorkQueueShardingWithinNodes__private_featureState & 1;
  else
    return Feature_WorkQueueShardingWithinNodes__private_IsEnabledFallback(
             (unsigned int)Feature_WorkQueueShardingWithinNodes__private_featureState,
             3u);
}
