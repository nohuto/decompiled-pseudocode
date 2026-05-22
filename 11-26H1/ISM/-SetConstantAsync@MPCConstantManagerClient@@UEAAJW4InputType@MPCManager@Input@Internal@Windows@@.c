/*
 * XREFs of ?SetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAUIPropertyValue@Foundation@6@PEAPEAUIAsyncAction@96@@Z @ 0x180174E20
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAsyncHelper@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@UINilDelegate@Internal@3@VCNoResult@63@VComTaskPoolHandler@63@U?$AsyncCausalityOptions@$1?SetConstantAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAUIAsyncAction@Foundation@1@$$QEAVComTaskPoolHandler@01@QEBGW4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x18016D774 (--$MakeAsyncHelper@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@_ea_18016D774.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_a408cc100a5b103155a70fabf7a2049b___ @ 0x18016DC34 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_a408cc100a5b103155a70fabf.c)
 *     _lambda_a408cc100a5b103155a70fabf7a2049b_::_lambda_a408cc100a5b103155a70fabf7a2049b_ @ 0x18016DE6C (_lambda_a408cc100a5b103155a70fabf7a2049b_--_lambda_a408cc100a5b103155a70fabf7a2049b_.c)
 *     ?CreatePROPVARIANTFromPropertyValue@MPCConstantManagerClient@@CAJPEAUIPropertyValue@Foundation@Windows@@PEAUtagPROPVARIANT@@@Z @ 0x180171294 (-CreatePROPVARIANTFromPropertyValue@MPCConstantManagerClient@@CAJPEAUIPropertyValue@Foundation@W.c)
 */

__int64 __fastcall MPCConstantManagerClient::SetConstantAsync(
        __int64 a1,
        int a2,
        HSTRING a3,
        struct Windows::Foundation::IPropertyValue *a4,
        __int64 *a5)
{
  int v8; // eax
  _OWORD *v9; // rax
  char *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+20h] [rbp-60h]
  tagPROPVARIANT v14; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v15[56]; // [rsp+48h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]
  HSTRING newString; // [rsp+90h] [rbp+10h] BYREF
  int v18; // [rsp+98h] [rbp+18h] BYREF

  v18 = a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 248LL) )
  {
    memset(&v14, 0, sizeof(v14));
    v8 = MPCConstantManagerClient::CreatePROPVARIANTFromPropertyValue(a4, &v14);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
        (const char *)(unsigned int)v8,
        v13);
    newString = 0LL;
    WindowsDuplicateString(a3, &newString);
    v9 = (_OWORD *)lambda_a408cc100a5b103155a70fabf7a2049b_::_lambda_a408cc100a5b103155a70fabf7a2049b_(
                     (__int64)v15,
                     a1,
                     &v18,
                     (__int64)&v14,
                     &newString);
    *(_QWORD *)&v14.vt = 4LL;
    v14.lVal = 0;
    v10 = Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_a408cc100a5b103155a70fabf7a2049b___(v9);
    return Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const SetConstantAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
             a5,
             (__int64)&v14,
             v11,
             v12,
             (void (__fastcall ***)(_QWORD, __int64))v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)0x80010103LL);
    return 2147549443LL;
  }
}
