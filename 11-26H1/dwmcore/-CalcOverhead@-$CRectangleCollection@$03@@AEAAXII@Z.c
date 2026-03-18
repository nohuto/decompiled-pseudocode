/*
 * XREFs of ?CalcOverhead@?$CRectangleCollection@$03@@AEAAXII@Z @ 0x180021EB0
 * Callers:
 *     ?EnsureWeights@?$CRectangleCollection@$03@@AEAAXXZ @ 0x18001FE14 (-EnsureWeights@-$CRectangleCollection@$03@@AEAAXXZ.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800211E0 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800227A0 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?Merge@?$CRectangleCollection@$03@@QEAA_NII@Z @ 0x1801A4850 (-Merge@-$CRectangleCollection@$03@@QEAA_NII@Z.c)
 * Callees:
 *     ?HasValidValues@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18005B1E0 (-HasValidValues@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CRectangleCollection<4>::CalcOverhead(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rcx
  unsigned int v6; // r11d
  int v7; // eax
  __m128 v8; // xmm2
  float v9; // xmm6_4
  float v10; // xmm4_4
  float v11; // xmm5_4
  BOOL v12; // edx
  float v13; // xmm8_4
  float v14; // xmm7_4
  float v15; // xmm11_4
  float v16; // xmm9_4
  float v17; // xmm8_4
  float v18; // xmm4_4
  float v19; // xmm10_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm6_4
  float v23; // xmm5_4
  float v24; // xmm2_4
  float v25; // xmm2_4
  __int64 result; // rax
  __m128i v27; // [rsp+20h] [rbp-78h]

  v3 = a1;
  v4 = 2LL * a2;
  v5 = 16LL * a3 + a1 + 4;
  v6 = a2;
  v7 = 1;
  v8 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 16LL * a2 + 4));
  v9 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
  LODWORD(v10) = _mm_shuffle_ps(v8, v8, 255).m128_u32[0];
  LODWORD(v11) = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
  v12 = v9 <= v8.m128_f32[0] || v10 <= v11;
  v13 = *(float *)v5;
  v14 = *(float *)(v5 + 8);
  if ( v14 > *(float *)v5 && *(float *)(v5 + 12) > *(float *)(v5 + 4) )
    v7 = 0;
  if ( v12 )
  {
    if ( v7 || !(unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::HasValidValues() )
    {
      v10 = 0.0;
      v9 = 0.0;
      v11 = 0.0;
      v8.m128_i32[0] = 0;
    }
    else
    {
      v8 = (__m128)_mm_loadu_si128((const __m128i *)v5);
      LODWORD(v10) = _mm_shuffle_ps(v8, v8, 255).m128_u32[0];
      LODWORD(v9) = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
      LODWORD(v11) = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
    }
  }
  else if ( !v7 )
  {
    v8.m128_i32[0] = fminf(v13, v8.m128_f32[0]);
    v11 = fminf(*(float *)(v5 + 4), v11);
    v9 = fmaxf(v14, v9);
    v10 = fmaxf(*(float *)(v5 + 12), v10);
  }
  v15 = *(float *)(v5 + 4);
  v27 = _mm_loadu_si128((const __m128i *)(v3 + 8 * v4 + 4));
  v16 = *(float *)&v27.m128i_i32[1];
  v17 = fmaxf(v13, *(float *)v27.m128i_i32);
  v18 = (float)(v10 - v11) * (float)(v9 - v8.m128_f32[0]);
  v19 = *(float *)&v27.m128i_i32[1];
  if ( v15 > *(float *)&v27.m128i_i32[1] )
  {
    v16 = *(float *)(v5 + 4);
    v19 = v16;
  }
  v20 = *(float *)&v27.m128i_i32[2];
  v21 = *(float *)&v27.m128i_i32[2];
  v22 = *(float *)&v27.m128i_i32[2];
  if ( *(float *)&v27.m128i_i32[2] > v14 )
  {
    v20 = v14;
    v21 = v14;
    v22 = v14;
  }
  v23 = *(float *)(v5 + 12);
  v24 = *(float *)&v27.m128i_i32[3];
  if ( *(float *)&v27.m128i_i32[3] > v23 )
  {
    v24 = *(float *)(v5 + 12);
    v21 = v22;
  }
  if ( v20 <= v17 || v24 <= v19 )
  {
    v16 = 0.0;
    v17 = 0.0;
    v24 = 0.0;
    v21 = 0.0;
  }
  v25 = (float)((float)((float)((float)(v24 - v16) * (float)(v21 - v17)) + v18)
              - (float)((float)(*(float *)(v3 + 8 * v4 + 16) - *(float *)(v3 + 8 * v4 + 8))
                      * (float)(*(float *)(v3 + 8 * v4 + 12) - *(float *)(v3 + 8 * v4 + 4))))
      - (float)((float)(v14 - *(float *)v5) * (float)(v23 - v15));
  if ( v25 < 0.0 )
  {
    v25 = 0.0;
    if ( v18 == 0.0 )
      v18 = FLOAT_1_0;
  }
  result = v6 + ((a3 * (a3 - 1)) >> 1);
  *(float *)(v3 + 8 * result + 84) = v25;
  *(float *)(v3 + 8 * result + 88) = v25 / v18;
  return result;
}
