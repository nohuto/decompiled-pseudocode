/*
 * XREFs of ??$find@U?$find_iid_traits@VGamingPosturePositioner@@@impl@winrt@@@?$interface_list@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIPositionerApplicationClosePolicy@@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VGamingPosturePositioner@@@12@@Z @ 0x1804E0EAC
 * Callers:
 *     ??$find@U?$find_iid_traits@VGamingPosturePositioner@@@impl@winrt@@@?$interface_list@UIGamingPosturePositioner@@UIBasicPositioner@@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIPositionerApplicationClosePolicy@@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VGamingPosturePositioner@@@12@@Z @ 0x1804E0D40 (--$find@U-$find_iid_traits@VGamingPosturePositioner@@@impl@winrt@@@-$interface_list@UIGamingPost.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IShellPositionerViewHandoff,IImmersiveMonitorNotification,IPositionerApplicationClosePolicy,IApplicationViewChangeListener,IInternalFullScreenHandler,IWindowManagementShowMoveSizeEvents>::find<winrt::impl::find_iid_traits<GamingPosturePositioner>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IShellPositionerViewHandoff> && v1[1] == 0x37378CF5A678B86LL )
  {
    v2 = *a1;
    v3 = *a1 + 16;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<IImmersiveMonitorNotification> && v1[1] == 0x70929BEFF3E48C96LL )
  {
    v2 = *a1;
    v3 = *a1 + 24;
    return v3 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<IPositionerApplicationClosePolicy,IApplicationViewChangeListener,IInternalFullScreenHandler,IWindowManagementShowMoveSizeEvents>::find<winrt::impl::find_iid_traits<GamingPosturePositioner>>(a1);
}
