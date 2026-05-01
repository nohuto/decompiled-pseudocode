/*
 * XREFs of ??$find@U?$find_iid_traits@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIFocusSessionComponent@Shell@Internal@56@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1802D84E8
 * Callers:
 *     ??$find@U?$find_iid_traits@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIFocusSessionComponent@Shell@Internal@67@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1802D84B8 (--$find@U-$find_iid_traits@UFocusSessionComponent@implementation@Shell@Internal@Win_ea_1802D84B8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::IFocusSessionComponent>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IServiceProvider> && v1[1] == 0xFA096000AA003480uLL )
  {
    v2 = *a1;
    v3 = *a1 + 8;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<IImmersiveShellComponent> && v1[1] == 0xC45FA8EF5C7AA582uLL )
  {
    v2 = *a1;
    v3 = *a1 + 16;
    return v3 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::IFocusSessionComponent>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>>(a1);
}
