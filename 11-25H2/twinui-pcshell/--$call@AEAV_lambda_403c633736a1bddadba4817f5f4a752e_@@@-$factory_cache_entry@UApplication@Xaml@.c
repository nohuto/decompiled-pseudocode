/*
 * XREFs of ??$call@AEAV_lambda_403c633736a1bddadba4817f5f4a752e_@@@?$factory_cache_entry@UApplication@Xaml@UI@Microsoft@winrt@@UIApplicationFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_403c633736a1bddadba4817f5f4a752e_@@@Z @ 0x180287F30
 * Callers:
 *     ??0?$XamlApplication_WASDK_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180287E98 (--0-$XamlApplication_WASDK_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@She.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??R_lambda_403c633736a1bddadba4817f5f4a752e_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Microsoft@winrt@@@Z @ 0x180288040 (--R_lambda_403c633736a1bddadba4817f5f4a752e_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Microsoft@win.c)
 *     ??$get_activation_factory@UIApplicationFactory@Xaml@UI@Microsoft@winrt@@@winrt@@YA?AUIApplicationFactory@Xaml@UI@Microsoft@0@AEBUhstring@param@0@@Z @ 0x1802880C0 (--$get_activation_factory@UIApplicationFactory@Xaml@UI@Microsoft@winrt@@@winrt@@YA-AUIApplicatio.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Xaml::Application,winrt::Microsoft::UI::Xaml::IApplicationFactory>::call<_lambda_403c633736a1bddadba4817f5f4a752e_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2)
{
  _DWORD *v3; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v4[4]; // [rsp+30h] [rbp-20h] BYREF
  const wchar_t *v5; // [rsp+40h] [rbp-10h]
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // [rsp+60h] [rbp+10h] BYREF
  __int64 v7; // [rsp+70h] [rbp+20h] BYREF
  __int64 v8; // [rsp+78h] [rbp+28h] BYREF

  v6 = a1;
  v4[0] = 1;
  v4[1] = 29;
  v5 = L"Microsoft.UI.Xaml.Application";
  v3 = v4;
  winrt::get_activation_factory<winrt::Microsoft::UI::Xaml::IApplicationFactory>(&v6, &v3);
  if ( v6 && (v7 = 0LL, (**v6)(v6, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v7), (v8 = v7) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
    _InterlockedIncrement64(&qword_18089C2C8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Application,winrt::Microsoft::UI::Xaml::IApplicationFactory>,
            (signed __int64)v6,
            0LL) )
    {
      v6 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089C2D0);
    }
    _lambda_403c633736a1bddadba4817f5f4a752e_::operator()(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Application,winrt::Microsoft::UI::Xaml::IApplicationFactory>);
    _InterlockedDecrement64(&qword_18089C2C8);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  }
  else
  {
    _lambda_403c633736a1bddadba4817f5f4a752e_::operator()(a2, &v6);
    if ( v6 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v6);
  }
}
