/*
 * XREFs of ??$find@U?$find_iid_traits@VGamingPosturePositioner@@@impl@winrt@@@?$interface_list@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VGamingPosturePositioner@@@12@@Z @ 0x1804F6A58
 * Callers:
 *     ??$find@U?$find_iid_traits@VGamingPosturePositioner@@@impl@winrt@@@?$interface_list@UIPositionerApplicationClosePolicy@@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VGamingPosturePositioner@@@12@@Z @ 0x1804F6AB4 (--$find@U-$find_iid_traits@VGamingPosturePositioner@@@impl@winrt@@@-$interface_list@UIPositioner.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IInternalFullScreenHandler,IWindowManagementShowMoveSizeEvents>::find<winrt::impl::find_iid_traits<GamingPosturePositioner>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IInternalFullScreenHandler> && v1[1] == 0x75D76BE3E41239BCLL )
  {
    v2 = *a1;
    v3 = *a1 + 48;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<IWindowManagementShowMoveSizeEvents> && v1[1] == 0xBC3DC1B3321C1C91uLL )
  {
    v2 = *a1;
    v3 = *a1 + 56;
    return v3 & -(__int64)(v2 != 0);
  }
  return 0LL;
}
