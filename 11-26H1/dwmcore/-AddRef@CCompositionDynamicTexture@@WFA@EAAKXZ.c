/*
 * XREFs of ?AddRef@CCompositionDynamicTexture@@WFA@EAAKXZ @ 0x18026A790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionDynamicTexture::AddRef(__int64 a1)
{
  return CDeviceTexture::AddRef((CDeviceTexture *)(a1 - 80));
}
