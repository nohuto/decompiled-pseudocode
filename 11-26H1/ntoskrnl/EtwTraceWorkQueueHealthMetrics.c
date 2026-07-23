/*
 * XREFs of EtwTraceWorkQueueHealthMetrics @ 0x1406C8DE0
 * Callers:
 *     ExpWorkQueueHealthMetricsMonitorCallback @ 0x1406D4D20 (ExpWorkQueueHealthMetricsMonitorCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall EtwTraceWorkQueueHealthMetrics(ULONGLONG a1, struct _EVENT_DATA_DESCRIPTOR *a2, ULONG a3)
{
  unsigned int v6; // r9d
  unsigned int v7; // r10d
  __int64 v8; // rcx
  __int64 v9; // r8

  if ( stru_140F03830.SchedulerApc.ApcListEntry.Flink
    && EtwEventEnabled((REGHANDLE)stru_140F03830.SchedulerApc.ApcListEntry.Flink, &WORK_QUEUE_EVENT_HEALTH_METRICS) )
  {
    memset_0(a2, 0, 16LL * a3);
    a2->Ptr = a1;
    *(_QWORD *)&a2->Size = 2LL;
    a2[1].Ptr = a1 + 2;
    *(_QWORD *)&a2[1].Size = 1LL;
    a2[2].Ptr = a1 + 3;
    v6 = 0;
    *(_QWORD *)&a2[2].Size = 1LL;
    a2[3].Ptr = a1 + 4;
    v7 = 5;
    *(_QWORD *)&a2[3].Size = 2LL;
    a2[4].Ptr = a1 + 8;
    *(_QWORD *)&a2[4].Size = 4LL;
    a2[5].Ptr = a1 + 12;
    for ( *(_QWORD *)&a2[5].Size = 4LL; v6 < *(_DWORD *)(a1 + 12); *(_QWORD *)&a2[v9].Size = 4LL )
    {
      ++v7;
      v8 = v6 + 4LL;
      v9 = v7;
      ++v6;
      a2[v9].Ptr = a1 + 4 * v8;
    }
    EtwWriteEx(
      (REGHANDLE)stru_140F03830.SchedulerApc.ApcListEntry.Flink,
      &WORK_QUEUE_EVENT_HEALTH_METRICS,
      0LL,
      0,
      0LL,
      0LL,
      a3,
      a2);
  }
}
