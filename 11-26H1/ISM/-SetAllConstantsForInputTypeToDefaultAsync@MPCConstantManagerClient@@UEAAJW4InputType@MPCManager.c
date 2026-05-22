/*
 * XREFs of ?SetAllConstantsForInputTypeToDefaultAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAPEAUIAsyncAction@Foundation@6@@Z @ 0x180174D90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAsyncHelper@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@UINilDelegate@Internal@3@VCNoResult@63@VComTaskPoolHandler@63@U?$AsyncCausalityOptions@$1?SetAllConstantsForInputTypeToDefaultAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAUIAsyncAction@Foundation@1@$$QEAVComTaskPoolHandler@01@QEBGW4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x18016D6A4 (--$MakeAsyncHelper@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@UINilDeleg.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_16bcd66e868557b6123b295398ded03e___ @ 0x18016DB04 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_16bcd66e868557b6123b29539.c)
 *     _lambda_b07e28b8d9a43b43078b009fd4c08247_::_lambda_b07e28b8d9a43b43078b009fd4c08247_ @ 0x18016DE08 (_lambda_b07e28b8d9a43b43078b009fd4c08247_--_lambda_b07e28b8d9a43b43078b009fd4c08247_.c)
 */

__int64 __fastcall MPCConstantManagerClient::SetAllConstantsForInputTypeToDefaultAsync(__int64 a1, int a2, __int64 *a3)
{
  _OWORD *v5; // rax
  int v6; // r9d
  char *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+38h] [rbp-20h]
  _BYTE v12[24]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 248LL) )
  {
    v5 = (_OWORD *)lambda_b07e28b8d9a43b43078b009fd4c08247_::_lambda_b07e28b8d9a43b43078b009fd4c08247_(
                     (__int64)v12,
                     a1,
                     &v14);
    v10 = 4LL;
    v11 = v6;
    v7 = Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_16bcd66e868557b6123b295398ded03e___(v5);
    return Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const SetAllConstantsForInputTypeToDefaultAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
             a3,
             (__int64)&v10,
             v8,
             v9,
             (void (__fastcall ***)(_QWORD, __int64))v7);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)0x80010103LL);
    return 2147549443LL;
  }
}
