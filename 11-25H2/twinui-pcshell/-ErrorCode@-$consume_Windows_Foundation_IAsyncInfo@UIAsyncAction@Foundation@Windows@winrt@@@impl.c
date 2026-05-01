/*
 * XREFs of ?ErrorCode@?$consume_Windows_Foundation_IAsyncInfo@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805D0598
 * Callers:
 *     _lambda_e61605ece55422ba9fa5b55a2642b1df_::operator()_winrt::Windows::Foundation::IAsyncAction_ @ 0x1805CD4A4 (_lambda_e61605ece55422ba9fa5b55a2642b1df_--operator()_winrt--Windows--Foundation--IAsyncAction_.c)
 *     _lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_::operator()_winrt::Windows::Foundation::IAsyncAction_ @ 0x1805CD5BC (_lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_--operator()_winrt--Windows--Foundation--IAsyncAction_.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncAction>::ErrorCode(
        __int64 (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        _DWORD *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // rcx
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-20h] BYREF
  __int128 v9; // [rsp+28h] [rbp-18h]
  int v10; // [rsp+60h] [rbp+20h] BYREF
  __int64 v11; // [rsp+68h] [rbp+28h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF

  *a2 = 0;
  v3 = *a1;
  if ( v3 )
  {
    v11 = 0LL;
    v4 = (**v3)(v3, &winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncInfo>, &v11);
    v5 = v11;
    v12 = v11;
  }
  else
  {
    v4 = 0;
    v12 = 0LL;
    v5 = 0LL;
  }
  v8 = 0;
  v9 = 0LL;
  winrt::check_hresult(&v10, v4, (__int64)&v8);
  v8 = 0;
  v9 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v5 + 64LL))(v5, a2);
  winrt::check_hresult(&v10, v6, (__int64)&v8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  return a2;
}
