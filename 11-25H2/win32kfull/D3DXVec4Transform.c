/*
 * XREFs of D3DXVec4Transform @ 0x14016EFA4
 * Callers:
 *     GetInertiaRegionInVirtualizedScreen @ 0x1402B02A4 (GetInertiaRegionInVirtualizedScreen.c)
 * Callees:
 *     <none>
 */

float *__fastcall D3DXVec4Transform(float *a1, float *a2, float *a3)
{
  float *result; // rax
  float v4; // xmm7_4
  float v5; // xmm8_4
  float v6; // xmm9_4
  float v7; // xmm10_4
  float v8; // xmm11_4
  float v9; // xmm13_4
  float v10; // xmm12_4
  float v11; // xmm14_4
  float v12; // xmm15_4
  float v13; // xmm3_4
  float v14; // xmm1_4
  float v15; // xmm6_4
  float v16; // xmm0_4
  float v17; // [rsp+B8h] [rbp+10h]
  float v18; // [rsp+C0h] [rbp+18h]
  float v19; // [rsp+C8h] [rbp+20h]

  result = a1;
  v4 = a3[13];
  v5 = a3[2];
  v6 = a3[6];
  v7 = a3[10];
  v8 = a3[14];
  v9 = a3[7];
  v10 = a3[3];
  v11 = a3[11];
  v12 = a3[15];
  v17 = a2[3];
  v18 = a2[2];
  v19 = a2[1];
  v13 = v19 * a3[5];
  v14 = v18 * a3[9];
  v15 = *a2;
  v16 = *a2 * a3[1];
  *a1 = (float)((float)((float)(v19 * a3[4]) + (float)(*a2 * *a3)) + (float)(v18 * a3[8])) + (float)(v17 * a3[12]);
  a1[1] = (float)((float)(v13 + v16) + v14) + (float)(v17 * v4);
  a1[2] = (float)((float)((float)(v15 * v5) + (float)(v19 * v6)) + (float)(v18 * v7)) + (float)(v17 * v8);
  a1[3] = (float)((float)((float)(v15 * v10) + (float)(v19 * v9)) + (float)(v18 * v11)) + (float)(v17 * v12);
  return result;
}
