/*
 * XREFs of ??$SnapRegionDetected@AEAUtagPOINT@@AEBW4SnapRegion@@AEAKPEAUIImmersiveMonitor@@@CSnapComponentTelemetry@@SAXAEAUtagPOINT@@AEBW4SnapRegion@@AEAK$$QEAPEAUIImmersiveMonitor@@@Z @ 0x18008F4B8
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180270510 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2P.c)
 * Callees:
 *     ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x18008F5F8 (-IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AXXZ@Z @ 0x18008F638 (-get@-$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AX.c)
 *     ?SnapRegionDetected_@CSnapComponentTelemetry@@QEBAXUtagPOINT@@W4SnapRegion@@KPEAUIImmersiveMonitor@@@Z @ 0x180233B98 (-SnapRegionDetected_@CSnapComponentTelemetry@@QEBAXUtagPOINT@@W4SnapRegion@@KPEAUIImmersiveMonit.c)
 */

char __fastcall CSnapComponentTelemetry::SnapRegionDetected<tagPOINT &,enum SnapRegion const &,unsigned long &,IImmersiveMonitor *>(
        _QWORD *a1,
        unsigned int *a2,
        unsigned int *a3,
        _QWORD *a4)
{
  char result; // al
  __int64 v9; // rcx
  __int64 v10; // rcx

  result = CSnapComponentTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2);
  if ( result )
  {
    wil::details::static_lazy<CSnapComponentTelemetry>::get(
      v9,
      _lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
    return CSnapComponentTelemetry::SnapRegionDetected_(v10, *a1, *a2, *a3, *a4);
  }
  return result;
}
