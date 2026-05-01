/*
 * XREFs of ?PreCreateThumbnailDevice@ThumbnailDeviceFactory@@UEAAXXZ @ 0x180490900
 * Callers:
 *     ?GetThumbnailDevice@ThumbnailDeviceFactory@@UEAA?AV?$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18048FE10 (-GetThumbnailDevice@ThumbnailDeviceFactory@@UEAA-AV-$ComPtr@UIDesktopThumbnailDevice@Desktop@Mul.c)
 * Callees:
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ??$call_once@V_lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_@@@Z @ 0x18048F68C (--$call_once@V_lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lamb.c)
 */

void __fastcall ThumbnailDeviceFactory::PreCreateThumbnailDevice(ThumbnailDeviceFactory *this)
{
  __int64 *v1; // rax
  union _RTL_RUN_ONCE *v2; // r8
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
         &v3,
         (__int64)this);
  std::call_once<_lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_,>(v2 + 7, v1);
}
