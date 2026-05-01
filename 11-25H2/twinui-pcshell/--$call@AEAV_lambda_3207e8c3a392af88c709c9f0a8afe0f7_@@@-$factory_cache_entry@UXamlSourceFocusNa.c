/*
 * XREFs of ??$call@AEAV_lambda_3207e8c3a392af88c709c9f0a8afe0f7_@@@?$factory_cache_entry@UXamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Windows@winrt@@UIXamlSourceFocusNavigationRequestFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_3207e8c3a392af88c709c9f0a8afe0f7_@@@Z @ 0x180440118
 * Callers:
 *     ?SetFocus2@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAH_N@Z @ 0x180180230 (-SetFocus2@-$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal.c)
 *     ?SetFocus@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180180368 (-SetFocus@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@win.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??R_lambda_cdfc71d4e5fb339911b9247de9cec5c2_@@QEBA@AEBUIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Microsoft@winrt@@@Z @ 0x1800A65D8 (--R_lambda_cdfc71d4e5fb339911b9247de9cec5c2_@@QEBA@AEBUIXamlSourceFocusNavigationRequestFactory@.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CE210 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x18044028C (--$get_activation_factory@UIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Windows@winr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest,winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>::call<_lambda_3207e8c3a392af88c709c9f0a8afe0f7_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6[2]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v7[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+48h] [rbp-28h] BYREF
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+10h] BYREF
  __int64 v10; // [rsp+98h] [rbp+28h] BYREF

  v9 = a1;
  v7[0] = (__int64)L"Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationRequest";
  v7[1] = 56LL;
  winrt::param::hstring::hstring((__int64)v8, v7);
  winrt::get_activation_factory<winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>(&v9, v8);
  if ( v9 && (v10 = 0LL, (**v9)(v9, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10), (v6[0] = v10) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_18089C1A8;
    _InterlockedIncrement64(&qword_18089C1A8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest,winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089C1B0);
    }
    _lambda_cdfc71d4e5fb339911b9247de9cec5c2_::operator()(
      a3,
      a2,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest,winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>);
    _InterlockedDecrement64(&qword_18089C1A8);
  }
  else
  {
    _lambda_cdfc71d4e5fb339911b9247de9cec5c2_::operator()(a3, a2, (__int64)&v9);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return a2;
}
