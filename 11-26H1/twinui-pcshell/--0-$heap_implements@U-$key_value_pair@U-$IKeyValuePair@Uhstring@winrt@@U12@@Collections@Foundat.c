/*
 * XREFs of ??0?$heap_implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@QEAA@Uhstring@2@0@Z @ 0x180337D78
 * Callers:
 *     ??$create_and_initialize@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@AEBUhstring@3@AEBU43@@impl@winrt@@YAPEAU?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@01@AEBUhstring@1@0@Z @ 0x180201600 (--$create_and_initialize@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Fou.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0?$producers_base@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@V?$tuple@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x180337F40 (--0-$producers_base@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundati.c)
 */

_QWORD *__fastcall winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>(
        _QWORD *a1,
        volatile signed __int32 **a2,
        volatile signed __int32 **a3)
{
  volatile signed __int32 *v6; // r9
  int v7; // r8d
  volatile signed __int32 *v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  volatile signed __int32 *v12; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int32 *v13; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  v6 = *a2;
  *a2 = 0LL;
  winrt::impl::producers_base<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>,std::tuple<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::producers_base<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>,std::tuple<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>(
    a1 + 2,
    a2,
    0LL,
    v6);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>((__int64)(a1 + 1), (unsigned int)(v7 + 1));
  v12 = v8;
  *a1 = &winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::`vftable';
  a1[3] = v9;
  a1[4] = v10;
  v13 = v8;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
  *a1 = &winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::`vftable';
  winrt::handle_type<winrt::impl::hstring_traits>::close(a2);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a3);
  return a1;
}
