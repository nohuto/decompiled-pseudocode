/*
 * XREFs of ??$find@U?$find_iid_traits@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@@?$interface_list@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTabTipAdapter@KeyboardHosting@@@12@@Z @ 0x1802A1A5C
 * Callers:
 *     ?find_interface@?$implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180224BC0 (-find_interface@-$implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::find<winrt::impl::find_iid_traits<KeyboardHosting::TabTipAdapter>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IMessageProxyReconnectAdapterOwner> && v1[1] == 0xC59D8FBD9667A583uLL )
    return *a1;
  if ( *v1 == winrt::impl::guid_v<IRemoteTabTipAdapter> && v1[1] == 0xF9428832880EE3B1uLL )
    return (*a1 + 8LL) & -(__int64)(*a1 != 0LL);
  return 0LL;
}
