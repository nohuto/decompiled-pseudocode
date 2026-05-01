/*
 * XREFs of ??0?$heap_implements@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@QEAA@_N@Z @ 0x1805E4BD8
 * Callers:
 *     ??$make@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@Internal@Windows@winrt@@AEB_N@winrt@@YA?A_PAEB_N@Z @ 0x1805E4454 (--$make@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@Internal@Windows@winr.c)
 * Callees:
 *     ??0?$producers_base@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@Internal@Windows@winrt@@V?$tuple@USharedDesktopBackgroundVisualStartedArgs@Themes@UI@Internal@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x1805E4DBC (--0-$producers_base@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@Internal@.c)
 */

__int64 __fastcall winrt::impl::heap_implements<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualStartedArgs>::heap_implements<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualStartedArgs>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  char v5; // r8

  LOBYTE(a3) = a2;
  winrt::impl::producers_base<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualStartedArgs,std::tuple<winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>>::producers_base<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualStartedArgs,std::tuple<winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>>(
    a1 + 16,
    a2,
    a3,
    a1);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v3 + 8) = 1LL;
  *(_QWORD *)v3 = &winrt::impl::heap_implements<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualStartedArgs>::`vftable';
  result = v3;
  *(_BYTE *)(v3 + 24) = v5;
  return result;
}
