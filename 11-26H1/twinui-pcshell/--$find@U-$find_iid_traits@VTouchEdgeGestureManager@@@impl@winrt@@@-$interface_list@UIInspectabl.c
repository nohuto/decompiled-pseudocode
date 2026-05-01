/*
 * XREFs of ??$find@U?$find_iid_traits@VTouchEdgeGestureManager@@@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VTouchEdgeGestureManager@@@12@@Z @ 0x18058B2DC
 * Callers:
 *     ?find_interface@?$implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1801FD480 (-find_interface@-$implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@U.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>::find<winrt::impl::find_iid_traits<TouchEdgeGestureManager>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Foundation::IInspectable> && v1[1] == 0x901E1065AAD75A9CuLL )
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  else
    return winrt::impl::interface_list<ITouchEdgeGesture,IGameFocusEvents>::find<winrt::impl::find_iid_traits<TouchEdgeGestureManager>>();
}
