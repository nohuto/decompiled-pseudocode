/*
 * XREFs of ?query_interface@?$root_implements@URemoteDesktopStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18061CF9C
 * Callers:
 *     ?QueryInterface@?$produce_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IIterable@Uhstring@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18061C270 (-QueryInterface@-$produce_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$alloc.c)
 *     ?QueryInterface@?$produce_base@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemTimeOutInfoChangedEventArgs@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18061C290 (-QueryInterface@-$produce_base@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Int.c)
 *     ?QueryInterface@?$produce_base@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@UINetworkConnectionUtilsStatics@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18061C2B0 (-QueryInterface@-$produce_base@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Win.c)
 * Callees:
 *     ?AddRef@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@Ucollection_version@23@@winrt@@U?$IIterator@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAAIXZ @ 0x18028A238 (-AddRef@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhs.c)
 *     ?query_interface_common@?$root_implements@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180558DB4 (-query_interface_common@-$root_implements@UNetworkConnectionUtils@implementation@Shell@Internal@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs,winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>::query_interface(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rax

  v6 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 48))(a1);
  *a3 = v6;
  if ( !v6 )
    return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils,winrt::Windows::Internal::Shell::NetworkConnectionUtils>::query_interface_common(
             a1,
             a2,
             a3);
  winrt::impl::root_implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::hstring>>::AddRef((__int64)a1);
  return 0LL;
}
