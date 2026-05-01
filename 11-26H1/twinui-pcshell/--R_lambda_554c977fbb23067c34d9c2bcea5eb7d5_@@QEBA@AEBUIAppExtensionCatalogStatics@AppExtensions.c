/*
 * XREFs of ??R_lambda_554c977fbb23067c34d9c2bcea5eb7d5_@@QEBA@AEBUIAppExtensionCatalogStatics@AppExtensions@ApplicationModel@Windows@winrt@@@Z @ 0x180360DD0
 * Callers:
 *     ??$call@AEAV_lambda_554c977fbb23067c34d9c2bcea5eb7d5_@@@?$factory_cache_entry@UAppExtensionCatalog@AppExtensions@ApplicationModel@Windows@winrt@@UIAppExtensionCatalogStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_554c977fbb23067c34d9c2bcea5eb7d5_@@@Z @ 0x1803607A4 (--$call@AEAV_lambda_554c977fbb23067c34d9c2bcea5eb7d5_@@@-$factory_cache_entry@UAppExtensionCatal.c)
 *     ?Open@AppExtensionCatalog@AppExtensions@ApplicationModel@Windows@winrt@@SA@AEBUhstring@param@5@@Z @ 0x1803617DC (-Open@AppExtensionCatalog@AppExtensions@ApplicationModel@Windows@winrt@@SA@AEBUhstring@param@5@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall _lambda_554c977fbb23067c34d9c2bcea5eb7d5_::operator()(__int64 **a1, _QWORD *a2, __int64 **a3)
{
  __int64 *v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  _QWORD *result; // rax
  int v10; // [rsp+24h] [rbp-34h] BYREF
  int v11; // [rsp+28h] [rbp-30h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h]
  _QWORD *v13; // [rsp+40h] [rbp-18h] BYREF

  v4 = *a1;
  v13 = a2;
  v5 = *a3;
  v13 = 0LL;
  v6 = *v4;
  v11 = 0;
  v7 = *v5;
  v12 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD **))(v7 + 48))(v5, v6, &v13);
  winrt::check_hresult(&v10, v8, (__int64)&v11);
  result = a2;
  *a2 = v13;
  return result;
}
