/*
 * XREFs of Feature_WorkQueueShardingWithinNodes__private_IsEnabledNoReportingNoInline @ 0x140383FF4
 * Callers:
 *     ExpQueueWorkItem @ 0x140383B24 (ExpQueueWorkItem.c)
 *     ExTryQueueWorkItem @ 0x140383E20 (ExTryQueueWorkItem.c)
 *     ExpWorkQueueHealthMetricsEnabled @ 0x14052236C (ExpWorkQueueHealthMetricsEnabled.c)
 * Callees:
 *     Feature_WorkQueueShardingWithinNodes__private_IsEnabledFallback @ 0x140535254 (Feature_WorkQueueShardingWithinNodes__private_IsEnabledFallback.c)
 */

__int64 Feature_WorkQueueShardingWithinNodes__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_WorkQueueShardingWithinNodes__private_featureState & 2) != 0 )
    return Feature_WorkQueueShardingWithinNodes__private_featureState & 1;
  else
    return Feature_WorkQueueShardingWithinNodes__private_IsEnabledFallback(
             (unsigned int)Feature_WorkQueueShardingWithinNodes__private_featureState,
             0LL);
}
