/*
 * XREFs of ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE2B0
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@WEI@EAAJPEAVCDrawingContext@@@Z @ 0x180249BF0 (-RenderAndPresent@CDDisplayRenderTarget@@WEI@EAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderAndPresent@CDDisplayRenderTarget@@WFA@EAAJPEAVCDrawingContext@@@Z @ 0x180249C00 (-RenderAndPresent@CDDisplayRenderTarget@@WFA@EAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AddComputeScribbleDirtyRects@CDDisplayRenderTarget@@IEAAXXZ @ 0x180058938 (-AddComputeScribbleDirtyRects@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800EDCF8 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x1800EDF9C (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 *     ?CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ @ 0x1800EE104 (-CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@QEAA_NXZ @ 0x1800EEDF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@.c)
 *     ?Ready@CTargetStats@@QEAA_N_K_N@Z @ 0x1800EF0B0 (-Ready@CTargetStats@@QEAA_N_K_N@Z.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800F0094 (-ApplyConfiguration@COverlayContext@@QEAAX_NPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800F39E0 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ?GetClipBox@CMonitorTransform@@QEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18018C160 (-GetClipBox@CMonitorTransform@@QEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ @ 0x180192858 (-PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ.c)
 *     ?AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ @ 0x180194BF8 (-AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ.c)
 *     ?PostRender@CComputeScribbleRenderer@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BA684 (-PostRender@CComputeScribbleRenderer@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@IUMilRectU@@UMil3D.c)
 *     ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x180253F5C (-Present@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayRenderTarget::RenderAndPresent(CDDisplayRenderTarget *this, struct CDrawingContext *a2)
{
  CDDisplayRenderTarget *v2; // r14
  int v3; // edi
  __int64 v4; // rax
  __int64 v7; // r15
  __int64 v8; // rsi
  float *v9; // rcx
  float *v10; // rdx
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  __int64 v15; // rax
  bool v16; // r8
  int v17; // eax
  int v18; // eax
  int v19; // esi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v23; // rax
  unsigned int v24; // esi
  bool v25; // al
  __int64 v26; // r8
  int v27; // eax
  int v28; // esi
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  int v34; // esi
  __int128 v35; // [rsp+30h] [rbp-30h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-20h] BYREF
  __int128 v37; // [rsp+48h] [rbp-18h]
  __int64 v38; // [rsp+58h] [rbp-8h]

  v2 = (CDDisplayRenderTarget *)((char *)this - 96);
  v3 = 0;
  v4 = *((_QWORD *)this + 15);
  if ( v4 && *((_QWORD *)this + 13) && *((_DWORD *)this + 8024) != 1 )
  {
    v7 = *(_QWORD *)(v4 + 264);
    if ( v7 )
      CDDisplayRenderTarget::AddComputeScribbleDirtyRects((CDDisplayRenderTarget *)((char *)this - 96));
    v8 = *((_QWORD *)this + 13);
    v38 = 0LL;
    v37 = 0LL;
    if ( !*(_BYTE *)(v8 + 2436) )
    {
      v9 = (float *)(v8 + 132);
      if ( v8 == -132 && MEMORY[0xFFFFFFFFFFFFFFFC] )
      {
LABEL_39:
        `gsl::details::get_terminate_handler'::`2'::handler((gsl::details *)v9);
        __debugbreak();
      }
      v10 = &v9[4 * *(unsigned int *)(v8 + 128)];
      while ( v9 != v10 )
      {
        v11 = *((float *)this + 7462);
        v12 = *((float *)this + 7464);
        if ( v12 > v11 )
        {
          v13 = *((float *)this + 7465);
          if ( v13 > *((float *)this + 7463)
            && !IsEmpty((const struct D2D_RECT_F *)v9)
            && v12 > *v9
            && v9[2] > v11
            && v13 > v9[1]
            && v9[3] > v14 )
          {
            break;
          }
        }
        v9 += 4;
      }
    }
    COverlayContext::ApplyConfiguration((CDDisplayRenderTarget *)((char *)this + 136));
    v9 = (float *)((char *)this + 30128);
    v23 = (__int64)(*((_QWORD *)&v37 + 1) - v37) >> 3;
    *(_QWORD *)&v35 = v23;
    if ( v23 == -1 )
      goto LABEL_39;
    *((_QWORD *)&v35 + 1) = v37;
    if ( !(_QWORD)v37 )
    {
      if ( v23 )
        goto LABEL_39;
    }
    CMonitorDirty::AddDirtyRegion((__int64)v9, v8 + 112, (__int64)&v35);
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    v15 = *((_QWORD *)this + 4053);
    v16 = v15 && *(_DWORD *)(v15 + 8) == -1;
    if ( CTargetStats::Ready((CDDisplayRenderTarget *)((char *)this + 32056), PerformanceCount.QuadPart, v16) )
    {
      v17 = CDDisplayRenderTarget::Render(v2, a2);
      v3 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x245u, 0LL);
      if ( v7 )
      {
        if ( COverlayContext::AnyDesktopPlaneScaling((CDDisplayRenderTarget *)((char *)this + 136)) )
        {
          *((_QWORD *)&v35 + 1) = *((_QWORD *)this + 3735);
          *(_QWORD *)&v35 = 0LL;
        }
        else
        {
          v35 = *(_OWORD *)((char *)this + 29864);
        }
        v27 = CComputeScribbleRenderer::PostRender(
                v7,
                ((unsigned __int64)this + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)v2 >> 64),
                &v35);
        v28 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x24Du, 0LL);
        if ( !v3 || v3 >= 0 && v28 < 0 )
          v3 = v28;
        v7 = 0LL;
      }
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetImpl'::`2'::impl)
        && g_LockAndReadTarget )
      {
        v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 15) + 464LL)
                                    + 8LL * *(unsigned int *)(*((_QWORD *)this + 15) + 524LL))
                        + 216LL);
        v31 = (v30 + 16) & -(__int64)(v30 != 0);
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v31 + 112LL))(
          v31,
          ((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL));
      }
      v18 = CDDisplayRenderTarget::Present(v2);
      v19 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x259u, 0LL);
      if ( !v3 || v3 >= 0 && v19 < 0 )
        v3 = v19;
    }
    else if ( *((_DWORD *)v2 + 8048) != 1 )
    {
      v24 = 0;
      if ( *((_DWORD *)this + 7536) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000000) != 0 )
        {
          if ( *((_QWORD *)this + 4011) )
            v29 = *((unsigned int *)this + 8077);
          else
            v29 = 0LL;
          McTemplateU0t_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &RENDERTARGET_RENDERSKIPPED,
            v29);
        }
        v24 = 1;
      }
      v25 = CDDisplayRenderTarget::PresentNeeded(v2);
      v26 = v24 | 2;
      if ( !v25 )
        v26 = v24;
      if ( (_DWORD)v26 && g_pComposition && *((_BYTE *)g_pComposition + 6465) )
        CComposition::ScheduleCompositionPass(g_pComposition, 0LL, v26);
    }
    CFSVPProvider::CheckForFullscreenVideoNotifications((CDDisplayRenderTarget *)((char *)this + 32344));
    if ( v7 )
    {
      LOBYTE(v32) = COverlayContext::AnyDesktopPlaneScaling((CDDisplayRenderTarget *)((char *)this + 136));
      CMonitorTransform::GetClipBox((char *)this + 29840, &v35, v32);
      v33 = CComputeScribbleRenderer::PostRender(v7, ((unsigned __int64)this + 64) & -(__int64)(v2 != 0LL), &v35);
      v34 = v33;
      if ( v33 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0x27Au, 0LL);
      if ( !v3 || v3 >= 0 && v34 < 0 )
        v3 = v34;
    }
    if ( (_QWORD)v37 )
      std::_Deallocate<16>((void *)v37, (v38 - v37) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetImpl'::`2'::impl)
    && g_LockAndReadTarget )
  {
    v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 15) + 464LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)this + 15) + 524LL))
                    + 216LL);
    v21 = (v20 + 16) & -(__int64)(v20 != 0);
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v21 + 112LL))(
      v21,
      ((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL));
  }
  return (unsigned int)v3;
}
