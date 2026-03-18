/*
 * XREFs of ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800D9900
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B7170 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1800DA580 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z @ 0x180171B90 (-ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z.c)
 *     ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x1801DD93C (-ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V-$span@PEBVC.c)
 * Callees:
 *     <none>
 */

float *__fastcall Matrix3x3::operator*(float *a1, float *a2, float *a3)
{
  float v3; // xmm3_4
  float v4; // xmm4_4
  float v5; // xmm5_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm9_4
  float v10; // xmm10_4
  float v11; // xmm11_4
  float v12; // xmm12_4
  float v13; // xmm13_4
  float v14; // xmm14_4
  float v15; // xmm15_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm4_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm5_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm5_4
  float v29; // xmm4_4
  float v30; // xmm5_4
  float v31; // xmm6_4
  float v32; // xmm5_4
  float *result; // rax

  v3 = *a1;
  v4 = a1[1];
  v5 = a1[2];
  v6 = a1[5];
  v7 = a3[5];
  v8 = a3[4];
  v9 = a3[2];
  v10 = a3[3];
  v11 = a3[1];
  v12 = a3[8];
  v13 = *a3;
  v14 = a3[7];
  v15 = a3[6];
  v16 = v11 * *a1;
  *a2 = (float)((float)(v10 * v4) + (float)(*a3 * *a1)) + (float)(v15 * v5);
  v17 = (float)(v8 * v4) + v16;
  v18 = v7 * v4;
  v19 = a1[3];
  v20 = v17 + (float)(v14 * v5);
  v21 = v12 * v5;
  v22 = a1[4];
  a2[1] = v20;
  v23 = v9 * v3;
  v24 = v22 * v8;
  a2[2] = (float)(v23 + v18) + v21;
  v25 = (float)(v22 * v10) + (float)(v19 * v13);
  v26 = v19;
  v27 = v6;
  v28 = (float)(v22 * v7) + (float)(v19 * v9);
  v29 = a1[6];
  v30 = v28 + (float)(v6 * v12);
  a2[3] = v25 + (float)(v6 * v15);
  v31 = a1[8];
  a2[5] = v30;
  v32 = a1[7];
  a2[4] = (float)(v24 + (float)(v26 * v11)) + (float)(v27 * v14);
  result = a2;
  a2[6] = (float)((float)(v32 * v10) + (float)(v29 * v13)) + (float)(v31 * v15);
  a2[8] = (float)((float)(v32 * v7) + (float)(v29 * v9)) + (float)(v31 * v12);
  a2[7] = (float)((float)(v32 * v8) + (float)(v29 * v11)) + (float)(v31 * v14);
  return result;
}
