/*
 * XREFs of ?find_interface@?$implements@VTouchGestureSettings@@UITouchGestureSettings@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180224210
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@VTouchGestureSettings@@@impl@winrt@@@?$interface_list@UITouchGestureSettings@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VTouchGestureSettings@@@12@@Z @ 0x1805671D0 (--$find@U-$find_iid_traits@VTouchGestureSettings@@@impl@winrt@@@-$interface_list@UITouchGestureS.c)
 */

__int64 __fastcall winrt::implements<TouchGestureSettings,ITouchGestureSettings>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 8;
  return winrt::impl::interface_list<ITouchGestureSettings>::find<winrt::impl::find_iid_traits<TouchGestureSettings>>(v3);
}
