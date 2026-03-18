/*
 * XREFs of ?UpdateLightToWorldForScene@CPositionedLight@@EEAAJPEBVCDrawingContext@@@Z @ 0x18026D030
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z @ 0x180260DD4 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z.c)
 */

__int64 __fastcall CPositionedLight::UpdateLightToWorldForScene(CVisual **this, const struct CVisualTree **a2)
{
  int WorldTransform; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  WorldTransform = CVisual::GetWorldTransform(this[29], a2[993], (struct CMILMatrix *)(this + 14), 0LL, 0LL);
  v3 = WorldTransform;
  if ( WorldTransform < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\positionedlight.cpp",
      (const char *)(unsigned int)WorldTransform);
  return v3;
}
