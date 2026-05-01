/*
 * XREFs of ??$TupleMap@AEBV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V_lambda_a539064e389dd930fffe5735d1de45e6_@@@@YA?A_PAEBV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@AEBV_lambda_a539064e389dd930fffe5735d1de45e6_@@@Z @ 0x1801ABD78
 * Callers:
 *     ??$RemoveRefCountWrappers@AEBV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@@YA?A_PAEBV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@Z @ 0x1801ABD50 (--$RemoveRefCountWrappers@AEBV-$tuple@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@@YA-A_.c)
 * Callees:
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ??$apply@AEAV_lambda_10b4f0b6ab92f887205ec412a2b24525_@@AEBV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@@std@@YA?A_TAEAV_lambda_10b4f0b6ab92f887205ec412a2b24525_@@AEBV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@0@@Z @ 0x18054C800 (--$apply@AEAV_lambda_10b4f0b6ab92f887205ec412a2b24525_@@AEBV-$tuple@V-$ComPtr@UIVirtualDesktop@@.c)
 */

__int64 __fastcall TupleMap<std::tuple<Microsoft::WRL::ComPtr<IApplicationView>> const &,_lambda_a539064e389dd930fffe5735d1de45e6_>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // r10
  char v8; // [rsp+30h] [rbp+8h] BYREF

  winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
    &v8,
    a3);
  std::apply<_lambda_10b4f0b6ab92f887205ec412a2b24525_ &,std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>> const &>(
    v5,
    v3,
    v4);
  return v6;
}
