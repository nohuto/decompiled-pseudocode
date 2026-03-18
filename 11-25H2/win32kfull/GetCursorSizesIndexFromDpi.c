/*
 * XREFs of GetCursorSizesIndexFromDpi @ 0x14004DCB4
 * Callers:
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1400608E0 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x14007B0E8 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1401B79FC (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401FB3DC (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z @ 0x140273994 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCursorSizesIndexFromDpi(unsigned int a1)
{
  if ( a1 < 0x90 )
    return 0LL;
  if ( a1 < 0xC0 )
    return 1LL;
  if ( a1 >= 0x120 )
    return 4 - (unsigned int)(a1 < 0x180);
  return 2LL;
}
