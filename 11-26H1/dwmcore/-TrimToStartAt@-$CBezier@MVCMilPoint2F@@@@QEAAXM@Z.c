/*
 * XREFs of ?TrimToStartAt@?$CBezier@MVCMilPoint2F@@@@QEAAXM@Z @ 0x1801AD1EC
 * Callers:
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x180053FD4 (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 *     ?TrimBetween@?$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z @ 0x18005534C (-TrimBetween@-$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall CBezier<float,CMilPoint2F>::TrimToStartAt(float *a1, float a2)
{
  _UNKNOWN **result; // rax
  float v4; // xmm8_4
  float v5; // xmm6_4
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm6_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm5_4
  float v13; // xmm0_4
  float v14; // xmm3_4
  float v15; // xmm5_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = 1.0 - a2;
  v5 = a1[2] * (float)(1.0 - a2);
  v6 = (float)((float)(1.0 - a2) * a1[1]) + (float)(a2 * a1[3]);
  *a1 = (float)(a1[2] * a2) + (float)((float)(1.0 - a2) * *a1);
  a1[1] = v6;
  v7 = (float)(1.0 - a2) * a1[4];
  v8 = v5 + (float)(a1[4] * a2);
  v9 = (float)((float)(1.0 - a2) * a1[3]) + (float)(a2 * a1[5]);
  a1[2] = v8;
  a1[3] = v9;
  v10 = a2 * a1[6];
  v11 = a2 * a1[7];
  v12 = v7 + v10;
  v13 = (float)(1.0 - a2) * a1[5];
  a1[4] = v12;
  v14 = (float)((float)(1.0 - a2) * v6) + (float)(v9 * a2);
  a1[5] = v11 + v13;
  *a1 = (float)(v8 * a2) + (float)((float)(1.0 - a2) * *a1);
  v15 = (float)(v12 * a2) + (float)((float)(1.0 - a2) * v8);
  a1[1] = v14;
  v16 = (float)(1.0 - a2) * a1[3];
  v17 = a2 * a1[5];
  a1[2] = v15;
  v18 = v16 + v17;
  a1[3] = v18;
  *a1 = (float)(v15 * a2) + (float)(v4 * *a1);
  a1[1] = (float)((float)(1.0 - a2) * v14) + (float)(v18 * a2);
  return result;
}
