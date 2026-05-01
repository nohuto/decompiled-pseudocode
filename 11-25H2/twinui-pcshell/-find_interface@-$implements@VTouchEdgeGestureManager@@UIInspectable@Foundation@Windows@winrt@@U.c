/*
 * XREFs of ?find_interface@?$implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180209800
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@VTouchEdgeGestureManager@@@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VTouchEdgeGestureManager@@@12@@Z @ 0x180567088 (--$find@U-$find_iid_traits@VTouchEdgeGestureManager@@@impl@winrt@@@-$interface_list@UIInspectabl.c)
 */

__int64 __fastcall winrt::implements<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 24;
  return winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>::find<winrt::impl::find_iid_traits<TouchEdgeGestureManager>>(v3);
}
