/*
 * XREFs of ?get_Value@?$produce@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18033A480
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>::get_Value(
        __int64 a1,
        volatile signed __int32 **a2,
        unsigned int a3)
{
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rax
  volatile signed __int32 *v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = a1 + 16;
  if ( !a1 )
    v4 = 32LL;
  winrt::hstring::hstring((winrt::hstring *)&v7, (const struct winrt::hstring *)v4, a3);
  v5 = v7;
  v7 = 0LL;
  *a2 = v5;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
  return 0LL;
}
