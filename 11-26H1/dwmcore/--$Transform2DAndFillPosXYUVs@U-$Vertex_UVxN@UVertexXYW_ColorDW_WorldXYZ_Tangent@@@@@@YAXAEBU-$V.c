/*
 * XREFs of ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@PEAUD2D_POINT_2F@@@Z @ 0x18025BE18
 * Callers:
 *     ?Transform@?$CScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18025C0A8 (-Transform@-$CScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTrans.c)
 * Callees:
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 */

float *__fastcall Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
        float *a1,
        float *a2,
        unsigned int a3,
        float *a4,
        float *a5,
        float *a6)
{
  __int64 v8; // rsi
  float v9; // xmm1_4
  float v10; // xmm6_4
  float v11; // xmm3_4
  float v12; // xmm9_4
  float v13; // xmm10_4
  float v14; // xmm7_4
  float v15; // xmm6_4
  float *result; // rax
  signed __int64 v17; // rdi
  float v18; // xmm8_4
  signed __int64 v19; // rcx
  __int64 v20; // rdx
  float v21; // xmm1_4

  v8 = a3;
  v9 = *a1 - *a2;
  v10 = a1[1] - a2[1];
  v11 = FLOAT_1_0;
  v12 = (float)((float)(a4[4] * a2[1]) + (float)(*a4 * *a2)) + a4[12];
  v13 = (float)((float)(a4[5] * a2[1]) + (float)(a4[1] * *a2)) + a4[13];
  v14 = (float)(v10 * a4[4]) + (float)(v9 * *a4);
  v15 = (float)(v10 * a4[5]) + (float)(v9 * a4[1]);
  if ( v14 != 0.0 || v15 != 0.0 )
    v11 = a2[2] / sqrtf_0((float)(v15 * v15) + (float)(v14 * v14));
  result = a6;
  *a6 = v12;
  a6[1] = v13;
  *a5 = (float)(v14 * v11) + v12;
  a5[1] = (float)(v15 * v11) + v13;
  if ( v11 > 1.0 && a2[3] == 0.0 )
    v11 = FLOAT_1_0;
  if ( (_DWORD)v8 )
  {
    v17 = (char *)a1 - (char *)a2;
    v18 = 1.0 - v11;
    v19 = (char *)a5 - (char *)a2;
    result = a2 + 4;
    v20 = v8;
    do
    {
      v21 = (float)(v18 * *result) + (float)(v11 * *(float *)((char *)result + v17));
      *(float *)((char *)result + v19 + 36) = (float)(v11 * *(float *)((char *)result + v17 + 4))
                                            + (float)(v18 * result[1]);
      *(float *)((char *)result + v19 + 32) = v21;
      result += 2;
      --v20;
    }
    while ( v20 );
  }
  return result;
}
