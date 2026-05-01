/*
 * XREFs of ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@_KUhstring@5@@impl@winrt@@QEBA@AEB_K@Z @ 0x18065171C
 * Callers:
 *     ?GetSystemId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBUWindowId@UI@56@@Z @ 0x18064DB18 (-GetSystemId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA-AUh.c)
 *     ?RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x18065039C (-RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NA.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?check_hresult_allow_bounds@impl@winrt@@YA?AUhresult@2@U32@AEBUslim_source_location@12@@Z @ 0x180339FB4 (-check_hresult_allow_bounds@impl@winrt@@YA-AUhresult@2@U32@AEBUslim_source_location@12@@Z.c)
 *     ??$?4Uhstring@winrt@@$0A@@?$optional@Uhstring@winrt@@@std@@QEAAAEAV01@$$QEAUhstring@winrt@@@Z @ 0x180643FCC (--$-4Uhstring@winrt@@$0A@@-$optional@Uhstring@winrt@@@std@@QEAAAEAV01@$$QEAUhstring@winrt@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<unsigned __int64,winrt::hstring>,unsigned __int64,winrt::hstring>::TryLookup(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, volatile signed __int32 **); // rbx
  int v7; // eax
  int v9; // [rsp+28h] [rbp-18h] BYREF
  __int128 v10; // [rsp+30h] [rbp-10h]
  int v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h]
  volatile signed __int32 *v13; // [rsp+80h] [rbp+40h] BYREF

  v12 = a2;
  *(_BYTE *)(a2 + 8) = 0;
  v13 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v5 = *a1;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, volatile signed __int32 **))(*(_QWORD *)*a1 + 48LL);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
  v7 = v6(v5, *a3, &v13);
  if ( !*winrt::impl::check_hresult_allow_bounds(&v11, v7, (__int64)&v9) )
    std::optional<winrt::hstring>::operator=<winrt::hstring,0>(a2, (__int64 *)&v13);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
  return a2;
}
