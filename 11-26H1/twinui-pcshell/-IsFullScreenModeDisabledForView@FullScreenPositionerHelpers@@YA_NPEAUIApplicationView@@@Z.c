/*
 * XREFs of ?IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18008D4B0
 * Callers:
 *     ?ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180234170 (-ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1802F7058 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180322C70 (-EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FUL.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18006D890 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18008D56C (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180321D1C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_RespectEdgeAllowFullScre.c)
 */

bool __fastcall FullScreenPositionerHelpers::IsFullScreenModeDisabledForView(
        FullScreenPositionerHelpers *this,
        struct IApplicationView *a2)
{
  unsigned int v3; // r8d
  struct IApplicationView *v4; // rdx
  HWND CoreWindowForView; // rax
  int v7; // [rsp+58h] [rbp+10h] BYREF
  __int16 v8; // [rsp+5Ch] [rbp+14h]
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v3 = `wil::Feature<__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v9 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy>::GetCachedFeatureEnabledState(
                      &`wil::Feature<__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy>::GetImpl'::`2'::impl,
                      &v9);
    v3 = v9;
  }
  v7 = 0;
  v8 = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_1808DE008,
    0xF21820u,
    (v3 >> 10) & 1,
    (v3 >> 11) & 1,
    (__int64)&v7,
    1u,
    3);
  CoreWindowForView = ApplicationViewHelpers::GetCoreWindowForView(this, v4);
  return GetPropW(CoreWindowForView, L"Windows.ImmersiveShell.DisableFullScreenMode") != 0LL;
}
