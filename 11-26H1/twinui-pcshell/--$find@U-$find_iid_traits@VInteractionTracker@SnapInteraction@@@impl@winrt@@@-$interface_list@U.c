/*
 * XREFs of ??$find@U?$find_iid_traits@VInteractionTracker@SnapInteraction@@@impl@winrt@@@?$interface_list@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VInteractionTracker@SnapInteraction@@@12@@Z @ 0x18059C4AC
 * Callers:
 *     ?query_interface@?$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180215A60 (-query_interface@-$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation.c)
 *     ??$find@U?$find_iid_traits@VInteractionTracker@SnapInteraction@@@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VInteractionTracker@SnapInteraction@@@12@@Z @ 0x18059C504 (--$find@U-$find_iid_traits@VInteractionTracker@SnapInteraction@@@impl@winrt@@@-$int_ea_18059C504.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IApplicationViewChangeListener,IWindowSnappingEvents>::find<winrt::impl::find_iid_traits<SnapInteraction::InteractionTracker>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IApplicationViewChangeListener> && v1[1] == 0x5C48281337B642A9LL )
    return *a1;
  if ( *v1 == winrt::impl::guid_v<IWindowSnappingEvents> && v1[1] == 0x72E24D564197CDAFLL )
    return (*a1 + 8LL) & -(__int64)(*a1 != 0LL);
  return 0LL;
}
