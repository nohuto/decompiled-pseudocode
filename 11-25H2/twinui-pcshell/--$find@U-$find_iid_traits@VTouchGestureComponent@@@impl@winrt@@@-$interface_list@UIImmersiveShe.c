/*
 * XREFs of ??$find@U?$find_iid_traits@VTouchGestureComponent@@@impl@winrt@@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIGlobalRudeWindowNotifications@@UIInputHostLayoutChanges@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VTouchGestureComponent@@@12@@Z @ 0x180567174
 * Callers:
 *     ?find_interface@?$implements@VTouchGestureComponent@@Uimmersive_shell_component@winrt@@UIGlobalRudeWindowNotifications@@UIInputHostLayoutChanges@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1805681E0 (-find_interface@-$implements@VTouchGestureComponent@@Uimmersive_shell_component@winrt@@UIGlobalR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IGlobalRudeWindowNotifications,IInputHostLayoutChanges>::find<winrt::impl::find_iid_traits<TouchGestureComponent>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IImmersiveShellComponent> && v1[1] == 0xC45FA8EF5C7AA582uLL )
  {
    v2 = *a1;
    v3 = *a1 + 32;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<IInspectable> && v1[1] == 0x901E1065AAD75A9CuLL )
  {
    v2 = *a1;
    v3 = *a1 + 40;
    return v3 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<IGlobalRudeWindowNotifications,IInputHostLayoutChanges>::find<winrt::impl::find_iid_traits<TouchGestureComponent>>(a1);
}
