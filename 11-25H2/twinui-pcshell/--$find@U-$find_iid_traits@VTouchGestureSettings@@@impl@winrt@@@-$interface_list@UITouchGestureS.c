/*
 * XREFs of ??$find@U?$find_iid_traits@VTouchGestureSettings@@@impl@winrt@@@?$interface_list@UITouchGestureSettings@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VTouchGestureSettings@@@12@@Z @ 0x1805671D0
 * Callers:
 *     ?find_interface@?$implements@VTouchGestureSettings@@UITouchGestureSettings@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180224210 (-find_interface@-$implements@VTouchGestureSettings@@UITouchGestureSettings@@@winrt@@UEBAPEAXAEBU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<ITouchGestureSettings>::find<winrt::impl::find_iid_traits<TouchGestureSettings>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<ITouchGestureSettings> && v1[1] == 0xE04D58B486935395uLL )
    return *a1;
  else
    return 0LL;
}
