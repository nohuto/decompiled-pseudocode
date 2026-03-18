/*
 * XREFs of ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x14032BF90
 * Callers:
 *     NtGdiArcInternal @ 0x140110940 (NtGdiArcInternal.c)
 *     ?GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z @ 0x140111F1C (-GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z.c)
 * Callees:
 *     eFraction @ 0x1401126F4 (eFraction.c)
 */

__int64 __fastcall vCosSinPrecise(unsigned int a1)
{
  double v1; // xmm1_8
  int v2; // r9d
  float *v3; // r10
  float *v4; // r11
  double v5; // xmm0_8
  int v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  int v10; // ecx
  int v11; // edx
  float v12; // xmm1_4
  float v13; // xmm7_4
  float v14; // xmm3_4
  __int64 result; // rax
  float v16; // xmm2_4
  float v17; // xmm6_4
  float v18; // xmm5_4
  float v19; // xmm0_4

  *(_QWORD *)&v1 = _mm_cvtsi32_si128(a1).m128i_u64[0];
  if ( *(float *)&v1 < 0.0 )
    *(_QWORD *)&v1 ^= (unsigned int)_xmm;
  *(float *)&v1 = *(float *)&v1 / FP_360_0;
  v5 = eFraction(v1);
  v8 = *(float *)&v5 * FP_360_0;
  v9 = v8;
  if ( v7 <= (float)(FP_180_0 - v8) )
  {
    v10 = 0;
  }
  else
  {
    v10 = 1;
    v9 = FP_360_0 - v8;
  }
  if ( v7 <= (float)(FP_90_0 - v9) )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    v9 = FP_180_0 - v9;
  }
  v12 = FP_1_0;
  v14 = FP_2_0;
  LODWORD(result) = 2;
  v16 = (float)(FP_PI * v9) / FP_180_0;
  v13 = v16;
  v17 = v16;
  v18 = FP_2_0;
  do
  {
    v17 = v17 * v13;
    v19 = v17 / v18;
    if ( (result & 2) != 0 )
      LODWORD(v19) ^= v6;
    if ( (result & 1) != 0 )
      v16 = v16 + v19;
    else
      v12 = v12 + v19;
    v14 = v14 + FP_1_0;
    result = (unsigned int)(result + 1);
    v18 = v18 * v14;
  }
  while ( (unsigned int)result < 0xD );
  if ( !v2 )
  {
    if ( !v10 )
      goto LABEL_21;
    goto LABEL_20;
  }
  if ( !v10 )
LABEL_20:
    LODWORD(v16) ^= v6;
LABEL_21:
  if ( v11 )
    LODWORD(v12) ^= v6;
  *v4 = v12;
  *v3 = v16;
  return result;
}
