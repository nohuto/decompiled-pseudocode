/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::CloudPCComponent_winrt::Windows::Internal::Shell::RemoteSystems::IRemoteSystemProviderExtension_::EnableCloudPC_::_1_::catch$0 @ 0x1806E7168
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802D7AF0 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::CloudPCComponent_winrt::Windows::Internal::Shell::RemoteSystems::IRemoteSystemProviderExtension_::EnableCloudPC_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = *winrt::to_hresult((_DWORD *)(a2 + 64));
  return 0LL;
}
