/*
 * XREFs of ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x18020B724
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1801CCD80 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILM.c)
 *     ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180286D80 (-CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXA.c)
 * Callees:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029120 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180063BB0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

char __fastcall CFilterEffect::InvertTransformToCalc2DBounds(
        __m128 *a1,
        __int128 *a2,
        struct Windows::Foundation::Numerics::float4x4 *a3)
{
  __m128 v3; // xmm1
  __int32 v4; // eax
  char v6; // bl
  __int128 v7; // xmm0
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  bool v10; // al
  __int128 v12; // [rsp+20h] [rbp-39h] BYREF
  __int64 v13; // [rsp+30h] [rbp-29h]
  __m128 v14[4]; // [rsp+40h] [rbp-19h] BYREF
  __int32 v15; // [rsp+80h] [rbp+27h]
  __int128 v16; // [rsp+90h] [rbp+37h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+47h]

  v3 = a1[1];
  v4 = a1[4].m128_i32[0];
  v13 = 0LL;
  v12 = 0LL;
  v17 = 0LL;
  v6 = 1;
  v7 = *a2;
  v15 = v4;
  v14[1] = v3;
  v8 = a1[3];
  v16 = v7;
  v9 = *a1;
  v14[3] = v8;
  v14[0] = v9;
  v14[2] = a1[2];
  v10 = Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)v14, v14, a3);
  LOWORD(v15) = v15 & 0xC003;
  if ( !v10 )
    return 0;
  CMILMatrix::Transform3DBoundsHelper<1>((__int64)v14, (float *)&v16, (float *)&v12);
  *(_OWORD *)a3 = v12;
  return v6;
}
