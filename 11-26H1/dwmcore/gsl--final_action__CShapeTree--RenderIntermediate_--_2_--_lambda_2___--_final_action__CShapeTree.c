/*
 * XREFs of gsl::final_action__CShapeTree::RenderIntermediate_::_2_::_lambda_2___::_final_action__CShapeTree::RenderIntermediate_::_2_::_lambda_2___ @ 0x1801BE958
 * Callers:
 *     ?Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180018E80 (-Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005CEB0 (-RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV-$TMilRect_@MUD2D.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1802351BC (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800197F0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

void __fastcall gsl::final_action__CShapeTree::RenderIntermediate_::_2_::_lambda_2___::_final_action__CShapeTree::RenderIntermediate_::_2_::_lambda_2___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
    CDrawingContext::PopTransformInternal(*(CDrawingContext **)a1, 1);
}
