/*
 * XREFs of ?reset@?$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U?$default_delete@VMonitorDescriptorState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorDescriptorState@DxgMonitor@@@Z @ 0x140063FB0
 * Callers:
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14018D950 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?CopyInstance@MonitorDescriptorState@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U?$default_delete@VMonitorDescriptorState@DxgMonitor@@@wistd@@@wistd@@AEBVIMonitorComponentParent@2@AEBVIMonitorRegistry@2@@Z @ 0x140279AF4 (-CopyInstance@MonitorDescriptorState@DxgMonitor@@QEBA-AV-$unique_ptr@VMonitorDescriptorState@Dxg.c)
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1403E0438 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ??1DXGMONITOR@@UEAA@XZ @ 0x1404238D0 (--1DXGMONITOR@@UEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1MonitorDescriptorState@DxgMonitor@@QEAA@XZ @ 0x14041BAD8 (--1MonitorDescriptorState@DxgMonitor@@QEAA@XZ.c)
 */

void __fastcall wistd::unique_ptr<DxgMonitor::MonitorDescriptorState,wistd::default_delete<DxgMonitor::MonitorDescriptorState>>::reset(
        struct _ERESOURCE **a1,
        struct _ERESOURCE *a2)
{
  struct _ERESOURCE *v2; // rbx

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    DxgMonitor::MonitorDescriptorState::~MonitorDescriptorState(v2);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
  }
}
