/*
 * XREFs of ?HasKey@?$produce@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMapView@_KUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAH_KPEA_N@Z @ 0x180628280
 * Callers:
 *     <none>
 * Callees:
 *     ?HasKey@?$map_view_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@_KUhstring@3@Ucollection_version@23@@winrt@@QEBA_NAEB_K@Z @ 0x180628160 (-HasKey@-$map_view_base@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K@std@@V.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMapView<unsigned __int64,winrt::hstring>>::HasKey(
        __int64 a1,
        __int64 a2,
        bool *a3)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v4 = a1 + 16;
  if ( !a1 )
    v4 = 40LL;
  *a3 = winrt::map_view_base<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,unsigned __int64,winrt::hstring,winrt::impl::collection_version>::HasKey(
          v4,
          &v6);
  return 0LL;
}
