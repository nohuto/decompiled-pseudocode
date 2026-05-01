/*
 * XREFs of _anonymous_namespace_::IsAppRectCrossScreenRectOnSide @ 0x1803CF770
 * Callers:
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x180240A28 (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 *     ?GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x180240F30 (-GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AURect@Foundation@Windows@w.c)
 * Callees:
 *     <none>
 */

bool __fastcall anonymous_namespace_::IsAppRectCrossScreenRectOnSide(_DWORD *a1, _DWORD *a2)
{
  return a1[2] > a2[2] || *a1 < *a2;
}
