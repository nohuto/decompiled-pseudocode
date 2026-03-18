/*
 * XREFs of ?AddRef@CCrossAdapterTexture@@WIA@EAAKXZ @ 0x1802B76D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossAdapterTexture::AddRef(__int64 a1)
{
  return CDeviceTexture::AddRef((CDeviceTexture *)(a1 - 128));
}
