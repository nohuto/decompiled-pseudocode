/*
 * XREFs of ?PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ @ 0x180192858
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE2B0 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetSyncLockCount@CDDisplayRenderTarget@@UEBAI_KI@Z @ 0x180253EC0 (-GetSyncLockCount@CDDisplayRenderTarget@@UEBAI_KI@Z.c)
 *     ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x180253F5C (-Present@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?PresentNeeded@COverlayContext@@QEBA_NXZ @ 0x1801928C0 (-PresentNeeded@COverlayContext@@QEBA_NXZ.c)
 */

char __fastcall CDDisplayRenderTarget::PresentNeeded(CDDisplayRenderTarget *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 32528) || COverlayContext::PresentNeeded((CDDisplayRenderTarget *)((char *)this + 232)) )
    return 1;
  return v1;
}
