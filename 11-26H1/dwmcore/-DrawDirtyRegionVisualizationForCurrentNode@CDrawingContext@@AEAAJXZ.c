/*
 * XREFs of ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180234B84
 * Callers:
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180081C40 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800197F0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E360 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?_Tidy@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@AEAAXXZ @ 0x1801BC504 (-_Tidy@-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@AEAAXXZ.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@PEAVCDrawListEntryBuilder@@@Z @ 0x1802084C4 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUD2D_RECT_F@@$0-0@gsl@@AEBU_D.c)
 *     ?CurrentRedrawRegionColor@CComposition@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x18022A994 (-CurrentRedrawRegionColor@CComposition@@QEAA-AU_D3DCOLORVALUE@@XZ.c)
 *     ??$?0$0?0V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@$0A@@?$span@UD2D_RECT_F@@$0?0@gsl@@QEAA@AEAV?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@Z @ 0x18023457C (--$-0$0-0V-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@$0A@@-$span@UD2D_RECT_F@@$.c)
 *     ??0?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180234720 (--0-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18023493C (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@XZ @ 0x180236808 (-GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimat.c)
 *     ?pop_front@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x180236E14 (-pop_front@-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?GetIntersectingRedrawRects@CTreeDirty@@QEBAXPEBVCOcclusionContext@@AEBUD2D_RECT_F@@_NPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180237470 (-GetIntersectingRedrawRects@CTreeDirty@@QEBAXPEBVCOcclusionContext@@AEBUD2D_RECT_F@@_NPEAV-$DynA.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180260650 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 *     ceilf_0 @ 0x1802B96CC (ceilf_0.c)
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawDirtyRegionVisualizationForCurrentNode(CDrawingContext *this)
{
  unsigned int v2; // ebx
  CComposition *v3; // rcx
  __int64 v4; // rsi
  struct CVisual *CurrentVisual; // rdi
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v12; // r8
  float v13; // xmm2_4
  __int32 v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rdx
  int v24; // eax
  _QWORD *i; // rsi
  _QWORD *DirtyRegionVisualizationData; // rdi
  unsigned int j; // esi
  __int64 v28; // rdx
  __int64 *v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  __int128 X_8; // [rsp+38h] [rbp-89h] BYREF
  __int128 v35; // [rsp+48h] [rbp-79h] BYREF
  __int64 v36; // [rsp+58h] [rbp-69h]
  unsigned int v37; // [rsp+60h] [rbp-61h]
  struct D2D_RECT_F v38; // [rsp+68h] [rbp-59h] BYREF
  struct _D3DCOLORVALUE v39; // [rsp+78h] [rbp-49h] BYREF
  __int64 v40[4]; // [rsp+88h] [rbp-39h] BYREF
  _OWORD v41[4]; // [rsp+A8h] [rbp-19h] BYREF
  int v42; // [rsp+E8h] [rbp+27h]
  __int64 v43; // [rsp+128h] [rbp+67h] BYREF

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 993) + 192LL))(*((_QWORD *)this + 993)) )
  {
    v4 = *((_QWORD *)this + 993);
    CComposition::CurrentRedrawRegionColor(v3, &v39);
    v36 = 0LL;
    v37 = 0;
    v35 = 0LL;
    v38 = 0LL;
    X_8 = 0LL;
    CurrentVisual = CDrawingContext::GetCurrentVisual(this);
    CDrawingContext::CalcClippedNodeWorldSpaceBounds(v6, (__int64)CurrentVisual, &v38);
    v7 = *(_OWORD *)((char *)this + 88);
    v8 = *(_OWORD *)((char *)this + 104);
    v42 = *((_DWORD *)this + 38);
    v41[0] = v7;
    v9 = *(_OWORD *)((char *)this + 120);
    v41[1] = v8;
    v10 = *(_OWORD *)((char *)this + 136);
    v41[2] = v9;
    v41[3] = v10;
    CMILMatrix::Invert((CMILMatrix *)v41, v11, v12);
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v41, &v38, (float *)&X_8);
    v13 = *(float *)&X_8;
    COERCE_FLOAT(v14 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    if ( COERCE_FLOAT(X_8 & v14) < 8388608.0 )
    {
      v15 = floorf_0(*(float *)&X_8);
      v14 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
      v13 = (float)(int)v15;
    }
    *(float *)&X_8 = v13;
    v16 = *((float *)&X_8 + 1);
    if ( COERCE_FLOAT(DWORD1(X_8) & v14) < 8388608.0 )
    {
      v17 = floorf_0(*((float *)&X_8 + 1));
      v14 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
      v16 = (float)(int)v17;
    }
    v18 = *((float *)&X_8 + 2);
    *((float *)&X_8 + 1) = v16;
    if ( COERCE_FLOAT(DWORD2(X_8) & v14) < 8388608.0 )
    {
      v19 = ceilf_0(*((float *)&X_8 + 2));
      v14 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
      v18 = (float)(int)v19;
    }
    v20 = *((float *)&X_8 + 3);
    *((float *)&X_8 + 2) = v18;
    if ( COERCE_FLOAT(HIDWORD(X_8) & v14) < 8388608.0 )
      v20 = (float)(int)ceilf_0(*((float *)&X_8 + 3));
    *((float *)&X_8 + 3) = v20;
    v21 = CDrawingContext::PushTransformInternal((const void **)this, 0LL, (CDrawingContext *)((char *)this + 88), 0, 0);
    v2 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x18B9u, 0LL);
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&v35);
    }
    else
    {
      LOBYTE(v22) = *((_BYTE *)CurrentVisual + 101) & 1;
      CTreeDirty::GetIntersectingRedrawRects(v4 + 112, v4 + 2648, &X_8, v22, &v35);
      if ( (*((_BYTE *)CurrentVisual + 101) & 1) != 0 )
      {
        if ( (**((_DWORD **)CurrentVisual + 28) & 0x200000) != 0 )
        {
          for ( i = (_QWORD *)CVisual::GetDirtyRegionVisualizationData(CurrentVisual, v23);
                i[4];
                std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<D2D_RECT_F>>>::pop_front(i) )
          {
            v23 = *(_QWORD *)(i[1] + 8 * (i[3] & (i[2] - 1LL)));
            if ( (*(_BYTE *)(*(_QWORD *)(v23 + 32) + 464LL) & 1) != 0 )
              break;
          }
        }
        if ( v37 )
          CVisual::AppendDirtyRegionVisualizationRects(CurrentVisual, &v35);
        if ( (**((_DWORD **)CurrentVisual + 28) & 0x200000) != 0 )
        {
          DirtyRegionVisualizationData = (_QWORD *)CVisual::GetDirtyRegionVisualizationData(CurrentVisual, v23);
          if ( DirtyRegionVisualizationData[4] )
          {
            for ( j = 0; (unsigned __int64)j < DirtyRegionVisualizationData[4]; ++j )
            {
              v28 = *(_QWORD *)(DirtyRegionVisualizationData[1]
                              + 8 * ((DirtyRegionVisualizationData[2] - 1LL) & (j + DirtyRegionVisualizationData[3])));
              *(struct _D3DCOLORVALUE *)&v39.r = (struct _D3DCOLORVALUE)_mm_loadu_si128((const __m128i *)(*(_QWORD *)(v28 + 24) + 104LL));
              if ( _mm_shuffle_ps(*(__m128 *)&v39.r, *(__m128 *)&v39.r, 255).m128_f32[0] > 0.0 )
              {
                std::vector<D2D_RECT_F>::vector<D2D_RECT_F>((__int64)v40, v28);
                v29 = gsl::span<D2D_RECT_F,-1>::span<D2D_RECT_F,-1>(&X_8, v40);
                v30 = *gsl::details::extent_type<-1>::extent_type<-1>(&v43, *v29);
                v31 = v29[1];
                *(_QWORD *)&v38.right = v31;
                *(_QWORD *)&v38.left = v30;
                if ( v30 == -1 || !v31 && v30 )
                {
                  ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
                  __debugbreak();
                }
                v32 = CDrawingContext::FillRectanglesWithSolidColor(this, (__int64)&v38, (__int64)&v39, 0LL);
                v2 = v32;
                if ( v32 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v32, 0x18EEu, 0LL);
                  std::vector<D2D_RECT_F>::_Tidy((__int64)v40);
                  goto LABEL_39;
                }
                std::vector<D2D_RECT_F>::_Tidy((__int64)v40);
              }
            }
            *((_BYTE *)g_pComposition + 6461) = 1;
          }
        }
      }
      else
      {
        gsl::details::extent_type<-1>::extent_type<-1>(&X_8, v37);
        *((_QWORD *)&X_8 + 1) = v35;
        if ( (_QWORD)X_8 == -1LL || !(_QWORD)v35 && (_QWORD)X_8 )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v24 = CDrawingContext::FillRectanglesWithSolidColor(this, (__int64)&X_8, (__int64)&v39, 0LL);
        v2 = v24;
        if ( v24 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x18C5u, 0LL);
      }
LABEL_39:
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&v35);
      CDrawingContext::PopTransformInternal(this, 0);
    }
  }
  return v2;
}
