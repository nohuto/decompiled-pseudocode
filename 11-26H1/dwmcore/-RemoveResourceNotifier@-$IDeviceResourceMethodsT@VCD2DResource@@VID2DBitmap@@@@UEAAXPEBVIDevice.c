/*
 * XREFs of ?RemoveResourceNotifier@?$IDeviceResourceMethodsT@VCD2DResource@@VID2DBitmap@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800FC270
 * Callers:
 *     ?RemoveResourceNotifier@?$IDeviceResourceMethodsT@VCD2DResource@@VID2DBitmap@@@@WEI@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1802A9B80 (-RemoveResourceNotifier@-$IDeviceResourceMethodsT@VCD2DResource@@VID2DBitmap@@@@WEI@EAAXPEBVIDev.c)
 *     ?RemoveResourceNotifier@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1802AA210 (-RemoveResourceNotifier@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EAA.c)
 *     ?RemoveResourceNotifier@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1802AA230 (-RemoveResourceNotifier@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EAAX.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>::RemoveResourceNotifier()
{
  return CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>::RemoveResourceNotifier();
}
