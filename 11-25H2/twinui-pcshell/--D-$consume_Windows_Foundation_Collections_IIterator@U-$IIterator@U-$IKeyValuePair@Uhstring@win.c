/*
 * XREFs of ??D?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@U?$IKeyValuePair@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@2345@@impl@winrt@@QEBA?AU?$IKeyValuePair@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@Foundation@Windows@2@XZ @ 0x180341CE0
 * Callers:
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x180348DF0 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 *     ?ReportCompleted@GamingOverlayExperienceManager@@UEAAJIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18034DD40 (-ReportCompleted@GamingOverlayExperienceManager@@UEAAJIPEAUIPropertySet@Collections@Foundation@W.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1800A9A80 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
winrt *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Foundation::IInspectable>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Foundation::IInspectable>>::operator*(
        __int64 *a1,
        winrt *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, void **); // rbx
  void **v5; // rax
  int v6; // eax
  int v8; // [rsp+24h] [rbp-34h] BYREF
  winrt *v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+38h] [rbp-20h]

  v9 = a2;
  *(_QWORD *)a2 = 0LL;
  v3 = *a1;
  v10 = 0;
  v11 = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v3 + 48LL);
  v5 = winrt::put_abi(a2, (struct IUnknown *)a2);
  v6 = v4(v3, v5);
  winrt::check_hresult(&v8, v6, (__int64)&v10);
  return a2;
}
