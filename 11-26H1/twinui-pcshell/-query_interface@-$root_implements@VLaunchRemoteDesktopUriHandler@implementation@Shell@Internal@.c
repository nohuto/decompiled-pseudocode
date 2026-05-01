/*
 * XREFs of ?query_interface@?$root_implements@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@UIExecuteCommand@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18063BF18
 * Callers:
 *     ?QueryInterface@?$implements@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@UIExecuteCommand@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18063BDA0 (-QueryInterface@-$implements@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Window.c)
 * Callees:
 *     ?AddRef@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@Ucollection_version@23@@winrt@@U?$IIterator@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAAIXZ @ 0x18028A238 (-AddRef@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhs.c)
 *     ?query_interface_common@?$root_implements@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180558DB4 (-query_interface_common@-$root_implements@UNetworkConnectionUtils@implementation@Shell@Internal@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,winrt::Windows::Foundation::IInspectable,IExecuteCommand>::query_interface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  volatile signed __int64 *v3; // rbx
  __int64 v6; // rax

  v3 = (volatile signed __int64 *)a1;
  if ( !a1 )
    a1 = 16LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  *a3 = v6;
  if ( !v6 )
    return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils,winrt::Windows::Internal::Shell::NetworkConnectionUtils>::query_interface_common(
             v3,
             a2,
             a3);
  winrt::impl::root_implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::hstring>>::AddRef((__int64)v3);
  return 0LL;
}
