/*
 * XREFs of ExStartStopWorkQueueProvider @ 0x14083F6BC
 * Callers:
 *     EtwpWorkQueueProvEnableCallback @ 0x1406C4480 (EtwpWorkQueueProvEnableCallback.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     KeIsNodeInitialized @ 0x14038227C (KeIsNodeInitialized.c)
 *     ExpEnumerateNextActiveWorkSubQueue @ 0x1403822A8 (ExpEnumerateNextActiveWorkSubQueue.c)
 *     KeCancelTimer2 @ 0x1403AA4E0 (KeCancelTimer2.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     ExpInitializeWorkSubQueueEnumeratorContext @ 0x14048F3A4 (ExpInitializeWorkSubQueueEnumeratorContext.c)
 *     EtwGetWorkQueueHealthMetricsDataDescriptorCount @ 0x1406C45B0 (EtwGetWorkQueueHealthMetricsDataDescriptorCount.c)
 *     EtwTraceWorkQueueHealthMetricsBucketUpperBounds @ 0x1406C52C8 (EtwTraceWorkQueueHealthMetricsBucketUpperBounds.c)
 *     Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline @ 0x1406D0F2C (Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExStartStopWorkQueueProvider(int a1)
{
  void *v2; // r14
  void *v3; // rbp
  _QWORD *Pool2; // rdi
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
  v2 = 0LL;
  v3 = 0LL;
  if ( a1 != 1 )
  {
    if ( a1 )
      return;
    KeCancelTimer2((__int64)&ExSaPageGroupDescriptorArrayLock.WaitBlock[3].Thread);
    ExWaitForRundownProtectionRelease(&ExpWorkQueueHealthMetricsLogRundown);
    Pool2 = *(_QWORD **)&ExSaPageGroupDescriptorArrayLock.SavedApcStateFill[40];
    if ( *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.SavedApcStateFill[40] )
    {
      v2 = *(void **)(*(_QWORD *)&ExSaPageGroupDescriptorArrayLock.SavedApcStateFill[40] + 8LL);
      v3 = *(void **)(*(_QWORD *)&ExSaPageGroupDescriptorArrayLock.SavedApcStateFill[40] + 16LL);
    }
    *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.SavedApcStateFill[40] = 0LL;
    _InterlockedExchange64((volatile __int64 *)&ExpWorkQueueHealthMetricsLogRundown, 1LL);
    if ( !Pool2 )
      goto LABEL_18;
    goto LABEL_17;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  v5 = 4 * ExpWorkQueueDelayHistogramBucketCount + 16;
  WorkQueueHealthMetricsDataDescriptorCount = EtwGetWorkQueueHealthMetricsDataDescriptorCount();
  v2 = (void *)ExAllocatePool2(0x40uLL);
  v7 = ExAllocatePool2(0x40uLL);
  v3 = (void *)v7;
  if ( Pool2 )
  {
    if ( v2 && v7 )
    {
      Pool2[2] = v7;
      *(_DWORD *)Pool2 = v5;
      *((_DWORD *)Pool2 + 1) = WorkQueueHealthMetricsDataDescriptorCount;
      Pool2[1] = v2;
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
      *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.SavedApcStateFill[40] = Pool2;
      _InterlockedExchange64((volatile __int64 *)&ExpWorkQueueHealthMetricsLogRundown, 0LL);
      EtwTraceWorkQueueHealthMetricsBucketUpperBounds();
      KeSetTimer2(
        (__int64)&ExSaPageGroupDescriptorArrayLock.WaitBlock[3].Thread,
        -10000LL * (unsigned int)ExpWorkQueueHealthMonitorIntervalMs,
        10000LL * (unsigned int)ExpWorkQueueHealthMonitorIntervalMs,
        0LL);
      return;
    }
LABEL_17:
    ExFreePoolWithTag(Pool2, 0);
  }
LABEL_18:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
