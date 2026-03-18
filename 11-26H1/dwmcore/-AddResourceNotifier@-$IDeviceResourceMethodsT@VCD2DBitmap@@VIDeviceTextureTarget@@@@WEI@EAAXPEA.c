/*
 * XREFs of ?AddResourceNotifier@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WEI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1802A9520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::AddResourceNotifier(
        __int64 a1,
        __int64 a2)
{
  return IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>::AddResourceNotifier(a1 - 72, a2);
}
