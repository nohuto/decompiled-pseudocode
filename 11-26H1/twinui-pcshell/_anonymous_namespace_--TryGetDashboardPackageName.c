/*
 * XREFs of _anonymous_namespace_::TryGetDashboardPackageName @ 0x180279CBC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180278C40 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1 @ 0x1805CEF40 (winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync$_Resume.c)
 *     ?StartSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x1805D74C0 (-StartSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 *     ?ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x1805D7E2C (-ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1805D9670 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTelemetryAsync$_.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Clipboard@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A624 (-Clipboard@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180030514 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x1801BFCB8 (-Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56189266@@@details@wil@@QEAA_NXZ @ 0x1805DAC54 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56189266@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall anonymous_namespace_::TryGetDashboardPackageName(_QWORD *a1)
{
  _WORD *v2; // rax
  winrt::hstring *v3; // rax
  unsigned __int16 *v4; // rax
  winrt::hstring *v5; // rax
  unsigned __int16 *v6; // rax
  _QWORD v7[4]; // [rsp+20h] [rbp-20h] BYREF
  int v8; // [rsp+60h] [rbp+20h] BYREF
  __int64 *v9; // [rsp+68h] [rbp+28h] BYREF
  volatile signed __int32 *v10; // [rsp+70h] [rbp+30h] BYREF
  volatile signed __int32 *v11; // [rsp+78h] [rbp+38h] BYREF

  a1[2] = 0LL;
  v2 = a1;
  if ( a1[3] > 7uLL )
    v2 = (_WORD *)*a1;
  *v2 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56189266>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56189266>::GetImpl'::`2'::impl) )
  {
    v8 = 24;
    v7[0] = *(_QWORD *)winrt::hstring::hstring((winrt::hstring *)&v10, L"com.microsoft.windows.extension.dashboard");
    winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
      (const struct winrt::param::hstring *)&v9,
      (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v7,
      (__int64)&v8);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
    if ( v9 )
    {
      v5 = (winrt::hstring *)winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
                               &v9,
                               &v11);
      v6 = (unsigned __int16 *)winrt::hstring::c_str(v5);
      std::wstring::operator=((char *)a1, v6);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v11);
    }
  }
  else
  {
    v8 = 8;
    v7[0] = *(_QWORD *)winrt::hstring::hstring((winrt::hstring *)&v10, L"com.microsoft.windows.extension.dashboard");
    winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
      (const struct winrt::param::hstring *)&v9,
      (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v7,
      (__int64)&v8);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
    if ( v9 )
    {
      v3 = (winrt::hstring *)winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
                               &v9,
                               &v11);
      v4 = (unsigned __int16 *)winrt::hstring::c_str(v3);
      std::wstring::operator=((char *)a1, v4);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v11);
    }
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
}
