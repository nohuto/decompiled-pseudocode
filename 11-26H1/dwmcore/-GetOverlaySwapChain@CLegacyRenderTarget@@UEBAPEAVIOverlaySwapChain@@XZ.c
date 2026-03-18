/*
 * XREFs of ?GetOverlaySwapChain@CLegacyRenderTarget@@UEBAPEAVIOverlaySwapChain@@XZ @ 0x180196620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IOverlaySwapChain *__fastcall CLegacyRenderTarget::GetOverlaySwapChain(CLegacyRenderTarget *this)
{
  return (struct IOverlaySwapChain *)((*((_QWORD *)this + 5) + 24LL) & -(__int64)(*((_QWORD *)this + 5) != 0LL));
}
