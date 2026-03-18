/*
 * XREFs of ?CleanupComputeScribble@CDDisplayRenderTarget@@UEAAX_N@Z @ 0x18021F2D0
 * Callers:
 *     ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x180149160 (-ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?CleanupComputeScribble@CDDisplaySwapChain@@UEAAX_N@Z @ 0x18021F300 (-CleanupComputeScribble@CDDisplaySwapChain@@UEAAX_N@Z.c)
 */

void __fastcall CDDisplayRenderTarget::CleanupComputeScribble(CDDisplayRenderTarget *this, bool a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 7);
  if ( v2 )
    CDDisplaySwapChain::CleanupComputeScribble((CDDisplaySwapChain *)(v2 + 256), a2);
}
