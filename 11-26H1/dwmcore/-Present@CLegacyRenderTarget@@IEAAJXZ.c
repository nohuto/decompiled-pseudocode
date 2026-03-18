/*
 * XREFs of ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x18025303C
 * Callers:
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE760 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetTightDirtyRects@?$CTargetDirtyBase@$07@@QEAA_NPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180056338 (-GetTightDirtyRects@-$CTargetDirtyBase@$07@@QEAA_NPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@IPEA_N_N@Z @ 0x1800D62A4 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x1800F3B80 (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     ?PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ @ 0x18019288C (-PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ.c)
 *     ?ConfirmCompSurfInfoUpate@CComposition@@QEAAXAEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x180195468 (-ConfirmCompSurfInfoUpate@CComposition@@QEAAXAEBUtagCOMPOSITION_TARGET_ID@@@Z.c)
 *     ?NotifyPresent@CTargetStats@@QEAAXJ_N_K@Z @ 0x18019FA88 (-NotifyPresent@CTargetStats@@QEAAXJ_N_K@Z.c)
 *     ?GetPresentError@CLegacyRenderTarget@@AEBAJXZ @ 0x1801A1D34 (-GetPresentError@CLegacyRenderTarget@@AEBAJXZ.c)
 *     ??1CFailFastError@@QEAA@XZ @ 0x1801ABF10 (--1CFailFastError@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@$$QEAU2@@Z @ 0x1801E57D0 (--$_Emplace_reallocate@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAPEAU.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FullscreenStats@@@details@wil@@QEAA_NXZ @ 0x180202388 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FullscreenStats@@@details@wil@@QE.c)
 *     ?NotifyPresent@CTargetStats@@QEAAXJ_K@Z @ 0x180207BA4 (-NotifyPresent@CTargetStats@@QEAAXJ_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::Present(CLegacyRenderTarget *this)
{
  unsigned int v2; // ebx
  char *v3; // r14
  int PresentError; // eax
  int v5; // ecx
  __int64 v6; // rax
  char v7; // al
  int v8; // edi
  char v9; // bl
  unsigned int v10; // eax
  int v11; // eax
  char IsEnabled; // al
  bool v13; // di
  CTargetStats *v14; // rcx
  CComposition *v15; // rcx
  int v17; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+48h] [rbp-28h]
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h]
  bool v21; // [rsp+A0h] [rbp+30h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+A8h] [rbp+38h] BYREF

  v2 = 0;
  if ( CLegacyRenderTarget::PresentNeeded(this) )
  {
    v20 = 0LL;
    v19 = 0LL;
    v3 = (char *)this + 200;
    if ( !CTargetDirtyBase<8>::GetTightDirtyRects((__int64)this + 30208, &v19) )
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)v3 + 24LL) + 128LL))(
        *(_QWORD *)v3 + 24LL,
        &v19);
    if ( *((_BYTE *)this + 32513) && *((_QWORD *)&v19 + 1) == (_QWORD)v19 )
    {
      if ( *((_QWORD *)&v19 + 1) == v20 )
      {
        std::vector<tagRECT>::_Emplace_reallocate<tagRECT>(
          (void **)&v19,
          *((__int64 *)&v19 + 1),
          &TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::sc_rcEmpty);
      }
      else
      {
        **((_OWORD **)&v19 + 1) = TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::sc_rcEmpty;
        *((_QWORD *)&v19 + 1) += 16LL;
      }
    }
    v21 = 0;
    PresentError = CLegacyRenderTarget::GetPresentError(this);
    v5 = g_hrNoHardwareDeviceOverride;
    g_hrNoHardwareDeviceOverride = PresentError;
    v6 = *(_QWORD *)this;
    v17 = v5;
    v18 = 0LL;
    v7 = (*(__int64 (__fastcall **)(CLegacyRenderTarget *))(v6 + 224))(this);
    v8 = *((_DWORD *)this + 8090);
    v9 = v7;
    v10 = (*(__int64 (__fastcall **)(CLegacyRenderTarget *, __int128 *))(*(_QWORD *)this + 232LL))(this, &v19);
    v11 = COverlayContext::Present(
            (CLegacyRenderTarget *)((char *)this + 216),
            (struct IOverlaySwapChain *)((*(_QWORD *)v3 + 24LL) & -(__int64)(*(_QWORD *)v3 != 0LL)),
            v10,
            (__int64)&v19,
            v8,
            &v21,
            v9);
    v2 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x1F9u, 0LL);
    }
    else
    {
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullscreenStats>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_FullscreenStats>::GetImpl'::`2'::impl);
      v13 = v21;
      v14 = (CLegacyRenderTarget *)((char *)this + 32128);
      if ( IsEnabled )
        CTargetStats::NotifyPresent(v14, v2, PerformanceCount.QuadPart);
      else
        CTargetStats::NotifyPresent(v14, v2, v21, PerformanceCount.QuadPart);
      *((_BYTE *)this + 32512) = 0;
      if ( v2 == 142213167 )
      {
        *((_BYTE *)this + 32512) = 1;
        ScheduleCompositionPass(0, 0x2000u);
      }
      if ( v13 && *((_DWORD *)this + 8042) != 1 )
        CComposition::ConfirmCompSurfInfoUpate(v15, (CLegacyRenderTarget *)((char *)this + 32128));
    }
    CFailFastError::~CFailFastError((CFailFastError *)&v17);
    if ( (_QWORD)v19 )
      std::_Deallocate<16>((void *)v19, (v20 - v19) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  if ( *((_DWORD *)this + 8042) == 1 )
    return 142213121;
  return v2;
}
