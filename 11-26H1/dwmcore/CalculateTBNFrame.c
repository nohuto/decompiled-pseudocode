/*
 * XREFs of CalculateTBNFrame @ 0x1801216D4
 * Callers:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEAPEBUD2D_POINT_2F@@0AEBVCMILMatrix@@1@Z @ 0x180121334 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEAPEBUD2D_POINT_2F@@0AEBVCMILMatrix@@1@Z.c)
 * Callees:
 *     <none>
 */

float *__fastcall CalculateTBNFrame(_QWORD *a1, _QWORD *a2, float *a3, float *a4, float *a5)
{
  float *v5; // rax
  float v6; // xmm11_4
  float v7; // xmm12_4
  float *v8; // rax
  float v9; // xmm11_4
  float v10; // xmm12_4
  float v11; // xmm13_4
  float v12; // xmm14_4
  float *v13; // rax
  float v14; // xmm13_4
  float v15; // xmm14_4
  float v16; // xmm8_4
  float v17; // xmm3_4
  float *result; // rax
  float v19; // xmm8_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  float v22; // xmm7_4
  float v23; // xmm5_4
  float v24; // xmm6_4
  float v25; // xmm5_4
  float v26; // xmm10_4
  float v27; // xmm7_4
  float v28; // xmm9_4
  float v29; // xmm8_4
  float v30; // xmm3_4
  float v31; // xmm1_4
  float v32; // xmm7_4
  float v33; // xmm2_4
  float v34; // xmm10_4

  v5 = (float *)a1[1];
  v6 = *v5;
  v7 = v5[1];
  v8 = (float *)a1[2];
  v9 = v6 - *(float *)*a1;
  v10 = v7 - *(float *)(*a1 + 4LL);
  v11 = *v8;
  v12 = v8[1];
  v13 = (float *)a2[1];
  v14 = v11 - *(float *)*a1;
  v15 = v12 - *(float *)(*a1 + 4LL);
  v16 = *v13;
  v17 = v13[1];
  result = (float *)a2[2];
  v19 = v16 - *(float *)*a2;
  v20 = v17 - *(float *)(*a2 + 4LL);
  v21 = *result - *(float *)*a2;
  v22 = result[1] - *(float *)(*a2 + 4LL);
  v23 = (float)(v22 * v19) - (float)(v21 * v20);
  if ( COERCE_FLOAT(LODWORD(v23) & _xmm) >= 0.0000011920929 )
  {
    v33 = 1.0 / v23;
    v34 = v19 * v15;
    v24 = (float)((float)(v22 * v9) - (float)(v20 * v14)) * (float)(1.0 / v23);
    v25 = (float)((float)(v22 * v10) - (float)(v20 * v15)) * (float)(1.0 / v23);
    v27 = (float)((float)(v22 * 0.0) - (float)(v20 * 0.0)) * v33;
    v28 = (float)((float)(v19 * 0.0) - (float)(v21 * 0.0)) * v33;
    v29 = (float)((float)(v19 * v14) - (float)(v21 * v9)) * v33;
    v26 = (float)(v34 - (float)(v21 * v10)) * v33;
  }
  else
  {
    v24 = FLOAT_1_0;
    v25 = 0.0;
    v26 = FLOAT_1_0;
    v27 = 0.0;
    v28 = 0.0;
    v29 = 0.0;
  }
  v30 = (float)((float)(a3[1] * v25) + (float)(*a3 * v24)) + (float)(a3[2] * v27);
  v31 = v30 * a3[1];
  v32 = v27 - (float)(v30 * a3[2]);
  *a4 = v24 - (float)(v30 * *a3);
  a4[1] = v25 - v31;
  a4[2] = v32;
  *a5 = v29;
  a5[1] = v26;
  a5[2] = v28;
  return result;
}
