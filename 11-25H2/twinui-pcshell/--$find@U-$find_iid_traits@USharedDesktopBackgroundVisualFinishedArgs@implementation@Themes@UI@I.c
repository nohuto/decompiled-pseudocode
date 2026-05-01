/*
 * XREFs of ??$find@U?$find_iid_traits@USharedDesktopBackgroundVisualFinishedArgs@implementation@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@USharedDesktopBackgroundVisualFinishedArgs@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USharedDesktopBackgroundVisualFinishedArgs@implementation@Themes@UI@Internal@Windows@winrt@@@12@@Z @ 0x1805E4200
 * Callers:
 *     ?find_interface@?$implements@USharedDesktopBackgroundVisualFinishedArgs@implementation@Themes@UI@Internal@Windows@winrt@@U134567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1805EA960 (-find_interface@-$implements@USharedDesktopBackgroundVisualFinishedArgs@implementation@Themes@UI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualFinishedArgs>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualFinishedArgs>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualFinishedArgs>
    && v1[1] == 0xB2F482CD216AA8B4uLL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}
