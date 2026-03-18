/*
 * XREFs of ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800C8918
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006CFD0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800C70F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x1800CF1A8 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800D11E8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1802351BC (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005C5A0 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?ApplyDeferredD2DLayersInScope@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z @ 0x180071420 (-ApplyDeferredD2DLayersInScope@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800C86B0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x1800FA610 (-PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ?Create@CD2DLayer@@SAJAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@PEAPEAV1@@Z @ 0x180176560 (-Create@CD2DLayer@@SAJAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS.c)
 *     ??$SAFE_DELETE@VCD2DLayer@@@@YAXAEAPEAVCD2DLayer@@@Z @ 0x1801829B0 (--$SAFE_DELETE@VCD2DLayer@@@@YAXAEAPEAVCD2DLayer@@@Z.c)
 *     ?SetDeferredD2DLayerForTopCpuClip@CScopedClipStack@@QEAAXPEAVCD2DLayer@@@Z @ 0x18018D030 (-SetDeferredD2DLayerForTopCpuClip@CScopedClipStack@@QEAAXPEAVCD2DLayer@@@Z.c)
 *     ?GetOcclusion@CDrawingContext@@QEBAPEBVCOcclusionContext@@XZ @ 0x1801E2A34 (-GetOcclusion@CDrawingContext@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?GetCurrentOverlayVisuals@CDrawingContext@@QEBA_NAEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x180236794 (-GetCurrentOverlayVisuals@CDrawingContext@@QEBA_NAEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVis.c)
 *     ?IsBacked@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_NPEBV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x18024FB90 (-IsBacked@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PushD2DLayer(
        CDrawingContext *this,
        struct CVisual *a2,
        struct D2D_RECT_F *a3,
        struct ID2D1Geometry *a4,
        struct D2D_MATRIX_3X2_F *a5,
        float a6,
        char a7,
        unsigned int a8)
{
  bool v9; // zf
  unsigned int v10; // ebx
  float v11; // xmm1_4
  int v12; // esi
  char v13; // r15
  __int64 v14; // rcx
  __int64 v17; // rcx
  const struct COcclusionContext *Occlusion; // r14
  unsigned int v19; // eax
  char IsBacked; // al
  int v21; // ecx
  struct ID2D1Geometry *v22; // rsi
  int v23; // eax
  __int64 v24; // r8
  int v25; // r10d
  unsigned int v26; // eax
  int v27; // eax
  enum D2D1_LAYER_OPTIONS1 v29; // [rsp+28h] [rbp-89h]
  enum D2D1_PRIMITIVE_BLEND v30; // [rsp+40h] [rbp-71h]
  struct CD2DLayer *v31; // [rsp+48h] [rbp-69h] BYREF
  enum D2D1_ANTIALIAS_MODE v32; // [rsp+50h] [rbp-61h]
  struct D2D_RECT_F v33; // [rsp+58h] [rbp-59h] BYREF
  struct D2D_MATRIX_3X2_F *v34; // [rsp+68h] [rbp-49h]
  struct ID2D1Geometry *v35; // [rsp+70h] [rbp-41h]
  __int128 v36; // [rsp+78h] [rbp-39h] BYREF
  __int64 v37; // [rsp+88h] [rbp-29h]
  struct D2D_RECT_F v38; // [rsp+90h] [rbp-21h] BYREF

  v34 = a5;
  v9 = *((_DWORD *)this + 59) == 0;
  v10 = 0;
  v31 = 0LL;
  v30 = D2D1_PRIMITIVE_BLEND_SOURCE_OVER;
  LODWORD(v11) = COERCE_UNSIGNED_INT(a6 - 1.0) & _xmm;
  v12 = 0;
  v13 = 0;
  v32 = !v9;
  v14 = *((_QWORD *)this + 3);
  v33 = 0LL;
  v35 = a4;
  if ( *(_DWORD *)((*(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *))(*(_QWORD *)(v14 + 8) + 24LL))(
                     v14 + 8,
                     &v38)
                 + 4) == 3 )
  {
    v12 = 3;
  }
  else if ( v11 < 0.0000011920929 )
  {
    v30 = D2D1_PRIMITIVE_BLEND_COPY;
    v12 = 1;
  }
  if ( a3 )
    v33 = *a3;
  else
    CDrawingContext::GetClipBoundsWorld((__int64)this, &v33.left);
  if ( v33.right <= v33.left || v33.bottom <= v33.top )
  {
    CDrawingContext::PushNoOpLayer(this, a2);
    return v10;
  }
  v38 = v33;
  if ( (v12 & 1) == 0 )
  {
    Occlusion = CDrawingContext::GetOcclusion(this);
    if ( Occlusion )
    {
      v37 = 0LL;
      v36 = 0LL;
      CDrawingContext::GetCurrentOverlayVisuals(v17, &v36);
      v19 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 8LL))((char *)this + 16);
      IsBacked = COcclusionContext::IsBacked(Occlusion, &v33, v19);
      v21 = v12 | 1;
      if ( !IsBacked )
        v21 = v12;
      v12 = v21;
      if ( (_QWORD)v36 )
        std::_Deallocate<16>((void *)v36, (v37 - v36) & 0xFFFFFFFFFFFFFFF8uLL);
    }
  }
  v29 = v12;
  v22 = v35;
  v23 = CD2DLayer::Create(&v38, v35, v34, a6, v32, v29, v30, &v31);
  v10 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0xFA3u, 0LL);
LABEL_30:
    SAFE_DELETE<CD2DLayer>(&v31);
    return v10;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0t_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_D2DLAYERCREATEREASON,
      a8);
  if ( a7 && v22 && v11 < 0.0000011920929 )
  {
    CScopedClipStack::SetDeferredD2DLayerForTopCpuClip((CDrawingContext *)((char *)this + 736), v31);
    v13 = 1;
  }
  else
  {
    v27 = CScopedClipStack::ApplyDeferredD2DLayersInScope((CDrawingContext *)((char *)this + 736), this, v24);
    v10 = v27;
    if ( v27 < 0 )
    {
      v25 = v27;
      v26 = 4022;
LABEL_25:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, v26, 0LL);
      if ( v13 )
        CScopedClipStack::SetDeferredD2DLayerForTopCpuClip((CDrawingContext *)((char *)this + 736), 0LL);
      goto LABEL_30;
    }
  }
  v10 = CDrawingContext::PushLayer(this, a2, v31, v13 ^ 1u, 1);
  v25 = v10;
  if ( (v10 & 0x80000000) != 0 )
  {
    v26 = 4029;
    goto LABEL_25;
  }
  return v10;
}
