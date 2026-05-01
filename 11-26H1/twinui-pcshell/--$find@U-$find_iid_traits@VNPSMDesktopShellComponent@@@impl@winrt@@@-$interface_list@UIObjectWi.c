/*
 * XREFs of ??$find@U?$find_iid_traits@VNPSMDesktopShellComponent@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VNPSMDesktopShellComponent@@@12@@Z @ 0x18060FD18
 * Callers:
 *     ?find_interface@?$implements@VNPSMDesktopShellComponent@@Uimmersive_shell_component@winrt@@UIApplicationViewChangeListener@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1801FE870 (-find_interface@-$implements@VNPSMDesktopShellComponent@@Uimmersive_shell_component@winrt@@UIApp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener>::find<winrt::impl::find_iid_traits<NPSMDesktopShellComponent>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IObjectWithSite> && v1[1] == 0x52733D00AA0029A2LL )
    return (*a1 + 8LL) & -(__int64)(*a1 != 0LL);
  else
    return winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener>::find<winrt::impl::find_iid_traits<NPSMDesktopShellComponent>>();
}
