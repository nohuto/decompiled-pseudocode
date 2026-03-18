/*
 * XREFs of Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline @ 0x140086EE4
 * Callers:
 *     ??0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x140005A40 (--0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     DxgkPowerOnOffMonitor @ 0x14024A2EC (DxgkPowerOnOffMonitor.c)
 *     ?MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026E6F0 (-MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ @ 0x140274F2C (-_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ.c)
 *     ?_HandlePowerOn@USB4_POWERON_WORK_QUEUE@@CAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x140278E10 (-_HandlePowerOn@USB4_POWERON_WORK_QUEUE@@CAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     Feature_Usb4PerAdapterPowerQueue__private_IsEnabledFallback @ 0x140086F20 (Feature_Usb4PerAdapterPowerQueue__private_IsEnabledFallback.c)
 */

__int64 Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Usb4PerAdapterPowerQueue__private_featureState & 0x10) != 0 )
    return Feature_Usb4PerAdapterPowerQueue__private_featureState & 1;
  else
    return Feature_Usb4PerAdapterPowerQueue__private_IsEnabledFallback(
             (unsigned int)Feature_Usb4PerAdapterPowerQueue__private_featureState,
             3LL);
}
