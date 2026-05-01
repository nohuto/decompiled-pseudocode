/*
 * XREFs of ??$create_and_initialize@U?$key_value_pair@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@AEBIAEBUhstring@3@@impl@winrt@@YAPEAU?$key_value_pair@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@01@AEBIAEBUhstring@1@@Z @ 0x1806201A0
 * Callers:
 *     ?current_value_withlock@iterator@?$iterable_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@AEBA?AU?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x18062DAD4 (-current_value_withlock@iterator@-$iterable_base@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@w.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??0?$producers_base@U?$key_value_pair@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@V?$tuple@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x180623770 (--0-$producers_base@U-$key_value_pair@U-$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int32 *__fastcall winrt::impl::create_and_initialize<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>,unsigned int const &,winrt::hstring const &>(
        unsigned int *a1,
        const struct winrt::hstring *a2)
{
  volatile signed __int32 *v4; // rsi
  volatile signed __int32 **v5; // rbx
  __int64 v6; // r8
  volatile signed __int32 *v7; // r9
  __int64 v8; // rdx
  int v9; // r8d
  __int64 v10; // r9
  char v12; // [rsp+50h] [rbp+18h] BYREF
  volatile signed __int32 *v13; // [rsp+58h] [rbp+20h] BYREF

  v4 = (volatile signed __int32 *)operator new(0x28uLL);
  v13 = v4;
  v5 = (volatile signed __int32 **)winrt::hstring::hstring((winrt::hstring *)&v12, a2);
  v6 = *a1;
  v7 = *v5;
  *v5 = 0LL;
  winrt::impl::producers_base<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>,std::tuple<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>>::producers_base<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>,std::tuple<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>>(
    v4 + 4,
    v8,
    v6,
    v7);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)v4 + 1) = 1LL;
  *(_QWORD *)v4 = &winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>::`vftable';
  *((_DWORD *)v4 + 6) = v9;
  v13 = 0LL;
  *((_QWORD *)v4 + 4) = v10;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
  *(_QWORD *)v4 = &winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>::`vftable';
  winrt::handle_type<winrt::impl::hstring_traits>::close(v5);
  return v4;
}
