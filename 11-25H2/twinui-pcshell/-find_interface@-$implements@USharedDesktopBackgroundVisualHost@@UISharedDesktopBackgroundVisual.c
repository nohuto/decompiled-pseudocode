/*
 * XREFs of ?find_interface@?$implements@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@UISharedDesktopBackgroundVisualWindowProvider@34567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1805E3010
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@USharedDesktopBackgroundVisualHost@@@impl@winrt@@@?$interface_list@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@UISharedDesktopBackgroundVisualWindowProvider@23456@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USharedDesktopBackgroundVisualHost@@@12@@Z @ 0x1805E086C (--$find@U-$find_iid_traits@USharedDesktopBackgroundVisualHost@@@impl@winrt@@@-$interface_list@UI.c)
 */

__int64 __fastcall winrt::implements<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider>::find_interface(
        __int64 a1,
        __int64 a2)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider>::find<winrt::impl::find_iid_traits<SharedDesktopBackgroundVisualHost>>(v3);
}
