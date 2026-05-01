/*
 * XREFs of ?find_interface@?$implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180224BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@@?$interface_list@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTabTipAdapter@KeyboardHosting@@@12@@Z @ 0x1802A1A5C (--$find@U-$find_iid_traits@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@@-$interface_list@UIMess.c)
 */

__int64 __fastcall winrt::implements<KeyboardHosting::TabTipAdapter,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 16;
  return winrt::impl::interface_list<IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::find<winrt::impl::find_iid_traits<KeyboardHosting::TabTipAdapter>>(v3);
}
