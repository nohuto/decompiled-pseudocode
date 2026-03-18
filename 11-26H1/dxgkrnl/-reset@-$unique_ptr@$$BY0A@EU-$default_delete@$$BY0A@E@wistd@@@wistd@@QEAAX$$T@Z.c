/*
 * XREFs of ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24
 * Callers:
 *     NtDxgkDisplayPortOperation @ 0x140077020 (NtDxgkDisplayPortOperation.c)
 *     ?DxgkRequestDisplayPrivateTest@@YAJW4DisplayPrivateTest_RequestType@@IPEAX@Z @ 0x1401C7320 (-DxgkRequestDisplayPrivateTest@@YAJW4DisplayPrivateTest_RequestType@@IPEAX@Z.c)
 *     ?DxgkRequestDisplayRecoveryToBroker@@YAJXZ @ 0x1401C74F4 (-DxgkRequestDisplayRecoveryToBroker@@YAJXZ.c)
 *     ?DxgkSendDisplayDiagnosticsToBroker@@YAJIPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@PEA_N@Z @ 0x1401C7600 (-DxgkSendDisplayDiagnosticsToBroker@@YAJIPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@PEA_N@Z.c)
 *     ?CollectIntrusiveDriverData@DRIVERWHITEBOXINFO@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401C9E60 (-CollectIntrusiveDriverData@DRIVERWHITEBOXINFO@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?CollectNonIntrusiveDriverData@DRIVERWHITEBOXINFO@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401CA0E0 (-CollectNonIntrusiveDriverData@DRIVERWHITEBOXINFO@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1401CA340 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z.c)
 *     ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1401CB8C8 (-LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 *     ?SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1401CBFD4 (-SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 *     ?DxgkLogDisplayMuxDiagPacketToDisplayRingbuffer@@YAJXZ @ 0x1401CE7BC (-DxgkLogDisplayMuxDiagPacketToDisplayRingbuffer@@YAJXZ.c)
 *     ?LogActivePathPresentHistoryCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1401CF5F0 (-LogActivePathPresentHistoryCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140229E30 (-VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z @ 0x1402311B0 (-VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z.c)
 *     ?GetMonitorDescriptor@MonitorDescriptorState@DxgMonitor@@QEBAJPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z @ 0x140279CC4 (-GetMonitorDescriptor@MonitorDescriptorState@DxgMonitor@@QEBAJPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z.c)
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x140279F70 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 *     ?GetColorDataRaw@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x140280AE0 (-GetColorDataRaw@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLOR_DATA_RAW@@@Z.c)
 *     ?GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x140280B30 (-GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDIS.c)
 *     ?GetContainerId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_GUID@@@Z @ 0x140280C10 (-GetContainerId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_GUID@@@Z.c)
 *     ?GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z @ 0x140280D40 (-GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z.c)
 *     ?GetHdrLuminance@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAK00@Z @ 0x140280D90 (-GetHdrLuminance@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAK00@Z.c)
 *     ?GetUsageParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAW4DISPLAY_USE_CASE@@AEA_N1@Z @ 0x140280F30 (-GetUsageParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAW4DISPLAY_USE_CASE@@AEA_N1@Z.c)
 *     ??1DisplayIdMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x140281280 (--1DisplayIdMonitorDescriptor@DxgMonitor@@UEAA@XZ.c)
 *     ?CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1402815D0 (-CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@Dxg.c)
 *     ?GetAnonymizedRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x140281790 (-GetAnonymizedRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU.c)
 *     ?LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x140281E20 (-LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorReg.c)
 *     ?UnloadDescriptorOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x140282120 (-UnloadDescriptorOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAXXZ.c)
 *     ?AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1402CB1B0 (-AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEP.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E2A30 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 *     ?OnInternalIoctl@MonitorDescriptorState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x1403EB0C8 (-OnInternalIoctl@MonitorDescriptorState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?IsEotf2084Supported@EdidMonitorDescriptor@DxgMonitor@@UEBA_NXZ @ 0x1403F2D30 (-IsEotf2084Supported@EdidMonitorDescriptor@DxgMonitor@@UEBA_NXZ.c)
 *     ?GetAnonymizedRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1403F2DA0 (-GetAnonymizedRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$def.c)
 *     ?ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z @ 0x1403F3EA8 (-ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z.c)
 *     ?GetDisplayIdDescriptorRaw@MonitorDescriptorState@DxgMonitor@@QEBAJIPEAIPEAE@Z @ 0x1403FF964 (-GetDisplayIdDescriptorRaw@MonitorDescriptorState@DxgMonitor@@QEBAJIPEAIPEAE@Z.c)
 *     ?_UpdateMonitorEDIDRegistryForGDI@MonitorDescriptorState@DxgMonitor@@AEBAJXZ @ 0x140419308 (-_UpdateMonitorEDIDRegistryForGDI@MonitorDescriptorState@DxgMonitor@@AEBAJXZ.c)
 *     ?ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@KAEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x14042B634 (-ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@$$BY0A@EU-$default.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v1);
}
