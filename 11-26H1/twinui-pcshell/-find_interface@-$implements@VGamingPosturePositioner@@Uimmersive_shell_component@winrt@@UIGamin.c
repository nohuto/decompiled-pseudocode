/*
 * XREFs of ?find_interface@?$implements@VGamingPosturePositioner@@Uimmersive_shell_component@winrt@@UIGamingPosturePositioner@@UIBasicPositioner@@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIPositionerApplicationClosePolicy@@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@Unon_agile@3@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180505150
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@VGamingPosturePositioner@@@impl@winrt@@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIGamingPosturePositioner@@UIBasicPositioner@@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIPositionerApplicationClosePolicy@@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VGamingPosturePositioner@@@12@@Z @ 0x1804F69FC (--$find@U-$find_iid_traits@VGamingPosturePositioner@@@impl@winrt@@@-$interface_list@UIImmersiveS.c)
 */

__int64 __fastcall winrt::implements<GamingPosturePositioner,winrt::immersive_shell_component,IGamingPosturePositioner,IBasicPositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IPositionerApplicationClosePolicy,IApplicationViewChangeListener,IInternalFullScreenHandler,IWindowManagementShowMoveSizeEvents,winrt::non_agile>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rax
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 - 96;
  v3 = *a2 == winrt::impl::guid_v<IObjectWithSite>;
  v7[0] = v2;
  v7[1] = (__int64)a2;
  if ( v3 && a2[1] == 0x52733D00AA0029A2LL )
  {
    v4 = v2 + 64;
  }
  else
  {
    if ( *a2 != winrt::impl::guid_v<IServiceProvider> || a2[1] != 0xFA096000AA003480uLL )
      return winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IGamingPosturePositioner,IBasicPositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IPositionerApplicationClosePolicy,IApplicationViewChangeListener,IInternalFullScreenHandler,IWindowManagementShowMoveSizeEvents>::find<winrt::impl::find_iid_traits<GamingPosturePositioner>>(v7);
    v4 = v2 + 72;
  }
  return v4 & -(__int64)(v2 != 0);
}
