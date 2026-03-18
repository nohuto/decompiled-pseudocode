/*
 * XREFs of DriverUnload @ 0x14004D040
 * Callers:
 *     <none>
 * Callees:
 *     wil_UninitializeFeatureStaging @ 0x14009BE70 (wil_UninitializeFeatureStaging.c)
 *     ?DxgMmsDeInitDebug@@YAXXZ @ 0x14009C244 (-DxgMmsDeInitDebug@@YAXXZ.c)
 *     ?VidMmDeInitGlobals@@YAXXZ @ 0x1400A2D3C (-VidMmDeInitGlobals@@YAXXZ.c)
 *     VidSchiDeInitGlobals @ 0x1400C45F0 (VidSchiDeInitGlobals.c)
 */

__int64 DriverUnload()
{
  DxgMmsDeInitDebug();
  VidSchiDeInitGlobals();
  VidMmDeInitGlobals();
  return wil_UninitializeFeatureStaging();
}
