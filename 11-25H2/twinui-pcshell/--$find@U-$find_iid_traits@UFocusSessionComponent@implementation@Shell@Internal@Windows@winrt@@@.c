/*
 * XREFs of ??$find@U?$find_iid_traits@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UIFocusSessionComponent@Shell@Internal@34@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1802DF740
 * Callers:
 *     ??$find@U?$find_iid_traits@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIFocusSessionComponent@Shell@Internal@56@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1802DF7CC (--$find@U-$find_iid_traits@UFocusSessionComponent@implementation@Shell@Internal@Win_ea_1802DF7CC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::IFocusSessionComponent>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IInspectable> && v1[1] == 0x901E1065AAD75A9CuLL )
  {
    v2 = *a1;
    v3 = *a1 + 24;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::IFocusSessionComponent>>::value
    && v1[1] == 0x51FF00E7A3CDAA98LL )
  {
    v2 = *a1;
    v3 = *a1 + 88;
    return v3 & -(__int64)(v2 != 0);
  }
  return 0LL;
}
