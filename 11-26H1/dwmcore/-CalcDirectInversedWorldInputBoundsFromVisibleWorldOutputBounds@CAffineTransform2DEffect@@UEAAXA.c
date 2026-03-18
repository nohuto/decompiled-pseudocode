/*
 * XREFs of ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180286D80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800590B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x180197C44 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x18020B724 (-InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?TransformBounds@CAffineTransform2DEffect@@IEAAXAEAVMatrix3x2F@D2D1@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV4@@Z @ 0x1802873F8 (-TransformBounds@CAffineTransform2DEffect@@IEAAXAEAVMatrix3x2F@D2D1@@AEBV-$TMilRect_@MUD2D_RECT_.c)
 */

char __fastcall CAffineTransform2DEffect::CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __m128 *a2,
        struct D2D_RECT_F *a3,
        FLOAT *a4,
        struct D2D_RECT_F *a5,
        struct D2D_RECT_F *a6)
{
  FLOAT v7; // xmm1_4
  FLOAT v8; // xmm2_4
  __int32 v10; // xmm3_4
  __int32 v13; // xmm1_4
  __int64 v14; // xmm0_8
  unsigned int v15; // xmm1_4
  char result; // al
  __int64 v17; // rcx
  float left; // xmm0_4
  float top; // xmm2_4
  float right; // xmm3_4
  float bottom; // xmm4_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  FLOAT *p_top; // rdx
  struct D2D_RECT_F v26; // [rsp+20h] [rbp-50h] BYREF
  __int64 v27; // [rsp+30h] [rbp-40h]
  __m128i si128; // [rsp+38h] [rbp-38h] BYREF
  int v29; // [rsp+48h] [rbp-28h]
  int v30; // [rsp+4Ch] [rbp-24h]
  D2D1_MATRIX_3X2_F v31; // [rsp+50h] [rbp-20h] BYREF

  v7 = a2->m128_f32[1];
  v8 = a2[3].m128_f32[1];
  v10 = a2[3].m128_i32[0];
  LODWORD(v31.m11) = a2->m128_i32[0];
  LODWORD(v31.m21) = a2[1].m128_i32[0];
  v31.m12 = v7;
  v13 = a2[1].m128_i32[1];
  v31.dy = v8;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(_QWORD *)&v31.m[1][1] = __PAIR64__(v10, v13);
  v29 = v10 ^ _xmm;
  v30 = LODWORD(v8) ^ _xmm;
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v26,
    (const struct D2D1::Matrix3x2F *)&v31,
    (const struct D2D1::Matrix3x2F *)&si128);
  v14 = v27;
  *(_OWORD *)&v31.m11 = *(_OWORD *)(a1 + 364);
  v15 = *(_DWORD *)(a1 + 380);
  *(struct D2D_RECT_F *)(a1 + 400) = v26;
  *(_QWORD *)(a1 + 416) = v14;
  *(_QWORD *)&v31.m[2][0] = __PAIR64__(*(_DWORD *)(a1 + 384), v15);
  result = D2D1::Matrix3x2F::Invert(&v31);
  if ( result
    && (*a6 = *a3,
        si128 = 0LL,
        v26 = *a3,
        (result = CFilterEffect::InvertTransformToCalc2DBounds(
                    a2,
                    (__int128 *)&v26,
                    (struct Windows::Foundation::Numerics::float4x4 *)&si128)) != 0) )
  {
    CAffineTransform2DEffect::TransformBounds(v17, &v31, &si128, &si128);
    CMILMatrix::Transform2DBoundsHelper<1>((__int64)a2, (const struct D2D_RECT_F *)&si128, &v26.left);
    left = v26.left;
    top = v26.top;
    right = v26.right;
    bottom = v26.bottom;
    a5->left = v26.left;
    a5->top = top;
    a5->right = right;
    a5->bottom = bottom;
    if ( *a4 > left )
      a5->left = *a4;
    v22 = a4[1];
    if ( v22 > top )
      a5->top = v22;
    v23 = a4[2];
    if ( right > v23 )
      a5->right = v23;
    v24 = a4[3];
    if ( bottom > v24 )
      a5->bottom = v24;
    result = IsEmpty(a5);
    if ( result )
    {
      *(_QWORD *)&a5->right = 0LL;
      *p_top = 0.0;
      a5->left = 0.0;
    }
  }
  else
  {
    p_top = &a5->top;
    *a5 = *a3;
    *a6 = *a3;
  }
  *(float *)(a1 + 392) = a5->left - a2[3].m128_f32[0];
  *(float *)(a1 + 396) = *p_top - a2[3].m128_f32[1];
  return result;
}
