/*
 * XREFs of ?GetActiveInputTypeListAsync@MPCConstantManagerClient@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z @ 0x180172A20
 * Callers:
 *     <none>
 * Callees:
 *     ??0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV?$CBaseInputObserverServer@$0L@@@@Z @ 0x18008884C (--0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV-$CBaseInputObserverServer@$0L@@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAsyncOperationHelper@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@3@VComTaskPoolHandler@23@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAU?$IAsyncOperation@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@01@@Z @ 0x18016D914 (--$MakeAsyncOperationHelper@V-$CMarshaledInterfaceResult@U-$IVector@PEAUHSTRING__@@@Collections@.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________lambda_de6bcc426287dbdda407399e3f0c7994___ @ 0x18016D9D4 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CMarshaledInterfaceResult_Wind_ea_18016D9D4.c)
 */

__int64 __fastcall MPCConstantManagerClient::GetActiveInputTypeListAsync(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  int v5; // r8d
  char *v6; // rax
  __int64 v7; // r8
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 248LL) )
  {
    v4 = _lambda_329431f877b8a1cf1c33d43387e7f0d1_::_lambda_329431f877b8a1cf1c33d43387e7f0d1_(&v11, a1);
    v8 = 4LL;
    v9 = v5;
    v6 = Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________lambda_de6bcc426287dbdda407399e3f0c7994___(v4);
    return Windows::Internal::MakeAsyncOperationHelper<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>,Windows::Foundation::Collections::IVector<HSTRING__ *> *,Windows::Internal::ComTaskPoolHandler>(
             (__int64)&v8,
             a2,
             v7,
             (__int64)v6);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)0x80010103LL);
    return 2147549443LL;
  }
}
