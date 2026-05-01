/*
 * XREFs of ??$call@AEAV_lambda_403c633736a1bddadba4817f5f4a752e_@@@?$factory_cache_entry@UApplication@Xaml@UI@Microsoft@winrt@@UIApplicationFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_403c633736a1bddadba4817f5f4a752e_@@@Z @ 0x18027F3F0
 * Callers:
 *     ??0?$XamlApplication_WASDK_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18027F33C (--0-$XamlApplication_WASDK_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@She.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??R_lambda_403c633736a1bddadba4817f5f4a752e_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Microsoft@winrt@@@Z @ 0x18027F510 (--R_lambda_403c633736a1bddadba4817f5f4a752e_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Microsoft@win.c)
 *     ??$get_activation_factory@UIApplicationFactory@Xaml@UI@Microsoft@winrt@@@winrt@@YA?AUIApplicationFactory@Xaml@UI@Microsoft@0@AEBUhstring@param@0@@Z @ 0x18027F594 (--$get_activation_factory@UIApplicationFactory@Xaml@UI@Microsoft@winrt@@@winrt@@YA-AUIApplicatio.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Xaml::Application,winrt::Microsoft::UI::Xaml::IApplicationFactory>::call<_lambda_403c633736a1bddadba4817f5f4a752e_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 **),
        __int64 a2)
{
  signed __int64 v3; // rbx
  _DWORD *v4; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v5[4]; // [rsp+28h] [rbp-18h] BYREF
  const wchar_t *v6; // [rsp+38h] [rbp-8h]
  void (__fastcall ***v7)(_QWORD, __int64 *, __int64 **); // [rsp+50h] [rbp+10h] BYREF
  __int64 *v8; // [rsp+60h] [rbp+20h] BYREF

  v7 = a1;
  v5[0] = 1;
  v5[1] = 29;
  v6 = L"Microsoft.UI.Xaml.Application";
  v4 = v5;
  winrt::get_activation_factory<winrt::Microsoft::UI::Xaml::IApplicationFactory>(&v7, &v4);
  v3 = (signed __int64)v7;
  v8 = 0LL;
  if ( v7 && ((**v7)(v7, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v8), v8) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v8);
    v8 = &qword_1808DC958;
    _InterlockedIncrement64(&qword_1808DC958);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Application,winrt::Microsoft::UI::Xaml::IApplicationFactory>,
            v3,
            0LL) )
    {
      v7 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DC960);
    }
    _lambda_403c633736a1bddadba4817f5f4a752e_::operator()(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Application,winrt::Microsoft::UI::Xaml::IApplicationFactory>);
    _InterlockedDecrement64(&qword_1808DC958);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
  }
  else
  {
    _lambda_403c633736a1bddadba4817f5f4a752e_::operator()(a2, &v7);
    if ( v7 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v7);
  }
}
