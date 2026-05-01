/*
 * XREFs of ??R_lambda_c13b110588b4e2f99da684d72199d508_@@QEBA@AEBUIApplicationActivationStatics@Private@Activation@ApplicationModel@Windows@winrt@@@Z @ 0x180329434
 * Callers:
 *     ??$call@AEAV_lambda_c13b110588b4e2f99da684d72199d508_@@@?$factory_cache_entry@UApplicationActivation@Private@Activation@ApplicationModel@Windows@winrt@@UIApplicationActivationStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_c13b110588b4e2f99da684d72199d508_@@@Z @ 0x1803263B8 (--$call@AEAV_lambda_c13b110588b4e2f99da684d72199d508_@@@-$factory_cache_entry@UApplicationActiva.c)
 *     ?ActivateApplicationForContractByAumid@ApplicationActivation@Private@Activation@ApplicationModel@Windows@winrt@@SA@AEBUUser@System@56@AEBUhstring@param@6@1AEBUIInspectable@Foundation@56@AEBUIApplicationActivationProperties@23456@@Z @ 0x1803299CC (-ActivateApplicationForContractByAumid@ApplicationActivation@Private@Activation@ApplicationModel.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall _lambda_c13b110588b4e2f99da684d72199d508_::operator()(__int64 **a1, _QWORD *a2, __int64 **a3)
{
  __int64 *v3; // rbx
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r10
  int v12; // eax
  __int64 v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+48h] [rbp-20h] BYREF
  __int128 v16; // [rsp+50h] [rbp-18h]
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v18; // [rsp+78h] [rbp+10h] BYREF

  v18 = a2;
  v3 = *a3;
  v5 = a1[3];
  v6 = *a1[4];
  v7 = *a1[2];
  v8 = *a1[1];
  v9 = **a1;
  v17 = 0LL;
  v15 = 0;
  v10 = *v3;
  v14 = v6;
  v11 = *v5;
  v16 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64, __int64, __int64, __int64 *))(v10 + 96))(
          v3,
          v9,
          v8,
          v7,
          v11,
          v14,
          &v17);
  winrt::check_hresult((int *)&v18, v12, (__int64)&v15);
  *a2 = v17;
  return a2;
}
