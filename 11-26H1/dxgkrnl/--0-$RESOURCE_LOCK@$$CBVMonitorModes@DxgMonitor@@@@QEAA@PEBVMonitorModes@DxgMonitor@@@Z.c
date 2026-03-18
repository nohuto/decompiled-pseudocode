/*
 * XREFs of ??0?$RESOURCE_LOCK@$$CBVMonitorModes@DxgMonitor@@@@QEAA@PEBVMonitorModes@DxgMonitor@@@Z @ 0x14006D108
 * Callers:
 *     ?GetFrequencyRangeSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ @ 0x14027B64C (-GetFrequencyRangeSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ.c)
 * Callees:
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140035838 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 */

struct _ERESOURCE **__fastcall RESOURCE_LOCK<DxgMonitor::MonitorModes const>::RESOURCE_LOCK<DxgMonitor::MonitorModes const>(
        struct _ERESOURCE **a1,
        struct _ERESOURCE *a2)
{
  *a1 = a2;
  if ( a2 )
    MonitorResourceLock::AcquireShared(a2);
  return a1;
}
