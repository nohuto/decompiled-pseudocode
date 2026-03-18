/*
 * XREFs of ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001EDE4
 * Callers:
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18000DC30 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18000F2D0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2D1_ANTIALIAS_MODE@@PEA_N@Z @ 0x1800120B0 (-Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18001B858 (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18001D270 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001F080 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800375A8 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x180039430 (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationIn.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x18003B6F0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18007D080 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 * Callees:
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 */

char __fastcall Matrix3x3::Get2DScaleDimensionsWithPerspective(__int64 a1, float *a2, float *a3, float *a4)
{
  __int32 v5; // xmm4_4
  float *v8; // rax
  char result; // al
  float v10; // xmm5_4
  float v11; // xmm6_4
  float v12; // xmm0_4
  float *p_si128; // rcx
  __int64 v14; // rdx
  float v15; // xmm2_4
  float v16; // xmm3_4
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm6_4
  float v20; // xmm8_4
  __int32 v21; // xmm1_4
  __m128i si128; // [rsp+20h] [rbp-50h] BYREF
  float v23; // [rsp+30h] [rbp-40h]
  float v24; // [rsp+34h] [rbp-3Ch]

  COERCE_FLOAT(v5 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  v8 = (float *)(a1 + 20);
  if ( COERCE_FLOAT(*(_DWORD *)(a1 + 8) & v5) >= 0.0000011920929 || COERCE_FLOAT(*(_DWORD *)v8 & v5) >= 0.0000011920929 )
  {
    if ( !a4 )
    {
      result = 0;
      *a2 = 1.0;
      *a3 = 1.0;
      return result;
    }
    v10 = FLOAT_1_0;
    *(float *)&v21 = (float)((float)(a4[3] - a4[1]) * 0.5) + a4[1];
    *(float *)si128.m128i_i32 = (float)((float)(a4[2] - *a4) * 0.5) + *a4;
    v23 = *(float *)si128.m128i_i32;
    si128.m128i_i32[1] = v21;
    si128.m128i_i32[3] = v21;
    *(float *)&si128.m128i_i32[2] = *(float *)si128.m128i_i32 + 1.0;
    v24 = *(float *)&v21 + 1.0;
    goto LABEL_9;
  }
  v10 = FLOAT_1_0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 1.0) & v5) >= 0.0000011920929 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v23 = 0.0;
    v24 = 1.0;
LABEL_9:
    p_si128 = (float *)&si128;
    v14 = 3LL;
    do
    {
      v15 = (float)((float)(*p_si128 * *(float *)a1) + (float)(p_si128[1] * *(float *)(a1 + 12))) + *(float *)(a1 + 24);
      v16 = (float)((float)(p_si128[1] * *(float *)(a1 + 16)) + (float)(*p_si128 * *(float *)(a1 + 4)))
          + *(float *)(a1 + 28);
      v17 = (float)((float)(p_si128[1] * *v8) + (float)(*p_si128 * *(float *)(a1 + 8))) + *(float *)(a1 + 32);
      if ( COERCE_FLOAT(LODWORD(v17) & v5) >= 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(v17 - v10) & v5) >= 0.000081380211 )
      {
        v15 = v15 / v17;
        v16 = v16 / v17;
      }
      *p_si128 = v15;
      p_si128[1] = v16;
      p_si128 += 2;
      --v14;
    }
    while ( v14 );
    v18 = v23 - *(float *)si128.m128i_i32;
    v19 = v24 - *(float *)&si128.m128i_i32[1];
    v20 = sqrtf_0(
            (float)((float)(*(float *)&si128.m128i_i32[3] - *(float *)&si128.m128i_i32[1])
                  * (float)(*(float *)&si128.m128i_i32[3] - *(float *)&si128.m128i_i32[1]))
          + (float)((float)(*(float *)&si128.m128i_i32[2] - *(float *)si128.m128i_i32)
                  * (float)(*(float *)&si128.m128i_i32[2] - *(float *)si128.m128i_i32)));
    v12 = sqrtf_0((float)(v19 * v19) + (float)(v18 * v18));
    *a2 = v20;
    goto LABEL_7;
  }
  v11 = sqrtf_0((float)(*(float *)(a1 + 4) * *(float *)(a1 + 4)) + (float)(*(float *)a1 * *(float *)a1));
  v12 = sqrtf_0((float)(*(float *)(a1 + 16) * *(float *)(a1 + 16)) + (float)(*(float *)(a1 + 12) * *(float *)(a1 + 12)));
  *a2 = v11;
LABEL_7:
  *a3 = v12;
  return 1;
}
