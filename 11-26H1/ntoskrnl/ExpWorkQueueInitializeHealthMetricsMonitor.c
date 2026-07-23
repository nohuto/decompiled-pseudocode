/*
 * XREFs of ExpWorkQueueInitializeHealthMetricsMonitor @ 0x1408463A0
 * Callers:
 *     ExpWorkerInitialization @ 0x140CECB08 (ExpWorkerInitialization.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x14044E740 (KeInitializeTimer2.c)
 *     Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline @ 0x1406D4F5C (Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 ExpWorkQueueInitializeHealthMetricsMonitor()
{
  _QWORD *Pool2; // r10
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
      (__int64)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[112],
      (__int64)ExpWorkQueueHealthMetricsMonitorCallback,
      0LL,
      8LL);
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
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
            Pool2[v8] = v3 + v4 * ++v7;
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
    ExSaPageGroupDescriptorArrayLock.WaitBlock[1].Object = Pool2;
  }
  return 0LL;
}
