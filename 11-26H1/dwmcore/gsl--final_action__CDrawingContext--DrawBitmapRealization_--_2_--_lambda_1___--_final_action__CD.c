/*
 * XREFs of gsl::final_action__CDrawingContext::DrawBitmapRealization_::_2_::_lambda_1___::_final_action__CDrawingContext::DrawBitmapRealization_::_2_::_lambda_1___ @ 0x18021F5F0
 * Callers:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@M@Z @ 0x180203840 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_180203840.c)
 * Callees:
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x18018DECC (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 */

void __fastcall gsl::final_action__CDrawingContext::DrawBitmapRealization_::_2_::_lambda_1___::_final_action__CDrawingContext::DrawBitmapRealization_::_2_::_lambda_1___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
    CDrawingContext::PopAlpha(*(CDrawingContext **)a1, 0);
}
