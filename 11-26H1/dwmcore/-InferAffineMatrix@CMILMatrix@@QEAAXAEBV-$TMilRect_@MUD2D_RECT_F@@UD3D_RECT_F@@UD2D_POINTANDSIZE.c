/*
 * XREFs of ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005C4A4
 * Callers:
 *     ?CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18005C350 (-CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005CEB0 (-RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV-$TMilRect_@MUD2D.c)
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x180107384 (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UMil3DRect.c)
 *     ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x180148BBC (-ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDER.c)
 *     ?GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x180194B38 (-GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?UpdateSize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@@Z @ 0x1802041E8 (-UpdateSize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@@Z.c)
 *     ?CalcDeviceTransformDelta@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180250360 (-CalcDeviceTransformDelta@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcDeviceTransformDelta@CSuperSampleLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180250650 (-CalcDeviceTransformDelta@CSuperSampleLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcSwapChainBufferSize@CMonitorTransform@@QEAA?AUD2D_SIZE_U@@AEBU2@PEBVCD3DDevice@@AEBVOverlayCaps@@@Z @ 0x18028D8BC (-CalcSwapChainBufferSize@CMonitorTransform@@QEAA-AUD2D_SIZE_U@@AEBU2@PEBVCD3DDevice@@AEBVOverlay.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILMatrix::InferAffineMatrix(__int64 a1, float *a2, float *a3)
{
  __int64 result; // rax
  double v4; // xmm3_8
  float v5; // xmm0_4
  float v6; // xmm0_4
  double v7; // xmm3_8
  float v8; // xmm0_4
  float v9; // xmm1_4
  double v10; // xmm2_8

  *(_QWORD *)a1 = 1065353216LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 20) = 1065353216LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 40) = 1065353216LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(_BYTE *)(a1 + 65) &= 0xE9u;
  *(_BYTE *)(a1 + 65) |= 0x29u;
  *(_BYTE *)(a1 + 64) = -86;
  result = 136LL;
  v4 = (a3[2] - *a3) / (a2[2] - *a2);
  v5 = v4;
  *(float *)a1 = v5;
  v6 = *a3 - *a2 * v4;
  *(float *)(a1 + 48) = v6;
  v7 = (a3[3] - a3[1]) / (a2[3] - a2[1]);
  v8 = v7;
  *(float *)(a1 + 20) = v8;
  v9 = a2[1];
  v10 = a3[1];
  *(_BYTE *)(a1 + 64) = -120;
  *(float *)(a1 + 52) = v10 - v9 * v7;
  return result;
}
