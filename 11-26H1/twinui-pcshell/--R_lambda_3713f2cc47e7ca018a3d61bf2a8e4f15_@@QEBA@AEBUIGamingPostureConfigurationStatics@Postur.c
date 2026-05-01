/*
 * XREFs of ??R_lambda_3713f2cc47e7ca018a3d61bf2a8e4f15_@@QEBA@AEBUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@@Z @ 0x180360D54
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_3713f2cc47e7ca018a3d61bf2a8e4f15_@@CA@AEBUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@@Z @ 0x180360510 (-_lambda_invoker_cdecl_@_lambda_3713f2cc47e7ca018a3d61bf2a8e4f15_@@CA@AEBUIGamingPostureConfigur.c)
 *     ?GamingAppAumid@GamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winrt@@SA@XZ @ 0x180360FE8 (-GamingAppAumid@GamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winrt@@SA@.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall _lambda_3713f2cc47e7ca018a3d61bf2a8e4f15_::operator()(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v3; // rcx
  int v5; // eax
  _QWORD *result; // rax
  int v7; // [rsp+24h] [rbp-34h] BYREF
  int v8; // [rsp+28h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h]
  _QWORD *v10; // [rsp+40h] [rbp-18h] BYREF

  v10 = a2;
  v3 = *a3;
  v10 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v3 + 64LL))(v3, &v10);
  winrt::check_hresult(&v7, v5, (__int64)&v8);
  result = a2;
  *a2 = v10;
  return result;
}
