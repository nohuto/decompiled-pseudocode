/*
 * XREFs of ?CleanupComputeScribble@CDDisplaySwapChain@@UEAAX_N@Z @ 0x18021F300
 * Callers:
 *     ?CleanupComputeScribble@CDDisplayRenderTarget@@UEAAX_N@Z @ 0x18021F2D0 (-CleanupComputeScribble@CDDisplayRenderTarget@@UEAAX_N@Z.c)
 * Callees:
 *     ?ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ @ 0x1801D2430 (-ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ.c)
 */

void __fastcall CDDisplaySwapChain::CleanupComputeScribble(CDDisplaySwapChain *this, char a2)
{
  if ( !a2 )
  {
    if ( !*((_BYTE *)this + 410) )
      return;
    *((_BYTE *)this + 410) = 0;
    *((_BYTE *)this + 408) = 1;
  }
  CScribbleSwapChain::ReleaseComputeScribbleResources((volatile signed __int32 **)this - 32);
}
