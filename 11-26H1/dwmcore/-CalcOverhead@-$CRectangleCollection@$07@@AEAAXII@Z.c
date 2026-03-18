/*
 * XREFs of ?CalcOverhead@?$CRectangleCollection@$07@@AEAAXII@Z @ 0x18005B3F0
 * Callers:
 *     ?UpdateOverhead@?$CRectangleCollection@$07@@AEAAXII@Z @ 0x18005AB30 (-UpdateOverhead@-$CRectangleCollection@$07@@AEAAXII@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleCollection<8>::CalcOverhead(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  int v6; // r8d
  __m128 v8; // xmm2
  float v9; // xmm5_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  int v12; // edx
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm8_4
  float v16; // xmm11_4
  float v17; // xmm6_4
  float v18; // xmm3_4
  float v19; // xmm9_4
  float v20; // xmm0_4
  float v21; // xmm4_4
  float v22; // xmm2_4
  float v23; // xmm7_4
  float v24; // xmm5_4
  float v25; // xmm1_4
  float v26; // xmm2_4
  __int64 result; // rax
  __int128 v28; // [rsp+0h] [rbp-78h]

  v3 = 2LL * a3;
  v4 = 2LL * a2;
  v6 = 0;
  v8 = *(__m128 *)(a1 + 16LL * a2 + 4);
  v9 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
  if ( v9 <= v8.m128_f32[0] )
  {
    v10 = v8.m128_f32[3];
    v11 = v8.m128_f32[1];
    goto LABEL_24;
  }
  v10 = _mm_shuffle_ps(v8, v8, 255).m128_f32[0];
  v11 = _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
  if ( v10 <= v11 )
  {
LABEL_24:
    v12 = 1;
    goto LABEL_4;
  }
  v12 = 0;
LABEL_4:
  v13 = *(float *)(a1 + 8 * v3 + 4);
  v14 = *(float *)(a1 + 8 * v3 + 12);
  if ( v14 <= v13 || *(float *)(a1 + 8 * v3 + 16) <= *(float *)(a1 + 8 * v3 + 8) )
    v6 = 1;
  if ( v12 )
  {
    if ( v6 )
    {
      v10 = 0.0;
      v9 = 0.0;
      v11 = 0.0;
      v8.m128_i32[0] = 0;
    }
    else
    {
      v8 = *(__m128 *)(a1 + 8 * v3 + 4);
      LODWORD(v10) = _mm_shuffle_ps(v8, v8, 255).m128_u32[0];
      LODWORD(v9) = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
      LODWORD(v11) = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
    }
  }
  else if ( !v6 )
  {
    v9 = fmaxf(v14, v9);
    v11 = fminf(*(float *)(a1 + 8 * v3 + 8), v11);
    v8.m128_i32[0] = fminf(v13, v8.m128_f32[0]);
    v10 = fmaxf(*(float *)(a1 + 8 * v3 + 16), v10);
  }
  v15 = *(float *)(a1 + 8 * v3 + 8);
  v28 = *(_OWORD *)(a1 + 8 * v4 + 4);
  LODWORD(v16) = HIDWORD(*(_QWORD *)(a1 + 8 * v4 + 4));
  v17 = fmaxf(v13, *(float *)&v28);
  v18 = (float)(v10 - v11) * (float)(v9 - v8.m128_f32[0]);
  v19 = v16;
  if ( v15 > *((float *)&v28 + 1) )
  {
    v16 = *(float *)(a1 + 8 * v3 + 8);
    v19 = v16;
  }
  LODWORD(v20) = *(_QWORD *)(a1 + 8 * v4 + 12);
  v21 = *(float *)(a1 + 8 * v3 + 12);
  v22 = v20;
  v23 = v20;
  if ( *((float *)&v28 + 2) > v21 )
  {
    v20 = *(float *)(a1 + 8 * v3 + 12);
    v22 = v20;
    v23 = v20;
  }
  v24 = *(float *)(a1 + 8 * v3 + 16);
  LODWORD(v25) = HIDWORD(*(_OWORD *)(a1 + 8 * v4 + 4));
  if ( *((float *)&v28 + 3) > v24 )
  {
    v25 = *(float *)(a1 + 8 * v3 + 16);
    v22 = v23;
  }
  if ( v20 <= v17 || v25 <= v19 )
  {
    v16 = 0.0;
    v17 = 0.0;
    v25 = 0.0;
    v22 = 0.0;
  }
  v26 = (float)((float)((float)((float)(v22 - v17) * (float)(v25 - v16)) + v18)
              - (float)((float)(*(float *)(a1 + 8 * v4 + 16) - *(float *)(a1 + 8 * v4 + 8))
                      * (float)(*(float *)(a1 + 8 * v4 + 12) - *(float *)(a1 + 8 * v4 + 4))))
      - (float)((float)(v24 - v15) * (float)(v21 - *(float *)(a1 + 8 * v3 + 4)));
  if ( v26 < 0.0 )
  {
    v26 = 0.0;
    if ( v18 == 0.0 )
      v18 = FLOAT_1_0;
  }
  result = a2 + ((a3 * (a3 - 1)) >> 1);
  *(float *)(a1 + 8 * result + 148) = v26;
  *(float *)(a1 + 8 * result + 152) = v26 / v18;
  return result;
}
