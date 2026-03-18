/*
 * XREFs of ?As3DHomogeneous@Matrix3x3@@QEBA?AVCMILMatrix@@XZ @ 0x1800D9628
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B7170 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?CalculateBounds@CProjectedShadow@@AEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEBVCVisualTree@@@Z @ 0x1800D8A20 (-CalculateBounds@CProjectedShadow@@AEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800D907C (-RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1800DA580 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180110440 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Matrix3x3::As3DHomogeneous(_DWORD *a1, __int64 a2)
{
  int v2; // xmm5_4
  int v3; // xmm4_4
  int v4; // xmm3_4
  int v5; // xmm2_4
  int v6; // xmm1_4
  int v7; // xmm0_4
  int v8; // xmm6_4
  int v9; // xmm7_4

  v2 = a1[6];
  v3 = a1[5];
  v4 = a1[4];
  v5 = a1[3];
  v6 = a1[2];
  v7 = a1[1];
  v8 = a1[7];
  v9 = a1[8];
  *(_DWORD *)a2 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 52) = v8;
  *(_DWORD *)(a2 + 60) = v9;
  *(_DWORD *)(a2 + 4) = v7;
  *(_DWORD *)(a2 + 12) = v6;
  *(_DWORD *)(a2 + 16) = v5;
  *(_DWORD *)(a2 + 20) = v4;
  *(_DWORD *)(a2 + 28) = v3;
  *(_DWORD *)(a2 + 48) = v2;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_DWORD *)(a2 + 64) = 0;
  return a2;
}
