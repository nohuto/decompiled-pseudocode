/*
 * XREFs of ?DetachFromChannel@CDDisplayRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z @ 0x180247250
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x180149160 (-ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ.c)
 */

void __fastcall CDDisplayRenderTarget::DetachFromChannel(CDDisplayRenderTarget *this, struct CChannelContext *a2)
{
  *((_DWORD *)this + 8035) = 0;
  CDDisplayRenderTarget::ReleaseSwapChain((CDDisplayRenderTarget *)((char *)this + 160));
  CNotificationResource::DetachFromChannel(this, a2);
}
