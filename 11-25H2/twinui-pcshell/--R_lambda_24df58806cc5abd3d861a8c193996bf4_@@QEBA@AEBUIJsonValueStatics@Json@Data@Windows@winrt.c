/*
 * XREFs of ??R_lambda_24df58806cc5abd3d861a8c193996bf4_@@QEBA@AEBUIJsonValueStatics@Json@Data@Windows@winrt@@@Z @ 0x180665EA0
 * Callers:
 *     ??$call@AEAV_lambda_24df58806cc5abd3d861a8c193996bf4_@@@?$factory_cache_entry@UJsonValue@Json@Data@Windows@winrt@@UIJsonValueStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_24df58806cc5abd3d861a8c193996bf4_@@@Z @ 0x180664E00 (--$call@AEAV_lambda_24df58806cc5abd3d861a8c193996bf4_@@@-$factory_cache_entry@UJsonValue@Json@Da.c)
 *     ?CreateNumberValue@JsonValue@Json@Data@Windows@winrt@@SA@N@Z @ 0x1806676B8 (-CreateNumberValue@JsonValue@Json@Data@Windows@winrt@@SA@N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall _lambda_24df58806cc5abd3d861a8c193996bf4_::operator()(__int64 *a1, _QWORD *a2, __int64 *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  _QWORD *result; // rax
  int v8; // [rsp+24h] [rbp-34h] BYREF
  int v9; // [rsp+28h] [rbp-30h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+40h] [rbp-18h] BYREF

  v11 = 0LL;
  v4 = *a1;
  v5 = *a3;
  v9 = 0;
  v10 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v5 + 72LL))(v5, v4, &v11);
  winrt::check_hresult(&v8, v6, (__int64)&v9);
  result = a2;
  *a2 = v11;
  return result;
}
