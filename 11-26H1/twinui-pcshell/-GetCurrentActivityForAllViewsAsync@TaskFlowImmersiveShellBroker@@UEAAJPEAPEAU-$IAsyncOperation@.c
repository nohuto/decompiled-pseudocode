/*
 * XREFs of ?GetCurrentActivityForAllViewsAsync@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z @ 0x1803F82B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MakeAsyncHelper@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@23@UINilDelegate@Internal@3@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@63@VComTaskPoolHandler@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@1@$$QEAVComTaskPoolHandler@01@QEBGW4TrustLevel@@PEAV?$AsyncCallbackBase@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@@01@@Z @ 0x1803F5220 (--$MakeAsyncHelper@U-$IAsyncOperation@PEAU-$IVectorView@PEAVGetCurrentActivityForViewOperationRe.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______lambda_4637121c97463dde84d1e4eb150ea79f___ @ 0x1803F52E4 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CMarshaledInterfaceResult_Windows--Foundati.c)
 *     _lambda_37bafbeb3dd0776f24b59a9d11710915_::_lambda_37bafbeb3dd0776f24b59a9d11710915_ @ 0x1803F5670 (_lambda_37bafbeb3dd0776f24b59a9d11710915_--_lambda_37bafbeb3dd0776f24b59a9d11710915_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskFlowImmersiveShellBroker::GetCurrentActivityForAllViewsAsync(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *CurrentActivityForViewOperationResults_______lambda_4637121c97463dde84d1e4eb150ea79f; // rax
  __int64 v7; // r9
  int v8; // ebx
  const char *v9; // r9
  __int64 result; // rax
  int v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+34h] [rbp-24h]
  __int64 v13; // [rsp+40h] [rbp-18h] BYREF
  __int64 v14; // [rsp+48h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  try
  {
    *a2 = 0LL;
    v3 = a1 - 24;
    v4 = a1 & -(__int64)(a1 != 24);
    v16 = v4;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v11 = 3;
    v12 = 128LL;
    v5 = lambda_37bafbeb3dd0776f24b59a9d11710915_::_lambda_37bafbeb3dd0776f24b59a9d11710915_(&v13, v3, &v16);
    CurrentActivityForViewOperationResults_______lambda_4637121c97463dde84d1e4eb150ea79f = Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______lambda_4637121c97463dde84d1e4eb150ea79f___(v5);
    v8 = Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *> *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *> *>,Windows::Internal::INilDelegate,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>>,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
           a2,
           (__int64)&v11,
           (__int64)L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Internal.D"
                     "ata.Activities.GetCurrentActivityForViewOperationResults>>",
           v7,
           (__int64)CurrentActivityForViewOperationResults_______lambda_4637121c97463dde84d1e4eb150ea79f);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
    if ( v8 >= 0 )
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D5,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v8);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
      result = (unsigned int)v8;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1D8,
                           (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v9);
  }
  return result;
}
