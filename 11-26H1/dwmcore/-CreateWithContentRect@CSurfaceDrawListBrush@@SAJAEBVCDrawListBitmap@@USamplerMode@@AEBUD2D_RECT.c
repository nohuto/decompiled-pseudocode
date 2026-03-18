/*
 * XREFs of ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18003A7BC
 * Callers:
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800C0E10 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D2050 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1800D2750 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180159B74 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x1801A7A80 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180265C90 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180268130 (-GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?CreateDrawListBrush@CShadowMaskProducer@@QEAAJPEAPEAVCDrawListBrush@@@Z @ 0x1802B3054 (-CreateDrawListBrush@CShadowMaskProducer@@QEAAJPEAPEAVCDrawListBrush@@@Z.c)
 * Callees:
 *     ?Alloc@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x18003AEBC (-Alloc@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::CreateWithContentRect(__int64 *a1, __int16 *a2, float *a3, __int64 a4)
{
  __int64 v5; // rcx
  unsigned int v9; // edi
  __int64 v10; // rax
  int v11; // r10^4
  float v12; // xmm7_4
  float v13; // xmm6_4
  __int64 v14; // rax
  __int64 v15; // rbx
  __int16 v16; // r12
  char v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int128 v20; // xmm0
  float v22[12]; // [rsp+30h] [rbp-78h]
  __int64 v23; // [rsp+B0h] [rbp+8h] BYREF

  v5 = a1[1];
  v9 = 0;
  LODWORD(v10) = 0;
  v11 = 0;
  if ( v5 )
  {
    v10 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 32LL))(v5, &v23);
    v11 = HIDWORD(v10);
  }
  v12 = 1.0 / (float)(int)v10;
  v13 = 1.0 / (float)v11;
  v14 = CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Alloc();
  v15 = v14;
  if ( v14 )
  {
    v16 = *a2;
    v17 = *((_BYTE *)a2 + 2);
    *(_QWORD *)(v14 + 8) = 1065353216LL;
    *(_DWORD *)(v14 + 16) = 0;
    *(_QWORD *)(v14 + 20) = 1065353216LL;
    *(_DWORD *)(v14 + 28) = 0;
    *(_BYTE *)(v14 + 52) = 0;
    *(_QWORD *)v14 = &CSurfaceDrawListBrush::`vftable';
    v18 = *a1;
    *(_QWORD *)(v14 + 56) = *a1;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v19 = a1[1];
    *(_QWORD *)(v15 + 64) = v19;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    *(_BYTE *)(v15 + 72) = *((_BYTE *)a1 + 16);
    *(_WORD *)(v15 + 80) = v16;
    *(_BYTE *)(v15 + 82) = v17;
    *(float *)(v15 + 84) = v12;
    *(float *)(v15 + 100) = v13;
    *(float *)(v15 + 108) = 0.0 - (float)(v12 * 0.0);
    *(float *)(v15 + 112) = 0.0 - (float)(v13 * 0.0);
    *(_QWORD *)(v15 + 88) = 0LL;
    *(_DWORD *)(v15 + 96) = 0;
    *(_DWORD *)(v15 + 104) = 0;
    *(_DWORD *)(v15 + 116) = 1065353216;
    *(_DWORD *)(v15 + 144) = 1;
    *(struct D2D_RECT_F *)(v15 + 120) = CSurfaceDrawListBrush::k_rcfBoundless;
    *(_QWORD *)a4 = v15;
    *(_BYTE *)(v15 + 52) = 1;
    v20 = *(_OWORD *)a3;
    *(_DWORD *)(v15 + 48) = 50529027;
    *(_OWORD *)(v15 + 32) = v20;
    v22[1] = v13 * a3[1];
    v22[0] = v12 * *a3;
    v22[2] = v12 * a3[2];
    v22[3] = v13 * a3[3];
    *(_OWORD *)(*(_QWORD *)a4 + 120LL) = *(_OWORD *)v22;
  }
  else
  {
    v9 = -2147024882;
    *(_QWORD *)a4 = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Fu, 0LL);
  }
  return v9;
}
