/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_79769dc8d4a0a63a59daa3025d7ec5e4___ @ 0x1804EA39C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d45c45a1f8f4929b920127ae92a9fd69___::Run @ 0x1804EBF00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d45c45a1f8f4929b920127ae92a9fd69___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008BE90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801A4724 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_8a72c3f35978c46449f60b59a3b64120_____lambda_8a72c3f35978c46449f60b59a3b64120___ @ 0x1804EA140 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_8a72c3f35978c46449f60b59a3b64120_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_79769dc8d4a0a63a59daa3025d7ec5e4___(
        __int64 a1,
        __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rax
  volatile signed __int32 **CAsyncCallbackWithLambda__lambda_8a72c3f35978c46449f60b59a3b64120_____lambda_8a72c3f35978c46449f60b59a3b64120; // rax
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  __int64 v13[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v15; // [rsp+50h] [rbp+20h] BYREF
  volatile signed __int32 *v16; // [rsp+60h] [rbp+30h] BYREF
  volatile signed __int32 *v17; // [rsp+68h] [rbp+38h] BYREF

  v15 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((_QWORD *)(a1 + 48), &v15);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = *a2;
    *a2 = 0LL;
    v13[0] = v5;
    v13[1] = a2[1];
    CAsyncCallbackWithLambda__lambda_8a72c3f35978c46449f60b59a3b64120_____lambda_8a72c3f35978c46449f60b59a3b64120 = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_8a72c3f35978c46449f60b59a3b64120_____lambda_8a72c3f35978c46449f60b59a3b64120___(&v16, v13);
    v7 = (__int64)*CAsyncCallbackWithLambda__lambda_8a72c3f35978c46449f60b59a3b64120_____lambda_8a72c3f35978c46449f60b59a3b64120;
    v17 = *CAsyncCallbackWithLambda__lambda_8a72c3f35978c46449f60b59a3b64120_____lambda_8a72c3f35978c46449f60b59a3b64120;
    *CAsyncCallbackWithLambda__lambda_8a72c3f35978c46449f60b59a3b64120_____lambda_8a72c3f35978c46449f60b59a3b64120 = 0LL;
    v8 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(v8);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v13);
    if ( v7 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 24LL))(v15, v7);
      v4 = v11;
      if ( v11 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
        goto LABEL_11;
      }
      v9 = (unsigned int)v11;
      v10 = 81LL;
    }
    else
    {
      v4 = -2147024882;
      v9 = 2147942414LL;
      v10 = 80LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)v9);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  return v4;
}
