/*
 * XREFs of ?HasKey@?$produce@U?$map_impl@Uhstring@winrt@@U12@V?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXPEA_N@Z @ 0x180338FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?HasKey@?$map_view_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@URemoteSystem@Shell@Internal@Windows@3@Ucollection_version@23@@winrt@@QEBA_NAEBUhstring@2@@Z @ 0x180338F9C (-HasKey@-$map_view_base@U-$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V-$ma.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<winrt::hstring,winrt::hstring,std::map<winrt::hstring,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::HasKey(
        __int64 a1,
        __int64 a2,
        bool *a3)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v4 = a1 + 24;
  if ( !a1 )
    v4 = 40LL;
  *a3 = winrt::map_view_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,winrt::impl::collection_version>::HasKey(
          v4,
          (__int64)&v6);
  return 0LL;
}
