/*
 * XREFs of ?AddRef@CCrossAdapterTexture@@WHI@EAAKXZ @ 0x1802B76C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossAdapterTexture::AddRef(__int64 a1)
{
  return CDeviceTexture::AddRef((CDeviceTexture *)(a1 - 120));
}
