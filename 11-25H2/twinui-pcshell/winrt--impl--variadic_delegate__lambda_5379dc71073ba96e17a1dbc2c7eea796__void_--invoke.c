/*
 * XREFs of winrt::impl::variadic_delegate__lambda_5379dc71073ba96e17a1dbc2c7eea796__void_::invoke @ 0x1805CCEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::variadic_delegate__lambda_5379dc71073ba96e17a1dbc2c7eea796__void_::invoke(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  v6 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 56LL))(v2, v1);
  return winrt::check_hresult(&v7, v3, (__int64)&v5);
}
