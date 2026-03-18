/*
 * XREFs of ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001F080
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180007FE4 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006C720 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800C0E10 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800C6AD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D2050 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x1800D38D0 (-GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGene.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180159B74 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 * Callees:
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001EDE4 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 */

char __fastcall CMILMatrix::Get2DScaleDimensionsWithPerspective(__int64 a1, float *a2, float *a3, float *a4)
{
  char v4; // r10
  char v7; // dl
  char v8; // al
  float v9; // xmm1_4
  float v10; // xmm8_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  float v15; // xmm0_4
  char result; // al
  int v17; // xmm0_4
  int v18; // xmm1_4
  int v19; // xmm0_4
  int v20; // xmm1_4
  __int32 v21; // xmm2_4
  _DWORD v22[12]; // [rsp+20h] [rbp-68h] BYREF

  v4 = *(_BYTE *)(a1 + 65);
  if ( (v4 & 0x20) != 0 || 4 * (v4 & 0xF0) == 0 )
  {
    if ( (v4 & 0x20) != 0 )
    {
      v7 = 1;
      goto LABEL_6;
    }
    COERCE_FLOAT(v21 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & v21) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & v21) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & v21))
                      - 1.0) & v21) < 0.000081380211 )
    {
      v7 = 1;
      v8 = -16;
    }
    else
    {
      v7 = 0;
      v8 = 16;
    }
    *(_BYTE *)(a1 + 65) = v8 ^ (v8 ^ v4) & 0xCF;
    if ( v7 )
      goto LABEL_6;
  }
  v7 = 0;
LABEL_6:
  v9 = *(float *)(a1 + 4);
  v10 = *(float *)(a1 + 16);
  v11 = *(float *)(a1 + 20);
  if ( v7 )
  {
    v12 = (float)(v9 * v9) + (float)(*(float *)a1 * *(float *)a1);
    if ( v12 < 0.0 )
      v13 = sqrtf_0(v12);
    else
      v13 = fsqrt(v12);
    v14 = (float)(v11 * v11) + (float)(v10 * v10);
    if ( v14 < 0.0 )
      v15 = sqrtf_0(v14);
    else
      v15 = fsqrt(v14);
    *a2 = v13;
    result = 1;
    *a3 = v15;
  }
  else
  {
    v22[0] = *(_DWORD *)a1;
    v22[2] = *(_DWORD *)(a1 + 12);
    v17 = *(_DWORD *)(a1 + 28);
    *(float *)&v22[1] = v9;
    v18 = *(_DWORD *)(a1 + 48);
    v22[5] = v17;
    v19 = *(_DWORD *)(a1 + 52);
    v22[6] = v18;
    v20 = *(_DWORD *)(a1 + 60);
    v22[7] = v19;
    *(float *)&v22[3] = v10;
    *(float *)&v22[4] = v11;
    v22[8] = v20;
    return Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)v22, a2, a3, a4);
  }
  return result;
}
