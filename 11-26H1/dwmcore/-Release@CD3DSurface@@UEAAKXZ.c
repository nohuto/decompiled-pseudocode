/*
 * XREFs of ?Release@CD3DSurface@@UEAAKXZ @ 0x1800F6000
 * Callers:
 *     ?Release@CCrossAdapterTexture@@WHI@EAAKXZ @ 0x1802A4BF0 (-Release@CCrossAdapterTexture@@WHI@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WEI@EAAKXZ @ 0x1802A9B40 (-Release@CDeviceTextureTarget@@WEI@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WFA@EAAKXZ @ 0x1802A9B50 (-Release@CDeviceTextureTarget@@WFA@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WFI@EAAKXZ @ 0x1802A9B60 (-Release@CDeviceTextureTarget@@WFI@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WGA@EAAKXZ @ 0x1802A9B70 (-Release@CDeviceTextureTarget@@WGA@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WBAA@EAAKXZ @ 0x1802AA190 (-Release@CDeviceTextureTarget@@WBAA@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WBAI@EAAKXZ @ 0x1802AA1B0 (-Release@CDeviceTextureTarget@@WBAI@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WPA@EAAKXZ @ 0x1802AA1D0 (-Release@CDeviceTextureTarget@@WPA@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WPI@EAAKXZ @ 0x1802AA1F0 (-Release@CDeviceTextureTarget@@WPI@EAAKXZ.c)
 *     ?Release@CSysmemTexture@@WIA@EAAKXZ @ 0x1802B8750 (-Release@CSysmemTexture@@WIA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CD3DSurface::Release(CD3DSurface *this)
{
  return CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(this);
}
