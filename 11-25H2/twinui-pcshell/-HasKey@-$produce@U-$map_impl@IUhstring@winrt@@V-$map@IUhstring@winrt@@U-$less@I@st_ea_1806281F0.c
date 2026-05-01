/*
 * XREFs of ?HasKey@?$produce@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMapView@IUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEA_N@Z @ 0x1806281F0
 * Callers:
 *     <none>
 * Callees:
 *     ?HasKey@?$map_view_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@IUhstring@3@Ucollection_version@23@@winrt@@QEBA_NAEBI@Z @ 0x180628118 (-HasKey@-$map_view_base@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I@std@@V-$a.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMapView<unsigned int,winrt::hstring>>::HasKey(
        __int64 a1,
        int a2,
        bool *a3)
{
  __int64 v4; // rcx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v4 = a1 + 16;
  if ( !a1 )
    v4 = 40LL;
  *a3 = winrt::map_view_base<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,unsigned int,winrt::hstring,winrt::impl::collection_version>::HasKey(
          v4,
          &v6);
  return 0LL;
}
