/*
 * XREFs of ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x18018DECC
 * Callers:
 *     ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C9200 (-ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@M@Z @ 0x180203840 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_180203840.c)
 *     gsl::final_action__CDrawingContext::DrawBitmapRealization_::_2_::_lambda_1___::_final_action__CDrawingContext::DrawBitmapRealization_::_2_::_lambda_1___ @ 0x18021F5F0 (gsl--final_action__CDrawingContext--DrawBitmapRealization_--_2_--_lambda_1___--_final_action__CD.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::PopAlpha(CDrawingContext *this, char a2)
{
  int v2; // eax
  int v3; // eax

  if ( a2 )
  {
    v2 = *((_DWORD *)this + 66);
    if ( v2 )
      *((_DWORD *)this + 66) = v2 - 1;
  }
  v3 = *((_DWORD *)this + 790);
  if ( v3 )
    *((_DWORD *)this + 790) = v3 - 1;
}
