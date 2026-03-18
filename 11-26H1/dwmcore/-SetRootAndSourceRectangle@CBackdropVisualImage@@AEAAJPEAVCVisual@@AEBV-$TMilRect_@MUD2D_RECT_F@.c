/*
 * XREFs of ?SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009647C
 * Callers:
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180092940 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RE.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1800949F0 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?clear@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x18009B5B8 (-clear@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CBackdropVisualImage::SetRootAndSourceRectangle(__int64 a1, __int64 a2, unsigned int *a3)
{
  double v3; // xmm2_8
  __int64 v6; // rdx
  __int64 v7; // rdi
  int *v8; // rax
  struct D2D_RECT_F *v9; // r9
  double v10; // xmm2_8
  __int32 v11; // xmm3_4
  float v12; // xmm0_4
  __m128 v13; // xmm1
  float v14; // xmm6_4
  int *v15; // rax
  float v16; // xmm4_4
  float v17; // xmm2_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm6_4
  double v23; // xmm2_8
  int *v24; // rax
  float v25; // xmm1_4
  float v26; // xmm0_4
  _BYTE v27[32]; // [rsp+28h] [rbp-29h] BYREF
  float v28; // [rsp+48h] [rbp-9h]
  float v29; // [rsp+4Ch] [rbp-5h]

  v7 = 0LL;
  if ( IsEmpty((const struct D2D_RECT_F *)a3) )
  {
    std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::clear(a1 + 168);
  }
  else
  {
    if ( *(_QWORD *)(a1 + 120) != v6 )
      *(_QWORD *)(a1 + 120) = v6;
    v8 = PixelAlign((int *)v27, a3, v3);
    do
    {
      *(float *)&v27[4 * v7 + 16] = (float)v8[v7];
      ++v7;
    }
    while ( v7 < 4 );
    *(_QWORD *)&v10 = *(unsigned int *)(a1 + 1696);
    COERCE_FLOAT(v11 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    v12 = *(float *)(a1 + 1696) - 1.0;
    v13 = *(__m128 *)&v27[16];
    *(_OWORD *)(a1 + 96) = *(_OWORD *)&v27[16];
    if ( COERCE_FLOAT(LODWORD(v12) & v11) >= 0.000081380211
      || (v14 = *(float *)(a1 + 1700), COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - 1.0) & v11) >= 0.000081380211) )
    {
      v14 = *(float *)(a1 + 1700);
      *(_DWORD *)&v27[16] = LODWORD(v10);
      *(_OWORD *)v27 = 0LL;
      *(float *)&v10 = *(float *)&v10 * 0.0;
      *(_QWORD *)&v27[20] = 0LL;
      *(float *)&v27[28] = v14;
      v28 = 0.0 - *(float *)&v10;
      v29 = 0.0 - (float)(v14 * 0.0);
      D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
        (D2DMatrixHelper *)a3,
        (const struct D2D_RECT_F *)&v27[16],
        (const struct D2D_MATRIX_3X2_F *)v27,
        v9);
      *(_OWORD *)&v27[16] = *(_OWORD *)v27;
      v15 = PixelAlign((int *)v27, (unsigned int *)&v27[16], v10);
      v11 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
      v16 = (float)v15[3] - (float)v15[1];
      v17 = (float)v15[2] - (float)*v15;
    }
    else
    {
      v16 = _mm_shuffle_ps(v13, v13, 255).m128_f32[0] - _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
      v17 = _mm_shuffle_ps(v13, v13, 170).m128_f32[0] - v13.m128_f32[0];
    }
    *(float *)(a1 + 112) = v17;
    *(float *)(a1 + 116) = v16;
    v18 = *(float *)(a1 + 112);
    v19 = (float)*(int *)(a1 + 1712);
    if ( v18 > v19 || *(float *)(a1 + 116) > v19 )
    {
      if ( v18 <= *(float *)(a1 + 116) )
        v21 = v19 / *(float *)(a1 + 116);
      else
        v21 = v19 / v18;
      HIDWORD(v23) = 0;
      v22 = v14 * v21;
      *(float *)&v23 = v21 * *(float *)(a1 + 1696);
      *(float *)(a1 + 1700) = v22;
      *(_DWORD *)(a1 + 1696) = LODWORD(v23);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v23 - 1.0) & v11) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(v22 - 1.0) & v11) >= 0.000081380211 )
      {
        *(_DWORD *)&v27[16] = LODWORD(v23);
        *(float *)&v23 = *(float *)&v23 * 0.0;
        *(float *)&v27[28] = v22;
        *(_QWORD *)&v27[20] = 0LL;
        *(_OWORD *)v27 = 0LL;
        v28 = 0.0 - *(float *)&v23;
        v29 = 0.0 - (float)(v22 * 0.0);
        D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
          (D2DMatrixHelper *)a3,
          (const struct D2D_RECT_F *)&v27[16],
          (const struct D2D_MATRIX_3X2_F *)v27,
          v9);
        *(_OWORD *)&v27[16] = *(_OWORD *)v27;
        v24 = PixelAlign((int *)v27, (unsigned int *)&v27[16], v23);
        v25 = (float)v24[2];
        v26 = (float)*v24;
        *(float *)(a1 + 116) = (float)v24[3] - (float)v24[1];
        *(float *)(a1 + 112) = v25 - v26;
      }
    }
  }
  return 0LL;
}
