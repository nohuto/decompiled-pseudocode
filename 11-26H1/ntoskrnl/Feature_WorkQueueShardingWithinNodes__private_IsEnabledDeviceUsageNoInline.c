/*
 * XREFs of Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline @ 0x1406D4F5C
 * Callers:
 *     ExpWorkQueueHealthMetricsMonitorCallback @ 0x1406D4D20 (ExpWorkQueueHealthMetricsMonitorCallback.c)
 *     ExStartStopWorkQueueProvider @ 0x1408458FC (ExStartStopWorkQueueProvider.c)
 *     ExpWorkQueueInitializeHealthMetricsMonitor @ 0x1408463A0 (ExpWorkQueueInitializeHealthMetricsMonitor.c)
 *     ExpWorkerInitialization @ 0x140CECB08 (ExpWorkerInitialization.c)
 * Callees:
 *     Feature_WorkQueueShardingWithinNodes__private_IsEnabledFallback @ 0x140535254 (Feature_WorkQueueShardingWithinNodes__private_IsEnabledFallback.c)
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
