/*
 * XREFs of ?IntersectTwoLines@@YA_NULine3D@@0MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x18019C3C4
 * Callers:
 *     ?IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x18019C240 (-IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 */

bool __fastcall IntersectTwoLines(__int64 a1, __int64 *a2, float a3, float *a4)
{
  float v4; // xmm3_4
  float v5; // xmm4_4
  float v6; // xmm15_4
  float v7; // xmm11_4
  float v8; // xmm13_4
  float v9; // xmm6_4
  float v10; // xmm8_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm5_4
  float v18[4]; // [rsp+28h] [rbp-79h]
  float v19[4]; // [rsp+38h] [rbp-69h]
  float v20[4]; // [rsp+48h] [rbp-59h]
  __int64 v21; // [rsp+58h] [rbp-49h]
  float v22; // [rsp+108h] [rbp+67h]
  float v23; // [rsp+110h] [rbp+6Fh]
  float v24; // [rsp+120h] [rbp+7Fh]

  v4 = *(float *)(a1 + 8);
  *(_QWORD *)v20 = *(_QWORD *)a1;
  v5 = v4 - *((float *)a2 + 2);
  *(_QWORD *)v18 = *(_QWORD *)(a1 + 12);
  v21 = *a2;
  *(_QWORD *)v19 = *(__int64 *)((char *)a2 + 12);
  v6 = *(float *)(a1 + 20);
  v22 = *((float *)a2 + 5);
  v24 = (float)(v22 * v18[1]) - (float)(v6 * v19[1]);
  v7 = (float)(v6 * v19[0]) - (float)(v22 * v18[0]);
  v8 = (float)(v18[0] * v19[1]) - (float)(v18[1] * v19[0]);
  v9 = (float)((float)(v7 * v7) + (float)(v24 * v24)) + (float)(v8 * v8);
  v10 = (float)((float)((float)((float)((float)((float)(v20[0] - *(float *)&v21) * v22) - (float)(v5 * v19[0])) * v7)
                      + (float)((float)((float)(v5 * v19[1]) - (float)((float)(v20[1] - *((float *)&v21 + 1)) * v22))
                              * v24))
              + (float)((float)((float)((float)(v20[1] - *((float *)&v21 + 1)) * v19[0])
                              - (float)((float)(v20[0] - *(float *)&v21) * v19[1]))
                      * v8))
      / v9;
  v11 = (float)(v10 * v18[0]) + COERCE_FLOAT(*(_QWORD *)a1);
  v12 = (float)(v10 * v18[1]) + COERCE_FLOAT(HIDWORD(*(_QWORD *)a1));
  v23 = (float)((float)((float)((float)((float)((float)((float)((float)(v20[0] - *(float *)&v21) * v22)
                                                      - (float)(v5 * v19[0]))
                                              * v7)
                                      + (float)((float)((float)(v5 * v19[1])
                                                      - (float)((float)(v20[1] - *((float *)&v21 + 1)) * v22))
                                              * v24))
                              + (float)((float)((float)((float)(v20[1] - *((float *)&v21 + 1)) * v19[0])
                                              - (float)((float)(v20[0] - *(float *)&v21) * v19[1]))
                                      * v8))
                      / v9)
              * v6)
      + v4;
  v13 = (float)((float)((float)((float)((float)((float)(v20[0] - *(float *)&v21) * v6) - (float)(v5 * v18[0])) * v7)
                      + (float)((float)((float)(v5 * v18[1]) - (float)((float)(v20[1] - *((float *)&v21 + 1)) * v6))
                              * v24))
              + (float)((float)((float)((float)(COERCE_FLOAT(HIDWORD(*(_QWORD *)a1)) - COERCE_FLOAT(HIDWORD(*a2)))
                                      * v18[0])
                              - (float)((float)(COERCE_FLOAT(*(_QWORD *)a1) - COERCE_FLOAT(*a2)) * v18[1]))
                      * v8))
      / v9;
  v14 = (float)(v13 * v19[0]) + COERCE_FLOAT(*a2);
  v15 = (float)(v13 * v19[1]) + COERCE_FLOAT(HIDWORD(*a2));
  v16 = (float)(v13 * v22) + *((float *)a2 + 2);
  *a4 = (float)(v14 + v11) * 0.5;
  a4[1] = (float)(v15 + v12) * 0.5;
  a4[2] = (float)(v16 + v23) * 0.5;
  return a3 > sqrtf_0(
                (float)((float)((float)(v12 - v15) * (float)(v12 - v15))
                      + (float)((float)(v11 - v14) * (float)(v11 - v14)))
              + (float)((float)(v23 - v16) * (float)(v23 - v16)));
}
