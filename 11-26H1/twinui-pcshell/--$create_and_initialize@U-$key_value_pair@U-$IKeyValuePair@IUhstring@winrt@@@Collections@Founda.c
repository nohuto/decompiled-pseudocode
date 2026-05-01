/*
 * XREFs of ??$create_and_initialize@U?$key_value_pair@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@AEBIAEBUhstring@3@@impl@winrt@@YAPEAU?$key_value_pair@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@01@AEBIAEBUhstring@1@@Z @ 0x180645D90
 * Callers:
 *     ?current_value_withlock@iterator@?$iterable_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@AEBA?AU?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x1806534CC (-current_value_withlock@iterator@-$iterable_base@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@w.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0?$producers_base@U?$key_value_pair@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@V?$tuple@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x18064938C (--0-$producers_base@U-$key_value_pair@U-$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int32 *__fastcall winrt::impl::create_and_initialize<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>,unsigned int const &,winrt::hstring const &>(
        unsigned int *a1,
        const struct winrt::hstring *a2)
{
  volatile signed __int32 *v4; // rsi
  unsigned int v5; // r8d
  volatile signed __int32 **v6; // rbx
  __int64 v7; // r8
  volatile signed __int32 *v8; // r9
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // r9
  char v13; // [rsp+50h] [rbp+18h] BYREF
  volatile signed __int32 *v14; // [rsp+58h] [rbp+20h] BYREF

  v4 = (volatile signed __int32 *)operator new(0x28uLL);
  v14 = v4;
  v6 = (volatile signed __int32 **)winrt::hstring::hstring((winrt::hstring *)&v13, a2, v5);
  v7 = *a1;
  v8 = *v6;
  *v6 = 0LL;
  winrt::impl::producers_base<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>,std::tuple<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>>::producers_base<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>,std::tuple<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>>(
    v4 + 4,
    v9,
    v7,
    v8);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>((__int64)(v4 + 2), 1LL);
  *(_QWORD *)v4 = &winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>::`vftable';
  *((_DWORD *)v4 + 6) = v10;
  v14 = 0LL;
  *((_QWORD *)v4 + 4) = v11;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v14);
  *(_QWORD *)v4 = &winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>::`vftable';
  winrt::handle_type<winrt::impl::hstring_traits>::close(v6);
  return v4;
}
