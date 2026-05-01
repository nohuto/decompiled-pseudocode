/*
 * XREFs of _lambda_edd22ea2698d38aa4454b60a8c07f089_::operator() @ 0x1805CDC40
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_edd22ea2698d38aa4454b60a8c07f089__void_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_const_&_::_Do_call @ 0x1805DA7B0 (std--_Func_impl_no_alloc__lambda_edd22ea2698d38aa4454b60a8c07f089__void_winrt--Wind_ea_1805DA7B0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002824C (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ?Clipboard@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A624 (-Clipboard@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStat.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$PackageInstalledResultWPR@H_N@DashboardManagerTelemetry@@SAX$$QEAH$$QEA_N@Z @ 0x1805C46E4 (--$PackageInstalledResultWPR@H_N@DashboardManagerTelemetry@@SAX$$QEAH$$QEA_N@Z.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@0@XZ @ 0x1805C6130 (--$open@V-$tip_test@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@.c)
 *     ??0WidgetPlatformPackageHelper@@QEAA@W4PackageInstallScenario@@@Z @ 0x1805CBB80 (--0WidgetPlatformPackageHelper@@QEAA@W4PackageInstallScenario@@@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805CBE0C (--1-$com_ptr_t@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CC214 (--1-$test_data_control@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@detai.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@1@XZ @ 0x1805CC674 (--C-$tip_test@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@.c)
 *     ?LogPackagenameForSysprep@implementation@Shell@Internal@Windows@winrt@@YAXXZ @ 0x1805D4F4C (-LogPackagenameForSysprep@implementation@Shell@Internal@Windows@winrt@@YAXXZ.c)
 *     ?WasPreviouslyInstalled@WidgetPlatformPackageHelper@@QEAAX_N@Z @ 0x1805DA148 (-WasPreviouslyInstalled@WidgetPlatformPackageHelper@@QEAAX_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55116415@@@details@wil@@QEAA_NXZ @ 0x1805DAAA8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55116415@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_edd22ea2698d38aa4454b60a8c07f089_::operator()(__int64 a1, __int64 **a2)
{
  int v2; // ebx
  WidgetPlatformPackageHelper *v3; // rcx
  winrt::Windows::Internal::Shell::implementation *v4; // rcx
  void *v5; // [rsp+28h] [rbp-31h] BYREF
  void *v6; // [rsp+30h] [rbp-29h] BYREF
  __int64 v7; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v8[6]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v9[6]; // [rsp+70h] [rbp+17h] BYREF

  winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
    a2,
    &v7);
  v2 = winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View(&v7);
  WidgetPlatformPackageHelper::WidgetPlatformPackageHelper(v8);
  WidgetPlatformPackageHelper::WasPreviouslyInstalled(v3, v2 == 6);
  std::wstring::_Tidy_deallocate(v9);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55116415>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55116415>::GetImpl'::`2'::impl)
    && v2 == 6 )
  {
    winrt::Windows::Internal::Shell::implementation::LogPackagenameForSysprep(v4);
  }
  tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>>(&v6);
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::operator->(
                 (__int64)&v6,
                 (__int64 *)&v5)
            + 292) = v2;
  tip2::test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::~test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>(&v5);
  LODWORD(v5) = v2;
  DashboardManagerTelemetry::PackageInstalledResultWPR<int,bool>((__int64)&v5);
  wil::com_ptr_t<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>,wil::err_returncode_policy>(&v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
}
