/*
 * XREFs of StorpLogPerUnitStatistics @ 0x140046F34
 * Callers:
 *     StorpLogStatistics @ 0x140038EB8 (StorpLogStatistics.c)
 *     RaUnitSurpriseRemovalIrp @ 0x14018EB54 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004AB0 (RaUnitAcquireRemoveLock.c)
 *     StorpTelemetrySendUnitPerfData @ 0x14004FD38 (StorpTelemetrySendUnitPerfData.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x14005A0C8 (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     RaidUnitDeviceHealthTelemetrySupported @ 0x1400B6F1C (RaidUnitDeviceHealthTelemetrySupported.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1400C17D8 (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1400C2424 (StorpTelemetrySendUnitErrorDataSummary.c)
 *     StorpTelemetrySendUnitQos @ 0x1400C308C (StorpTelemetrySendUnitQos.c)
 */

void __fastcall StorpLogPerUnitStatistics(__int64 a1, __int16 a2)
{
  __int16 v4; // bp
  __int16 v5; // r14
  PIO_WORKITEM WorkItem; // rax
  struct _IO_WORKITEM *v7; // rsi
  PIO_WORKITEM v8; // rax
  struct _IO_WORKITEM *v9; // rdi

  if ( (a2 & 4) != 0 )
    StorpTelemetrySendUnitPerfData();
  v4 = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
    StorpTelemetrySendUnitErrorDataSummary(a1);
  v5 = a2 & 0x20;
  if ( (a2 & 0x20) != 0 && *(_BYTE *)(a1 + 3368) == 1 )
    StorpTelemetrySendUnitQos(a1);
  if ( (a2 & 8) != 0 )
    StorpTelemetrySendAdaptiveIdleCounters(a1);
  if ( (a2 & 0x80u) != 0 )
  {
    if ( (unsigned __int8)RaidUnitDeviceHealthTelemetrySupported(a1) )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
      v7 = WorkItem;
      if ( WorkItem )
      {
        if ( (int)RaUnitAcquireRemoveLock(a1, (__int64)WorkItem, 0) < 0 )
          IoFreeWorkItem(v7);
        else
          IoQueueWorkItem(v7, (PIO_WORKITEM_ROUTINE)StorpDeviceHealthWorkItemRoutine, NormalWorkQueue, v7);
      }
    }
  }
  if ( (a2 & 0x40) != 0 )
    StorpTelemetrySendUnitPauseRequestCounters(a1);
  if ( (a2 & 0x100) != 0 )
  {
    if ( *(_QWORD *)(a1 + 112) )
    {
      if ( *(_DWORD *)(a1 + 56) == 1 && *(_DWORD *)(a1 + 3432) == 17 )
      {
        v8 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
        v9 = v8;
        if ( v8 )
        {
          if ( (int)RaUnitAcquireRemoveLock(a1, (__int64)v8, 0) < 0 )
            IoFreeWorkItem(v9);
          else
            IoQueueWorkItem(v9, StorpDeviceLogPagesWorkItemRoutine, NormalWorkQueue, v9);
        }
      }
    }
  }
  if ( v4 || v5 )
  {
    *(_DWORD *)(a1 + 2264) = 0;
    *(_DWORD *)(a1 + 1400) = 0;
  }
}
