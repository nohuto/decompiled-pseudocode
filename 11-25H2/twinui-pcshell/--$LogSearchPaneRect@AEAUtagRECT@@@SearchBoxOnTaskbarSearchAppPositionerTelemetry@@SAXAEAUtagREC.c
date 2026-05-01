/*
 * XREFs of ??$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagRECT@@@Z @ 0x1803C5CAC
 * Callers:
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x18024CACC (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 *     ?GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x18024CF80 (-GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AURect@Foundation@Windows@w.c)
 * Callees:
 *     ?IsEnabled@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SA_NE_K@Z @ 0x18008E774 (-IsEnabled@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSearchBoxOnTaskbarSearchAppPositionerTelemetry@@@details@wil@@QEAAPEAVSearchBoxOnTaskbarSearchAppPositionerTelemetry@@P6AXXZ@Z @ 0x18008E7B4 (-get@-$static_lazy@VSearchBoxOnTaskbarSearchAppPositionerTelemetry@@@details@wil@@QEAAPEAVSearch.c)
 *     ?LogSearchPaneRect_@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@QEAAXUtagRECT@@@Z @ 0x1803C5F4C (-LogSearchPaneRect_@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@QEAAXUtagRECT@@@Z.c)
 */

void __fastcall SearchBoxOnTaskbarSearchAppPositionerTelemetry::LogSearchPaneRect<tagRECT &>(struct tagRECT *a1)
{
  __int64 v2; // rcx
  SearchBoxOnTaskbarSearchAppPositionerTelemetry *v3; // rcx
  struct tagRECT v4; // [rsp+20h] [rbp-18h] BYREF

  if ( SearchBoxOnTaskbarSearchAppPositionerTelemetry::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<SearchBoxOnTaskbarSearchAppPositionerTelemetry>::get(
      v2,
      (void (__cdecl *)())_lambda_c91fb1c26cc17dbc30d45b50c58914ed_::_lambda_invoker_cdecl_);
    v4 = *a1;
    SearchBoxOnTaskbarSearchAppPositionerTelemetry::LogSearchPaneRect_(v3, &v4);
  }
}
