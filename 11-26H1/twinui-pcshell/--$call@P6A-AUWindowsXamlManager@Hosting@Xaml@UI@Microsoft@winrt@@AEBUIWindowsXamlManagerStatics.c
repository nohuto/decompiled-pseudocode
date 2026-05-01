/*
 * XREFs of ??$call@P6A?AUWindowsXamlManager@Hosting@Xaml@UI@Microsoft@winrt@@AEBUIWindowsXamlManagerStatics@23456@@Z@?$factory_cache_entry@UWindowsXamlManager@Hosting@Xaml@UI@Microsoft@winrt@@UIWindowsXamlManagerStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUWindowsXamlManager@Hosting@Xaml@UI@Microsoft@2@AEBUIWindowsXamlManagerStatics@45672@@Z@Z @ 0x18044A6FC
 * Callers:
 *     ?InitializeForCurrentThread@WindowsXamlManager@Hosting@Xaml@UI@Microsoft@winrt@@SA@XZ @ 0x18044B530 (-InitializeForCurrentThread@WindowsXamlManager@Hosting@Xaml@UI@Microsoft@winrt@@SA@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIWindowsXamlManagerStatics@Hosting@Xaml@UI@Microsoft@winrt@@@winrt@@YA?AUIWindowsXamlManagerStatics@Hosting@Xaml@UI@Microsoft@0@AEBUhstring@param@0@@Z @ 0x18044AA54 (--$get_activation_factory@UIWindowsXamlManagerStatics@Hosting@Xaml@UI@Microsoft@winrt@@@winrt@@Y.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager,winrt::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics>::call<winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager (*)(winrt::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics const &)>(
        __int64 a1,
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v5; // rax
  char v6; // di
  __int64 v8[3]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-38h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+58h] [rbp-18h] BYREF

  v8[0] = (__int64)L"Microsoft.UI.Xaml.Hosting.WindowsXamlManager";
  v8[1] = 44LL;
  winrt::param::hstring::hstring((__int64)v9, v8);
  winrt::get_activation_factory<winrt::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics>(&v10, v9);
  v8[0] = 0LL;
  if ( !v10 )
  {
    v5 = 0LL;
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, v8);
  v5 = v8[0];
  if ( !v8[0] )
    goto LABEL_3;
  v6 = 1;
LABEL_4:
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v8);
  if ( v6 )
  {
    v8[0] = (__int64)&qword_1808DCA18;
    _InterlockedIncrement64(&qword_1808DCA18);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager,winrt::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DCA20);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager,winrt::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics>);
    _InterlockedDecrement64(&qword_1808DCA18);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v10);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return a2;
}
