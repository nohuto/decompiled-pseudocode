/*
 * XREFs of EtwGetWorkQueueHealthMetricsDataDescriptorCount @ 0x1406C81F0
 * Callers:
 *     ExStartStopWorkQueueProvider @ 0x1408458FC (ExStartStopWorkQueueProvider.c)
 * Callees:
 *     <none>
 */

__int64 EtwGetWorkQueueHealthMetricsDataDescriptorCount()
{
  return (unsigned int)(ExpWorkQueueDelayHistogramBucketCount + 6);
}
