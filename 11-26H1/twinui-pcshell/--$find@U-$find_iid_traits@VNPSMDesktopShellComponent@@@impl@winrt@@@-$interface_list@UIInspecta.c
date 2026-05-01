/*
 * XREFs of ??$find@U?$find_iid_traits@VNPSMDesktopShellComponent@@@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VNPSMDesktopShellComponent@@@12@@Z @ 0x18060FCC0
 * Callers:
 *     ??$find@U?$find_iid_traits@VNPSMDesktopShellComponent@@@impl@winrt@@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VNPSMDesktopShellComponent@@@12@@Z @ 0x18060FD54 (--$find@U-$find_iid_traits@VNPSMDesktopShellComponent@@@impl@winrt@@@-$interface_list@UIServiceP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener>::find<winrt::impl::find_iid_traits<NPSMDesktopShellComponent>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Foundation::IInspectable> && v1[1] == 0x901E1065AAD75A9CuLL )
    return (*a1 + 32LL) & -(__int64)(*a1 != 0LL);
  if ( *v1 == winrt::impl::guid_v<IApplicationViewChangeListener> && v1[1] == 0x5C48281337B642A9LL )
    return *a1;
  return 0LL;
}
