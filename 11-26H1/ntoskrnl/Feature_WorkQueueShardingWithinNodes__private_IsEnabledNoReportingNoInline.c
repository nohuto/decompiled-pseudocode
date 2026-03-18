/*
 * XREFs of Feature_WorkQueueShardingWithinNodes__private_IsEnabledNoReportingNoInline @ 0x140382244
 * Callers:
 *     ExpQueueWorkItem @ 0x140381D74 (ExpQueueWorkItem.c)
 *     ExTryQueueWorkItem @ 0x140382070 (ExTryQueueWorkItem.c)
 *     ExpWorkQueueHealthMetricsEnabled @ 0x14051FCC8 (ExpWorkQueueHealthMetricsEnabled.c)
 * Callees:
 *     Feature_WorkQueueShardingWithinNodes__private_IsEnabledFallback @ 0x140532DB4 (Feature_WorkQueueShardingWithinNodes__private_IsEnabledFallback.c)
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
