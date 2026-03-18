/*
 * XREFs of ?LockAndRead@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAXPEBVID2DContextOwner@@@Z @ 0x1802AA0C0
 * Callers:
 *     ?LockAndRead@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBAXPEBVID2DContextOwner@@@Z @ 0x1802AA0D0 (-LockAndRead@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBAXPEBVID2DCont.c)
 *     ?LockAndRead@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBAXPEBVID2DContextOwner@@@Z @ 0x1802AA0F0 (-LockAndRead@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBAXPEBVID2DCont.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::LockAndRead(
        CD2DBitmap *this,
        const struct ID2DContextOwner *a2)
{
  CD2DBitmap::LockAndRead(this, a2);
}
