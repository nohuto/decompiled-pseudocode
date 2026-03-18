/*
 * XREFs of ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005C5A0
 * Callers:
 *     ?CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18005C350 (-CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18005C744 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_.c)
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006E21C (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUD2D_POINTANDSIZE_L@@@Z @ 0x1800C8498 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUD2D_POINTANDSIZE_L@@@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800C8918 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800CA388 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D2050 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180124D00 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801728A0 (-CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUMilColorTransform@@@Z @ 0x1801E4148 (-PushColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801E610C (-PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV-$TMilRect_@HUtagRECT@@UMil3DRec.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18023493C (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1802351BC (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawingContext::GetClipBoundsWorld(__int64 a1, float *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __m128 si128; // xmm0
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v12; // xmm4_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  int v17; // eax
  int v18; // [rsp+48h] [rbp+20h] BYREF
  int v19; // [rsp+4Ch] [rbp+24h]

  v4 = *(_QWORD *)(a1 + 744);
  if ( v4 == *(_QWORD *)(a1 + 736) )
  {
    *(_OWORD *)a2 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  else
  {
    if ( *(_QWORD *)(v4 - 184) )
    {
      v5 = *(_DWORD *)(a1 + 3112);
      if ( v5 )
        *(_OWORD *)a2 = *(_OWORD *)(*(_QWORD *)(a1 + 3104) + 16LL * (unsigned int)(v5 - 1));
      else
        *(_OWORD *)a2 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(v4 - 192) + 88LL))(*(_QWORD *)(v4 - 192), &v18);
      v16 = (float)v18;
      v17 = v19;
      *(_QWORD *)a2 = 0LL;
      a2[2] = v16;
      a2[3] = (float)v17;
    }
    v6 = *(_QWORD *)(a1 + 744);
    if ( v6 != *(_QWORD *)(a1 + 736) && *(_QWORD *)(v6 - 168) )
    {
      v7 = *(_DWORD *)(a1 + 3136);
      if ( v7 )
        si128 = *(__m128 *)(*(_QWORD *)(a1 + 3128) + 16LL * (unsigned int)(v7 - 1));
      else
        si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
      v9 = *a2;
      if ( si128.m128_f32[0] > *a2 )
      {
        *a2 = si128.m128_f32[0];
        v9 = si128.m128_f32[0];
      }
      v10 = a2[1];
      v11 = _mm_shuffle_ps(si128, si128, 85).m128_f32[0];
      if ( v11 > v10 )
      {
        a2[1] = v11;
        v10 = v11;
      }
      v12 = a2[2];
      v13 = _mm_shuffle_ps(si128, si128, 170).m128_f32[0];
      if ( v12 > v13 )
      {
        a2[2] = v13;
        v12 = v13;
      }
      v14 = a2[3];
      v15 = _mm_shuffle_ps(si128, si128, 255).m128_f32[0];
      if ( v14 > v15 )
      {
        a2[3] = v15;
        v14 = v15;
      }
      if ( v12 <= v9 || v14 <= v10 )
      {
        *((_QWORD *)a2 + 1) = 0LL;
        *(_QWORD *)a2 = 0LL;
      }
    }
  }
}
