/*
 * XREFs of ??1MonitorEventDeferral@@UEAA@XZ @ 0x14041BAA8
 * Callers:
 *     ??_GMonitorEventDeferral@@UEAAPEAXI@Z @ 0x1400987C0 (--_GMonitorEventDeferral@@UEAAPEAXI@Z.c)
 *     ?MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z @ 0x140194F34 (-MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z.c)
 *     ?MonitorDisableMonitorVirtualModeSupport@@YAJPEAXIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026E3C8 (-MonitorDisableMonitorVirtualModeSupport@@YAJPEAXIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?MonitorSetUsageClass@@YAJPEAXIW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140270178 (-MonitorSetUsageClass@@YAJPEAXIW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140270300 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x140274780 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DFFAC (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E0E00 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_.c)
 * Callees:
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E1E48 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

void __fastcall MonitorEventDeferral::~MonitorEventDeferral(MonitorEventDeferral *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &MonitorEventDeferral::`vftable';
  if ( !v1 )
  {
    if ( *((_DWORD *)this + 28) )
      MonitorEventDeferral::FlushEventsWithContext(this, 0LL);
  }
}
