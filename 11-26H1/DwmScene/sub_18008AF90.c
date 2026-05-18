/*
 * XREFs of sub_18008AF90 @ 0x18008AF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_18008AF90(float *a1, __int64 a2, int a3, char a4, char a5, char a6, char a7, float a8)
{
  char result; // al
  float v9; // xmm1_4
  float v10; // xmm2_4
  unsigned __int32 v11; // xmm5_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm1_4

  result = a7;
  if ( a4 && a7 )
  {
    v9 = (float)((float)(*((float *)&a2 + 1) * a8) * 0.89999998) + a1[471];
    a1[475] = (float)((float)(*(float *)&a2 * a8) * 0.89999998) + a1[475];
    a1[471] = v9;
  }
  if ( a5 && a7 )
    a1[472] = (float)((float)((float)(*((float *)&a2 + 1) + *(float *)&a2) * a8) * 0.89999998) + a1[472];
  if ( a6 && (!a5 || !a7) )
    a1[472] = (float)((float)-(float)a3 * 0.0099999998) + a1[472];
  v10 = a1[475];
  v11 = _mm_load_si128((const __m128i *)&xmmword_180191740).m128i_u32[0];
  if ( v10 != 0.0 || a1[471] != 0.0 )
  {
    v12 = a1[471];
    v13 = a1[475];
    v14 = v10 * 0.80000001;
    a1[475] = v14;
    a1[468] = (float)(v13 * a8) + a1[468];
    v15 = v12;
    v16 = v12 * 0.80000001;
    a1[471] = v16;
    a1[469] = (float)(v15 * a8) + a1[469];
    if ( COERCE_FLOAT(LODWORD(v14) & v11) < 1.0e-12 )
      a1[475] = 0.0;
    if ( COERCE_FLOAT(LODWORD(v16) & v11) < 1.0e-12 )
      a1[471] = 0.0;
  }
  v17 = a1[472];
  if ( v17 != 0.0 )
  {
    v18 = a1[472];
    v19 = v17 * 0.80000001;
    a1[472] = v19;
    a1[470] = (float)(v18 * a8) + a1[470];
    if ( COERCE_FLOAT(LODWORD(v19) & v11) < 1.0e-12 )
      a1[472] = 0.0;
  }
  return result;
}
