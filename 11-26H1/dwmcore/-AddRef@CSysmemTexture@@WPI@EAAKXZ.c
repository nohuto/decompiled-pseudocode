/*
 * XREFs of ?AddRef@CSysmemTexture@@WPI@EAAKXZ @ 0x1802B9070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSysmemTexture::AddRef(__int64 a1)
{
  return CDeviceTexture::AddRef((CDeviceTexture *)(a1 - 248));
}
