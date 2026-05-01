/*
 * XREFs of ??$call@P6A?AUColor@UI@Windows@winrt@@AEBUIColorsStatics@234@@Z@?$factory_cache_entry@UColors@UI@Windows@winrt@@UIColorsStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUColor@UI@Windows@2@AEBUIColorsStatics@452@@Z@Z @ 0x180608D7C
 * Callers:
 *     ?CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z @ 0x18060A450 (-CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIColorsStatics@UI@Windows@winrt@@@winrt@@YA?AUIColorsStatics@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x180608F14 (--$get_activation_factory@UIColorsStatics@UI@Windows@winrt@@@winrt@@YA-AUIColorsStatics@UI@Windo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_DWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Colors,winrt::Windows::UI::IColorsStatics>::call<winrt::Windows::UI::Color (*)(winrt::Windows::UI::IColorsStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 **),
        _DWORD *a2,
        __int64 (__fastcall **a3)(__int64 *))
{
  __int64 *v5; // rax
  char v6; // bl
  __int64 v8[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+30h] [rbp-20h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 **); // [rsp+70h] [rbp+20h] BYREF
  __int64 *v11; // [rsp+88h] [rbp+38h] BYREF

  v10 = a1;
  v8[0] = (__int64)L"Windows.UI.Colors";
  v8[1] = 17LL;
  winrt::param::hstring::hstring((__int64)v9, v8);
  winrt::get_activation_factory<winrt::Windows::UI::IColorsStatics>(&v10, v9);
  v11 = 0LL;
  if ( !v10 )
  {
    v5 = 0LL;
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11);
  v5 = v11;
  if ( !v11 )
    goto LABEL_3;
  v6 = 1;
LABEL_4:
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v11);
  if ( v6 )
  {
    v11 = &qword_1808DBAF8;
    _InterlockedIncrement64(&qword_1808DBAF8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Colors,winrt::Windows::UI::IColorsStatics>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DBB00);
    }
    *a2 = (*a3)(&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Colors,winrt::Windows::UI::IColorsStatics>);
    _InterlockedDecrement64(&qword_1808DBAF8);
  }
  else
  {
    *a2 = (*a3)((__int64 *)&v10);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return a2;
}
