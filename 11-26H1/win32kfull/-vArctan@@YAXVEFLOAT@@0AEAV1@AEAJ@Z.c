/*
 * XREFs of ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1401104E0
 * Callers:
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x140100D48 (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 *     cjIFIMetricsToOTMW @ 0x14010E0AC (cjIFIMetricsToOTMW.c)
 *     NtGdiArcInternal @ 0x140110940 (NtGdiArcInternal.c)
 *     ?GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z @ 0x140111F1C (-GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z.c)
 * Callees:
 *     eFraction @ 0x1401126F4 (eFraction.c)
 */

__int64 __fastcall vArctan(unsigned int a1, unsigned int a2, _DWORD *a3, int *a4)
{
  __m128i v4; // xmm5
  int v6; // edx
  __m128 v7; // xmm1
  __m128i v9; // xmm0
  int v10; // r9d
  unsigned int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rax
  float *v14; // r10
  unsigned int v15; // r11d
  double v16; // xmm0_8
  float v17; // xmm4_4
  float v18; // xmm5_4
  __int64 result; // rax
  float *v20; // rax
  float v21; // xmm0_4
  float *v22; // rax

  v4 = _mm_cvtsi32_si128(a2);
  v6 = 0;
  v7 = (__m128)_mm_cvtsi32_si128(a1);
  if ( v7.m128_f32[0] < 0.0 )
    v7 = _mm_xor_ps(v7, (__m128)(unsigned int)_xmm);
  if ( *(float *)v4.m128i_i32 < 0.0 )
    v4 = (__m128i)_mm_xor_ps((__m128)v4, (__m128)(unsigned int)_xmm);
  if ( *(float *)v4.m128i_i32 > v7.m128_f32[0] )
  {
    v9 = (__m128i)v7;
    v7.m128_i32[0] = v4.m128i_i32[0];
    v4 = v9;
  }
  if ( v7.m128_f32[0] == 0.0 )
  {
    result = FP_0_0;
    *a3 = FP_0_0;
    goto LABEL_21;
  }
  *(float *)v4.m128i_i32 = (float)(*(float *)v4.m128i_i32 * FP_ARCTAN_TABLE_SIZE) / v7.m128_f32[0];
  v10 = _mm_cvtsi128_si32(v4);
  v11 = (unsigned __int8)(v10 >> 23);
  if ( v11 <= 0x9E )
  {
    v12 = v10 & 0x7FFFFF | 0x800000LL;
    if ( v11 < 0x76 )
      v13 = v12 >> (118 - (unsigned __int8)v11);
    else
      v13 = v12 << ((unsigned __int8)v11 - 118);
    v6 = HIDWORD(v13);
    if ( v10 < 0 )
      v6 = -HIDWORD(v13);
  }
  *a3 = gaefArctan[v6 + 1];
  v16 = eFraction();
  v18 = (float)(*(float *)&v16 * (float)(*v14 - v17)) + v17;
  *v14 = v18;
  switch ( v15 )
  {
    case 1u:
      v20 = (float *)FP_180_0;
      goto LABEL_25;
    case 2u:
      v20 = (float *)FP_360_0;
      goto LABEL_25;
    case 3u:
      v22 = (float *)FP_180_0;
      goto LABEL_28;
    case 4u:
      v20 = (float *)FP_90_0;
LABEL_25:
      v21 = *v20 - v18;
LABEL_26:
      *v14 = v21;
      break;
    case 5u:
      v22 = (float *)FP_90_0;
      goto LABEL_28;
    case 6u:
      v22 = (float *)FP_270_0;
LABEL_28:
      v21 = *v22 + v18;
      goto LABEL_26;
    case 7u:
      v20 = (float *)FP_270_0;
      goto LABEL_25;
  }
  result = v15;
  v6 = byte_140360AC0[v15];
LABEL_21:
  *a4 = v6;
  return result;
}
