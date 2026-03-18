/*
 * XREFs of DpiGetDxgAdapter @ 0x1400348A0
 * Callers:
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x1400346A0 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     DxgkPinFrameBufferForSaveCB @ 0x140034720 (DxgkPinFrameBufferForSaveCB.c)
 *     DxgkPinFrameBufferForSave2CB @ 0x140034760 (DxgkPinFrameBufferForSave2CB.c)
 *     DxgkUnpinFrameBufferForSaveCB @ 0x1400347B0 (DxgkUnpinFrameBufferForSaveCB.c)
 *     ?DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z @ 0x1400347E0 (-DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z.c)
 *     DxgSetPowerComponentIdleCB @ 0x140034820 (DxgSetPowerComponentIdleCB.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x140074FF0 (DxgPresentDisplayOnlyProgressCB.c)
 *     DxgSetPowerComponentActiveNoWaitCB @ 0x140075070 (DxgSetPowerComponentActiveNoWaitCB.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x1400750A0 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgkCompleteFStateTransitionCB @ 0x140075110 (DxgkCompleteFStateTransitionCB.c)
 *     DxgkCompletePStateTransitionCB @ 0x140075180 (DxgkCompletePStateTransitionCB.c)
 *     DxgkHardwareContentProtectionTeardownCB @ 0x140075200 (DxgkHardwareContentProtectionTeardownCB.c)
 *     DxgkInvalidateHwContextCB @ 0x140075270 (DxgkInvalidateHwContextCB.c)
 *     DxgkPowerRuntimeControlRequestCB @ 0x140075440 (DxgkPowerRuntimeControlRequestCB.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x1400755A0 (DxgkSetPowerComponentLatencyCB.c)
 *     DxgkSetPowerComponentResidencyCB @ 0x140075610 (DxgkSetPowerComponentResidencyCB.c)
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x140075680 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 *     DxgLogEtwEventCb @ 0x140079820 (DxgLogEtwEventCb.c)
 *     DxgkCbReportDiagnostic @ 0x14007A530 (DxgkCbReportDiagnostic.c)
 *     DxgkMapFrameBufferPointerCB @ 0x14007CA40 (DxgkMapFrameBufferPointerCB.c)
 *     DxgkUnmapFrameBufferPointerCB @ 0x14007CA80 (DxgkUnmapFrameBufferPointerCB.c)
 *     DxgkUpdateContextAllocationCB @ 0x1401C17B0 (DxgkUpdateContextAllocationCB.c)
 *     DxgkNotifyCursorSupportChangeCB @ 0x1401F3250 (DxgkNotifyCursorSupportChangeCB.c)
 *     ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x140271550 (-AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOUR.c)
 *     ?DxgMiniportQueryMonitorInterfaceCB@@YAJQEAXW4_DXGK_MONITOR_INTERFACE_VERSION@@PEAPEBU_DXGK_MONITOR_INTERFACE@@@Z @ 0x140271EA0 (-DxgMiniportQueryMonitorInterfaceCB@@YAJQEAXW4_DXGK_MONITOR_INTERFACE_VERSION@@PEAPEBU_DXGK_MONI.c)
 *     ?GetMonitorDescriptor@DXGK_MONITOR_INTERFACE_V3_IMPL@@KAJQEAXIPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z @ 0x140272160 (-GetMonitorDescriptor@DXGK_MONITOR_INTERFACE_V3_IMPL@@KAJQEAXIPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x140272450 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x140272780 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x140272ED0 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 *     ?ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x140273610 (-ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMO.c)
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x14038CC00 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x140398E10 (DxgSetPowerComponentActiveCBInternal.c)
 *     DxgCreateContextAllocationCB @ 0x1403C3450 (DxgCreateContextAllocationCB.c)
 *     DxgDestroyContextAllocationCB @ 0x1403CD260 (DxgDestroyContextAllocationCB.c)
 *     DxgkMapContextAllocationCB @ 0x1403DAFA0 (DxgkMapContextAllocationCB.c)
 *     DxgSetPowerComponentActiveCB @ 0x1403DF620 (DxgSetPowerComponentActiveCB.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1403F45B0 (DxgkReserveGpuVirtualAddressRangeCB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDxgAdapter(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 64);
    if ( v1 && *(_DWORD *)(v1 + 16) == 1953656900 && *(_DWORD *)(v1 + 20) == 2 )
      return *(_QWORD *)(v1 + 4032);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2173;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2166;
  }
  return 0LL;
}
