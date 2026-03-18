/*
 * XREFs of ?TrimToEndAt@?$CBezier@MVCMilPoint2F@@@@QEAAXM@Z @ 0x1800551DC
 * Callers:
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x180053FD4 (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 *     ?TrimBetween@?$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z @ 0x18005534C (-TrimBetween@-$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall CBezier<float,CMilPoint2F>::TrimToEndAt(float *a1, float a2)
{
  _UNKNOWN **result; // rax
  float v3; // xmm5_4
  float v5; // xmm10_4
  float v6; // xmm2_4
  float v7; // xmm7_4
  float v8; // xmm5_4
  float v9; // xmm6_4
  float v10; // xmm0_4
  float v11; // xmm7_4
  float v12; // xmm5_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm8_4
  float v17; // xmm4_4
  float v18; // xmm2_4
  float v19; // xmm6_4
  float v20; // xmm8_4
  float v21; // xmm1_4
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = a1[4];
  v5 = 1.0 - a2;
  v6 = v3 * a2;
  v7 = (float)(1.0 - a2) * a1[5];
  v8 = (float)(v3 * (float)(1.0 - a2)) + (float)(a2 * a1[6]);
  v9 = 1.0 - a2;
  v10 = a2 * a1[7];
  a1[6] = v8;
  v11 = v7 + v10;
  v12 = v8 * a2;
  a1[7] = v11;
  v13 = a2 * a1[5];
  v14 = a1[2];
  v15 = (float)(v5 * a1[3]) + v13;
  v16 = (float)(v5 * v14) + v6;
  a1[5] = v15;
  v17 = (float)(v5 * *a1) + (float)(v14 * a2);
  v18 = (float)(v5 * a1[1]) + (float)(a2 * a1[3]);
  v19 = (float)(v9 * v16) + v12;
  a1[2] = v17;
  v20 = (float)(v16 * a2) + (float)(v5 * v17);
  a1[4] = v20;
  v21 = (float)(v5 * v18) + (float)(a2 * v15);
  a1[3] = v18;
  a1[5] = v21;
  a1[6] = (float)(v19 * a2) + (float)(v5 * v20);
  a1[7] = (float)(v5 * v21) + (float)((float)((float)(v5 * v15) + (float)(v11 * a2)) * a2);
  return result;
}
