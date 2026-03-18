/*
 * XREFs of ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x140112528
 * Callers:
 *     NtGdiArcInternal @ 0x140110940 (NtGdiArcInternal.c)
 *     ?GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z @ 0x140111F1C (-GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z.c)
 * Callees:
 *     eFraction @ 0x1401126F4 (eFraction.c)
 */

__int64 __fastcall vCosSin(__int64 a1, float *a2, float *a3)
{
  float v3; // xmm1_4
  __int64 v6; // r9
  __m128i v7; // xmm0
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r9
  int v12; // r9d
  BOOL v13; // r10d
  double v14; // xmm0_8
  int v15; // xmm4_4
  int v16; // edx
  __int64 result; // rax
  __int64 v18; // rbx
  float v19; // xmm3_4
  char v20; // dl
  __int64 v21; // r9
  float v22; // xmm3_4

  v3 = *(float *)&a1;
  if ( *(float *)&a1 < 0.0 )
    LODWORD(v3) = a1 ^ _xmm;
  v6 = 0LL;
  v7 = (__m128i)FP_SINE_FACTOR;
  *(float *)v7.m128i_i32 = FP_SINE_FACTOR * v3;
  v8 = (unsigned int)_mm_cvtsi128_si32(v7);
  v9 = (unsigned __int8)((int)v8 >> 23);
  if ( (unsigned int)v9 <= 0x9E )
  {
    v10 = v8 & 0x7FFFFF | 0x800000;
    if ( (unsigned int)v9 < 0x76 )
    {
      a1 = (unsigned int)(118 - v9);
      v11 = v10 >> (118 - (unsigned __int8)v9);
    }
    else
    {
      a1 = (unsigned int)(v9 - 118);
      v11 = v10 << ((unsigned __int8)v9 - 118);
    }
    v6 = v11 >> 32;
    if ( (int)v8 < 0 )
      v6 = (unsigned int)-(int)v6;
  }
  v14 = eFraction(a1, v9, v8, v6);
  v16 = v12 >> 5;
  if ( ((v12 >> 5) & 2) != 0 )
    v13 = !v13;
  result = v12 & 0x1F;
  v18 = result;
  if ( (v16 & 1) != 0 )
  {
    result = 31 - result;
    v19 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(gaefSin[32 - v18] - gaefSin[31 - v18]) * *(float *)&v14) ^ v15)
        + gaefSin[32 - v18];
  }
  else
  {
    LOBYTE(v12) = result;
    v19 = (float)((float)(gaefSin[result + 1] - gaefSin[result]) * *(float *)&v14) + gaefSin[result];
  }
  if ( v13 )
    LODWORD(v19) ^= v15;
  v20 = v16 + 1;
  *a3 = v19;
  v21 = v12 & 0x1F;
  if ( (v20 & 1) != 0 )
    v22 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(gaefSin[32LL - (unsigned int)v21] - gaefSin[31LL - (unsigned int)v21]) * *(float *)&v14) ^ v15)
        + gaefSin[32LL - (unsigned int)v21];
  else
    v22 = (float)((float)(gaefSin[v21 + 1] - gaefSin[v21]) * *(float *)&v14) + gaefSin[v21];
  if ( (v20 & 2) != 0 )
    LODWORD(v22) ^= v15;
  *a2 = v22;
  return result;
}
