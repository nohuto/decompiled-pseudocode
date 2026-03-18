/*
 * XREFs of ?RenderAndPresent@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180249CB0
 * Callers:
 *     ?RenderAndPresent@CRemoteRenderTarget@@WEI@EAAJPEAVCDrawingContext@@@Z @ 0x180249D10 (-RenderAndPresent@CRemoteRenderTarget@@WEI@EAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderAndPresent@CRemoteRenderTarget@@WFA@EAAJPEAVCDrawingContext@@@Z @ 0x180249D20 (-RenderAndPresent@CRemoteRenderTarget@@WFA@EAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Present@CRemoteRenderTarget@@IEAAJXZ @ 0x180255320 (-Present@CRemoteRenderTarget@@IEAAJXZ.c)
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180255400 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CRemoteRenderTarget::RenderAndPresent(CRemoteRenderTarget *this, struct CDrawingContext *a2)
{
  CRemoteRenderTarget *v2; // rdi
  int v3; // eax
  unsigned int v4; // ebx

  v2 = (CRemoteRenderTarget *)((char *)this - 96);
  v3 = CRemoteRenderTarget::Render((CRemoteRenderTarget *)((char *)this - 96), a2);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x74u, 0LL);
  CRemoteRenderTarget::Present(v2);
  return v4;
}
