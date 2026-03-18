/*
 * XREFs of EtwGetWorkQueueHealthMetricsDataDescriptorCount @ 0x1406C45B0
 * Callers:
 *     ExStartStopWorkQueueProvider @ 0x14083F6BC (ExStartStopWorkQueueProvider.c)
 * Callees:
 *     <none>
 */

__int64 EtwGetWorkQueueHealthMetricsDataDescriptorCount()
{
  return (unsigned int)(ExpWorkQueueDelayHistogramBucketCount + 6);
}
