/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$AsyncOperationCompletedHandler@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@234@I@Z@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805C3FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031BB8C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall _QueryInterface___implements_delegate_U__AsyncOperationCompletedHandler_U__IKeyValuePair_ULogoInfo_LogoLoading_UnifiedTile_Shell_WindowsInternal_winrt__UIRandomAccessStream_Streams_Storage_Windows_6__Collections_Foundation_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation_U__IKeyValuePair_ULogoInfo_LogoLoading_UnifiedTile_Shell_WindowsInternal_winrt__UIRandomAccessStream_Streams_Storage_Windows_6__Collections_Foundation_Windows_winrt___Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperation_U__IKeyValuePair_ULogoInfo_LogoLoading_UnifiedTile_Shell_WindowsInternal_winrt__UIRandomAccessStream_Streams_Storage_Windows_6__Collections_Foundation_Windows_winrt___234_I_Z__impl_winrt__UEAAHAEBUguid_3_PEAPEAX_Z(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           (winrt::impl::implements_delegate_base *)(a1 + 8),
           a2,
           a3,
           a1,
           winrt::impl::guid_v<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo,winrt::Windows::Storage::Streams::IRandomAccessStream>>>);
}
