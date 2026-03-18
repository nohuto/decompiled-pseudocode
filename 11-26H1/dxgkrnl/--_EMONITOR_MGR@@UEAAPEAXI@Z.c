/*
 * XREFs of ??_EMONITOR_MGR@@UEAAPEAXI@Z @ 0x140098620
 * Callers:
 *     ?MonitorCreateMonitorManager@@YAJPEAVADAPTER_DISPLAY@@PEAX@Z @ 0x140191D64 (-MonitorCreateMonitorManager@@YAJPEAVADAPTER_DISPLAY@@PEAX@Z.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1401A2A70 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1MONITOR_MGR@@UEAA@XZ @ 0x1402737EC (--1MONITOR_MGR@@UEAA@XZ.c)
 */

MONITOR_MGR *__fastcall MONITOR_MGR::`vector deleting destructor'(MONITOR_MGR *this, char a2)
{
  MONITOR_MGR::~MONITOR_MGR(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
