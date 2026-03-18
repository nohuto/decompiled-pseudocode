/*
 * XREFs of ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z @ 0x180106A08
 * Callers:
 *     ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CD210 (-FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x180105FD8 (-HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801062E0 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x1801068C8 (-TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@.c)
 *     ?BeginFigure@CTransformedGeometryHelper@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1801069B0 (-BeginFigure@CTransformedGeometryHelper@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18012FFC8 (-HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0.c)
 *     ?AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUD2D_RECT_F@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@@@Z @ 0x18028C5CC (-AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUD2D_RECT_F@@PEBVCMILMatrix@@PEAUID2D1GeometrySin.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Transform(CMILMatrix *this, const struct D2D_POINT_2F *a2, struct D2D_POINT_2F *a3, int a4)
{
  unsigned __int32 v4; // xmm4_4
  signed __int64 v5; // r11
  float v7; // xmm3_4
  float v8; // xmm5_4
  char v9; // r9
  char v10; // dl
  float v11; // xmm3_4
  FLOAT v12; // xmm1_4

  v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v5 = (char *)a2 - (char *)a3;
  do
  {
    v7 = *(float *)((char *)&a3->x + v5);
    v8 = *(float *)((char *)&a3->y + v5);
    a3->x = (float)((float)(v8 * *((float *)this + 4)) + (float)(v7 * *(float *)this)) + *((float *)this + 12);
    a3->y = (float)((float)(v8 * *((float *)this + 5)) + (float)(v7 * *((float *)this + 1))) + *((float *)this + 13);
    if ( (char)(4 * *((_BYTE *)this + 65)) >> 6 == 1
      || (char)(4 * *((_BYTE *)this + 65)) >> 6 >= 0
      && (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                         (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)this + 3) & v4) * 61440.0)
                                       + (float)(COERCE_FLOAT(*((_DWORD *)this + 7) & v4) * 61440.0))
                               + COERCE_FLOAT(*((_DWORD *)this + 15) & v4))
                       - 1.0) & v4) < 0.000081380211
        ? (v9 = 1, v10 = -1)
        : (v9 = 0, v10 = 1),
          *((_BYTE *)this + 65) = (16 * v10) ^ (*((_BYTE *)this + 65) ^ (16 * v10)) & 0xCF,
          !v9) )
    {
      v11 = (float)((float)(v7 * *((float *)this + 3)) + (float)(v8 * *((float *)this + 7))) + *((float *)this + 15);
      if ( COERCE_FLOAT(LODWORD(v11) & v4) >= 0.000081380211 )
      {
        v12 = a3->y / v11;
        a3->x = a3->x / v11;
        a3->y = v12;
      }
    }
    ++a3;
    --a4;
  }
  while ( a4 );
}
