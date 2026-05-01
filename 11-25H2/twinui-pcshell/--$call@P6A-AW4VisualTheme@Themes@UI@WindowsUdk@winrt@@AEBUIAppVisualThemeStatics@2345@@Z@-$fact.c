/*
 * XREFs of ??$call@P6A?AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUIAppVisualThemeStatics@2345@@Z@?$factory_cache_entry@UAppVisualTheme@Themes@UI@WindowsUdk@winrt@@UIAppVisualThemeStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AW4VisualTheme@Themes@UI@WindowsUdk@2@AEBUIAppVisualThemeStatics@4562@@Z@Z @ 0x18059C8E8
 * Callers:
 *     ?Current@AppVisualTheme@Themes@UI@WindowsUdk@winrt@@SA@XZ @ 0x1802C5B18 (-Current@AppVisualTheme@Themes@UI@WindowsUdk@winrt@@SA@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CE210 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIAppVisualThemeStatics@Themes@UI@WindowsUdk@winrt@@@winrt@@YA?AUIAppVisualThemeStatics@Themes@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18059CA48 (--$get_activation_factory@UIAppVisualThemeStatics@Themes@UI@WindowsUdk@winrt@@@winrt@@YA-AUIAppV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>::call<enum winrt::WindowsUdk::UI::Themes::VisualTheme (*)(winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 (__fastcall **a2)(__int64 *))
{
  unsigned int v3; // ebx
  __int64 v5[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v6[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v7)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+10h] BYREF
  __int64 v8; // [rsp+80h] [rbp+20h] BYREF
  __int64 v9; // [rsp+88h] [rbp+28h] BYREF

  v7 = a1;
  v5[0] = (__int64)L"WindowsUdk.UI.Themes.AppVisualTheme";
  v5[1] = 35LL;
  winrt::param::hstring::hstring((__int64)v6, v5);
  winrt::get_activation_factory<winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>(&v7, v6);
  if ( v7 && (v8 = 0LL, (**v7)(v7, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v8), (v9 = v8) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
    _InterlockedIncrement64(&qword_18089CA68);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>,
            (signed __int64)v7,
            0LL) )
    {
      v7 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089CA70);
    }
    v3 = (*a2)(&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>);
    _InterlockedDecrement64(&qword_18089CA68);
  }
  else
  {
    v3 = (*a2)((__int64 *)&v7);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
  return v3;
}
