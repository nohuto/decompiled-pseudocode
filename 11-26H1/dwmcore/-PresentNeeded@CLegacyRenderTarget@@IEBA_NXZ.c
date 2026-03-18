/*
 * XREFs of ?PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ @ 0x18019288C
 * Callers:
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE760 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetSyncLockCount@CLegacyRenderTarget@@UEBAI_KI@Z @ 0x180252F30 (-GetSyncLockCount@CLegacyRenderTarget@@UEBAI_KI@Z.c)
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x18025303C (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?PresentNeeded@COverlayContext@@QEBA_NXZ @ 0x1801928C0 (-PresentNeeded@COverlayContext@@QEBA_NXZ.c)
 */

char __fastcall CLegacyRenderTarget::PresentNeeded(CLegacyRenderTarget *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 32512) || COverlayContext::PresentNeeded((CLegacyRenderTarget *)((char *)this + 216)) )
    return 1;
  return v1;
}
