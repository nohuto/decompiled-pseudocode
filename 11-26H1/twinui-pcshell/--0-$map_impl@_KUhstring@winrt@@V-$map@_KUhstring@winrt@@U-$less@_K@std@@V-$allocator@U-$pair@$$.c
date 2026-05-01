/*
 * XREFs of ??0?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@QEAA@$$QEAV?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@@Z @ 0x180648774
 * Callers:
 *     ??0RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802C2B70 (--0RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAA@XZ @ 0x180027030 (--0-$vector_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhstring@.c)
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0?$producers_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@V?$tuple@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@U?$IMapView@_KUhstring@winrt@@@2345@U?$IIterable@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@2345@@std@@@impl@winrt@@QEAA@XZ @ 0x180649434 (--0-$producers_base@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K@std@@V-$al.c)
 *     ?_Alloc_sentinel_and_proxy@?$_Tree@V?$_Tmap_traits@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x180652AA8 (-_Alloc_sentinel_and_proxy@-$_Tree@V-$_Tmap_traits@_KUhstring@winrt@@U-$less@_K@std@@V-$allocato.c)
 */

_QWORD *__fastcall winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  winrt::impl::producers_base<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,std::tuple<winrt::Windows::Foundation::Collections::IMap<unsigned __int64,winrt::hstring>,winrt::Windows::Foundation::Collections::IMapView<unsigned __int64,winrt::hstring>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>>>::producers_base<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,std::tuple<winrt::Windows::Foundation::Collections::IMap<unsigned __int64,winrt::hstring>,winrt::Windows::Foundation::Collections::IMapView<unsigned __int64,winrt::hstring>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>>>(a1 + 2);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>((__int64)(a1 + 1), 1LL);
  winrt::vector_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring>::vector_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring>();
  *a1 = &winrt::impl::heap_implements<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::`vftable';
  a1[6] = 0LL;
  a1[7] = 0LL;
  std::_Tree<std::_Tmap_traits<unsigned __int64,winrt::hstring,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,0>>::_Alloc_sentinel_and_proxy(a1 + 6);
  v4 = a1[6];
  a1[6] = *a2;
  *a2 = v4;
  v5 = a1[7];
  a1[7] = a2[1];
  a2[1] = v5;
  return a1;
}
