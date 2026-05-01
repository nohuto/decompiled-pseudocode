/*
 * XREFs of ?Lookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@Uhstring@5@URemoteSystem@Shell@Internal@45@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18064E72C
 * Callers:
 *     ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x1806524C8 (-UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@W.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180029578 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
winrt *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>::Lookup(
        __int64 *a1,
        winrt *a2,
        _QWORD *a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, void **); // rbx
  void **v7; // rax
  int v8; // eax
  int v10; // [rsp+28h] [rbp-30h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+60h] [rbp+8h] BYREF
  winrt *v13; // [rsp+68h] [rbp+10h]

  v13 = a2;
  *(_QWORD *)a2 = 0LL;
  v5 = *a1;
  v10 = 0;
  v11 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v5 + 48LL);
  v7 = winrt::put_abi(a2, (struct IUnknown *)a2);
  v8 = v6(v5, *a3, v7);
  winrt::check_hresult(&v12, v8, (__int64)&v10);
  return a2;
}
