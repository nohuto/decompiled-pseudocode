/*
 * XREFs of ??D?$fast_iterator@U?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUWebSearchProvider@Shell@UI@WindowsUdk@2@XZ @ 0x1803A57A0
 * Callers:
 *     _lambda_be0595b4d9b1029e6cb699cd383e8153_::operator() @ 0x1803A5F2C (_lambda_be0595b4d9b1029e6cb699cd383e8153_--operator().c)
 *     ?AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ @ 0x1803A6C80 (-AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1800A9A80 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
winrt *__fastcall winrt::impl::fast_iterator<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::Shell::WebSearchProvider>>::operator*(
        __int64 a1,
        winrt *a2)
{
  __int64 *v3; // rax
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, void **); // rbx
  void **v7; // rax
  int v8; // eax
  int v10; // [rsp+28h] [rbp-30h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+60h] [rbp+8h] BYREF
  winrt *v13; // [rsp+68h] [rbp+10h]

  v13 = a2;
  v3 = *(__int64 **)a1;
  v4 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)a2 = 0LL;
  v5 = *v3;
  v10 = 0;
  v11 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v5 + 48LL);
  v7 = winrt::put_abi(a2, 0LL);
  v8 = v6(v5, v4, v7);
  winrt::check_hresult(&v12, v8, (__int64)&v10);
  return a2;
}
