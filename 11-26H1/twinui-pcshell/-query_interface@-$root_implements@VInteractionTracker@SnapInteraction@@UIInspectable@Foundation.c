/*
 * XREFs of ?query_interface@?$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180215A60
 * Callers:
 *     ?QueryInterface@?$implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180215A50 (-QueryInterface@-$implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windo.c)
 *     ?QueryInterface@?$produce_base@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1802B54B0 (-QueryInterface@-$produce_base@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Win.c)
 * Callees:
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1800E6A6C (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ??$find@U?$find_iid_traits@VInteractionTracker@SnapInteraction@@@impl@winrt@@@?$interface_list@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VInteractionTracker@SnapInteraction@@@12@@Z @ 0x18059C4AC (--$find@U-$find_iid_traits@VInteractionTracker@SnapInteraction@@@impl@winrt@@@-$interface_list@U.c)
 */

__int64 __fastcall winrt::impl::root_implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::query_interface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v4; // r11
  __int64 v5; // r10
  bool v6; // zf
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v9[1] = a2;
  v4 = a1;
  v6 = *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IInspectable>;
  v9[0] = (a1 - 24) & -(__int64)(a1 != 0);
  if ( v6 && a2[1] == 0x901E1065AAD75A9CuLL )
  {
    v5 = (a1 - 24) & -(__int64)(a1 != 0);
    v7 = (v5 + 16) & -(__int64)(v5 != 0);
  }
  else
  {
    v7 = winrt::impl::interface_list<IApplicationViewChangeListener,IWindowSnappingEvents>::find<winrt::impl::find_iid_traits<SnapInteraction::InteractionTracker>>(v9);
  }
  *a3 = v7;
  if ( !v7 )
    return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>::query_interface_common(
             v4,
             a2,
             a3);
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(v4);
  return 0LL;
}
