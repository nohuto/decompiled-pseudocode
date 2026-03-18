/*
 * XREFs of ?PixelAlignOccluder@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180074CC8
 * Callers:
 *     ?AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180074510 (-AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180202EAC (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 * Callees:
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x18008AEF0 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x18008AF40 (-FloorSat@CFloatFPU@@SAHM@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
int *__fastcall PixelAlignOccluder(int *a1, unsigned int *a2, double a3)
{
  __m128i v3; // xmm4
  int v6; // ecx
  __m128 si128; // xmm3
  __m128 v8; // xmm2
  __m128 v9; // xmm2
  int v10; // eax
  __m128i v11; // xmm4
  int v12; // ecx
  __m128 v13; // xmm2
  __m128 v14; // xmm2
  int v15; // eax
  __m128i v16; // xmm4
  int v17; // ecx
  __m128 v18; // xmm2
  __m128 v19; // xmm2
  int v20; // eax
  __m128i v21; // xmm4
  int v22; // ecx
  int *result; // rax
  __m128 v24; // rt1
  float v25; // [rsp+40h] [rbp+8h]
  float v26; // [rsp+40h] [rbp+8h]
  float v27; // [rsp+40h] [rbp+8h]
  float v28; // [rsp+40h] [rbp+8h]

  v3 = (__m128i)*a2;
  if ( (_mm_cvtsi128_si32(v3) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)*(float *)v3.m128i_i32 - *(float *)v3.m128i_i32;
    v6 = (int)*(float *)v3.m128i_i32
       - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    v25 = *(float *)v3.m128i_i32 + 6291456.25;
    v6 = (int)(LODWORD(v25) << 10) >> 11;
  }
  si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
  v8 = (__m128)*a2;
  v8.m128_f32[0] = *(float *)v3.m128i_i32 - (float)v6;
  v9 = _mm_and_ps(v8, si128);
  if ( v9.m128_f32[0] > 0.00390625 )
  {
    v10 = CFloatFPU::CeilingSat(*(float *)v3.m128i_i32);
    si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
    v6 = v10;
  }
  v11 = (__m128i)a2[1];
  *a1 = v6;
  if ( (_mm_cvtsi128_si32(v11) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v9.m128_f32[0] = (float)(int)*(float *)v11.m128i_i32 - *(float *)v11.m128i_i32;
    v12 = (int)*(float *)v11.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v9, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    v26 = *(float *)v11.m128i_i32 + 6291456.25;
    v12 = (int)(LODWORD(v26) << 10) >> 11;
  }
  v13 = (__m128)v11;
  v13.m128_f32[0] = *(float *)v11.m128i_i32 - (float)v12;
  v14 = _mm_and_ps(v13, si128);
  if ( v14.m128_f32[0] > 0.00390625 )
  {
    v15 = CFloatFPU::CeilingSat(*(float *)v11.m128i_i32);
    si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
    v12 = v15;
  }
  v16 = (__m128i)a2[2];
  a1[1] = v12;
  if ( (_mm_cvtsi128_si32(v16) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v14.m128_f32[0] = (float)(int)*(float *)v16.m128i_i32 - *(float *)v16.m128i_i32;
    v17 = (int)*(float *)v16.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v14, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    v27 = *(float *)v16.m128i_i32 + 6291456.25;
    v17 = (int)(LODWORD(v27) << 10) >> 11;
  }
  v18 = (__m128)v16;
  v18.m128_f32[0] = *(float *)v16.m128i_i32 - (float)v17;
  v19 = _mm_and_ps(v18, si128);
  if ( v19.m128_f32[0] > 0.00390625 )
  {
    v20 = CFloatFPU::FloorSat(*(float *)v16.m128i_i32);
    si128.m128_i32[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    v17 = v20;
  }
  v21 = (__m128i)a2[3];
  a1[2] = v17;
  if ( (_mm_cvtsi128_si32(v21) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v19.m128_f32[0] = (float)(int)*(float *)v21.m128i_i32 - *(float *)v21.m128i_i32;
    v24.m128_f32[0] = FLOAT_N0_5;
    v22 = (int)*(float *)v21.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v19, v24));
  }
  else
  {
    v28 = *(float *)v21.m128i_i32 + 6291456.25;
    v22 = (int)(LODWORD(v28) << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v21.m128i_i32 - (float)v22) & si128.m128_i32[0]) > 0.00390625 )
    v22 = CFloatFPU::FloorSat(*(float *)v21.m128i_i32);
  result = a1;
  a1[3] = v22;
  return result;
}
