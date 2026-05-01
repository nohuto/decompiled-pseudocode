/*
 * XREFs of ??$find@U?$find_iid_traits@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@@?$interface_list@UIMultitaskingViewVisibilityNotification@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VVirtualDestopSwitcherViewChangeNotificationProxy@@@12@@Z @ 0x18048EFC8
 * Callers:
 *     ?find_interface@?$implements@VTaskViewViewChangeNotificationProxy@@UIMultitaskingViewVisibilityNotification@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1802173C0 (-find_interface@-$implements@VTaskViewViewChangeNotificationProxy@@UIMultitaskingViewVisibilityN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IMultitaskingViewVisibilityNotification>::find<winrt::impl::find_iid_traits<VirtualDestopSwitcherViewChangeNotificationProxy>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IMultitaskingViewVisibilityNotification> && v1[1] == 0x959BB8F90B5D9281uLL )
    return *a1;
  else
    return 0LL;
}
