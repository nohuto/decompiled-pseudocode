/*
 * XREFs of ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18008BAF0
 * Callers:
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801942F0 (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180194650 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     _CLegacyRenderTarget::Render_::_43_::_lambda_1_::operator() @ 0x180252DCC (_CLegacyRenderTarget--Render_--_43_--_lambda_1_--operator().c)
 * Callees:
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800757E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x18008AEF0 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x18008AF40 (-FloorSat@CFloatFPU@@SAHM@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1E20 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::NotifyRenderedRect(__int64 a1, struct D2D_RECT_F *a2, char a3)
{
  __m128 v3; // xmm2
  __int64 v6; // rax
  __m128 si128; // xmm11
  __int64 v8; // r9
  __m128i x_low; // xmm3
  __m128i v10; // xmm7
  __m128i y_low; // xmm9
  __m128i v12; // xmm6
  int v13; // ecx
  __m128 v14; // xmm2
  __m128 v15; // xmm2
  int v16; // ecx
  __m128 v17; // xmm2
  __m128 v18; // xmm2
  int v19; // ecx
  __m128 v20; // xmm2
  __m128 v21; // xmm2
  int v22; // ecx
  __int64 v23; // rcx
  __int128 *v24; // rdx
  __int64 result; // rax
  CMILMatrix *v26; // rcx
  float *v27; // r9
  float v28; // xmm4_4
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __m128 v31; // rt1
  __m128 v32; // rt1
  __m128 v33; // rt1
  __m128 v34; // rt1
  unsigned __int64 v35; // rax
  float x; // xmm1_4
  float y; // xmm0_4
  float v38; // [rsp+20h] [rbp-B8h]
  float v39; // [rsp+20h] [rbp-B8h]
  float v40; // [rsp+20h] [rbp-B8h]
  float v41; // [rsp+20h] [rbp-B8h]
  __int128 v42; // [rsp+30h] [rbp-A8h] BYREF
  struct D2D_POINT_2F v43[4]; // [rsp+40h] [rbp-98h] BYREF

  if ( !a2 )
  {
    v23 = *(_QWORD *)(a1 + 200);
    v24 = 0LL;
    goto LABEL_24;
  }
  v42 = 0LL;
  if ( !a3 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 88) + 56LL))(a1 + 88);
    si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
    v8 = v6;
    if ( (char)(4 * *(_BYTE *)(v6 + 64)) >> 6 != 1 )
    {
      if ( (char)(4 * *(_BYTE *)(v6 + 64)) >> 6 < 0 )
      {
LABEL_5:
        v10 = (__m128i)*(unsigned int *)(v8 + 48);
        v12 = (__m128i)*(unsigned int *)(v8 + 52);
        x_low = v10;
        *(float *)x_low.m128i_i32 = *(float *)v10.m128i_i32 + a2->left;
        *(float *)v10.m128i_i32 = *(float *)v10.m128i_i32 + a2->right;
        y_low = v12;
        *(float *)y_low.m128i_i32 = *(float *)v12.m128i_i32 + a2->top;
        *(float *)v12.m128i_i32 = *(float *)v12.m128i_i32 + a2->bottom;
LABEL_6:
        if ( (_mm_cvtsi128_si32(x_low) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v3.m128_f32[0] = (float)(int)*(float *)x_low.m128i_i32 - *(float *)x_low.m128i_i32;
          v31.m128_f32[0] = FLOAT_N0_5;
          v13 = (int)*(float *)x_low.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v3, v31));
        }
        else
        {
          v38 = *(float *)x_low.m128i_i32 + 6291456.25;
          v13 = (int)(LODWORD(v38) << 10) >> 11;
        }
        v14 = (__m128)x_low;
        v14.m128_f32[0] = *(float *)x_low.m128i_i32 - (float)v13;
        v15 = _mm_and_ps(v14, si128);
        if ( v15.m128_f32[0] > 0.00390625 )
          v13 = CFloatFPU::FloorSat(*(float *)x_low.m128i_i32);
        LODWORD(v42) = v13;
        if ( (_mm_cvtsi128_si32(y_low) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v15.m128_f32[0] = (float)(int)*(float *)y_low.m128i_i32 - *(float *)y_low.m128i_i32;
          v32.m128_f32[0] = FLOAT_N0_5;
          v16 = (int)*(float *)y_low.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v15, v32));
        }
        else
        {
          v39 = *(float *)y_low.m128i_i32 + 6291456.25;
          v16 = (int)(LODWORD(v39) << 10) >> 11;
        }
        v17 = (__m128)y_low;
        v17.m128_f32[0] = *(float *)y_low.m128i_i32 - (float)v16;
        v18 = _mm_and_ps(v17, si128);
        if ( v18.m128_f32[0] > 0.00390625 )
          v16 = CFloatFPU::FloorSat(*(float *)y_low.m128i_i32);
        DWORD1(v42) = v16;
        if ( (_mm_cvtsi128_si32(v10) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v18.m128_f32[0] = (float)(int)*(float *)v10.m128i_i32 - *(float *)v10.m128i_i32;
          v33.m128_f32[0] = FLOAT_N0_5;
          v19 = (int)*(float *)v10.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v18, v33));
        }
        else
        {
          v40 = *(float *)v10.m128i_i32 + 6291456.25;
          v19 = (int)(LODWORD(v40) << 10) >> 11;
        }
        v20 = (__m128)v10;
        v20.m128_f32[0] = *(float *)v10.m128i_i32 - (float)v19;
        v21 = _mm_and_ps(v20, si128);
        if ( v21.m128_f32[0] > 0.00390625 )
          v19 = CFloatFPU::CeilingSat(*(float *)v10.m128i_i32);
        DWORD2(v42) = v19;
        if ( (_mm_cvtsi128_si32(v12) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v21.m128_f32[0] = (float)(int)*(float *)v12.m128i_i32 - *(float *)v12.m128i_i32;
          v34.m128_f32[0] = FLOAT_N0_5;
          v22 = (int)*(float *)v12.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v21, v34));
        }
        else
        {
          v41 = *(float *)v12.m128i_i32 + 6291456.25;
          v22 = (int)(LODWORD(v41) << 10) >> 11;
        }
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v12.m128i_i32 - (float)v22) & si128.m128_i32[0]) > 0.00390625 )
          v22 = CFloatFPU::CeilingSat(*(float *)v12.m128i_i32);
        HIDWORD(v42) = v22;
        goto LABEL_23;
      }
      if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v6) )
      {
        v3 = (__m128)(unsigned int)FLOAT_0_000081380211;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v8 - 1.0) & si128.m128_i32[0]) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v8 + 20) - 1.0) & si128.m128_i32[0]) < 0.000081380211 )
        {
          *(_BYTE *)(v8 + 64) = *(_BYTE *)(v8 + 64) & 0xCF ^ 0x30;
          goto LABEL_5;
        }
      }
      *(_BYTE *)(v8 + 64) = *(_BYTE *)(v8 + 64) & 0xCF ^ 0x10;
    }
    if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v8) )
    {
      v3 = (__m128)*(unsigned int *)v27;
      v12 = (__m128i)*((unsigned int *)v27 + 5);
      x_low = (__m128i)v3;
      y_low = v12;
      v28 = *(float *)v12.m128i_i32;
      v10 = (__m128i)v3;
      *(float *)x_low.m128i_i32 = (float)(v3.m128_f32[0] * a2->left) + v27[12];
      *(float *)y_low.m128i_i32 = (float)(*(float *)v12.m128i_i32 * a2->top) + v27[13];
      *(float *)v10.m128i_i32 = (float)(v3.m128_f32[0] * a2->right) + v27[12];
      *(float *)v12.m128i_i32 = (float)(*(float *)v12.m128i_i32 * a2->bottom) + v27[13];
      if ( v3.m128_f32[0] <= 0.0 || v28 <= 0.0 )
      {
        if ( *(float *)x_low.m128i_i32 > *(float *)v10.m128i_i32 )
        {
          v29 = x_low;
          x_low = v10;
          v10 = v29;
        }
        if ( *(float *)y_low.m128i_i32 > *(float *)v12.m128i_i32 )
        {
          v30 = y_low;
          y_low = v12;
          v12 = v30;
        }
      }
    }
    else
    {
      CMILMatrix::Transform2DRectToPerspective(v26, a2, v43);
      x_low = (__m128i)LODWORD(v43[0].x);
      v35 = 1LL;
      y_low = (__m128i)LODWORD(v43[0].y);
      v10 = (__m128i)LODWORD(v43[0].x);
      v12 = (__m128i)LODWORD(v43[0].y);
      do
      {
        x = v43[v35].x;
        y = v43[v35].y;
        *(float *)x_low.m128i_i32 = fminf(*(float *)x_low.m128i_i32, x);
        ++v35;
        *(float *)y_low.m128i_i32 = fminf(*(float *)y_low.m128i_i32, y);
        *(float *)v10.m128i_i32 = fmaxf(*(float *)v10.m128i_i32, x);
        *(float *)v12.m128i_i32 = fmaxf(*(float *)v12.m128i_i32, y);
      }
      while ( v35 < 4 );
    }
    goto LABEL_6;
  }
  v42 = *(_OWORD *)PixelAlign((int *)v43, (unsigned int *)a2, *(double *)v3.m128_u64);
LABEL_23:
  v23 = *(_QWORD *)(a1 + 200);
  v24 = &v42;
LABEL_24:
  result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(v23 + 24) + 120LL))(v23 + 24, v24);
  *(_BYTE *)(a1 + 32512) = 1;
  return result;
}
