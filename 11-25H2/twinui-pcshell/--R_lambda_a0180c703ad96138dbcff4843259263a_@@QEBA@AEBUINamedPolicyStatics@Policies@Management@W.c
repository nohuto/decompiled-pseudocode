/*
 * XREFs of ??R_lambda_a0180c703ad96138dbcff4843259263a_@@QEBA@AEBUINamedPolicyStatics@Policies@Management@Windows@winrt@@@Z @ 0x18056CB8C
 * Callers:
 *     ??$call@AEAV_lambda_a0180c703ad96138dbcff4843259263a_@@@?$factory_cache_entry@UNamedPolicy@Policies@Management@Windows@winrt@@UINamedPolicyStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_a0180c703ad96138dbcff4843259263a_@@@Z @ 0x18056B7AC (--$call@AEAV_lambda_a0180c703ad96138dbcff4843259263a_@@@-$factory_cache_entry@UNamedPolicy@Polic.c)
 *     ?IsC2DAllowedByITPolicy@AIXPolicyHelper@@YA_NXZ @ 0x18056E3CC (-IsC2DAllowedByITPolicy@AIXPolicyHelper@@YA_NXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall _lambda_a0180c703ad96138dbcff4843259263a_::operator()(__int64 **a1, _QWORD *a2, __int64 **a3)
{
  __int64 *v3; // r9
  __int64 *v4; // r10
  __int64 *v6; // rdx
  __int64 *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // eax
  int v14; // [rsp+38h] [rbp-20h] BYREF
  __int128 v15; // [rsp+40h] [rbp-18h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = a2;
  v3 = a1[2];
  v4 = a1[1];
  v6 = *a1;
  v7 = *a3;
  v8 = *v3;
  v16 = 0LL;
  v9 = *v6;
  v14 = 0;
  v10 = *v7;
  v11 = *v4;
  v15 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64, __int64 *))(v10 + 56))(v7, v9, v11, v8, &v16);
  winrt::check_hresult((int *)&v17, v12, (__int64)&v14);
  *a2 = v16;
  return a2;
}
