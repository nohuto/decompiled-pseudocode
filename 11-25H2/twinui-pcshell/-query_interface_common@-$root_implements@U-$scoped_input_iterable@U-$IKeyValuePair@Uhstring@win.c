/*
 * XREFs of ?query_interface_common@?$root_implements@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@Unon_agile@3@Uno_weak_ref@3@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180368058
 * Callers:
 *     ?query_interface@?$root_implements@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@Unon_agile@3@Uno_weak_ref@3@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180367FFC (-query_interface@-$root_implements@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@winrt@@U12.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,winrt::non_agile,winrt::no_weak_ref,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::query_interface_common(
        volatile signed __int32 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 (*v4)(void); // rax
  __int64 (**v6)(void); // r9

  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown> && a2[1] == 0x46000000000000C0LL )
  {
    v4 = *(__int64 (**)(void))(*(_QWORD *)a1 + 24LL);
LABEL_4:
    *a3 = v4();
    _InterlockedIncrement(a1 + 2);
    return 0LL;
  }
  v6 = *(__int64 (***)(void))a1;
  if ( *a2 == winrt::impl::guid_v<IInspectable> && a2[1] == 0x901E1065AAD75A9CuLL )
  {
    v4 = v6[7];
    goto LABEL_4;
  }
  return (*v6)();
}
