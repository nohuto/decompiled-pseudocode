/*
 * XREFs of ?BoostFrameRate@CDDisplayRenderTarget@@UEAA_N_N@Z @ 0x1801E7D00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVBlankDuration@CDDisplaySwapChain@@UEAA_NI_K@Z @ 0x1801DC760 (-SetVBlankDuration@CDDisplaySwapChain@@UEAA_NI_K@Z.c)
 *     ?BoostVBlankForGameContent@COverlayContext@@QEBA_NXZ @ 0x180239270 (-BoostVBlankForGameContent@COverlayContext@@QEBA_NXZ.c)
 */

char __fastcall CDDisplayRenderTarget::BoostFrameRate(CDDisplayRenderTarget *this, char a2)
{
  __int64 v2; // r8
  CDDisplaySwapChain *v4; // rcx
  unsigned int v5; // edx
  __int64 v7; // r8

  v2 = *((_QWORD *)this + 7);
  if ( !v2 )
    return 0;
  if ( a2 )
  {
    v4 = (CDDisplaySwapChain *)(v2 + 24);
    v5 = *(_DWORD *)(v2 + 152);
    if ( !*(_QWORD *)(v2 + 136) || v5 <= 1 )
      return 0;
  }
  else
  {
    if ( COverlayContext::BoostVBlankForGameContent((CDDisplayRenderTarget *)((char *)this + 72)) )
      return 0;
    v4 = (CDDisplaySwapChain *)(v7 + 24);
    v5 = 0;
  }
  if ( !CDDisplaySwapChain::SetVBlankDuration(v4, v5, 0LL) )
    return 0;
  *((_BYTE *)this + 32368) = 1;
  return 1;
}
