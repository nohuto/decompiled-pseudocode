/*
 * XREFs of ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1400A8AE8
 * Callers:
 *     ?GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z @ 0x1400A7B74 (-GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z.c)
 *     NtGdiArcInternal @ 0x1400E8410 (NtGdiArcInternal.c)
 * Callees:
 *     eFraction @ 0x1400A8CA4 (eFraction.c)
 */

__int64 __fastcall vCosSin(__int64 a1, float *a2, float *a3)
{
  float v3; // xmm1_4
  int v6; // ebx
  __int64 v7; // r8
  __m128i v8; // xmm0
  int v9; // r9d
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // r8d
  int v15; // r11d
  double v16; // xmm0_8
  int v17; // xmm4_4
  int v18; // r10d
  __int64 result; // rax
  __int64 v20; // r9
  float v21; // xmm3_4
  char v22; // r10
  __int64 v23; // r8
  float v24; // xmm3_4

  v3 = *(float *)&a1;
  if ( *(float *)&a1 >= 0.0 )
  {
    v6 = 1;
  }
  else
  {
    v6 = 0;
    LODWORD(v3) = a1 ^ _xmm;
  }
  v7 = 0LL;
  v8 = (__m128i)FP_SINE_FACTOR;
  *(float *)v8.m128i_i32 = FP_SINE_FACTOR * v3;
  v9 = _mm_cvtsi128_si32(v8);
  v10 = (unsigned __int8)(v9 >> 23);
  if ( (unsigned int)v10 <= 0x9E )
  {
    v11 = v9 & 0x7FFFFF | 0x800000LL;
    if ( (unsigned int)v10 < 0x76 )
    {
      a1 = (unsigned int)(118 - v10);
      v12 = v11 >> (118 - (unsigned __int8)v10);
    }
    else
    {
      a1 = (unsigned int)(v10 - 118);
      v12 = v11 << ((unsigned __int8)v10 - 118);
    }
    v13 = v12 >> 32;
    v7 = (unsigned int)-(int)v13;
    if ( v9 >= 0 )
      v7 = (unsigned int)v13;
  }
  v16 = eFraction(a1, v10, v7);
  v18 = v14 >> 5;
  if ( ((v14 >> 5) & 2) != 0 )
    v15 = v6;
  result = v14 & 0x1F;
  v20 = result;
  if ( (v18 & 1) != 0 )
  {
    result = 31LL - (unsigned int)result;
    v21 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(gaefSin[32 - v20] - gaefSin[31 - v20]) * *(float *)&v16) ^ v17)
        + gaefSin[32 - v20];
  }
  else
  {
    LOBYTE(v14) = result;
    v21 = (float)((float)(gaefSin[result + 1] - gaefSin[result]) * *(float *)&v16) + gaefSin[result];
  }
  if ( v15 )
    LODWORD(v21) ^= v17;
  v22 = v18 + 1;
  *a3 = v21;
  v23 = v14 & 0x1F;
  if ( (v22 & 1) != 0 )
    v24 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(gaefSin[32LL - (unsigned int)v23] - gaefSin[31LL - (unsigned int)v23]) * *(float *)&v16) ^ v17)
        + gaefSin[32LL - (unsigned int)v23];
  else
    v24 = (float)((float)(gaefSin[v23 + 1] - gaefSin[v23]) * *(float *)&v16) + gaefSin[v23];
  if ( (v22 & 2) != 0 )
    LODWORD(v24) ^= v17;
  *a2 = v24;
  return result;
}
