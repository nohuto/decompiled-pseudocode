/*
 * XREFs of ?GetOverlayVisuals@CDDisplayRenderTarget@@UEBAXAEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x180247770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::GetOverlayVisuals(__int64 a1)
{
  return COverlayContext::GetOverlayVisuals(a1 + 72);
}
