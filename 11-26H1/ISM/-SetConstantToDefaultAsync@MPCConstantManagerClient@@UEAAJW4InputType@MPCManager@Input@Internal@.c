/*
 * XREFs of ?SetConstantToDefaultAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@6@@Z @ 0x180174F30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAsyncHelper@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@UINilDelegate@Internal@3@VCNoResult@63@VComTaskPoolHandler@63@U?$AsyncCausalityOptions@$1?SetConstantToDefaultAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAUIAsyncAction@Foundation@1@$$QEAVComTaskPoolHandler@01@QEBGW4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x18016D844 (--$MakeAsyncHelper@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@_ea_18016D844.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_2c3f3b4f1bafb50fab998dee840e32d8___ @ 0x18016DB98 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_2c3f3b4f1bafb50fab998dee8.c)
 *     _lambda_7c875662d6abaa9f8d1386a75bd755d7_::_lambda_7c875662d6abaa9f8d1386a75bd755d7_ @ 0x18016DE1C (_lambda_7c875662d6abaa9f8d1386a75bd755d7_--_lambda_7c875662d6abaa9f8d1386a75bd755d7_.c)
 */

__int64 __fastcall MPCConstantManagerClient::SetConstantToDefaultAsync(__int64 a1, int a2, HSTRING a3, __int64 *a4)
{
  __int64 v7; // rax
  char *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+38h] [rbp-30h]
  _BYTE v13[40]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  HSTRING newString; // [rsp+70h] [rbp+8h] BYREF
  int v16; // [rsp+78h] [rbp+10h] BYREF

  v16 = a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 248LL) )
  {
    newString = 0LL;
    WindowsDuplicateString(a3, &newString);
    v7 = lambda_7c875662d6abaa9f8d1386a75bd755d7_::_lambda_7c875662d6abaa9f8d1386a75bd755d7_(
           (__int64)v13,
           a1,
           &v16,
           &newString);
    v11 = 4LL;
    v12 = 0;
    v8 = Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_2c3f3b4f1bafb50fab998dee840e32d8___(v7);
    return Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const SetConstantToDefaultAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
             a4,
             (__int64)&v11,
             v9,
             v10,
             (void (__fastcall ***)(_QWORD, __int64))v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x79,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)0x80010103LL);
    return 2147549443LL;
  }
}
