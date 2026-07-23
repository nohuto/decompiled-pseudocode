/*
 * XREFs of EtwTraceWorkQueueHealthMetricsBucketUpperBounds @ 0x1406C8F08
 * Callers:
 *     ExStartStopWorkQueueProvider @ 0x1408458FC (ExStartStopWorkQueueProvider.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void EtwTraceWorkQueueHealthMetricsBucketUpperBounds()
{
  char *Object; // rdi
  ULONG UserDataCount; // esi
  __int64 UserData; // rbx
  unsigned int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned int v6; // [rsp+40h] [rbp-18h] BYREF

  Object = (char *)ExSaPageGroupDescriptorArrayLock.WaitBlock[1].Object;
  v6 = ExpWorkQueueDelayHistogramBucketCount;
  if ( stru_140F03830.SchedulerApc.ApcListEntry.Flink )
  {
    if ( EtwEventEnabled(
           (REGHANDLE)stru_140F03830.SchedulerApc.ApcListEntry.Flink,
           &WORK_QUEUE_EVENT_HEALTH_METRICS_BUCKET_UPPER_BOUNDS) )
    {
      UserDataCount = v6 + 1;
      UserData = ExAllocatePool2(0x40uLL);
      if ( UserData )
      {
        *(_QWORD *)(UserData + 8) = 4LL;
        v3 = 0;
        for ( *(_QWORD *)UserData = &v6; v3 < v6; *(_QWORD *)(UserData + 8 * v5 + 8) = 8LL )
        {
          v4 = v3++;
          v5 = 2LL * v3;
          *(_QWORD *)(UserData + 8 * v5) = &Object[8 * v4];
        }
        EtwWriteEx(
          (REGHANDLE)stru_140F03830.SchedulerApc.ApcListEntry.Flink,
          &WORK_QUEUE_EVENT_HEALTH_METRICS_BUCKET_UPPER_BOUNDS,
          0LL,
          0,
          0LL,
          0LL,
          UserDataCount,
          (PEVENT_DATA_DESCRIPTOR)UserData);
        ExFreePoolWithTag((PVOID)UserData, 0);
      }
    }
  }
}
