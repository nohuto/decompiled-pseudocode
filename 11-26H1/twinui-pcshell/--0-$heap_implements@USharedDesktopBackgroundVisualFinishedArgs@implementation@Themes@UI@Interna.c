/*
 * XREFs of ??0?$heap_implements@USharedDesktopBackgroundVisualFinishedArgs@implementation@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@QEAA@_N0@Z @ 0x1806097EC
 * Callers:
 *     ??$make@USharedDesktopBackgroundVisualFinishedArgs@implementation@Themes@UI@Internal@Windows@winrt@@AEB_NAEB_N@winrt@@YA?A_PAEB_N0@Z @ 0x180608FF8 (--$make@USharedDesktopBackgroundVisualFinishedArgs@implementation@Themes@UI@Internal@Windows@win.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0?$producers_base@USharedDesktopBackgroundVisualFinishedArgs@implementation@Themes@UI@Internal@Windows@winrt@@V?$tuple@USharedDesktopBackgroundVisualFinishedArgs@Themes@UI@Internal@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x1806099E8 (--0-$producers_base@USharedDesktopBackgroundVisualFinishedArgs@implementation@Themes@UI@Internal.c)
 */

__int64 __fastcall winrt::impl::heap_implements<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualFinishedArgs>::heap_implements<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualFinishedArgs>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r10
  char v5; // r9
  __int64 v6; // r10
  __int64 result; // rax
  char v8; // r8

  LOBYTE(a4) = a2;
  winrt::impl::producers_base<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualFinishedArgs,std::tuple<winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualFinishedArgs>>::producers_base<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualFinishedArgs,std::tuple<winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualFinishedArgs>>(
    a1 + 16,
    a2,
    a3,
    a4);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>(v4 + 8, 1LL);
  *(_BYTE *)(v6 + 24) = v5;
  *(_QWORD *)v6 = &winrt::impl::heap_implements<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualFinishedArgs>::`vftable';
  result = v6;
  *(_BYTE *)(v6 + 25) = v8;
  return result;
}
