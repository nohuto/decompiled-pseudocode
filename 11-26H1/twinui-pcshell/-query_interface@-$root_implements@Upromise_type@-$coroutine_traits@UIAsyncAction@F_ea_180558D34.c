/*
 * XREFs of ?query_interface@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVCVirtualDesktopManager@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180558D34
 * Callers:
 *     ?QueryInterface@?$produce_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4SnapControlType@SnapComponent@Shell@Internal@34@IW4InputDeviceKind@9UI@WindowsUdk@4@PEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@W4ShowFlags@5@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180554320 (-QueryInterface@-$produce_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Found_ea_180554320.c)
 *     ?QueryInterface@?$produce_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVCVirtualDesktopManager@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180554340 (-QueryInterface@-$produce_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Found_ea_180554340.c)
 * Callees:
 *     ?AddRef@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@Ucollection_version@23@@winrt@@U?$IIterator@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAAIXZ @ 0x18028A238 (-AddRef@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhs.c)
 */

__int64 __fastcall winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,CVirtualDesktopManager *,IVirtualDesktop *,enum VirtualDesktopSwitchType>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::query_interface(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx

  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncAction> && a2[1] == 0x7BADDFE5269D5B86LL )
  {
    v5 = a1 + 16;
LABEL_4:
    v6 = v5 & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64);
    goto LABEL_9;
  }
  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncInfo> && a2[1] == 0x46000000000000C0LL )
  {
    v5 = a1 + 24;
    goto LABEL_4;
  }
  v6 = 0LL;
LABEL_9:
  *a3 = v6;
  if ( !v6 )
    return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils,winrt::Windows::Internal::Shell::NetworkConnectionUtils>::query_interface_common(
             a1,
             a2);
  winrt::impl::root_implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::hstring>>::AddRef(a1);
  return 0LL;
}
