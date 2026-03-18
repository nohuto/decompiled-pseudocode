/*
 * XREFs of ExpWorkQueueHealthMetricsMonitorCallback @ 0x1406D0CF0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     KeIsNodeInitialized @ 0x14038227C (KeIsNodeInitialized.c)
 *     ExpEnumerateNextActiveWorkSubQueue @ 0x1403822A8 (ExpEnumerateNextActiveWorkSubQueue.c)
 *     EtwTraceWorkQueueHealthMetrics @ 0x1406C51A0 (EtwTraceWorkQueueHealthMetrics.c)
 *     Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline @ 0x1406D0F2C (Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void ExpWorkQueueHealthMetricsMonitorCallback()
{
  size_t v0; // rbx
  ULONG v1; // r15d
  _WORD *v2; // rdi
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
    if ( *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.SavedApcStateFill[40] )
    {
      v0 = (unsigned int)**(_DWORD **)&ExSaPageGroupDescriptorArrayLock.SavedApcStateFill[40];
      v1 = *(_DWORD *)(*(_QWORD *)&ExSaPageGroupDescriptorArrayLock.SavedApcStateFill[40] + 4LL);
      v2 = *(_WORD **)(*(_QWORD *)&ExSaPageGroupDescriptorArrayLock.SavedApcStateFill[40] + 8LL);
      v3 = *(struct _EVENT_DATA_DESCRIPTOR **)(*(_QWORD *)&ExSaPageGroupDescriptorArrayLock.SavedApcStateFill[40] + 16LL);
      IsNodeInitialized = KeIsNodeInitialized(0);
      v17[0] = v5;
      v17[1] = 1LL;
      v17[4] = 0LL;
      v17[2] = KeNodeBlock[0] & -(__int64)IsNodeInitialized;
      v17[3] = 0LL;
      if ( !(unsigned int)ExpEnumerateNextActiveWorkSubQueue(v17, &v18) )
      {
        v6 = (unsigned int)v0;
        v19 = v0;
        do
        {
          v7 = v18;
          v8 = 0LL;
          v9 = *(__int64 **)(v18 + 744);
          v10 = *v9;
          v11 = v9[1];
          do
          {
            memset_0(v2, 0, v6);
            v12 = 0LL;
            *((_BYTE *)v2 + 3) = *(_BYTE *)(v7 + 724);
            *((_BYTE *)v2 + 2) = v8;
            *v2 = **(_WORD **)(v7 + 696);
            v2[2] = *(_WORD *)(v7 + 728);
            *((_DWORD *)v2 + 2) = *(_QWORD *)(*(_QWORD *)(v7 + 744) + 8 * v8 + 16);
            *((_DWORD *)v2 + 3) = ExpWorkQueueDelayHistogramBucketCount;
            for ( i = ExpWorkQueueDelayHistogramBucketCount;
                  (unsigned int)v12 < ExpWorkQueueDelayHistogramBucketCount;
                  i = ExpWorkQueueDelayHistogramBucketCount )
            {
              v14 = (unsigned int)(v12 + i * v8);
              v15 = *(_QWORD *)(v10 + 8 * v14);
              *(_DWORD *)&v2[2 * v12 + 8] = v15 - *(_DWORD *)(v11 + 8 * v14);
              v12 = (unsigned int)(v12 + 1);
              *(_QWORD *)(v11 + 8 * v14) = v15;
            }
            EtwTraceWorkQueueHealthMetrics((ULONGLONG)v2, v3, v1);
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
