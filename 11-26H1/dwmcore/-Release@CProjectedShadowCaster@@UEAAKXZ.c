/*
 * XREFs of ?Release@CProjectedShadowCaster@@UEAAKXZ @ 0x180095210
 * Callers:
 *     ?Release@CInteraction@@WEI@EAAKXZ @ 0x18022B0D0 (-Release@CInteraction@@WEI@EAAKXZ.c)
 *     ?Release@COffScreenRenderTarget@@WFA@EAAKXZ @ 0x180249AB0 (-Release@COffScreenRenderTarget@@WFA@EAAKXZ.c)
 *     ?Release@CDDisplayRenderTarget@@WFI@EAAKXZ @ 0x180249AC0 (-Release@CDDisplayRenderTarget@@WFI@EAAKXZ.c)
 *     ?Release@COffScreenRenderTarget@@WGA@EAAKXZ @ 0x180249AD0 (-Release@COffScreenRenderTarget@@WGA@EAAKXZ.c)
 *     ?Release@CLegacyRenderTarget@@WKA@EAAKXZ @ 0x180249AE0 (-Release@CLegacyRenderTarget@@WKA@EAAKXZ.c)
 *     ?Release@CLegacyRenderTarget@@WKI@EAAKXZ @ 0x180249B00 (-Release@CLegacyRenderTarget@@WKI@EAAKXZ.c)
 *     ?Release@CRemoteRenderTarget@@WLA@EAAKXZ @ 0x180249B20 (-Release@CRemoteRenderTarget@@WLA@EAAKXZ.c)
 *     ?Release@CGenericInk@@WJA@EAAKXZ @ 0x180249B40 (-Release@CGenericInk@@WJA@EAAKXZ.c)
 *     ?Release@CIndirectSwapchainRenderTarget@@WJFA@EAAKXZ @ 0x180249B60 (-Release@CIndirectSwapchainRenderTarget@@WJFA@EAAKXZ.c)
 *     ?Release@CMaskBrush@@WGI@EAAKXZ @ 0x180265BD0 (-Release@CMaskBrush@@WGI@EAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@WHI@EAAKXZ @ 0x180265BE0 (-Release@CGdiSpriteBitmap@@WHI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CProjectedShadowCaster::Release(CProjectedShadowCaster *this)
{
  return CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(this);
}
