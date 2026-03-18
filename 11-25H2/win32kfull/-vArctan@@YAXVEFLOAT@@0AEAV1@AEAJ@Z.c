/*
 * XREFs of ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1400A81C8
 * Callers:
 *     ?GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z @ 0x1400A7B74 (-GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z.c)
 *     cjIFIMetricsToOTMW @ 0x1400BB8C0 (cjIFIMetricsToOTMW.c)
 *     NtGdiArcInternal @ 0x1400E8410 (NtGdiArcInternal.c)
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x1401038CC (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 * Callees:
 *     eFraction @ 0x1400A8CA4 (eFraction.c)
 */

__int64 __fastcall vArctan(unsigned int a1, unsigned int a2, _DWORD *a3, int *a4)
{
  __m128 v4; // xmm1
  int v5; // r11d
  __m128 v7; // xmm5
  __m128 v8; // xmm0
  __int64 result; // rax
  float v10; // xmm4_4
  float *v11; // rax
  int v12; // ebx
  unsigned int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  float v17; // xmm3_4
  float *v18; // r8
  unsigned int v19; // r10d
  float v20; // xmm0_4
  float v21; // xmm4_4
  float *v22; // rax

  v4 = (__m128)_mm_cvtsi32_si128(a1);
  v5 = 0;
  v7 = (__m128)_mm_cvtsi32_si128(a2);
  if ( v4.m128_f32[0] < 0.0 )
    v4 = _mm_xor_ps(v4, (__m128)(unsigned int)_xmm);
  if ( v7.m128_f32[0] < 0.0 )
    v7 = _mm_xor_ps(v7, (__m128)(unsigned int)_xmm);
  if ( v7.m128_f32[0] > v4.m128_f32[0] )
  {
    v8 = v4;
    v4.m128_i32[0] = v7.m128_i32[0];
    v7 = v8;
  }
  if ( v4.m128_f32[0] != 0.0 )
  {
    v7.m128_f32[0] = (float)(v7.m128_f32[0] * FP_ARCTAN_TABLE_SIZE) / v4.m128_f32[0];
    v12 = _mm_cvtsi128_si32((__m128i)v7);
    v13 = (unsigned __int8)(v12 >> 23);
    if ( v13 <= 0x9E )
    {
      v14 = v12 & 0x7FFFFF | 0x800000LL;
      if ( v13 < 0x76 )
        v15 = v14 >> (118 - (unsigned __int8)v13);
      else
        v15 = v14 << ((unsigned __int8)v13 - 118);
      v16 = v15 >> 32;
      v5 = -(int)v16;
      if ( v12 >= 0 )
        v5 = v16;
    }
    v17 = gaefArctan[v5];
    *a3 = LODWORD(gaefArctan[v5 + 1]);
    v20 = eFraction();
    v10 = (float)(v21 * v20) + v17;
    *v18 = v10;
    if ( v19 == 1 )
    {
      v22 = (float *)FP_180_0;
      goto LABEL_28;
    }
    if ( v19 == 2 )
    {
      v22 = (float *)FP_360_0;
      goto LABEL_28;
    }
    if ( v19 == 3 )
    {
      v11 = (float *)FP_180_0;
      goto LABEL_11;
    }
    if ( v19 == 4 )
    {
      LODWORD(v10) ^= _xmm;
    }
    else if ( v19 != 5 )
    {
      if ( v19 != 6 )
      {
        if ( v19 == 7 )
        {
          v22 = (float *)FP_270_0;
LABEL_28:
          *v18 = *v22 + COERCE_FLOAT(LODWORD(v10) ^ _xmm);
        }
LABEL_12:
        result = v19;
        v5 = byte_140351198[v19];
        goto LABEL_13;
      }
      v11 = (float *)FP_270_0;
LABEL_11:
      *v18 = v10 + *v11;
      goto LABEL_12;
    }
    v11 = (float *)FP_90_0;
    goto LABEL_11;
  }
  result = FP_0_0;
  *a3 = FP_0_0;
LABEL_13:
  *a4 = v5;
  return result;
}
