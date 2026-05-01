/*
 * XREFs of ??$call@P6A?AUColor@UI@Windows@winrt@@AEBUIColorsStatics@234@@Z@?$factory_cache_entry@UColors@UI@Windows@winrt@@UIColorsStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUColor@UI@Windows@2@AEBUIColorsStatics@452@@Z@Z @ 0x1805E40EC
 * Callers:
 *     ?CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z @ 0x1805E57D8 (-CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CE210 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIColorsStatics@UI@Windows@winrt@@@winrt@@YA?AUIColorsStatics@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1805E4278 (--$get_activation_factory@UIColorsStatics@UI@Windows@winrt@@@winrt@@YA-AUIColorsStatics@UI@Windo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_DWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Colors,winrt::Windows::UI::IColorsStatics>::call<winrt::Windows::UI::Color (*)(winrt::Windows::UI::IColorsStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        _DWORD *a2,
        __int64 (__fastcall **a3)(__int64 *))
{
  __int64 v6[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v8[32]; // [rsp+40h] [rbp-20h] BYREF
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+10h] BYREF
  __int64 v10; // [rsp+88h] [rbp+28h] BYREF

  v9 = a1;
  v7[0] = (__int64)L"Windows.UI.Colors";
  v7[1] = 17LL;
  winrt::param::hstring::hstring((__int64)v8, v7);
  winrt::get_activation_factory<winrt::Windows::UI::IColorsStatics>(&v9, v8);
  if ( v9 && (v10 = 0LL, (**v9)(v9, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10), (v6[0] = v10) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_18089B378;
    _InterlockedIncrement64(&qword_18089B378);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Colors,winrt::Windows::UI::IColorsStatics>,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089B380);
    }
    *a2 = (*a3)(&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Colors,winrt::Windows::UI::IColorsStatics>);
    _InterlockedDecrement64(&qword_18089B378);
  }
  else
  {
    *a2 = (*a3)((__int64 *)&v9);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return a2;
}
