/*
 * XREFs of gsl::final_action__CCursorVisual::RenderContent_::_2_::_lambda_1___::_final_action__CCursorVisual::RenderContent_::_2_::_lambda_1___ @ 0x18021F610
 * Callers:
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180078480 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18016C2C0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

void __fastcall gsl::final_action__CCursorVisual::RenderContent_::_2_::_lambda_1___::_final_action__CCursorVisual::RenderContent_::_2_::_lambda_1___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    if ( **(_BYTE **)a1 )
      CDrawingContext::PopRenderOptionsInternal(*(CDrawingContext **)(a1 + 8), 1);
  }
}
