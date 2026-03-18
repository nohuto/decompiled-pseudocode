/*
 * XREFs of ?InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180105A64
 * Callers:
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801056F0 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18027EC20 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@@Z @ 0x180105D34 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_ea_180105D34.c)
 *     ?GetExtendMode@CGradientBrush@@QEBA?AW4Enum@ExtendMode@@XZ @ 0x18021CD70 (-GetExtendMode@CGradientBrush@@QEBA-AW4Enum@ExtendMode@@XZ.c)
 */

__int64 __fastcall CGradientBrush::InferVisualToTextureTransform(__int64 a1, __int64 a2, __int64 a3)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  float v8; // xmm2_4
  __int64 v9; // r10
  __int32 v10; // xmm1_4
  __int32 v11; // xmm2_4
  __int32 v12; // xmm3_4
  __int32 v13; // xmm4_4
  __int32 v14; // xmm5_4
  __int64 v15; // r9
  unsigned int v16; // ebx
  _DWORD v18[4]; // [rsp+30h] [rbp-9h] BYREF
  __m128i si128; // [rsp+40h] [rbp+7h] BYREF
  __m128i v20; // [rsp+50h] [rbp+17h]
  __m128i v21; // [rsp+60h] [rbp+27h]
  __m128i v22; // [rsp+70h] [rbp+37h]
  int v23; // [rsp+80h] [rbp+47h]

  v3 = FLOAT_1_0;
  v4 = 1.0 / *(float *)(a3 + 8);
  if ( (unsigned __int8)CGradientBrush::GetExtendMode(a1, a2, a3) == 1 && *(_BYTE *)(v6 + 242) )
    v8 = v4;
  else
    v8 = 0.0;
  if ( (unsigned __int8)CGradientBrush::GetExtendMode(v6, v5, v7) == 1 )
    v3 = 1.0 - v4;
  v23 = 10666;
  *(float *)&v18[2] = v3;
  *(float *)&v18[3] = v3;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v20 = _mm_load_si128((const __m128i *)&_xmm);
  *(float *)v18 = v8;
  *(float *)&v18[1] = v8;
  v21 = _mm_load_si128((const __m128i *)&_xmm);
  v22 = _mm_load_si128((const __m128i *)&_xmm);
  CMILMatrix::InferAffineMatrix(&si128, v18, v9);
  v10 = si128.m128i_i32[1];
  v11 = v20.m128i_i32[0];
  v12 = v20.m128i_i32[1];
  v13 = v22.m128i_i32[0];
  v14 = v22.m128i_i32[1];
  *(_DWORD *)v15 = si128.m128i_i32[0];
  *(_DWORD *)(v15 + 4) = v10;
  *(_DWORD *)(v15 + 8) = v11;
  *(_DWORD *)(v15 + 12) = v12;
  *(_DWORD *)(v15 + 16) = v13;
  *(_DWORD *)(v15 + 20) = v14;
  if ( D2D1InvertMatrix((D2D1_MATRIX_3X2_F *)v15) )
  {
    return 0;
  }
  else
  {
    v16 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A1138, 2u, -2003304441, 0x123u, 0LL);
  }
  return v16;
}
