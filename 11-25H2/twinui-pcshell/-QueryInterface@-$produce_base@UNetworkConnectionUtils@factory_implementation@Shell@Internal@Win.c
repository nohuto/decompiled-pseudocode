/*
 * XREFs of ?QueryInterface@?$produce_base@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@UINetworkConnectionUtilsStatics@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805F8120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,winrt::Windows::Internal::Shell::INetworkConnectionUtilsStatics,void>::QueryInterface(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs,winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>::query_interface((a1 - 24) & -(__int64)(a1 != 0));
}
