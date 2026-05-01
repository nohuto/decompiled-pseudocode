/*
 * XREFs of ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@Uhstring@4@@impl@winrt@@QEBA@XZ @ 0x18005D538
 * Callers:
 *     ?DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1800645C4 (-DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::hstring>,winrt::hstring>::GetResults(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, _QWORD *); // rbx
  unsigned int v5; // eax
  int v7; // [rsp+28h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]
  char v9; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+58h] [rbp+10h]

  v10 = a2;
  *a2 = 0LL;
  v3 = *a1;
  v7 = 0;
  v8 = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 64LL);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a2);
  v5 = v4(v3, a2);
  winrt::check_hresult(&v9, v5, &v7);
  return a2;
}
