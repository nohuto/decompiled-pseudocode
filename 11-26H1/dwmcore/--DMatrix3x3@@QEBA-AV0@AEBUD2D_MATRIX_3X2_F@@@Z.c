/*
 * XREFs of ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180039A10
 * Callers:
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800375A8 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1.c)
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x180038EE8 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x180039430 (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationIn.c)
 *     ?GenerateEffectInput@CBackdropVisualImage@@QEAA?AUEffectInput@@XZ @ 0x180039B88 (-GenerateEffectInput@CBackdropVisualImage@@QEAA-AUEffectInput@@XZ.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800CA388 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800D2EB0 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800D907C (-RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180110440 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBVMILMatrix3x2@@PEAVCDrawListEntryBuilder@@@Z @ 0x1802039A0 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUD2D.c)
 * Callees:
 *     <none>
 */

float *__fastcall Matrix3x3::operator*(float *a1, float *a2, float *a3)
{
  float v3; // xmm5_4
  float *result; // rax
  float v5; // xmm3_4
  float v6; // xmm4_4
  float v7; // xmm6_4
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm9_4
  float v11; // xmm10_4
  float v12; // xmm11_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm5_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  float v22; // xmm5_4
  float v23; // xmm4_4
  float v24; // xmm3_4
  float v25; // xmm4_4

  v3 = a1[2];
  result = a2;
  v5 = a1[3];
  v6 = a1[4];
  v7 = a3[3];
  v8 = a3[2];
  v9 = a3[1];
  v10 = *a3;
  v11 = a3[5];
  v12 = a3[4];
  v13 = (float)(v8 * a1[1]) + (float)(*a3 * *a1);
  a2[2] = v3;
  v14 = v9 * *a1;
  v15 = v13 + (float)(v12 * v3);
  v16 = v11 * v3;
  v17 = a1[5];
  a2[5] = v17;
  *a2 = v15;
  v18 = (float)((float)(v7 * a1[1]) + v14) + v16;
  v19 = v17 * v12;
  a2[1] = v18;
  v20 = (float)(v6 * v8) + (float)(v5 * v10);
  v21 = v17;
  v22 = a1[8];
  v23 = (float)(v6 * v7) + (float)(v5 * v9);
  v24 = a1[6];
  a2[8] = v22;
  a2[3] = v20 + v19;
  a2[4] = v23 + (float)(v21 * v11);
  v25 = a1[7] * v7;
  a2[6] = (float)((float)(a1[7] * v8) + (float)(v24 * v10)) + (float)(v22 * v12);
  a2[7] = (float)(v25 + (float)(v24 * v9)) + (float)(v22 * v11);
  return result;
}
