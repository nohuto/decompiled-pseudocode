/*
 * XREFs of ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE760
 * Callers:
 *     ?RenderAndPresent@CLegacyRenderTarget@@WEI@EAAJPEAVCDrawingContext@@@Z @ 0x180249C10 (-RenderAndPresent@CLegacyRenderTarget@@WEI@EAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@WFA@EAAJPEAVCDrawingContext@@@Z @ 0x180249C20 (-RenderAndPresent@CLegacyRenderTarget@@WFA@EAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Add@?$CMergedRectBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180057AB0 (-Add@-$CMergedRectBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?AddComputeScribbleDirtyRects@CLegacyRenderTarget@@AEAAXXZ @ 0x180059F10 (-AddComputeScribbleDirtyRects@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x1800D54A8 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?DirectFlipEarlyWakeupReady@COverlayContext@@QEBA_NXZ @ 0x1800D59F8 (-DirectFlipEarlyWakeupReady@COverlayContext@@QEBA_NXZ.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?GetSharedOcclusionContext@CDesktopTree@@QEBAPEBVCOcclusionContext@@XZ @ 0x1800EE280 (-GetSharedOcclusionContext@CDesktopTree@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@QEAA_NXZ @ 0x1800EEDF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@.c)
 *     ?Ready@CTargetStats@@QEAA_N_K_N@Z @ 0x1800EF0B0 (-Ready@CTargetStats@@QEAA_N_K_N@Z.c)
 *     ?CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x1800EFDC0 (-CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800F0094 (-ApplyConfiguration@COverlayContext@@QEAAX_NPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@.c)
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800F0A20 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800F39E0 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ?GetClipBox@CMonitorTransform@@QEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18018C160 (-GetClipBox@CMonitorTransform@@QEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ @ 0x18019288C (-PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ.c)
 *     ?AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ @ 0x180194BF8 (-AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ.c)
 *     ?PostRender@CComputeScribbleRenderer@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BA684 (-PostRender@CComputeScribbleRenderer@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@IUMilRectU@@UMil3D.c)
 *     ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x180201808 (-GetOptimizedRect@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x18025303C (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::RenderAndPresent(CLegacyRenderTarget *this, struct CDrawingContext *a2)
{
  char *v2; // r14
  CLegacyRenderTarget *v3; // rdi
  struct CDrawingContext *v5; // r15
  __int64 v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v10; // r13
  __int64 v11; // rsi
  COverlayContext *v12; // r12
  float *i; // rax
  float *v14; // rdx
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm3_4
  float v20; // xmm5_4
  CDirectFlipInfo *v21; // rcx
  int v22; // r15d
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  CDesktopTree *v26; // rax
  const struct COcclusionContext *SharedOcclusionContext; // rax
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // r15
  const struct COcclusionContext *v31; // r13
  unsigned int v32; // r12d
  unsigned int v33; // eax
  bool v34; // si
  __int64 v35; // rax
  bool v36; // r8
  struct CDrawingContext *v37; // r15
  int v38; // eax
  int v39; // esi
  FastRegion::CRegion **v40; // rax
  __int64 v41; // r8
  const char *v42; // r9
  unsigned int v43; // esi
  const struct FastRegion::Internal::CRgnData **v44; // rcx
  char *v45; // rdx
  int v46; // eax
  int v47; // r15d
  __int64 v48; // r8
  __int64 v49; // rax
  char *v50; // rdx
  bool v51; // al
  char *v52; // rdx
  int v53; // eax
  int v54; // edi
  __int64 v55; // [rsp+48h] [rbp-C0h]
  struct CDrawingContext *v56; // [rsp+50h] [rbp-B8h]
  const struct COcclusionContext *v57; // [rsp+58h] [rbp-B0h] BYREF
  float v58; // [rsp+60h] [rbp-A8h]
  float v59; // [rsp+64h] [rbp-A4h]
  __int128 v60; // [rsp+68h] [rbp-A0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v62[2]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v63; // [rsp+90h] [rbp-78h]
  __int64 v64; // [rsp+A0h] [rbp-68h]
  __int64 v65; // [rsp+A8h] [rbp-60h]
  FastRegion::CRegion *v66; // [rsp+B8h] [rbp-50h] BYREF
  int v67; // [rsp+C0h] [rbp-48h] BYREF

  v2 = 0LL;
  v56 = a2;
  v3 = (CLegacyRenderTarget *)((char *)this - 96);
  LODWORD(v55) = 0;
  v5 = a2;
  v6 = *((_QWORD *)this + 13);
  v7 = 0;
  if ( !v6 || !*((_QWORD *)this + 11) || *((_DWORD *)this + 8018) == 1 )
    goto LABEL_2;
  *(_QWORD *)&v60 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v6 + 256) + 56LL))(v6 + 256);
  v10 = v60;
  if ( (_QWORD)v60 )
    CLegacyRenderTarget::AddComputeScribbleDirtyRects(v3);
  v11 = *((_QWORD *)this + 11);
  v12 = (CLegacyRenderTarget *)((char *)this + 120);
  v64 = 0LL;
  v63 = 0LL;
  if ( !*(_BYTE *)(v11 + 2436) )
  {
    if ( v11 == -132 && MEMORY[0xFFFFFFFFFFFFFFFC] )
    {
LABEL_29:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    for ( i = (float *)(v11 + 136); ; i += 4 )
    {
      v14 = i - 1;
      if ( i - 1 == (float *)(v11 + 132 + 16LL * *(unsigned int *)(v11 + 128)) )
        break;
      v15 = *((float *)this + 7458);
      v16 = *((float *)this + 7460);
      if ( v16 > v15 )
      {
        v17 = *((float *)this + 7461);
        v18 = *((float *)this + 7459);
        if ( v17 > v18 )
        {
          v19 = i[1];
          if ( v19 > *v14 )
          {
            v20 = i[2];
            if ( v20 > *i && v16 > *v14 && v19 > v15 && v17 > *i && v20 > v18 )
              break;
          }
        }
      }
    }
  }
  COverlayContext::ApplyConfiguration((CLegacyRenderTarget *)((char *)this + 120));
  v21 = (CDirectFlipInfo *)*((_QWORD *)this + 2426);
  v22 = 0;
  HIDWORD(v55) = 0;
  if ( !v21 )
    goto LABEL_26;
  v22 = *((_DWORD *)v21 + 13);
  HIDWORD(v55) = v22;
  if ( v22 != 4 )
  {
    HIDWORD(v55) = *((_DWORD *)v21 + 13);
    if ( v22 == 2 )
    {
LABEL_84:
      v34 = COverlayContext::DirectFlipEarlyWakeupReady(v12);
      goto LABEL_38;
    }
LABEL_26:
    v23 = (__int64)(*((_QWORD *)&v63 + 1) - v63) >> 3;
    v62[0] = v23;
    if ( v23 == -1 )
      goto LABEL_29;
    v62[1] = v63;
    if ( !(_QWORD)v63 )
    {
      if ( v23 )
        goto LABEL_29;
    }
    if ( !*((_BYTE *)this + 31984) )
    {
      v24 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3765) + 32LL))(*((_QWORD *)this + 3765));
      v25 = *((_QWORD *)this + 3999);
      v65 = v24;
      v26 = (CDesktopTree *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 56LL))(v25);
      SharedOcclusionContext = CDesktopTree::GetSharedOcclusionContext(v26);
      v28 = *((_QWORD *)this + 3765);
      v57 = SharedOcclusionContext;
      v29 = v65;
      v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 56LL))(v28);
      v31 = v57;
      v66 = (FastRegion::CRegion *)&v67;
      v32 = 0;
      v67 = 0;
      while ( 1 )
      {
        v33 = 1;
        if ( !*(_BYTE *)(v11 + 2436) )
          v33 = *(_DWORD *)(v11 + 128);
        if ( v32 >= v33 )
          break;
        v40 = &v66;
        if ( !*((_QWORD *)this + 3822) )
          v40 = 0LL;
        CTreeDirty::GetOptimizedRect(v11 + 112, &v57, v32, v29, v31, v40, v30, v62, v55, v56);
        if ( v58 > *(float *)&v57 && v59 > *((float *)&v57 + 1) )
        {
          CMergedRectBase<8>::Add((unsigned int *)this + 7532, (__int64)&v57, v41, v42);
          v44 = (const struct FastRegion::Internal::CRgnData **)*((_QWORD *)this + 3822);
          if ( v44 )
          {
            CRegion::Union(v44, &v66);
            *(_DWORD *)v66 = 0;
          }
        }
        ++v32;
      }
      FastRegion::CRegion::FreeMemory(&v66);
      v22 = HIDWORD(v55);
      v3 = (CLegacyRenderTarget *)((char *)this - 96);
      v10 = v60;
      v12 = (CLegacyRenderTarget *)((char *)this + 120);
    }
    if ( !v22 )
    {
      v34 = 0;
      goto LABEL_38;
    }
    goto LABEL_84;
  }
  if ( CDirectFlipInfo::RenderingRealizationChanged(v21) )
    goto LABEL_26;
  v34 = COverlayContext::DirectFlipEarlyWakeupReady((CLegacyRenderTarget *)((char *)this + 120));
LABEL_38:
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v35 = *((_QWORD *)this + 4051);
  v36 = v35 && *(_DWORD *)(v35 + 8) == -1;
  if ( CTargetStats::Ready((CLegacyRenderTarget *)((char *)this + 32032), PerformanceCount.QuadPart, v36) || v34 )
  {
    v37 = v56;
    v38 = CLegacyRenderTarget::Render(v3, v56);
    LODWORD(v55) = v38;
    v39 = v38;
    if ( v38 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v38, 0x13Fu, 0LL);
    if ( v10 )
    {
      if ( COverlayContext::AnyDesktopPlaneScaling(v12) )
      {
        *((_QWORD *)&v60 + 1) = *((_QWORD *)this + 3733);
        *(_QWORD *)&v60 = 0LL;
      }
      else
      {
        v60 = *(_OWORD *)((char *)this + 29848);
      }
      if ( v3 )
        v45 = (char *)this + 64;
      else
        v45 = 0LL;
      v46 = CComputeScribbleRenderer::PostRender(v10, v45, &v60);
      v47 = v46;
      if ( v46 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v46, 0x147u, 0LL);
      if ( !v39 || v39 >= 0 && v47 < 0 )
        LODWORD(v55) = v47;
      v37 = v56;
      v10 = 0LL;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetImpl'::`2'::impl)
      && g_LockAndReadTarget )
    {
      v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 112LL))(*((_QWORD *)this + 13) + 24LL);
      v50 = (char *)v37 + 16;
      if ( !v37 )
        v50 = 0LL;
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v49 + 112LL))(v49, v50);
    }
    CLegacyRenderTarget::Present(v3);
  }
  else if ( *((_DWORD *)this + 8018) != 1 )
  {
    v43 = 0;
    if ( *((_DWORD *)this + 7532) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000000) != 0 )
      {
        if ( *((_QWORD *)this + 4008) )
          v48 = *((unsigned int *)this + 8071);
        else
          v48 = 0LL;
        McTemplateU0t_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &RENDERTARGET_RENDERSKIPPED, v48);
      }
      v43 = 1;
    }
    if ( CLegacyRenderTarget::PresentNeeded(v3) )
      v43 |= 2u;
    if ( v43 && g_pComposition && *((_BYTE *)g_pComposition + 6465) )
      CComposition::ScheduleCompositionPass(g_pComposition, 0LL, v43);
  }
  CLegacyRenderTarget::CheckForMajorityScreenVideoNotifications(v3);
  if ( v10 )
  {
    v51 = COverlayContext::AnyDesktopPlaneScaling(v12);
    CMonitorTransform::GetClipBox((char *)this + 29824, v62, v51);
    v52 = (char *)this + 64;
    if ( !v3 )
      v52 = 0LL;
    v53 = CComputeScribbleRenderer::PostRender(v10, v52, v62);
    v54 = v53;
    if ( v53 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v53, 0x174u, 0LL);
    v7 = v55;
    if ( !(_DWORD)v55 || (int)v55 >= 0 && v54 < 0 )
      v7 = v54;
  }
  else
  {
    v7 = v55;
  }
  if ( (_QWORD)v63 )
    std::_Deallocate<16>((void *)v63, (v64 - v63) & 0xFFFFFFFFFFFFFFF8uLL);
  v5 = v56;
LABEL_2:
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetImpl'::`2'::impl)
    && g_LockAndReadTarget )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 112LL))(*((_QWORD *)this + 13) + 24LL);
    if ( v5 )
      v2 = (char *)v5 + 16;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 112LL))(v8, v2);
  }
  return v7;
}
