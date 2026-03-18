/*
 * XREFs of ?reset@?$unique_ptr@VMonitorPnpState@DxgMonitor@@U?$default_delete@VMonitorPnpState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorPnpState@DxgMonitor@@@Z @ 0x14006CAB4
 * Callers:
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1403E0438 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ??1DXGMONITOR@@UEAA@XZ @ 0x1404238D0 (--1DXGMONITOR@@UEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1MonitorPnpState@DxgMonitor@@QEAA@XZ @ 0x1402799D0 (--1MonitorPnpState@DxgMonitor@@QEAA@XZ.c)
 */

void __fastcall wistd::unique_ptr<DxgMonitor::MonitorPnpState,wistd::default_delete<DxgMonitor::MonitorPnpState>>::reset(
        DxgMonitor::MonitorPnpState **a1,
        DxgMonitor::MonitorPnpState *a2)
{
  DxgMonitor::MonitorPnpState *v2; // rbx

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    DxgMonitor::MonitorPnpState::~MonitorPnpState(v2);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
  }
}
