/*
 * XREFs of ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x180107384
 * Callers:
 *     ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x180105FD8 (-HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18012FFC8 (-HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0.c)
 * Callees:
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005C4A4 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x18005EDC0 (-SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18006010C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 */

void __fastcall CD3DDevice::CalcHDRConvertUVTransform(
        int *a1,
        int *a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        CMILMatrix *a6)
{
  __m128i v6; // xmm6
  __m128i v7; // xmm7
  __m128i v8; // xmm9
  int v9; // eax
  __m128i v10; // xmm10
  unsigned int v11; // xmm0_4
  int v12; // eax
  unsigned int v13; // xmm1_4
  int v14; // eax
  __m128i v15; // xmm5
  __m128i v16; // xmm4
  __m128i v17; // xmm1
  float v18; // xmm0_4
  float v19; // xmm9_4
  float v20; // xmm10_4
  float v21; // xmm7_4
  float v22; // xmm6_4
  CMILMatrix *v23; // rcx
  enum DXGI_MODE_ROTATION v24; // r11d
  float v25; // xmm4_4
  float v26; // xmm5_4
  const struct CMILMatrix *v27; // rdx
  __int64 v28; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v29; // r8
  __int128 v30; // [rsp+28h] [rbp-E0h] BYREF
  struct D2D_RECT_F v31; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-C0h] BYREF
  float v33; // [rsp+50h] [rbp-B8h]
  float v34; // [rsp+54h] [rbp-B4h]
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  float v36; // [rsp+60h] [rbp-A8h]
  float v37; // [rsp+64h] [rbp-A4h]
  __m128i si128; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v39[4]; // [rsp+78h] [rbp-90h] BYREF
  int v40; // [rsp+B8h] [rbp-50h]
  _OWORD v41[4]; // [rsp+C8h] [rbp-40h] BYREF
  int v42; // [rsp+108h] [rbp+0h]
  _BYTE v43[64]; // [rsp+118h] [rbp+10h] BYREF
  int v44; // [rsp+158h] [rbp+50h]

  v6 = _mm_cvtsi32_si128(a3[3]);
  v7 = _mm_cvtsi32_si128(a3[2]);
  v8 = _mm_cvtsi32_si128(*a3);
  v9 = *a1;
  v10 = _mm_cvtsi32_si128(a3[1]);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(_QWORD *)&v30 = 0LL;
  v35 = 0LL;
  *(float *)&v11 = (float)v9;
  v12 = a1[1];
  v32 = 0LL;
  v44 = 0;
  *(float *)&v13 = (float)v12;
  v14 = *a2;
  *((_QWORD *)&v30 + 1) = __PAIR64__(v13, v11);
  v15 = _mm_cvtsi32_si128(*(_DWORD *)a5);
  v16 = _mm_cvtsi32_si128(*(_DWORD *)(a5 + 4));
  v37 = (float)a2[1];
  v17 = _mm_cvtsi32_si128(*(_DWORD *)(a5 + 12));
  v36 = (float)v14;
  v18 = (float)*(int *)(a5 + 8) - _mm_cvtepi32_ps(v15).m128_f32[0];
  LODWORD(v19) = _mm_cvtepi32_ps(v8).m128_u32[0];
  LODWORD(v20) = _mm_cvtepi32_ps(v10).m128_u32[0];
  LODWORD(v21) = _mm_cvtepi32_ps(v7).m128_u32[0];
  LODWORD(v22) = _mm_cvtepi32_ps(v6).m128_u32[0];
  v34 = _mm_cvtepi32_ps(v17).m128_f32[0] - _mm_cvtepi32_ps(v16).m128_f32[0];
  v31.left = v19;
  v31.top = v20;
  v31.right = v21;
  v31.bottom = v22;
  v33 = v18;
  CMILMatrix::InferAffineMatrix((__int64)a6, (float *)si128.m128i_i32, (float *)&v30);
  if ( v26 != 0.0 || v25 != 0.0 )
    CMILMatrix::Translate(v23, COERCE_FLOAT(LODWORD(v26) ^ _xmm), COERCE_FLOAT(LODWORD(v25) ^ _xmm));
  if ( v24 == DXGI_MODE_ROTATION_IDENTITY )
  {
    CMILMatrix::InferAffineMatrix((__int64)v43, (float *)&v32, &v31.left);
    v27 = (const struct CMILMatrix *)v43;
  }
  else
  {
    v40 = 0;
    v30 = 0LL;
    CMILMatrix::SetToRotation((CMILMatrix *)v39, v21 - v19, v22 - v20, v24);
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v39, &v31, (float *)&v30);
    CMILMatrix::InferAffineMatrix((__int64)v43, (float *)&v32, (float *)&v30);
    CMILMatrix::Multiply(a6, (const struct CMILMatrix *)v43);
    v41[0] = v39[0];
    v41[1] = v39[1];
    v41[2] = v39[2];
    v41[3] = v39[3];
    v42 = v40;
    CMILMatrix::Invert((CMILMatrix *)v41, v28, v29);
    v27 = (const struct CMILMatrix *)v41;
  }
  CMILMatrix::Multiply(a6, v27);
  CMILMatrix::InferAffineMatrix((__int64)v43, (float *)&v35, (float *)si128.m128i_i32);
  CMILMatrix::Multiply(a6, (const struct CMILMatrix *)v43);
}
