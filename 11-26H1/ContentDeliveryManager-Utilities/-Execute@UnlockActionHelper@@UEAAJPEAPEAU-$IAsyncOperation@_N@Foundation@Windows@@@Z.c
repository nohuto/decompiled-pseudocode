/*
 * XREFs of ?Execute@UnlockActionHelper@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18008F170
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAsyncHelper@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@UINilDelegate@Internal@3@V?$CBasicResult@E$0A@@63@VComTaskPoolHandler@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAU?$IAsyncOperation@_N@Foundation@1@$$QEAVComTaskPoolHandler@01@QEB_WW4TrustLevel@@PEAV?$AsyncCallbackBase@V?$CBasicResult@E$0A@@Internal@Windows@@@01@@Z @ 0x18008DFE0 (--$MakeAsyncHelper@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedHandler@.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CBasicResult_unsigned_char_0___lambda_de7ca9b0ec13d6a85971aebf8330bbf3___ @ 0x18008E0A4 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CBasicResult_unsigned_char_0___lambda_de7ca.c)
 *     ??0?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18008E7D0 (--0-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     _lambda_de7ca9b0ec13d6a85971aebf8330bbf3_::__lambda_de7ca9b0ec13d6a85971aebf8330bbf3_ @ 0x18008E8A0 (_lambda_de7ca9b0ec13d6a85971aebf8330bbf3_--__lambda_de7ca9b0ec13d6a85971aebf8330bbf3_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall UnlockActionHelper::Execute(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // r9
  int v6; // ebx
  int v8; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+34h] [rbp-1Ch]
  __int64 v10[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  __int64 v12; // [rsp+60h] [rbp+10h] BYREF
  __int64 v13; // [rsp+68h] [rbp+18h] BYREF

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  v13 = v3;
  wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>(
    &v12,
    (__int64 *)(a1 + 32));
  wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>(
    v10,
    &v12);
  v10[1] = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v8 = 3;
  v9 = 128LL;
  v4 = Windows::Internal::MakeOpLambda_0_Windows::Internal::CBasicResult_unsigned_char_0___lambda_de7ca9b0ec13d6a85971aebf8330bbf3___(v10);
  v6 = Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::INilDelegate,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
         a2,
         (__int64)&v8,
         (__int64)L"Windows.Foundation.IAsyncOperation`1<Boolean>",
         v5,
         (__int64)v4);
  lambda_de7ca9b0ec13d6a85971aebf8330bbf3_::__lambda_de7ca9b0ec13d6a85971aebf8330bbf3_(v10);
  if ( v6 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v6);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v12);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v13);
  return (unsigned int)v6;
}
