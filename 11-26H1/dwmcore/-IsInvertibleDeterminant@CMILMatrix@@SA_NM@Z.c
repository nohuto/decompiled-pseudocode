/*
 * XREFs of ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x1800D624C
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18000F2D0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x180075BC8 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800D6064 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?GetCpuClip@CDrawingContext@@QEBAXPEAVCCpuClip@@@Z @ 0x180202B9C (-GetCpuClip@CDrawingContext@@QEBAXPEAVCCpuClip@@@Z.c)
 *     ?IsValid@CPositionedLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18026CF40 (-IsValid@CPositionedLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsInvertibleDeterminant(float a1)
{
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(a1 - 0.0) & _xmm) >= 0.00000011920929 && _finite((float)(1.0 / a1)) != 0;
}
