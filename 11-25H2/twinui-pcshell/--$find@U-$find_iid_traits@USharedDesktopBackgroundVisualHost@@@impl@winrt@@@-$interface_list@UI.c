/*
 * XREFs of ??$find@U?$find_iid_traits@USharedDesktopBackgroundVisualHost@@@impl@winrt@@@?$interface_list@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@UISharedDesktopBackgroundVisualWindowProvider@23456@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USharedDesktopBackgroundVisualHost@@@12@@Z @ 0x1805E086C
 * Callers:
 *     ?find_interface@?$implements@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@UISharedDesktopBackgroundVisualWindowProvider@34567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1805E3010 (-find_interface@-$implements@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider>::find<winrt::impl::find_iid_traits<SharedDesktopBackgroundVisualHost>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual>
    && v1[1] == 0x90283B6E633D52AFuLL )
  {
    v2 = *a1;
    v3 = *a1 + 16;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider>
    && v1[1] == 0xCABAB63E862736BCuLL )
  {
    v2 = *a1;
    v3 = *a1 + 24;
    return v3 & -(__int64)(v2 != 0);
  }
  return 0LL;
}
