/*
 * XREFs of ?get@?$runtime_class_name@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x180607C14
 * Callers:
 *     ?GetRuntimeClassName@?$implements@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@UISharedDesktopBackgroundVisualWindowProvider@34567@@winrt@@EEBA?AUhstring@2@XZ @ 0x180606870 (-GetRuntimeClassName@-$implements@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundV.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801A5654 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::impl::runtime_class_name<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,void>::get(
        struct winrt::impl::shared_hstring_header **a1)
{
  _QWORD v3[4]; // [rsp+28h] [rbp-20h] BYREF

  v3[1] = 57LL;
  v3[0] = L"Windows.Internal.UI.Themes.ISharedDesktopBackgroundVisual";
  winrt::hstring::hstring(a1, (__int64)v3);
  return a1;
}
