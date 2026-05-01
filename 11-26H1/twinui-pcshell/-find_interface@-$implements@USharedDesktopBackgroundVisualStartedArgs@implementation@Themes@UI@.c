/*
 * XREFs of ?find_interface@?$implements@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@Internal@Windows@winrt@@U134567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18060F5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@USharedDesktopBackgroundVisualStartedArgs@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@Internal@Windows@winrt@@@12@@Z @ 0x180608ED8 (--$find@U-$find_iid_traits@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@In.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualStartedArgs,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualStartedArgs>>(v3);
}
