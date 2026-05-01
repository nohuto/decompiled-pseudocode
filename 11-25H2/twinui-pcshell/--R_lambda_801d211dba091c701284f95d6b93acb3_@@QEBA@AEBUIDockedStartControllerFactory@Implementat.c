/*
 * XREFs of ??R_lambda_801d211dba091c701284f95d6b93acb3_@@QEBA@AEBUIDockedStartControllerFactory@Implementation@StartScreen@UI@WindowsUdk@winrt@@@Z @ 0x18037F93C
 * Callers:
 *     ??$call@AEAV_lambda_801d211dba091c701284f95d6b93acb3_@@@?$factory_cache_entry@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@UIDockedStartControllerFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_801d211dba091c701284f95d6b93acb3_@@@Z @ 0x18037F1E4 (--$call@AEAV_lambda_801d211dba091c701284f95d6b93acb3_@@@-$factory_cache_entry@UDockedStartContro.c)
 *     ??0DockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x18037F390 (--0DockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??B?$bind_out@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@QEBAPEAPEAXXZ @ 0x1802183BC (--B-$bind_out@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@QEBAPEAPEAXXZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall _lambda_801d211dba091c701284f95d6b93acb3_::operator()(_QWORD *a1, __int64 *a2, __int64 **a3)
{
  __int64 *v3; // rdi
  _QWORD *v4; // rsi
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64 *, _QWORD, __int64 *, __int64 *); // rbx
  __int64 *v8; // rax
  int v9; // eax
  int v11; // [rsp+38h] [rbp-30h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v14; // [rsp+78h] [rbp+10h] BYREF

  v14 = a2;
  v3 = *a3;
  v4 = (_QWORD *)*a1;
  v13 = 0LL;
  v11 = 0;
  v6 = *v3;
  v12 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *, __int64 *))(v6 + 48);
  v14 = (__int64 *)a1[1];
  v8 = winrt::impl::bind_out<winrt::Windows::Foundation::IInspectable>::operator void * *(&v14);
  v9 = v7(v3, *v4, v8, &v13);
  winrt::check_hresult((int *)&v14, v9, (__int64)&v11);
  *a2 = v13;
  return a2;
}
