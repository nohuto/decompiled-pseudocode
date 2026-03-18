/*
 * XREFs of ?CalculateBounds@CProjectedShadow@@AEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEBVCVisualTree@@@Z @ 0x1800D8A20
 * Callers:
 *     ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801988A4 (-AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@AEBV-$TMilR.c)
 *     ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z @ 0x18026267C (-AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z.c)
 * Callees:
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180017A10 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetCasterBounds@CProjectedShadowCaster@@QEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x1800D711C (-GetCasterBounds@CProjectedShadowCaster@@QEBAAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?As3DHomogeneous@Matrix3x3@@QEBA?AVCMILMatrix@@XZ @ 0x1800D9628 (-As3DHomogeneous@Matrix3x3@@QEBA-AVCMILMatrix@@XZ.c)
 */

__int64 __fastcall CProjectedShadow::CalculateBounds(__int64 a1, __int64 a2, float a3, unsigned __int64 a4)
{
  __int64 v5; // r11
  __int64 v6; // rax
  struct D2D_RECT_F v8; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v9[88]; // [rsp+30h] [rbp-58h] BYREF

  v8 = *(struct D2D_RECT_F *)CProjectedShadowCaster::GetCasterBounds(*(_QWORD *)(a1 + 80), a4);
  TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v8.left, a3, a3);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v6 = Matrix3x3::As3DHomogeneous(v5 + 180, v9);
  CMILMatrix::Transform2DBoundsHelper<0>(v6, &v8, (float *)a2);
  return a2;
}
