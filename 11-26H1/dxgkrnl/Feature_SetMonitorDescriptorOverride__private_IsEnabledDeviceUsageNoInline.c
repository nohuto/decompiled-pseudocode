/*
 * XREFs of Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x140067340
 * Callers:
 *     ?HasOverrides@MultiMonitorDescriptor@DxgMonitor@@UEBA_NXZ @ 0x140099550 (-HasOverrides@MultiMonitorDescriptor@DxgMonitor@@UEBA_NXZ.c)
 *     ?LoadDescriptorOverridesFromRegistry@MultiMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x1400995E0 (-LoadDescriptorOverridesFromRegistry@MultiMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistr.c)
 *     ?UnloadDescriptorOverrides@MultiMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x140099670 (-UnloadDescriptorOverrides@MultiMonitorDescriptor@DxgMonitor@@UEAAXXZ.c)
 *     ?OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z @ 0x14018CBB4 (-OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z.c)
 *     DpiFdoInitializeFdo @ 0x140243960 (DpiFdoInitializeFdo.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x140245390 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiQueryDisplayIDDescriptor @ 0x140256F14 (DpiQueryDisplayIDDescriptor.c)
 *     ?DxgMiniportQueryMonitorInterfaceCB@@YAJQEAXW4_DXGK_MONITOR_INTERFACE_VERSION@@PEAPEBU_DXGK_MONITOR_INTERFACE@@@Z @ 0x140271EA0 (-DxgMiniportQueryMonitorInterfaceCB@@YAJQEAXW4_DXGK_MONITOR_INTERFACE_VERSION@@PEAPEBU_DXGK_MONI.c)
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x140279F70 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 *     ?CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1402815D0 (-CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@Dxg.c)
 *     ?CopyWithoutOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140281710 (-CopyWithoutOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescri.c)
 *     ?HasOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA_NXZ @ 0x140281DA0 (-HasOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA_NXZ.c)
 *     ?LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x140281E20 (-LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorReg.c)
 *     ?UnloadDescriptorOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x140282120 (-UnloadDescriptorOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAXXZ.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x14040E670 (DpiDxgkDdiQueryDeviceDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x140429A24 (DpiPdoGetDeviceDescriptor.c)
 * Callees:
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledFallback @ 0x14006791C (Feature_SetMonitorDescriptorOverride__private_IsEnabledFallback.c)
 */

__int64 Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SetMonitorDescriptorOverride__private_featureState & 0x10) != 0 )
    return Feature_SetMonitorDescriptorOverride__private_featureState & 1;
  else
    return Feature_SetMonitorDescriptorOverride__private_IsEnabledFallback(
             (unsigned int)Feature_SetMonitorDescriptorOverride__private_featureState,
             3LL);
}
