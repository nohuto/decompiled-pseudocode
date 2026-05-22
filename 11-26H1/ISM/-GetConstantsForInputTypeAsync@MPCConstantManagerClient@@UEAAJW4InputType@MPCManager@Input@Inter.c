/*
 * XREFs of ?GetConstantsForInputTypeAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAPEAU?$IAsyncOperation@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@6@@Z @ 0x180172B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAsyncOperationHelper@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@3@VComTaskPoolHandler@23@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAU?$IAsyncOperation@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@01@@Z @ 0x18016D914 (--$MakeAsyncOperationHelper@V-$CMarshaledInterfaceResult@U-$IVector@PEAUHSTRING__@@@Collections@.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________lambda_b07e28b8d9a43b43078b009fd4c08247___ @ 0x18016D940 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CMarshaledInterfaceResult_Windows--Foundati.c)
 *     _lambda_b07e28b8d9a43b43078b009fd4c08247_::_lambda_b07e28b8d9a43b43078b009fd4c08247_ @ 0x18016DE08 (_lambda_b07e28b8d9a43b43078b009fd4c08247_--_lambda_b07e28b8d9a43b43078b009fd4c08247_.c)
 */

__int64 __fastcall MPCConstantManagerClient::GetConstantsForInputTypeAsync(__int64 a1, int a2, __int64 *a3)
{
  _OWORD *v5; // rax
  int v6; // r9d
  char *v7; // rax
  __int64 v8; // r8
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 248LL) )
  {
    v5 = (_OWORD *)lambda_b07e28b8d9a43b43078b009fd4c08247_::_lambda_b07e28b8d9a43b43078b009fd4c08247_(
                     (__int64)v11,
                     a1,
                     &v13);
    v9 = 4LL;
    v10 = v6;
    v7 = Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________lambda_b07e28b8d9a43b43078b009fd4c08247___(v5);
    return Windows::Internal::MakeAsyncOperationHelper<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>,Windows::Foundation::Collections::IVector<HSTRING__ *> *,Windows::Internal::ComTaskPoolHandler>(
             (__int64)&v9,
             a3,
             v8,
             (__int64)v7);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)0x80010103LL);
    return 2147549443LL;
  }
}
