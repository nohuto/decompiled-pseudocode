/*
 * XREFs of ?find_interface@?$implements@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@3@U?$IMapView@IUhstring@winrt@@@5673@U?$IIterable@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@5673@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18062E6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@impl@winrt@@@?$interface_list@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@U?$IMapView@IUhstring@winrt@@@2345@U?$IIterable@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@12@@Z @ 0x180620904 (--$find@U-$find_iid_traits@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I@std@@V.c)
 */

__int64 __fastcall winrt::implements<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<unsigned int,winrt::hstring>,winrt::Windows::Foundation::Collections::IMapView<unsigned int,winrt::hstring>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IMap<unsigned int,winrt::hstring>,winrt::Windows::Foundation::Collections::IMapView<unsigned int,winrt::hstring>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>>::find<winrt::impl::find_iid_traits<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>>>(v3);
}
