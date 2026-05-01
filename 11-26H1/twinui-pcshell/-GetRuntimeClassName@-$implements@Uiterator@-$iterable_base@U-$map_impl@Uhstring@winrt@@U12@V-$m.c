/*
 * XREFs of ?GetRuntimeClassName@?$implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@U12@V?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@winrt@@EEBA?AUhstring@2@XZ @ 0x180338930
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$runtime_class_name@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x18033A194 (-get@-$runtime_class_name@U-$IIterator@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundat.c)
 */

__int64 __fastcall winrt::implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::hstring,std::map<winrt::hstring,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::GetRuntimeClassName(
        __int64 a1,
        __int64 a2)
{
  winrt::impl::runtime_class_name<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>,void>::get(a2);
  return a2;
}
