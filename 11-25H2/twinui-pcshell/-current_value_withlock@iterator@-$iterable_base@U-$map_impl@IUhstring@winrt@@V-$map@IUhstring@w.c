/*
 * XREFs of ?current_value_withlock@iterator@?$iterable_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@AEBA?AU?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x18062DAD4
 * Callers:
 *     ?Current@iterator@?$iterable_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEBA?AU?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x1806259C0 (-Current@iterator@-$iterable_base@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I.c)
 *     ?GetMany@iterator@?$iterable_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEAAIU?$array_view@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@3@@Z @ 0x180627670 (-GetMany@iterator@-$iterable_base@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I.c)
 * Callees:
 *     ??$create_and_initialize@U?$key_value_pair@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@AEBIAEBUhstring@3@@impl@winrt@@YAPEAU?$key_value_pair@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@01@AEBIAEBUhstring@1@@Z @ 0x1806201A0 (--$create_and_initialize@U-$key_value_pair@U-$IKeyValuePair@IUhstring@winrt@@@Collections@Founda.c)
 */

unsigned __int64 *__fastcall winrt::iterable_base<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>,winrt::impl::collection_version>::iterator::current_value_withlock(
        __int64 a1,
        unsigned __int64 *a2)
{
  volatile signed __int32 *v3; // rax

  v3 = winrt::impl::create_and_initialize<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>,unsigned int const &,winrt::hstring const &>(
         (unsigned int *)(*(_QWORD *)(a1 + 40) + 32LL),
         (const struct winrt::hstring *)(*(_QWORD *)(a1 + 40) + 40LL));
  *a2 = (unsigned __int64)(v3 + 4) & -(__int64)(v3 != 0LL);
  return a2;
}
