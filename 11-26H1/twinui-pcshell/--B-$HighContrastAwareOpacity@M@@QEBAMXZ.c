/*
 * XREFs of ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x1804C96D8
 * Callers:
 *     _lambda_5e9c18940e8e88d162ff7728dae26002_::operator() @ 0x1804C9704 (_lambda_5e9c18940e8e88d162ff7728dae26002_--operator().c)
 *     ?CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDCompThumbnail@@1PEAPEAU4@2@Z @ 0x1804C9BE8 (-CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDC.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@44PEAUIAnimationCoordinator@@@Z @ 0x1804CA9B4 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 *     ?_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ @ 0x1804CE8AC (-_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ.c)
 *     _lambda_6388d5cf85f46d09280dec8197538f8a_::operator() @ 0x1804CF914 (_lambda_6388d5cf85f46d09280dec8197538f8a_--operator().c)
 *     ?GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x1804D35EC (-GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?AnimatePositionChanged@VirtualDesktopRemoveAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x1804E1B50 (-AnimatePositionChanged@VirtualDesktopRemoveAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@I.c)
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x1801E0D10 (-IsHighContrast@@YAHXZ.c)
 */

float __fastcall HighContrastAwareOpacity<float>::operator float(float *a1)
{
  if ( (unsigned int)IsHighContrast() )
    return a1[1];
  else
    return *a1;
}
