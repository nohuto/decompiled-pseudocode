/*
 * XREFs of ?GetOverlaySwapChain@CDDisplayRenderTarget@@UEBAPEAVIOverlaySwapChain@@XZ @ 0x1801A32A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IOverlaySwapChain *__fastcall CDDisplayRenderTarget::GetOverlaySwapChain(CDDisplayRenderTarget *this)
{
  return (struct IOverlaySwapChain *)((*((_QWORD *)this + 7) + 24LL) & -(__int64)(*((_QWORD *)this + 7) != 0LL));
}
