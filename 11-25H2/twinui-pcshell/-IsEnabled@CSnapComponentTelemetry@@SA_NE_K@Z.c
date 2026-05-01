/*
 * XREFs of ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x18008F5F8
 * Callers:
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800560EC (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV-$deque@UtagRE.c)
 *     ??$SnapRegionDetected@AEAUtagPOINT@@AEBW4SnapRegion@@AEAKPEAUIImmersiveMonitor@@@CSnapComponentTelemetry@@SAXAEAUtagPOINT@@AEBW4SnapRegion@@AEAK$$QEAPEAUIImmersiveMonitor@@@Z @ 0x18008F4B8 (--$SnapRegionDetected@AEAUtagPOINT@@AEBW4SnapRegion@@AEAKPEAUIImmersiveMonitor@@@CSnapComponentT.c)
 *     ?SendTelemetry@SnapInteraction@@YAXAEBU?$com_ptr@UIApplicationView@@@winrt@@AEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x18008F524 (-SendTelemetry@SnapInteraction@@YAXAEBU-$com_ptr@UIApplicationView@@@winrt@@AEBV-$duration@_JU-$.c)
 *     ?SnapWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@PEBUtagRECT@@K@Z @ 0x18008F6F0 (-SnapWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@PEBUtagRECT@@K@Z.c)
 *     ?_SendAppSnapUnsnapEvent@CShellSnapComponent@@AEAAJPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x180226F0C (-_SendAppSnapUnsnapEvent@CShellSnapComponent@@AEAAJPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@.c)
 *     ?Show@GuidedSnapAssistControl@@QEAAXV?$shared_ptr@VGuidedSnapAssistData@@@std@@V?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180288600 (-Show@GuidedSnapAssistControl@@QEAAXV-$shared_ptr@VGuidedSnapAssistData@@@std@@V-$com_ptr_t@UIAp.c)
 *     ??$AppSnapped@W4SnapRegion@@AEAUCRect@Geometry@@AEAU23@PEBGAEAPEAUHWND__@@@CSnapComponentTelemetry@@SAX$$QEAW4SnapRegion@@AEAUCRect@Geometry@@1$$QEAPEBGAEAPEAUHWND__@@@Z @ 0x180577D7C (--$AppSnapped@W4SnapRegion@@AEAUCRect@Geometry@@AEAU23@PEBGAEAPEAUHWND__@@@CSnapComponentTelemet.c)
 *     ?SnapWindowWithGuidedSnapAssist@CShellSnapComponent@@UEAAJ_KURect@Foundation@Windows@@IPEAU234@@Z @ 0x18057DFB0 (-SnapWindowWithGuidedSnapAssist@CShellSnapComponent@@UEAAJ_KURect@Foundation@Windows@@IPEAU234@@.c)
 *     ?SnapWindowFromSnapAssist@CSnapAssistControllerBase@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@4@@Z @ 0x180583D60 (-SnapWindowFromSnapAssist@CSnapAssistControllerBase@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArr.c)
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x180584EA0 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 *     ?SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4SnapRegion@@PEAUISnappedWindow@@@Z @ 0x18058C6F0 (-SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4Sn.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AXXZ@Z @ 0x18008F638 (-get@-$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AX.c)
 */

char __fastcall CSnapComponentTelemetry::IsEnabled(__int64 a1)
{
  __int64 v1; // rax
  char v2; // r9
  _DWORD *v3; // rcx

  v1 = wil::details::static_lazy<CSnapComponentTelemetry>::get(
         a1,
         _lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
  v2 = 0;
  v3 = *(_DWORD **)(v1 + 8);
  if ( v3 && *v3 )
    return tlgKeywordOn((__int64)v3, 0LL) != 0;
  return v2;
}
