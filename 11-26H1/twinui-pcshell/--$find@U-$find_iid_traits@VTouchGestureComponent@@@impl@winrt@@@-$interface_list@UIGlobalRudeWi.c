/*
 * XREFs of ??$find@U?$find_iid_traits@VTouchGestureComponent@@@impl@winrt@@@?$interface_list@UIGlobalRudeWindowNotifications@@UIInputHostLayoutChanges@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VTouchGestureComponent@@@12@@Z @ 0x18058B370
 * Callers:
 *     ??$find@U?$find_iid_traits@VTouchGestureComponent@@@impl@winrt@@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIGlobalRudeWindowNotifications@@UIInputHostLayoutChanges@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VTouchGestureComponent@@@12@@Z @ 0x18058B3C8 (--$find@U-$find_iid_traits@VTouchGestureComponent@@@impl@winrt@@@-$interface_list@UIImmersiveShe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IGlobalRudeWindowNotifications,IInputHostLayoutChanges>::find<winrt::impl::find_iid_traits<TouchGestureComponent>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IGlobalRudeWindowNotifications> && v1[1] == 0x135410746D0B4E84LL )
    return *a1;
  if ( *v1 == winrt::impl::guid_v<IInputHostLayoutChanges> && v1[1] == 0x8E1CDCAC3E70BE9EuLL )
    return (*a1 + 8LL) & -(__int64)(*a1 != 0LL);
  return 0LL;
}
