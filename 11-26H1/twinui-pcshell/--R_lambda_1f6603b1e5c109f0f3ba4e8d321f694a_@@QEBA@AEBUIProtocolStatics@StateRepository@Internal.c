/*
 * XREFs of ??R_lambda_1f6603b1e5c109f0f3ba4e8d321f694a_@@QEBA@AEBUIProtocolStatics@StateRepository@Internal@Windows@winrt@@@Z @ 0x180623370
 * Callers:
 *     ??$call@AEAV_lambda_1f6603b1e5c109f0f3ba4e8d321f694a_@@@?$factory_cache_entry@UProtocol@StateRepository@Internal@Windows@winrt@@UIProtocolStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_1f6603b1e5c109f0f3ba4e8d321f694a_@@@Z @ 0x18061E83C (--$call@AEAV_lambda_1f6603b1e5c109f0f3ba4e8d321f694a_@@@-$factory_cache_entry@UProtocol@StateRep.c)
 *     ?SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z @ 0x1806344E8 (-SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall _lambda_1f6603b1e5c109f0f3ba4e8d321f694a_::operator()(__int64 **a1, _QWORD *a2, __int64 **a3)
{
  __int64 *v3; // r10
  __int64 *v4; // r9
  __int64 *v6; // r8
  __int64 *v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  int v14; // [rsp+38h] [rbp-20h] BYREF
  __int128 v15; // [rsp+40h] [rbp-18h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = a2;
  v3 = *a3;
  v4 = a1[2];
  v6 = a1[1];
  v7 = *a1;
  v16 = 0LL;
  v8 = *v4;
  v9 = *v6;
  v10 = *v7;
  v14 = 0;
  v11 = *v3;
  v15 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64, __int64 *))(v11 + 216))(v3, v10, v9, v8, &v16);
  winrt::check_hresult((int *)&v17, v12, (__int64)&v14);
  *a2 = v16;
  return a2;
}
