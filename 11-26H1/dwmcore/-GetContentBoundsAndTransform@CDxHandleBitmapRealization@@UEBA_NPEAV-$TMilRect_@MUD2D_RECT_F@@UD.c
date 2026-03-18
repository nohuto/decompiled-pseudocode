/*
 * XREFs of ?GetContentBoundsAndTransform@CDxHandleBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0PEAVCMILMatrix@@@Z @ 0x180204A10
 * Callers:
 *     ?GetContentBoundsAndTransform@CDxHandleBitmapRealization@@WBAA@EBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0PEAVCMILMatrix@@@Z @ 0x1802AB8B0 (-GetContentBoundsAndTransform@CDxHandleBitmapRealization@@WBAA@EBA_NPEAV-$TMilRect_@MUD2D_RECT_F.c)
 * Callees:
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180016450 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?CalcImageTransform@CBitmapRealization@@IEBA_NPEAVCMILMatrix@@@Z @ 0x18005EE70 (-CalcImageTransform@CBitmapRealization@@IEBA_NPEAVCMILMatrix@@@Z.c)
 *     ?CalcSourceRect@CBitmapRealization@@IEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18005F680 (-CalcSourceRect@CBitmapRealization@@IEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectU.c)
 *     ?CalcRotationTransform@CBitmapRealization@@IEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z @ 0x18005FC80 (-CalcRotationTransform@CBitmapRealization@@IEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800F2210 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x18028C4E4 (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 */

char __fastcall CDxHandleBitmapRealization::GetContentBoundsAndTransform(__int64 a1, __int64 a2, float *a3, __int64 a4)
{
  CBitmapRealization *v4; // r12
  int *v9; // r14
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm2_4
  __int32 v13; // xmm3_4
  float v14; // xmm5_4
  float v15; // xmm4_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm4_4
  _BYTE v22[64]; // [rsp+20h] [rbp-50h] BYREF
  int v23; // [rsp+60h] [rbp-10h]
  struct D2D_SIZE_U v24; // [rsp+A0h] [rbp+30h] BYREF
  float v25; // [rsp+B0h] [rbp+40h] BYREF

  v4 = (CBitmapRealization *)(a1 - 80);
  v9 = CBitmapRealization::CalcSourceRect(a1 - 80);
  v10 = (float)v9[1];
  v11 = (float)*v9;
  *(_QWORD *)a4 = 1065353216LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_DWORD *)(a4 + 16) = 0;
  *(_QWORD *)(a4 + 20) = 1065353216LL;
  *(_QWORD *)(a4 + 28) = 0LL;
  *(_DWORD *)(a4 + 36) = 0;
  *(_QWORD *)(a4 + 40) = 1065353216LL;
  *(_DWORD *)(a4 + 48) = LODWORD(v11) ^ _xmm;
  *(_QWORD *)(a4 + 52) = LODWORD(v10) ^ (unsigned int)_xmm;
  *(_DWORD *)(a4 + 60) = 1065353216;
  *(_BYTE *)(a4 + 65) &= 0xE9u;
  *(_BYTE *)(a4 + 65) |= 0x29u;
  *(_BYTE *)(a4 + 64) = -88;
  v24.width = v9[2] - *v9;
  v24.height = v9[3] - v9[1];
  v23 = 0;
  if ( CBitmapRealization::CalcRotationTransform(v4, &v24, (struct CMILMatrix *)v22) )
    CMILMatrix::Multiply((CMILMatrix *)a4, (const struct CMILMatrix *)v22);
  if ( CBitmapRealization::CalcImageTransform(v4, (struct CMILMatrix *)v22) )
    CMILMatrix::Multiply((CMILMatrix *)a4, (const struct CMILMatrix *)v22);
  if ( a3 )
  {
    *a3 = (float)*v9;
    a3[1] = (float)v9[1];
    a3[2] = (float)v9[2];
    a3[3] = (float)v9[3];
    *(_OWORD *)a2 = *(_OWORD *)a3;
  }
  if ( (*(_DWORD *)(a1 + 160) & 0x8000) != 0 )
  {
    v24.width = 0;
    v25 = 0.0;
    CMILMatrix::Get2DScaleDimensions((CMILMatrix *)a4, (float *)&v24, &v25);
    v12 = *(float *)&v24.width;
    COERCE_FLOAT(v13 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    if ( COERCE_FLOAT(v24.width & v13) < 0.0000011920929 )
      v12 = FLOAT_1_0;
    v14 = v25;
    if ( COERCE_FLOAT(LODWORD(v25) & v13) < 0.0000011920929 )
      v14 = FLOAT_1_0;
    v15 = *(float *)(a1 + 132);
    v16 = *(float *)(a1 + 120) / v12;
    v17 = (float)(*(float *)(a1 + 128) / v12) + *(float *)(a2 + 8);
    v18 = *(float *)(a1 + 124) / v14;
    *(float *)a2 = *(float *)a2 - v16;
    v19 = *(float *)(a2 + 4) - v18;
    *(float *)(a2 + 8) = v17;
    v20 = (float)(v15 / v14) + *(float *)(a2 + 12);
    *(float *)(a2 + 4) = v19;
    *(float *)(a2 + 12) = v20;
    CMILMatrix::PrependTranslate((CMILMatrix *)a4, v16, v18);
  }
  return CMILMatrix::IsIdentity<0>(a4) ^ 1;
}
