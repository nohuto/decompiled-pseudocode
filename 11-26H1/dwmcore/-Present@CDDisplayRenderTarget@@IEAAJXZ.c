/*
 * XREFs of ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x180253F5C
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE2B0 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800566F0 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@IPEA_N_N@Z @ 0x1800D62A4 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 *     ?PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ @ 0x180192858 (-PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ.c)
 *     ?ConfirmCompSurfInfoUpate@CComposition@@QEAAXAEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x180195468 (-ConfirmCompSurfInfoUpate@CComposition@@QEAAXAEBUtagCOMPOSITION_TARGET_ID@@@Z.c)
 *     ?NotifyPresent@CTargetStats@@QEAAXJ_N_K@Z @ 0x18019FA88 (-NotifyPresent@CTargetStats@@QEAAXJ_N_K@Z.c)
 *     ??1CFailFastError@@QEAA@XZ @ 0x1801ABF10 (--1CFailFastError@@QEAA@XZ.c)
 *     ?GetPresentError@CDDisplayRenderTarget@@IEBAJXZ @ 0x1801AC8A0 (-GetPresentError@CDDisplayRenderTarget@@IEBAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FullscreenStats@@@details@wil@@QEAA_NXZ @ 0x180202388 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FullscreenStats@@@details@wil@@QE.c)
 *     ?NotifyPresent@CTargetStats@@QEAAXJ_K@Z @ 0x180207BA4 (-NotifyPresent@CTargetStats@@QEAAXJ_K@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::Present(CDDisplayRenderTarget *this)
{
  unsigned int v2; // ebx
  int PresentError; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // r8d
  int v7; // eax
  char IsEnabled; // al
  CTargetStats *v9; // rcx
  CComposition *v10; // rcx
  char v11; // r11
  int v13; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h]
  __int128 v15; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h]
  bool v17; // [rsp+90h] [rbp+20h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+98h] [rbp+28h] BYREF

  v2 = 0;
  if ( CDDisplayRenderTarget::PresentNeeded(this) )
  {
    v13 = g_hrNoHardwareDeviceOverride;
    v14 = 0LL;
    PresentError = CDDisplayRenderTarget::GetPresentError(this);
    v4 = *((_QWORD *)this + 27);
    g_hrNoHardwareDeviceOverride = PresentError;
    v16 = 0LL;
    v15 = 0LL;
    CRegion::GetRectangles((int **)(v4 + 184), &v15);
    v5 = *((_QWORD *)this + 27);
    v6 = 0;
    v17 = 0;
    if ( !((__int64)(*((_QWORD *)&v15 + 1) - v15) >> 4) )
      v6 = 2;
    v7 = COverlayContext::Present(
           (CDDisplayRenderTarget *)((char *)this + 232),
           (struct IOverlaySwapChain *)((v5 + 24) & -(__int64)(v5 != 0)),
           v6,
           (__int64)&v15,
           *((_DWORD *)this + 8096),
           &v17,
           0);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x2F4u, 0LL);
    }
    else
    {
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullscreenStats>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_FullscreenStats>::GetImpl'::`2'::impl);
      v9 = (CDDisplayRenderTarget *)((char *)this + 32152);
      if ( IsEnabled )
        CTargetStats::NotifyPresent(v9, v2, PerformanceCount.QuadPart);
      else
        CTargetStats::NotifyPresent(v9, v2, v17, PerformanceCount.QuadPart);
      *((_BYTE *)this + 32528) = 0;
      if ( v11 && *((_DWORD *)this + 8048) != 1 )
        CComposition::ConfirmCompSurfInfoUpate(v10, (CDDisplayRenderTarget *)((char *)this + 32152));
    }
    if ( (_QWORD)v15 )
    {
      std::_Deallocate<16>((void *)v15, (v16 - v15) & 0xFFFFFFFFFFFFFFF0uLL);
      v16 = 0LL;
      v15 = 0LL;
    }
    CFailFastError::~CFailFastError((CFailFastError *)&v13);
  }
  if ( *((_DWORD *)this + 8048) == 1 )
    return 142213121;
  return v2;
}
