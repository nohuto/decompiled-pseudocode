/*
 * XREFs of ?ApplyDirty@CSurfaceBrush@@AEAAXPEAVCRectanglesShape@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020EA24
 * Callers:
 *     ?OnSurfaceChanged@CSurfaceBrush@@QEAAXXZ @ 0x1802841D8 (-OnSurfaceChanged@CSurfaceBrush@@QEAAXXZ.c)
 *     ?OnSurfaceContentRectChanging@CSurfaceBrush@@QEAAJAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802843F4 (-OnSurfaceContentRectChanging@CSurfaceBrush@@QEAAJAEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_P.c)
 *     ?SetSurfaceDirtyRect@CSurfaceBrush@@QEAAJAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180284774 (-SetSurfaceDirtyRect@CSurfaceBrush@@QEAAJAEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSI.c)
 * Callees:
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180017A10 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180057CB8 (-IsEquivalentTo@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1800BACD0 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 */

void __fastcall CSurfaceBrush::ApplyDirty(__int64 a1, CRectanglesShape *a2, float *a3)
{
  struct D2D_RECT_F v3; // xmm0
  float v6; // xmm6_4
  float v7; // xmm7_4
  __int64 v8; // r8
  float left; // xmm4_4
  float top; // xmm0_4
  float v11; // xmm1_4
  float right; // xmm2_4
  float v13; // xmm3_4
  float bottom; // xmm1_4
  struct D2D_RECT_F v15; // [rsp+20h] [rbp-30h] BYREF

  v3 = (struct D2D_RECT_F)_mm_loadu_si128((const __m128i *)(a1 + 200));
  v15 = v3;
  v6 = a3[1];
  v7 = *a3;
  v15.left = v3.left + *a3;
  v15.right = v3.right + v7;
  v15.top = v3.top + v6;
  v15.bottom = v3.bottom + v6;
  TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v15.left, 0.5, 0.5);
  left = v15.left;
  if ( v7 > v15.left )
  {
    v15.left = v7;
    left = v7;
  }
  top = v15.top;
  if ( v6 > v15.top )
  {
    v15.top = v6;
    top = v6;
  }
  v11 = *(float *)(v8 + 8);
  right = v15.right;
  if ( v15.right > v11 )
  {
    v15.right = *(FLOAT *)(v8 + 8);
    right = v11;
  }
  v13 = *(float *)(v8 + 12);
  bottom = v15.bottom;
  if ( v15.bottom > v13 )
  {
    v15.bottom = *(FLOAT *)(v8 + 12);
    bottom = v13;
  }
  if ( right > left
    && bottom > top
    && !TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsEquivalentTo(
          (const __m128i *)&v15,
          (const __m128i *)v8) )
  {
    CRectanglesShape::SetSingleRect(a2, &v15);
    *(_QWORD *)(a1 + 256) = a2;
  }
}
