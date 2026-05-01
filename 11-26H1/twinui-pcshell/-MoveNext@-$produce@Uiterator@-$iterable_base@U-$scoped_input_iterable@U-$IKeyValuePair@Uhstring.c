/*
 * XREFs of ?MoveNext@?$produce@Uiterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEA_N@Z @ 0x1801E46D0
 * Callers:
 *     <none>
 * Callees:
 *     ?check_scope@input_scope@impl@winrt@@QEBAXXZ @ 0x1801E474C (-check_scope@input_scope@impl@winrt@@QEBAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::iterable_base<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,winrt::impl::no_collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::MoveNext(
        __int64 a1,
        bool *a2)
{
  __int64 v4; // rcx
  winrt::impl::input_scope *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // rax
  __int64 result; // rax
  int v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1 + 8;
  if ( !a1 )
    v4 = 24LL;
  v5 = (winrt::impl::input_scope *)(*(_QWORD *)v4 + 24LL);
  try
  {
    winrt::impl::input_scope::check_scope(v5);
    v6 = a1 + 24;
    if ( !a1 )
      v6 = 40LL;
    v7 = *(_QWORD *)v6;
    v8 = a1 + 16;
    if ( !a1 )
      v8 = 32LL;
    v9 = *(_QWORD *)v8 == v7;
    if ( *(_QWORD *)v8 != v7 )
    {
      v10 = *(_QWORD *)v8 + 16LL;
      *(_QWORD *)v8 = v10;
      v9 = v10 == v7;
    }
    *a2 = !v9;
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v12);
  }
  return result;
}
