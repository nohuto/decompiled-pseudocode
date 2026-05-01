/*
 * XREFs of ?get_local_iids@?$implements@USharedDesktopBackgroundVisualFinishedArgs@implementation@Themes@UI@Internal@Windows@winrt@@U134567@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x18060F950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualFinishedArgs,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualFinishedArgs>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualFinishedArgs>>::value;
  return a2;
}
