/*
 * XREFs of ?GetSharedStartSearchWindowHeight@StartSearchSharedUtils@@YANN@Z @ 0x1801F0E64
 * Callers:
 *     ?GetDefaultStartSearchAppPopupHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHW4EDGEUI_TRAYSTUCKPLACE@@UtagRECT@@H@Z @ 0x1801F0DD8 (-GetDefaultStartSearchAppPopupHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHW4EDGEUI_TRAYST.c)
 *     ?GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA?AU?$pair@HH@std@@AEBUMonitorInfo@@_N@Z @ 0x18024CEB0 (-GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA-AU-$pair@HH@std@@AEBUMo.c)
 * Callees:
 *     <none>
 */

double __fastcall StartSearchSharedUtils::GetSharedStartSearchWindowHeight(StartSearchSharedUtils *this, double a2)
{
  double v2; // xmm0_8
  double result; // xmm0_8
  double v4; // xmm1_8

  if ( v2 <= 0.0 )
    return DOUBLE_558_0;
  result = v2 - 24.0;
  v4 = DOUBLE_726_0;
  if ( result >= 726.0 )
    return v4;
  v4 = DOUBLE_670_0;
  if ( result >= 670.0 )
    return v4;
  v4 = DOUBLE_614_0;
  if ( result >= 614.0 )
    return v4;
  if ( result >= 558.0 )
    return DOUBLE_558_0;
  v4 = DOUBLE_312_0;
  if ( result < 312.0 )
    return v4;
  return result;
}
