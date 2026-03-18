/*
 * XREFs of ?GetSwapChain@CRemoteRenderTarget@@UEBAPEAVISwapChain@@XZ @ 0x1801B7F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ISwapChain *__fastcall CRemoteRenderTarget::GetSwapChain(CRemoteRenderTarget *this)
{
  return (struct ISwapChain *)*((_QWORD *)this + 4);
}
