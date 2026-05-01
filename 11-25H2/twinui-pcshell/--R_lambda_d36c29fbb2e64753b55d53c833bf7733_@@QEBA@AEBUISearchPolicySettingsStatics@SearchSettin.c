/*
 * XREFs of ??R_lambda_d36c29fbb2e64753b55d53c833bf7733_@@QEBA@AEBUISearchPolicySettingsStatics@SearchSettings@UserProfile@System@WindowsUdk@winrt@@@Z @ 0x1803A62D8
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_d36c29fbb2e64753b55d53c833bf7733_@@CA@AEBUISearchPolicySettingsStatics@SearchSettings@UserProfile@System@WindowsUdk@winrt@@@Z @ 0x18039DD70 (-_lambda_invoker_cdecl_@_lambda_d36c29fbb2e64753b55d53c833bf7733_@@CA@AEBUISearchPolicySettingsS.c)
 *     ?FindAll@WebSearchProvider@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1803A7D98 (-FindAll@WebSearchProvider@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ?GetDefault@SearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@winrt@@SA@XZ @ 0x1803ABC6C (-GetDefault@SearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@winrt@@SA@XZ.c)
 *     ?Gamepad@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x1804604BC (-Gamepad@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ.c)
 *     ?IsC2DAllowedByITPolicy@AIXPolicyHelper@@YA_NXZ @ 0x18056E3CC (-IsC2DAllowedByITPolicy@AIXPolicyHelper@@YA_NXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall _lambda_d36c29fbb2e64753b55d53c833bf7733_::operator()(__int64 a1, _QWORD *a2, __int64 **a3)
{
  __int64 *v3; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v8; // [rsp+28h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v10 = a1;
  v3 = *a3;
  v10 = 0LL;
  v8 = 0;
  v5 = *v3;
  v9 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 48))(v3, &v10);
  winrt::check_hresult((int *)&v11, v6, (__int64)&v8);
  *a2 = v10;
  return a2;
}
