/*
 * XREFs of ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@234@I@Z@@impl@winrt@@UEAAIXZ @ 0x1805C4090
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$implements_delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@234@I@Z@@impl@winrt@@QEAA@XZ @ 0x1800E9948 (--1-$implements_delegate@U-$AsyncOperationCompletedHandler@UIRandomAccessStream@Streams@Storage@.c)
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18028EAE8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall _Release___implements_delegate_U__AsyncOperationCompletedHandler_U__IKeyValuePair_ULogoInfo_LogoLoading_UnifiedTile_Shell_WindowsInternal_winrt__UIRandomAccessStream_Streams_Storage_Windows_6__Collections_Foundation_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation_U__IKeyValuePair_ULogoInfo_LogoLoading_UnifiedTile_Shell_WindowsInternal_winrt__UIRandomAccessStream_Streams_Storage_Windows_6__Collections_Foundation_Windows_winrt___Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperation_U__IKeyValuePair_ULogoInfo_LogoLoading_UnifiedTile_Shell_WindowsInternal_winrt__UIRandomAccessStream_Streams_Storage_Windows_6__Collections_Foundation_Windows_winrt___234_I_Z__impl_winrt__UEAAIXZ(
        volatile signed __int32 *Block)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(Block + 2);
  if ( !v2 && Block )
  {
    __1__implements_delegate_U__AsyncOperationCompletedHandler_UIRandomAccessStream_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation_UIRandomAccessStream_Streams_Storage_Windows_winrt___Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperation_UIRandomAccessStream_Streams_Storage_Windows_winrt___234_I_Z__impl_winrt__QEAA_XZ((__int64)Block);
    operator delete((void *)Block);
  }
  return v2;
}
