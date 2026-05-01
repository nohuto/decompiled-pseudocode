/*
 * XREFs of ??$find@U?$find_iid_traits@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIFocusSessionComponent@Shell@Internal@67@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1802D84B8
 * Callers:
 *     ?find_interface@?$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIFocusSessionComponent@3456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1801D0910 (-find_interface@-$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::IFocusSessionComponent>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IObjectWithSite> && v1[1] == 0x52733D00AA0029A2LL )
    return *a1;
  else
    return winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::IFocusSessionComponent>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>>();
}
