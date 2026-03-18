/*
 * XREFs of ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x140310318
 * Callers:
 *     ?GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z @ 0x1400A7B74 (-GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z.c)
 *     NtGdiArcInternal @ 0x1400E8410 (NtGdiArcInternal.c)
 * Callees:
 *     eFraction @ 0x1400A8CA4 (eFraction.c)
 */

__int64 __fastcall vCosSinPrecise(unsigned int a1, float *a2)
{
  double v2; // xmm1_8
  int v4; // r8d
  int v5; // r9d
  int v6; // r10d
  float *v7; // r11
  double v8; // xmm0_8
  int v9; // xmm4_4
  float v10; // xmm5_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm7_4
  float v15; // xmm3_4
  __int64 result; // rax
  float v17; // xmm2_4
  float v18; // xmm6_4
  float v19; // xmm5_4
  float v20; // xmm0_4

  *(_QWORD *)&v2 = _mm_cvtsi32_si128(a1).m128i_u64[0];
  if ( *(float *)&v2 < 0.0 )
    *(_QWORD *)&v2 ^= (unsigned int)_xmm;
  *(float *)&v2 = *(float *)&v2 / FP_360_0;
  v8 = eFraction(v2);
  v11 = *(float *)&v8 * FP_360_0;
  v12 = v11;
  if ( v10 > (float)(FP_180_0 - v11) )
  {
    v5 = 1;
    v12 = FP_360_0 - v11;
  }
  if ( v10 > (float)(FP_90_0 - v12) )
  {
    v6 = 1;
    v12 = FP_180_0 - v12;
  }
  v13 = FP_1_0;
  v15 = FP_2_0;
  LODWORD(result) = 2;
  v17 = (float)(FP_PI * v12) / FP_180_0;
  v14 = v17;
  v18 = v17;
  v19 = FP_2_0;
  do
  {
    v18 = v18 * v14;
    v20 = v18 / v19;
    if ( (result & 2) != 0 )
      LODWORD(v20) ^= v9;
    if ( (result & 1) != 0 )
      v17 = v17 + v20;
    else
      v13 = v13 + v20;
    v15 = v15 + FP_1_0;
    result = (unsigned int)(result + 1);
    v19 = v19 * v15;
  }
  while ( (unsigned int)result < 0xD );
  if ( !v4 )
  {
    if ( !v5 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    LODWORD(v17) ^= v9;
LABEL_19:
  if ( v6 )
    LODWORD(v13) ^= v9;
  *a2 = v13;
  *v7 = v17;
  return result;
}
