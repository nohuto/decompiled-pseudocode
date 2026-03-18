/*
 * XREFs of ?reset@?$unique_ptr@VMonitorGammaState@DxgMonitor@@U?$default_delete@VMonitorGammaState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorGammaState@DxgMonitor@@@Z @ 0x14006CB14
 * Callers:
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1403E0438 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ??1DXGMONITOR@@UEAA@XZ @ 0x1404238D0 (--1DXGMONITOR@@UEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1MonitorGammaState@DxgMonitor@@QEAA@XZ @ 0x14027AA1C (--1MonitorGammaState@DxgMonitor@@QEAA@XZ.c)
 */

void __fastcall wistd::unique_ptr<DxgMonitor::MonitorGammaState,wistd::default_delete<DxgMonitor::MonitorGammaState>>::reset(
        DxgMonitor::MonitorGammaState **a1,
        DxgMonitor::MonitorGammaState *a2)
{
  DxgMonitor::MonitorGammaState *v2; // rbx

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    DxgMonitor::MonitorGammaState::~MonitorGammaState(v2);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
  }
}
