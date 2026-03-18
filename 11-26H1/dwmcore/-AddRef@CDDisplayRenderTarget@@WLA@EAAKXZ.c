/*
 * XREFs of ?AddRef@CDDisplayRenderTarget@@WLA@EAAKXZ @ 0x180247110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 176));
}
