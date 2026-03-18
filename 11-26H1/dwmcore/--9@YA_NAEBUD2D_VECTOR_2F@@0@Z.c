/*
 * XREFs of ??9@YA_NAEBUD2D_VECTOR_2F@@0@Z @ 0x1802060FC
 * Callers:
 *     ?SetStartPoint@?$CLinearGradientBrushGeneratedT@VCLinearGradientBrush@@VCGradientBrush@@_N@@QEAAJUD2D_POINT_2F@@@Z @ 0x1801DBFC4 (-SetStartPoint@-$CLinearGradientBrushGeneratedT@VCLinearGradientBrush@@VCGradientBrush@@_N@@QEAA.c)
 *     ?SetEndPoint@?$CLinearGradientBrushGeneratedT@VCLinearGradientBrush@@VCGradientBrush@@_N@@QEAAJUD2D_POINT_2F@@@Z @ 0x1801DF594 (-SetEndPoint@-$CLinearGradientBrushGeneratedT@VCLinearGradientBrush@@VCGradientBrush@@_N@@QEAAJU.c)
 *     ?SetBaseFrequency@?$CTurbulenceEffectGeneratedT@VCTurbulenceEffect@@VCFilterEffect@@@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024A068 (-SetBaseFrequency@-$CTurbulenceEffectGeneratedT@VCTurbulenceEffect@@VCFilterEffect@@@@QEAAJUD2D_.c)
 *     ?SetBaselineOrigin@?$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024A0DC (-SetBaselineOrigin@-$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@QEAAJUD2D_VECTOR_2F@@@Z.c)
 *     ?SetEllipseCenter@?$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024AF98 (-SetEllipseCenter@-$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@Q.c)
 *     ?SetEllipseRadius@?$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024B008 (-SetEllipseRadius@-$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@Q.c)
 *     ?SetMaxPosition@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@QEAAJUD2D_POINT_2F@@@Z @ 0x18024C0D0 (-SetMaxPosition@-$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase.c)
 *     ?SetMinPosition@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@QEAAJUD2D_POINT_2F@@@Z @ 0x18024C230 (-SetMinPosition@-$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase.c)
 *     ?SetOffset@?$CTurbulenceEffectGeneratedT@VCTurbulenceEffect@@VCFilterEffect@@@@QEAAJUD2D_POINT_2F@@@Z @ 0x18024C4F0 (-SetOffset@-$CTurbulenceEffectGeneratedT@VCTurbulenceEffect@@VCFilterEffect@@@@QEAAJUD2D_POINT_2.c)
 *     ?SetOffsetInSurface@?$CCompositionGlyphRunGeneratedT@VCCompositionGlyphRun@@VCTextObject@@@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024C564 (-SetOffsetInSurface@-$CCompositionGlyphRunGeneratedT@VCCompositionGlyphRun@@VCTextObject@@@@QEAA.c)
 *     ?SetOriginOffset@?$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024C60C (-SetOriginOffset@-$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@QE.c)
 *     ?SetSize@?$CTurbulenceEffectGeneratedT@VCTurbulenceEffect@@VCFilterEffect@@@@QEAAJUD2D_POINT_2F@@@Z @ 0x18024E8D4 (-SetSize@-$CTurbulenceEffectGeneratedT@VCTurbulenceEffect@@VCFilterEffect@@@@QEAAJUD2D_POINT_2F@.c)
 *     ?SetSnappingOffset@?$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024E98C (-SetSnappingOffset@-$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@QEAAJUD2D_VECTOR_2F@@@Z.c)
 *     ?SetSurfaceScale@?$CCompositionGlyphRunGeneratedT@VCCompositionGlyphRun@@VCTextObject@@@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024EB58 (-SetSurfaceScale@-$CCompositionGlyphRunGeneratedT@VCCompositionGlyphRun@@VCTextObject@@@@QEAAJUD.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator!=(float *a1, float *a2)
{
  return *a1 != *a2 || a1[1] != a2[1];
}
