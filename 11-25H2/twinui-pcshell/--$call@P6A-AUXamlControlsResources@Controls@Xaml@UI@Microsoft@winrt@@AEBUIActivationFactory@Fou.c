/*
 * XREFs of ??$call@P6A?AUXamlControlsResources@Controls@Xaml@UI@Microsoft@winrt@@AEBUIActivationFactory@Foundation@Windows@6@@Z@?$factory_cache_entry@UXamlControlsResources@Controls@Xaml@UI@Microsoft@winrt@@UIActivationFactory@Foundation@Windows@6@@impl@winrt@@QEAA?A_P$$QEAP6A?AUXamlControlsResources@Controls@Xaml@UI@Microsoft@2@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x1801BACF4
 * Callers:
 *     ?OnLaunched@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXULaunchActivatedEventArgs@Xaml@UI@Microsoft@8@@Z @ 0x18024E840 (-OnLaunched@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@w.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIActivationFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1801BB490 (--$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA-AUIActivation.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Xaml::Controls::XamlControlsResources,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Microsoft::UI::Xaml::Controls::XamlControlsResources (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
        __int64 a1,
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v6; // [rsp+20h] [rbp-50h] BYREF
  __int64 v7; // [rsp+28h] [rbp-48h] BYREF
  _DWORD *v8; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v9[4]; // [rsp+40h] [rbp-30h] BYREF
  const wchar_t *v10; // [rsp+50h] [rbp-20h]
  __int64 *v11; // [rsp+58h] [rbp-18h]
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // [rsp+60h] [rbp-10h] BYREF

  v6 = a2;
  v9[0] = 1;
  v9[1] = 48;
  v10 = L"Microsoft.UI.Xaml.Controls.XamlControlsResources";
  v8 = v9;
  winrt::get_activation_factory<winrt::Windows::Foundation::IActivationFactory>(&v12, &v8);
  if ( v12 && (v7 = 0LL, (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v7), (v6 = v7) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
    v11 = &qword_18089C308;
    _InterlockedIncrement64(&qword_18089C308);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Controls::XamlControlsResources,winrt::Windows::Foundation::IActivationFactory>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089C310);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Controls::XamlControlsResources,winrt::Windows::Foundation::IActivationFactory>);
    _InterlockedDecrement64(&qword_18089C308);
    if ( v12 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v12);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  }
  return a2;
}
