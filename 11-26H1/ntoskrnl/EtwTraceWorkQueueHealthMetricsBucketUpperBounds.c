/*
 * XREFs of EtwTraceWorkQueueHealthMetricsBucketUpperBounds @ 0x1406C52C8
 * Callers:
 *     ExStartStopWorkQueueProvider @ 0x14083F6BC (ExStartStopWorkQueueProvider.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void EtwTraceWorkQueueHealthMetricsBucketUpperBounds()
{
  struct _LIST_ENTRY *Blink; // rdi
  ULONG UserDataCount; // esi
  __int64 UserData; // rbx
  unsigned int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned int v6; // [rsp+40h] [rbp-18h] BYREF

  Blink = ExSaPageGroupDescriptorArrayLock.SavedApcState.ApcListHead[1].Blink;
  v6 = ExpWorkQueueDelayHistogramBucketCount;
  if ( qword_140F035A0 )
  {
    if ( EtwEventEnabled(qword_140F035A0, &WORK_QUEUE_EVENT_HEALTH_METRICS_BUCKET_UPPER_BOUNDS) )
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
          *(_QWORD *)(UserData + 8 * v5) = (char *)Blink + 8 * v4;
        }
        EtwWriteEx(
          qword_140F035A0,
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
