/*
 * XREFs of ?Release@COffScreenRenderTarget@@WFA@EAAKXZ @ 0x180249AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall COffScreenRenderTarget::Release(__int64 a1)
{
  return CProjectedShadowCaster::Release((CProjectedShadowCaster *)(a1 - 80));
}
