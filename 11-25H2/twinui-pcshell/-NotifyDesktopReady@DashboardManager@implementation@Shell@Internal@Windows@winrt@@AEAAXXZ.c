/*
 * XREFs of ?NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805B1248
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180282C70 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AEF48 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?TryUpdatePrelaunchSettings@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18020ACA8 (-TryUpdatePrelaunchSettings@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 *     ?RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4StartUpEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x18022648C (-RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and.c)
 *     ?ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180275CFC (-ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x18028A668 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AC1C (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1805A6860 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@detai.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805A8020 (--1-$test_data_control@V-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805A8194 (--1-$test_watcher@V-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ?GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@6@XZ @ 0x1805AE22C (-GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoRestartWidgets@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805B239C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoRestartWidgets@@@details@wil@@QEAAX_N.c)
 *     ?RunWidgetCanvasDelayedInitializeAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1805B3118 (-RunWidgetCanvasDelayedInitializeAsync@DashboardManager@implementation@Shell@Internal@Windows@wi.c)
 *     ?StartWidgetsOverwatchAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUIAsyncAction@Foundation@56@XZ @ 0x1805B4018 (-StartWidgetsOverwatchAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-A.c)
 *     _anonymous_namespace_::TryGetDashboardPackageName_0 @ 0x1805B4F30 (_anonymous_namespace_--TryGetDashboardPackageName_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ @ 0x1805B709C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_50179255@@@details@wil@@QEAA_NXZ @ 0x1805B7118 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_50179255@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix@@@details@wil@@QEAA_NXZ @ 0x1805B7568 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookup.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::NotifyDesktopReady(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  winrt::Windows::Internal::Shell::implementation::DashboardManager *v1; // rbx
  __int64 *DashboardAppExtension; // rax
  __int64 DashboardPackageName_0; // rsi
  volatile signed __int32 *v4; // rdi
  volatile signed __int32 *v5; // rdi
  __int64 v6; // rdx
  wil *v7; // rcx
  __int64 *started; // rax
  unsigned int v9; // edi
  volatile signed __int32 *v10; // rbx
  char v11; // [rsp+20h] [rbp-A8h] BYREF
  char v12; // [rsp+21h] [rbp-A7h] BYREF
  _BYTE v13[6]; // [rsp+22h] [rbp-A6h] BYREF
  volatile signed __int32 *v14; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v15[8]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v16; // [rsp+38h] [rbp-90h] BYREF
  volatile signed __int32 *v17; // [rsp+40h] [rbp-88h] BYREF
  volatile signed __int32 *v18; // [rsp+48h] [rbp-80h] BYREF
  winrt::Windows::Internal::Shell::implementation::DashboardManager *v19; // [rsp+50h] [rbp-78h]
  _BYTE v20[48]; // [rsp+58h] [rbp-70h] BYREF
  volatile signed __int32 *v21; // [rsp+88h] [rbp-40h]
  void *v22[4]; // [rsp+90h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v1 = this;
  v19 = this;
  tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>>((struct wil::details::IFailureCallback *)v20);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix>::GetImpl'::`2'::impl)
    && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
  {
    DashboardAppExtension = winrt::Windows::Internal::Shell::implementation::DashboardManager::GetDashboardAppExtension(
                              (RTL_SRWLOCK *)v1,
                              &v16);
    DashboardPackageName_0 = anonymous_namespace_::TryGetDashboardPackageName_0(
                               v22,
                               (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)DashboardAppExtension);
    v4 = v21;
    v17 = v21;
    if ( v21 )
      _InterlockedIncrement(v21 + 76);
    tip2::details::shared_data<0,0,1>::begin_update((__int64)(v4 + 2));
    std::wstring::operator=((__int64)(v4 + 68), DashboardPackageName_0);
    tip2::test_data_control<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>::~test_data_control<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>((void **)&v17);
    std::wstring::_Tidy_deallocate(v22);
  }
  try
  {
    if ( winrt::Windows::Internal::Shell::implementation::DashboardManager::ShouldDeferWidgetsInitialization() )
      winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent(
        (__int64)v1,
        (__int64)&v11,
        1);
    winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent((__int64)v1, (__int64)&v12, 0);
    winrt::Windows::Internal::Shell::implementation::DashboardManager::TryUpdatePrelaunchSettings(v1);
    v5 = v21;
    v18 = v21;
    if ( v21 )
      _InterlockedIncrement(v21 + 76);
    tip2::details::shared_data<0,0,1>::begin_update((__int64)(v5 + 2));
    *((_DWORD *)v5 + 66) = 0;
    tip2::test_data_control<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>::~test_data_control<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>((void **)&v18);
    LOBYTE(v6) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoRestartWidgets>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_AutoRestartWidgets>::GetImpl'::`2'::impl,
      v6);
    if ( !*((_QWORD *)v1 + 15) )
    {
      started = (__int64 *)winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync(
                             v1,
                             v15);
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)v1 + 15, started);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v15);
    }
  }
  catch ( ... )
  {
    v9 = wil::ResultFromCaughtException(v7);
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x8F5,
      (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)v9);
    v10 = v21;
    v14 = v21;
    if ( v21 )
    {
      _InterlockedIncrement(v21 + 76);
      v10 = v14;
    }
    tip2::details::shared_data<0,0,1>::begin_update((__int64)(v10 + 2));
    *((_DWORD *)v10 + 66) = v9;
    tip2::test_data_control<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>::~test_data_control<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>((void **)&v14);
    v1 = v19;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_50179255>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_50179255>::GetImpl'::`2'::impl) )
    winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync(v1, v13);
  tip2::details::shared_data<0,0,0>::complete_without_lock((__int64)(v21 + 2));
  tip2::test_watcher<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>::~test_watcher<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>((__int64)v20);
}
