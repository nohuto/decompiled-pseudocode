/*
 * XREFs of ?current_value_withlock@iterator@?$iterable_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@AEBA?AU?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x180653594
 * Callers:
 *     ?Current@iterator@?$iterable_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEBA?AU?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x18064B838 (-Current@iterator@-$iterable_base@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less.c)
 *     ?GetMany@iterator@?$iterable_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEAAIU?$array_view@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@3@@Z @ 0x18064D2C8 (-GetMany@iterator@-$iterable_base@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less.c)
 * Callees:
 *     ??$create_and_initialize@U?$key_value_pair@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@AEB_KAEBUhstring@3@@impl@winrt@@YAPEAU?$key_value_pair@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@01@AEB_KAEBUhstring@1@@Z @ 0x180645E44 (--$create_and_initialize@U-$key_value_pair@U-$IKeyValuePair@_KUhstring@winrt@@@Collections@Found.c)
 */

unsigned __int64 *__fastcall winrt::iterable_base<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>,winrt::impl::collection_version>::iterator::current_value_withlock(
        __int64 a1,
        unsigned __int64 *a2)
{
  volatile signed __int32 *v3; // rax

  v3 = winrt::impl::create_and_initialize<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>,unsigned __int64 const &,winrt::hstring const &>(
         (__int64 *)(*(_QWORD *)(a1 + 40) + 32LL),
         (const struct winrt::hstring *)(*(_QWORD *)(a1 + 40) + 40LL));
  *a2 = (unsigned __int64)(v3 + 4) & -(__int64)(v3 != 0LL);
  return a2;
}
