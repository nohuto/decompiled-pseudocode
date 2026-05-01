/*
 * XREFs of ?OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x1802445F0
 * Callers:
 *     ?OnFindInStartVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x1802445A0 (-OnFindInStartVisibilityChanged@XamlLauncher@@UEAAX_N@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____lambda_5a356e014343250489ea11969104e505___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable___::Invoke @ 0x18045B450 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18045B450.c)
 * Callees:
 *     ?GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x1801BAEF0 (-GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x18023821C (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ?ReportVisibilityForMonitor@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_KAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x180238260 (-ReportVisibilityForMonitor@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoord.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59342962@@@details@wil@@QEAA_NXZ @ 0x18045DA04 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59342962@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall XamlLauncher::OnSearchAppVisibilityChanged(XamlLauncher *this, unsigned __int8 a2)
{
  int v2; // esi
  __int64 v4; // rdx
  HMONITOR v5; // rax
  HMONITOR v6; // rdx
  int v7; // [rsp+50h] [rbp+30h] BYREF
  HMONITOR v8; // [rsp+58h] [rbp+38h] BYREF

  v2 = a2;
  if ( a2 )
  {
    v8 = 0LL;
    XamlLauncher::GetCortanaVisibleMonitor((XamlLauncher *)((char *)this - 8), &v8);
    v5 = (HMONITOR)*((_QWORD *)this + 50);
    v6 = v8;
    if ( v5 && v8 != v5 )
    {
      v7 = 1;
      winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibilityForMonitor(
        (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))this + 44,
        (__int64)v5,
        (unsigned int *)&v7);
      v6 = v8;
    }
    if ( v6 )
    {
      v7 = 0;
      winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibilityForMonitor(
        (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))this + 44,
        (__int64)v6,
        (unsigned int *)&v7);
      *((_QWORD *)this + 50) = v8;
    }
  }
  else
  {
    v4 = *((_QWORD *)this + 50);
    if ( v4 )
    {
      v7 = 1;
      winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibilityForMonitor(
        (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))this + 44,
        v4,
        (unsigned int *)&v7);
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_59342962>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_59342962>::GetImpl'::`2'::impl) )
  {
    v8 = 0LL;
    XamlLauncher::GetCortanaVisibleMonitor((XamlLauncher *)((char *)this - 8), &v8);
    v7 = v2 ^ 1;
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibilityForMonitor(
      (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))this + 44,
      (__int64)v8,
      (unsigned int *)&v7);
  }
  else
  {
    v7 = v2 ^ 1;
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
      (__int64 *)this + 44,
      (unsigned int *)&v7);
  }
}
