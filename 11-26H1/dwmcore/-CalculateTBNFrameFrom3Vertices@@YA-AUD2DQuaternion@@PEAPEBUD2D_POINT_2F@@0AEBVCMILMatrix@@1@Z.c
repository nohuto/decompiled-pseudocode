/*
 * XREFs of ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEAPEBUD2D_POINT_2F@@0AEBVCMILMatrix@@1@Z @ 0x180121334
 * Callers:
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180120ED8 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180120ED8.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x1801212BC (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVCMILMatrix@@AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18025DD7C (-FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVC.c)
 * Callees:
 *     CalculateTBNFrame @ 0x1801216D4 (CalculateTBNFrame.c)
 *     EncodeTBNFrameToQuaternion @ 0x18012190C (EncodeTBNFrameToQuaternion.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 */

struct D2DQuaternion *__fastcall CalculateTBNFrameFrom3Vertices(
        struct D2DQuaternion *a1,
        int a2,
        int a3,
        float *a4,
        float *a5)
{
  float v7; // xmm15_4
  float v8; // xmm14_4
  float v9; // xmm12_4
  float v10; // xmm9_4
  float v11; // xmm7_4
  float v12; // xmm11_4
  float v13; // xmm8_4
  float v14; // xmm5_4
  float v15; // xmm0_4
  float v16; // xmm10_4
  float v17; // xmm15_4
  float v18; // xmm10_4
  float v19; // xmm8_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  float v22; // xmm0_4
  float v23; // xmm9_4
  float v24; // xmm0_4
  float v25; // xmm13_4
  __int64 v27; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C8h]
  __int64 v29; // [rsp+48h] [rbp-C0h] BYREF
  float v30; // [rsp+50h] [rbp-B8h]
  __int64 v31; // [rsp+58h] [rbp-B0h]
  __int64 v32; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-A0h]

  v30 = 1.0;
  v32 = 0LL;
  LODWORD(v33) = 0;
  v27 = 0LL;
  LODWORD(v28) = 0;
  v29 = 0LL;
  CalculateTBNFrame(a2, a3, (unsigned int)&v29, (unsigned int)&v32, (__int64)&v27);
  v7 = a4[2];
  v8 = (float)((float)(*a4 * *(float *)&v32) + (float)(a4[4] * *((float *)&v32 + 1))) + (float)(a4[8] * *(float *)&v33);
  v9 = (float)((float)(a4[1] * *(float *)&v32) + (float)(a4[5] * *((float *)&v32 + 1)))
     + (float)(a4[9] * *(float *)&v33);
  v10 = a4[9] * *(float *)&v28;
  v11 = a4[10] * *(float *)&v28;
  v12 = (float)((float)(v7 * *(float *)&v32) + (float)(a4[6] * *((float *)&v32 + 1))) + (float)(a4[10] * *(float *)&v33);
  v13 = a5[4];
  v14 = a4[6] * *((float *)&v27 + 1);
  v15 = *a5 * 0.0;
  v16 = (float)(a4[1] * *(float *)&v27) + (float)(a4[5] * *((float *)&v27 + 1));
  *(float *)&v31 = (float)((float)(*a4 * *(float *)&v27) + (float)(a4[4] * *((float *)&v27 + 1)))
                 + (float)(a4[8] * *(float *)&v28);
  v17 = (float)((float)(v7 * *(float *)&v27) + v14) + v11;
  v18 = v16 + v10;
  v19 = (float)((float)(v13 * 0.0) + v15) + a5[8];
  v20 = (float)((float)(a5[5] * 0.0) + (float)(a5[1] * 0.0)) + a5[9];
  v21 = (float)((float)(a5[6] * 0.0) + (float)(a5[2] * 0.0)) + a5[10];
  v22 = sqrtf_0((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v12 * v12));
  v23 = *(float *)&v31;
  *((float *)&v32 + 1) = (float)(1.0 / v22) * v9;
  *(float *)&v32 = (float)(1.0 / v22) * v8;
  *(float *)&v33 = (float)(1.0 / v22) * v12;
  v24 = sqrtf_0((float)((float)(v18 * v18) + (float)(v23 * v23)) + (float)(v17 * v17));
  *((float *)&v27 + 1) = (float)(1.0 / v24) * v18;
  *(float *)&v27 = (float)(1.0 / v24) * v23;
  *(float *)&v28 = (float)(1.0 / v24) * v17;
  v25 = 1.0 / sqrtf_0((float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v21 * v21));
  *(float *)&v29 = v25 * v19;
  *((float *)&v29 + 1) = v25 * v20;
  v30 = v25 * v21;
  EncodeTBNFrameToQuaternion(a1);
  return a1;
}
