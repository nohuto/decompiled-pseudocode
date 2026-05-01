/*
 * XREFs of ??0?$producers_base@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIInspectable@Foundation@Windows@winrt@@UIExecuteCommand@@@std@@@impl@winrt@@QEAA@XZ @ 0x18063B638
 * Callers:
 *     ??$create_and_initialize@V?$module_count_wrapper@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@impl@winrt@@YAPEAV?$module_count_wrapper@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@@details@wil@@XZ @ 0x18063B498 (--$create_and_initialize@V-$module_count_wrapper@VLaunchRemoteDesktopUriHandler@implementation@S.c)
 * Callees:
 *     ??0?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@QEAA@XZ @ 0x18010E2B0 (--0-$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@.c)
 *     ??0?$producer_convert@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@U13456@X@impl@winrt@@QEAA@XZ @ 0x1802955AC (--0-$producer_convert@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@U13456@X@.c)
 */

_QWORD *winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,std::tuple<winrt::Windows::Foundation::IInspectable,IExecuteCommand>>::producers_base<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,std::tuple<winrt::Windows::Foundation::IInspectable,IExecuteCommand>>()
{
  _QWORD *v0; // r8
  _QWORD *v1; // r8
  _QWORD *result; // rax

  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DashboardActivator,winrt::Windows::Internal::Shell::DashboardActivator,void>::producer_convert<winrt::Windows::Internal::Shell::implementation::DashboardActivator,winrt::Windows::Internal::Shell::DashboardActivator,void>();
  Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>(v0);
  result = v1;
  *v1 = &IAppViewDataSourceAdapter::`vftable';
  return result;
}
