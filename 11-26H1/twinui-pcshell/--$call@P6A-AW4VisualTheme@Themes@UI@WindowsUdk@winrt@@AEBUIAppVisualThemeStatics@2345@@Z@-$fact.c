/*
 * XREFs of ??$call@P6A?AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUIAppVisualThemeStatics@2345@@Z@?$factory_cache_entry@UAppVisualTheme@Themes@UI@WindowsUdk@winrt@@UIAppVisualThemeStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AW4VisualTheme@Themes@UI@WindowsUdk@2@AEBUIAppVisualThemeStatics@4562@@Z@Z @ 0x1805C0A40
 * Callers:
 *     ?Current@AppVisualTheme@Themes@UI@WindowsUdk@winrt@@SA@XZ @ 0x1802BC708 (-Current@AppVisualTheme@Themes@UI@WindowsUdk@winrt@@SA@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIAppVisualThemeStatics@Themes@UI@WindowsUdk@winrt@@@winrt@@YA?AUIAppVisualThemeStatics@Themes@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x1805C0BBC (--$get_activation_factory@UIAppVisualThemeStatics@Themes@UI@WindowsUdk@winrt@@@winrt@@YA-AUIAppV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>::call<enum winrt::WindowsUdk::UI::Themes::VisualTheme (*)(winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 **),
        __int64 (__fastcall **a2)(__int64 *))
{
  __int64 *v3; // rax
  char v4; // bl
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 v8[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+30h] [rbp-20h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 **); // [rsp+60h] [rbp+10h] BYREF
  __int64 *v11; // [rsp+70h] [rbp+20h] BYREF

  v10 = a1;
  v8[0] = (__int64)L"WindowsUdk.UI.Themes.AppVisualTheme";
  v8[1] = 35LL;
  winrt::param::hstring::hstring((__int64)v9, v8);
  winrt::get_activation_factory<winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>(&v10, v9);
  v11 = 0LL;
  if ( !v10 )
  {
    v3 = 0LL;
LABEL_3:
    v4 = 0;
    goto LABEL_4;
  }
  (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11);
  v3 = v11;
  if ( !v11 )
    goto LABEL_3;
  v4 = 1;
LABEL_4:
  if ( v3 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v11);
  if ( v4 )
  {
    v11 = &qword_1808DD148;
    _InterlockedIncrement64(&qword_1808DD148);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DD150);
    }
    v5 = (*a2)(&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>);
    _InterlockedDecrement64(&qword_1808DD148);
  }
  else
  {
    v5 = (*a2)((__int64 *)&v10);
  }
  v6 = v5;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return v6;
}
