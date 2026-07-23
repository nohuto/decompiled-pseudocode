/*
 * XREFs of ExStartStopWorkQueueProvider @ 0x1408458FC
 * Callers:
 *     EtwpWorkQueueProvEnableCallback @ 0x1406C80C0 (EtwpWorkQueueProvEnableCallback.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     KeIsNodeInitialized @ 0x14038402C (KeIsNodeInitialized.c)
 *     ExpEnumerateNextActiveWorkSubQueue @ 0x140384058 (ExpEnumerateNextActiveWorkSubQueue.c)
 *     KeCancelTimer2 @ 0x1403B40F0 (KeCancelTimer2.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     ExpInitializeWorkSubQueueEnumeratorContext @ 0x140488DEC (ExpInitializeWorkSubQueueEnumeratorContext.c)
 *     EtwGetWorkQueueHealthMetricsDataDescriptorCount @ 0x1406C81F0 (EtwGetWorkQueueHealthMetricsDataDescriptorCount.c)
 *     EtwTraceWorkQueueHealthMetricsBucketUpperBounds @ 0x1406C8F08 (EtwTraceWorkQueueHealthMetricsBucketUpperBounds.c)
 *     Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline @ 0x1406D4F5C (Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExStartStopWorkQueueProvider(int a1)
{
  struct _LIST_ENTRY *Pool2; // r14
  struct _LIST_ENTRY *Flink; // rbp
  struct _LIST_ENTRY *Blink; // rdi
  int v5; // r15d
  int WorkQueueHealthMetricsDataDescriptorCount; // r12d
  __int64 v7; // rax
  bool IsNodeInitialized; // al
  __int64 v9; // rdx
  int v10; // edx
  __int64 *v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r10
  int v14; // ecx
  unsigned int i; // r8d
  __int64 v16; // rax
  _OWORD v17[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+50h] [rbp-38h]
  __int64 v19; // [rsp+98h] [rbp+10h] BYREF

  memset(v17, 0, sizeof(v17));
  v19 = 0LL;
  v18 = 0LL;
  if ( !(unsigned int)Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline() )
    return;
  Pool2 = 0LL;
  Flink = 0LL;
  if ( a1 != 1 )
  {
    if ( a1 )
      return;
    KeCancelTimer2((__int64)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[112]);
    ExWaitForRundownProtectionRelease(&ExpWorkQueueHealthMetricsLogRundown);
    Blink = ExSaPageGroupDescriptorArrayLock.MutantListHead.Blink;
    if ( ExSaPageGroupDescriptorArrayLock.MutantListHead.Blink )
    {
      Pool2 = ExSaPageGroupDescriptorArrayLock.MutantListHead.Blink->Blink;
      Flink = ExSaPageGroupDescriptorArrayLock.MutantListHead.Blink[1].Flink;
    }
    ExSaPageGroupDescriptorArrayLock.MutantListHead.Blink = 0LL;
    _InterlockedExchange64((volatile __int64 *)&ExpWorkQueueHealthMetricsLogRundown, 1LL);
    if ( !Blink )
      goto LABEL_18;
    goto LABEL_17;
  }
  Blink = (struct _LIST_ENTRY *)ExAllocatePool2(0x40uLL);
  v5 = 4 * ExpWorkQueueDelayHistogramBucketCount + 16;
  WorkQueueHealthMetricsDataDescriptorCount = EtwGetWorkQueueHealthMetricsDataDescriptorCount();
  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(0x40uLL);
  v7 = ExAllocatePool2(0x40uLL);
  Flink = (struct _LIST_ENTRY *)v7;
  if ( Blink )
  {
    if ( Pool2 && v7 )
    {
      Blink[1].Flink = (struct _LIST_ENTRY *)v7;
      LODWORD(Blink->Flink) = v5;
      HIDWORD(Blink->Flink) = WorkQueueHealthMetricsDataDescriptorCount;
      Blink->Blink = Pool2;
      IsNodeInitialized = KeIsNodeInitialized(0);
      ExpInitializeWorkSubQueueEnumeratorContext((__int64)v17, v9, 1, KeNodeBlock[0] & -(__int64)IsNodeInitialized, 0);
      while ( !(unsigned int)ExpEnumerateNextActiveWorkSubQueue((__int64 *)v17, &v19) )
      {
        v10 = 0;
        v11 = *(__int64 **)(v19 + 744);
        v12 = *v11;
        v13 = v11[1];
        do
        {
          v14 = ExpWorkQueueDelayHistogramBucketCount;
          for ( i = 0; i < ExpWorkQueueDelayHistogramBucketCount; v14 = ExpWorkQueueDelayHistogramBucketCount )
          {
            v16 = i + v14 * v10;
            ++i;
            *(_QWORD *)(v13 + 8LL * (unsigned int)v16) = *(_QWORD *)(v12 + 8 * v16);
          }
          ++v10;
        }
        while ( v10 < 32 );
      }
      ExSaPageGroupDescriptorArrayLock.MutantListHead.Blink = Blink;
      _InterlockedExchange64((volatile __int64 *)&ExpWorkQueueHealthMetricsLogRundown, 0LL);
      EtwTraceWorkQueueHealthMetricsBucketUpperBounds();
      KeSetTimer2(
        (__int64)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[112],
        -10000LL * (unsigned int)ExpWorkQueueHealthMonitorIntervalMs,
        10000LL * (unsigned int)ExpWorkQueueHealthMonitorIntervalMs,
        0LL);
      return;
    }
LABEL_17:
    ExFreePoolWithTag(Blink, 0);
  }
LABEL_18:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( Flink )
    ExFreePoolWithTag(Flink, 0);
}
