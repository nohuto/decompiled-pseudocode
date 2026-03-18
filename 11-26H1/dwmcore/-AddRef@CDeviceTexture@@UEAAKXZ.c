/*
 * XREFs of ?AddRef@CDeviceTexture@@UEAAKXZ @ 0x180247170
 * Callers:
 *     ?AddRef@CCompositionDynamicTexture@@WFA@EAAKXZ @ 0x18026A790 (-AddRef@CCompositionDynamicTexture@@WFA@EAAKXZ.c)
 *     ?AddRef@CCrossAdapterTexture@@WHI@EAAKXZ @ 0x1802B76C0 (-AddRef@CCrossAdapterTexture@@WHI@EAAKXZ.c)
 *     ?AddRef@CCrossAdapterTexture@@WIA@EAAKXZ @ 0x1802B76D0 (-AddRef@CCrossAdapterTexture@@WIA@EAAKXZ.c)
 *     ?AddRef@CSysmemTexture@@WPA@EAAKXZ @ 0x1802B9050 (-AddRef@CSysmemTexture@@WPA@EAAKXZ.c)
 *     ?AddRef@CSysmemTexture@@WPI@EAAKXZ @ 0x1802B9070 (-AddRef@CSysmemTexture@@WPI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTexture::AddRef(CDeviceTexture *this)
{
  return CMILRefCountImpl::AddReference((CDeviceTexture *)((char *)this + 8));
}
