/*
 * XREFs of _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x180279994
 * Callers:
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x18026D69C (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     ?IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18026D7BC (-IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180278C40 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180279DE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     _lambda_7099901f832ab090231de188016256f4_::operator() @ 0x1805CCE00 (_lambda_7099901f832ab090231de188016256f4_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1 @ 0x1805CEF40 (winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync$_Resume.c)
 *     ?ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x1805D7E2C (-ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1805D9670 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTelemetryAsync$_.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18002843C (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Wi.c)
 *     _anonymous_namespace_::TryGetTextFromProperty @ 0x180029018 (_anonymous_namespace_--TryGetTextFromProperty.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?GetForCurrentProcess@?$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800B7298 (-GetForCurrentProcess@-$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@I.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x18013B8F4 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion.c)
 *     ??$DashboardExtensionVersion@PEBG@DashboardManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x18018CC04 (--$DashboardExtensionVersion@PEBG@DashboardManagerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x1801BFCB8 (-Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion @ 0x1801C986C (_anonymous_namespace_--DashboardExtensionVersion--_DashboardExtensionVersion.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion_0 @ 0x180295C90 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion_0.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56189266@@@details@wil@@QEAA_NXZ @ 0x1805DAC54 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56189266@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall anonymous_namespace_::TryGetAvailableDashboardExtensionVersion(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD, void *, _QWORD); // rcx
  const unsigned __int16 *v3; // rax
  __int64 v4; // rax
  __int64 **v5; // rcx
  __int64 **v6; // rcx
  void (__fastcall ***v7)(_QWORD, void *, __int64 *); // rcx
  const unsigned __int16 *v8; // rax
  __int64 v9; // rax
  void (__fastcall ***v11)(_QWORD, void *, __int64 *); // [rsp+20h] [rbp-49h] BYREF
  const WCHAR *v12; // [rsp+28h] [rbp-41h] BYREF
  void (__fastcall ***v13)(_QWORD, void *, __int64 *); // [rsp+30h] [rbp-39h] BYREF
  __int64 *v14; // [rsp+38h] [rbp-31h] BYREF
  __int64 *v15; // [rsp+40h] [rbp-29h] BYREF
  __int64 v16[2]; // [rsp+48h] [rbp-21h] BYREF
  void *v17[4]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v18[7]; // [rsp+78h] [rbp+Fh] BYREF

  v12 = (const WCHAR *)a1;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56189266>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56189266>::GetImpl'::`2'::impl) )
  {
    LODWORD(v11) = 24;
    v17[0] = *(void **)winrt::hstring::hstring((winrt::hstring *)&v12, L"com.microsoft.windows.extension.dashboard");
    winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
      (const struct winrt::param::hstring *)&v14,
      (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v17,
      (__int64)&v11);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v12);
    if ( v14 )
    {
      winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
        &v14,
        &v15);
      if ( v15 )
      {
        winrt::param::hstring::hstring((winrt::param::hstring *)v17, L"Version");
        v7 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
                                                                   (void (__fastcall ****)(_QWORD, void *, __int64 *))&v15,
                                                                   (winrt *)&v12,
                                                                   v17);
        if ( v7 )
        {
          v16[0] = 0LL;
          (**v7)(v7, &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IPropertySet>, v16);
          v11 = (void (__fastcall ***)(_QWORD, void *, __int64 *))v16[0];
        }
        else
        {
          v11 = 0LL;
        }
        if ( v12 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
        anonymous_namespace_::TryGetTextFromProperty((winrt::hstring *)&v13, &v11);
        v12 = winrt::hstring::c_str((winrt::hstring *)&v13);
        DashboardManagerTelemetry::DashboardExtensionVersion<unsigned short const *>(&v12);
        v8 = winrt::hstring::c_str((winrt::hstring *)&v13);
        std::wstring::wstring((__int64)v17, (__int64)v8);
        v9 = anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion((__int64)v18, v17);
        anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion_0(a1, v9);
        *(_BYTE *)(a1 + 56) = 1;
        anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion(v18);
        std::wstring::_Tidy_deallocate(v17);
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v13);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
        v5 = &v14;
        goto LABEL_9;
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
    }
    v6 = &v14;
LABEL_22:
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v6);
    *(_BYTE *)(a1 + 56) = 0;
    return a1;
  }
  LODWORD(v11) = 8;
  v17[0] = *(void **)winrt::hstring::hstring((winrt::hstring *)&v12, L"com.microsoft.windows.extension.dashboard");
  winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
    (const struct winrt::param::hstring *)&v15,
    (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v17,
    (__int64)&v11);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v12);
  if ( !v15 )
  {
LABEL_11:
    v6 = &v15;
    goto LABEL_22;
  }
  winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
    &v15,
    &v14);
  if ( !v14 )
  {
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
    goto LABEL_11;
  }
  winrt::param::hstring::hstring((winrt::param::hstring *)v17, L"Version");
  v2 = *(void (__fastcall ****)(_QWORD, void *, _QWORD))winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
                                                          (void (__fastcall ****)(_QWORD, void *, __int64 *))&v14,
                                                          (winrt *)v16,
                                                          v17);
  v13 = 0LL;
  if ( v2 )
    (**v2)(v2, &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IPropertySet>, &v13);
  if ( v16[0] )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v16);
  anonymous_namespace_::TryGetTextFromProperty((winrt::hstring *)&v11, &v13);
  v12 = winrt::hstring::c_str((winrt::hstring *)&v11);
  DashboardManagerTelemetry::DashboardExtensionVersion<unsigned short const *>(&v12);
  v3 = winrt::hstring::c_str((winrt::hstring *)&v11);
  std::wstring::wstring((__int64)v17, (__int64)v3);
  v4 = anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion((__int64)v18, v17);
  anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion_0(a1, v4);
  *(_BYTE *)(a1 + 56) = 1;
  anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion(v18);
  std::wstring::_Tidy_deallocate(v17);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v11);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  v5 = &v15;
LABEL_9:
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v5);
  return a1;
}
