/*
 * XREFs of _lambda_7017635d5b356f6d3f79dc972349e24e_::operator() @ 0x1805CCD38
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7017635d5b356f6d3f79dc972349e24e__void_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_const_&_::_Do_call @ 0x1805DA6E0 (std--_Func_impl_no_alloc__lambda_7017635d5b356f6d3f79dc972349e24e__void_winrt--Wind_ea_1805DA6E0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002824C (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ?Clipboard@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A624 (-Clipboard@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStat.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$PackageInstalledResultSEA@H_N@DashboardManagerTelemetry@@SAX$$QEAH$$QEA_N@Z @ 0x1805C45E8 (--$PackageInstalledResultSEA@H_N@DashboardManagerTelemetry@@SAX$$QEAH$$QEA_N@Z.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@0@XZ @ 0x1805C6130 (--$open@V-$tip_test@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@.c)
 *     ??0StartExperiencePackageHelper@@QEAA@W4PackageInstallScenario@@@Z @ 0x1805CBB10 (--0StartExperiencePackageHelper@@QEAA@W4PackageInstallScenario@@@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805CBE0C (--1-$com_ptr_t@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CC214 (--1-$test_data_control@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@detai.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@1@XZ @ 0x1805CC674 (--C-$tip_test@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@.c)
 *     ?WasPreviouslyInstalled@StartExperiencePackageHelper@@QEAAX_N@Z @ 0x1805DA0D0 (-WasPreviouslyInstalled@StartExperiencePackageHelper@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_7017635d5b356f6d3f79dc972349e24e_::operator()(__int64 a1, __int64 **a2)
{
  int v2; // ebx
  StartExperiencePackageHelper *v3; // rcx
  void *v4; // [rsp+28h] [rbp-31h] BYREF
  void *v5; // [rsp+30h] [rbp-29h] BYREF
  __int64 v6; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v7[6]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v8[6]; // [rsp+70h] [rbp+17h] BYREF

  winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
    a2,
    &v6);
  v2 = winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View(&v6);
  StartExperiencePackageHelper::StartExperiencePackageHelper(v7);
  StartExperiencePackageHelper::WasPreviouslyInstalled(v3, v2 == 6);
  std::wstring::_Tidy_deallocate(v8);
  tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>>(&v5);
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::operator->(
                 (__int64)&v5,
                 (__int64 *)&v4)
            + 300) = v2;
  tip2::test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::~test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>(&v4);
  LODWORD(v4) = v2;
  DashboardManagerTelemetry::PackageInstalledResultSEA<int,bool>((__int64)&v4);
  wil::com_ptr_t<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>,wil::err_returncode_policy>(&v5);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
}
