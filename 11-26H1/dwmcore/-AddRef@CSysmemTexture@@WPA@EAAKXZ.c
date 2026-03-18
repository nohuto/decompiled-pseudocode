/*
 * XREFs of ?AddRef@CSysmemTexture@@WPA@EAAKXZ @ 0x1802B9050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSysmemTexture::AddRef(__int64 a1)
{
  return CDeviceTexture::AddRef((CDeviceTexture *)(a1 - 240));
}
