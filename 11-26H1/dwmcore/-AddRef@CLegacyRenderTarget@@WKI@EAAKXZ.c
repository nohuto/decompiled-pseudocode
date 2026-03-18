/*
 * XREFs of ?AddRef@CLegacyRenderTarget@@WKI@EAAKXZ @ 0x1802470F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 168));
}
