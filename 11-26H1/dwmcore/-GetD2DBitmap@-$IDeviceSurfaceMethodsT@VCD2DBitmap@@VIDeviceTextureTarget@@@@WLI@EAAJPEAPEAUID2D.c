/*
 * XREFs of ?GetD2DBitmap@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802A9E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetD2DBitmap(
        __int64 a1,
        struct ID2D1Bitmap1 **a2,
        char a3)
{
  return CD2DBitmap::GetD2DBitmap((CD2DBitmap *)(a1 - 184), a2, a3);
}
