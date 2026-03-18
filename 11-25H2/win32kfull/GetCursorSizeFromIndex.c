/*
 * XREFs of GetCursorSizeFromIndex @ 0x14004E6AC
 * Callers:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1401B79FC (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401FB3DC (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z @ 0x140273994 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCursorSizeFromIndex(int a1)
{
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return 32LL;
  v2 = a1 - 1;
  if ( !v2 )
    return 48LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 64LL;
  if ( v3 == 1 )
    return 96LL;
  return 128LL;
}
