/*
 * XREFs of ExpWorkQueueHealthMetricsMonitorCallback @ 0x1406D4D20
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeIsNodeInitialized @ 0x14038402C (KeIsNodeInitialized.c)
 *     ExpEnumerateNextActiveWorkSubQueue @ 0x140384058 (ExpEnumerateNextActiveWorkSubQueue.c)
 *     EtwTraceWorkQueueHealthMetrics @ 0x1406C8DE0 (EtwTraceWorkQueueHealthMetrics.c)
 *     Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline @ 0x1406D4F5C (Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void ExpWorkQueueHealthMetricsMonitorCallback()
{
  size_t Flink; // rbx
  ULONG Flink_high; // r15d
  struct _LIST_ENTRY *Blink; // rdi
  struct _EVENT_DATA_DESCRIPTOR *v3; // r12
  bool IsNodeInitialized; // al
  __int64 v5; // rdx
  size_t v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // r9
  int i; // ecx
  __int64 v14; // rax
  __int64 v15; // rdx
  int active; // eax
  __int64 v17[6]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+50h] BYREF
  size_t v19; // [rsp+A8h] [rbp+58h]

  v18 = 0LL;
  if ( (unsigned int)Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline()
    && ExAcquireRundownProtection_0(&ExpWorkQueueHealthMetricsLogRundown) )
  {
    if ( ExSaPageGroupDescriptorArrayLock.MutantListHead.Blink )
    {
      Flink = (unsigned int)ExSaPageGroupDescriptorArrayLock.MutantListHead.Blink->Flink;
      Flink_high = HIDWORD(ExSaPageGroupDescriptorArrayLock.MutantListHead.Blink->Flink);
      Blink = ExSaPageGroupDescriptorArrayLock.MutantListHead.Blink->Blink;
      v3 = (struct _EVENT_DATA_DESCRIPTOR *)ExSaPageGroupDescriptorArrayLock.MutantListHead.Blink[1].Flink;
      IsNodeInitialized = KeIsNodeInitialized(0);
      v17[0] = v5;
      v17[1] = 1LL;
      v17[4] = 0LL;
      v17[2] = KeNodeBlock[0] & -(__int64)IsNodeInitialized;
      v17[3] = 0LL;
      if ( !(unsigned int)ExpEnumerateNextActiveWorkSubQueue(v17, &v18) )
      {
        v6 = (unsigned int)Flink;
        v19 = Flink;
        do
        {
          v7 = v18;
          v8 = 0LL;
          v9 = *(__int64 **)(v18 + 744);
          v10 = *v9;
          v11 = v9[1];
          do
          {
            memset_0(Blink, 0, v6);
            v12 = 0LL;
            BYTE3(Blink->Flink) = *(_BYTE *)(v7 + 724);
            BYTE2(Blink->Flink) = v8;
            LOWORD(Blink->Flink) = **(_WORD **)(v7 + 696);
            WORD2(Blink->Flink) = *(_WORD *)(v7 + 728);
            LODWORD(Blink->Blink) = *(_QWORD *)(*(_QWORD *)(v7 + 744) + 8 * v8 + 16);
            HIDWORD(Blink->Blink) = ExpWorkQueueDelayHistogramBucketCount;
            for ( i = ExpWorkQueueDelayHistogramBucketCount;
                  (unsigned int)v12 < ExpWorkQueueDelayHistogramBucketCount;
                  i = ExpWorkQueueDelayHistogramBucketCount )
            {
              v14 = (unsigned int)(v12 + i * v8);
              v15 = *(_QWORD *)(v10 + 8 * v14);
              *((_DWORD *)&Blink[1].Flink + v12) = v15 - *(_DWORD *)(v11 + 8 * v14);
              v12 = (unsigned int)(v12 + 1);
              *(_QWORD *)(v11 + 8 * v14) = v15;
            }
            EtwTraceWorkQueueHealthMetrics((ULONGLONG)Blink, v3, Flink_high);
            v6 = v19;
            v8 = (unsigned int)(v8 + 1);
          }
          while ( (int)v8 < 32 );
          active = ExpEnumerateNextActiveWorkSubQueue(v17, &v18);
          v6 = v19;
        }
        while ( !active );
      }
    }
    ExReleaseRundownProtection_0(&ExpWorkQueueHealthMetricsLogRundown);
  }
}
