/*
 * XREFs of ?Value@?$consume_Windows_Foundation_Collections_IKeyValuePair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@Uhstring@5@U65@@impl@winrt@@QEBA@XZ @ 0x180355E34
 * Callers:
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x18034C420 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

volatile signed __int32 **__fastcall winrt::impl::consume_Windows_Foundation_Collections_IKeyValuePair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,winrt::hstring,winrt::hstring>::Value(
        __int64 *a1,
        volatile signed __int32 **a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, volatile signed __int32 **); // rbx
  int v5; // eax
  int v7; // [rsp+28h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+50h] [rbp+8h] BYREF
  volatile signed __int32 **v10; // [rsp+58h] [rbp+10h]

  v10 = a2;
  *a2 = 0LL;
  v3 = *a1;
  v7 = 0;
  v8 = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)v3 + 56LL);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a2);
  v5 = v4(v3, a2);
  winrt::check_hresult(&v9, v5, (__int64)&v7);
  return a2;
}
