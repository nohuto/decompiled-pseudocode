/*
 * XREFs of ExpWorkQueueInitializeHealthMetricsMonitor @ 0x140840160
 * Callers:
 *     ExpWorkerInitialization @ 0x140CE6768 (ExpWorkerInitialization.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x140456ED0 (KeInitializeTimer2.c)
 *     Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline @ 0x1406D0F2C (Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 ExpWorkQueueInitializeHealthMetricsMonitor()
{
  struct _LIST_ENTRY *Pool2; // r10
  unsigned int v2; // ecx
  __int64 v3; // r11
  __int64 v4; // r8
  unsigned int v5; // edx
  unsigned int v6; // ebx
  unsigned int v7; // r9d
  __int64 v8; // rax

  if ( (unsigned int)Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline() )
  {
    KeInitializeTimer2(
      (__int64)&ExSaPageGroupDescriptorArrayLock.WaitBlock[3].Thread,
      (__int64)ExpWorkQueueHealthMetricsMonitorCallback,
      0LL,
      8LL);
    Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
      return 3221225626LL;
    v2 = ExpWorkQueueDelayHistogramSegmentSize;
    v3 = 0LL;
    v4 = (unsigned int)ExpWorkQueueDelayHistogramBaseResolutionMs;
    v5 = 0;
    v6 = (ExpWorkQueueDelayHistogramSegmentSize + ExpWorkQueueDelayHistogramBucketCount - 1)
       / (unsigned int)ExpWorkQueueDelayHistogramSegmentSize;
    if ( v6 )
    {
      do
      {
        v7 = 0;
        if ( v2 )
        {
          do
          {
            v8 = v7 + v2 * v5;
            if ( (unsigned int)v8 >= ExpWorkQueueDelayHistogramBucketCount )
              break;
            *((_QWORD *)&Pool2->Flink + v8) = v3 + v4 * ++v7;
            v2 = ExpWorkQueueDelayHistogramSegmentSize;
          }
          while ( v7 < ExpWorkQueueDelayHistogramSegmentSize );
        }
        ++v5;
        v3 += v4 * v2;
        v4 *= (unsigned int)ExpWorkQueueDelayHistogramSegmentMultiplier;
      }
      while ( v5 < v6 );
    }
    ExSaPageGroupDescriptorArrayLock.SavedApcState.ApcListHead[1].Blink = Pool2;
  }
  return 0LL;
}
