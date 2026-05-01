/*
 * XREFs of ?QueryInterface@?$implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180230180
 * Callers:
 *     ?QueryInterface@?$implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804638D0 (-QueryInterface@-$implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnec_ea_1804638D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<KeyboardHosting::TabTipAdapter,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::QueryInterface(
        __int64 a1)
{
  return winrt::impl::root_implements<KeyboardHosting::TabTipAdapter,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::query_interface(a1 + 16);
}
