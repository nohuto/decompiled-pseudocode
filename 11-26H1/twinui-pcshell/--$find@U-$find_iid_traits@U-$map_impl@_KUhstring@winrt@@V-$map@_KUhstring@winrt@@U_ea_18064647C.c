/*
 * XREFs of ??$find@U?$find_iid_traits@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@impl@winrt@@@?$interface_list@U?$IMapView@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@U?$IIterable@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@12@@Z @ 0x18064647C
 * Callers:
 *     ??$find@U?$find_iid_traits@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@impl@winrt@@@?$interface_list@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@U?$IMapView@_KUhstring@winrt@@@2345@U?$IIterable@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@12@@Z @ 0x180646440 (--$find@U-$find_iid_traits@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K@std.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IMapView<unsigned __int64,winrt::hstring>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>>::find<winrt::impl::find_iid_traits<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IMapView<unsigned __int64,winrt::hstring>>
    && v1[1] == 0x3DB4C548D00710BBLL )
  {
    v2 = *a1;
    v3 = *a1 + 24;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>>
    && v1[1] == 0x23F718DCFEB80683LL )
  {
    v2 = *a1;
    v3 = *a1 + 32;
    return v3 & -(__int64)(v2 != 0);
  }
  return 0LL;
}
