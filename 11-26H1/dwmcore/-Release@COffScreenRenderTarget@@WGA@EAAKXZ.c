/*
 * XREFs of ?Release@COffScreenRenderTarget@@WGA@EAAKXZ @ 0x180249AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall COffScreenRenderTarget::Release(__int64 a1)
{
  return CProjectedShadowCaster::Release((CProjectedShadowCaster *)(a1 - 96));
}
