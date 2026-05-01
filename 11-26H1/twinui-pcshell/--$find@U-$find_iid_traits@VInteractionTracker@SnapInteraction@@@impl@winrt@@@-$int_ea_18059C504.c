/*
 * XREFs of ??$find@U?$find_iid_traits@VInteractionTracker@SnapInteraction@@@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VInteractionTracker@SnapInteraction@@@12@@Z @ 0x18059C504
 * Callers:
 *     ?find_interface@?$implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180209920 (-find_interface@-$implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::find<winrt::impl::find_iid_traits<SnapInteraction::InteractionTracker>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Foundation::IInspectable> && v1[1] == 0x901E1065AAD75A9CuLL )
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  else
    return winrt::impl::interface_list<IApplicationViewChangeListener,IWindowSnappingEvents>::find<winrt::impl::find_iid_traits<SnapInteraction::InteractionTracker>>(a1);
}
