/*
 * XREFs of ??$find@U?$find_iid_traits@VCopilotHotkeyManager@@@impl@winrt@@@?$interface_list@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VCopilotHotkeyManager@@@12@@Z @ 0x18061F168
 * Callers:
 *     ??$find@U?$find_iid_traits@VCopilotHotkeyManager@@@impl@winrt@@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VCopilotHotkeyManager@@@12@@Z @ 0x18061F10C (--$find@U-$find_iid_traits@VCopilotHotkeyManager@@@impl@winrt@@@-$interface_list@UIImmersiveShel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::find<winrt::impl::find_iid_traits<CopilotHotkeyManager>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IImmersiveWindowMessageNotification> && v1[1] == 0xF08E2D60D77179B1uLL )
    return *a1;
  if ( *v1 == winrt::impl::guid_v<IApplicationViewChangeListener> && v1[1] == 0x5C48281337B642A9LL )
    return (*a1 + 8LL) & -(__int64)(*a1 != 0LL);
  return 0LL;
}
