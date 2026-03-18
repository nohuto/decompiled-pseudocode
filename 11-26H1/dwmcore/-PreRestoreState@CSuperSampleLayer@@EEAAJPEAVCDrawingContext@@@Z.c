/*
 * XREFs of ?PreRestoreState@CSuperSampleLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1802507E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18016C2C0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

__int64 __fastcall CSuperSampleLayer::PreRestoreState(CSuperSampleLayer *this, struct CDrawingContext *a2)
{
  CDrawingContext::PopRenderOptionsInternal(a2, 0);
  return 0LL;
}
