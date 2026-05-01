/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_93656037d821f0cf4f10769c2d148d9f___ @ 0x18055BB60
 * Callers:
 *     _lambda_c876813055a0f8eb90a291ca9ab0fec3_::operator() @ 0x18055CFE8 (_lambda_c876813055a0f8eb90a291ca9ab0fec3_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008BE90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801A4724 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f_____lambda_74c676e1075650fb24d91a9b16da121f___ @ 0x18055B8A8 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f_.c)
 *     _lambda_93656037d821f0cf4f10769c2d148d9f_::_lambda_93656037d821f0cf4f10769c2d148d9f_ @ 0x18055BF9C (_lambda_93656037d821f0cf4f10769c2d148d9f_--_lambda_93656037d821f0cf4f10769c2d148d9f_.c)
 *     _lambda_93656037d821f0cf4f10769c2d148d9f_::__lambda_93656037d821f0cf4f10769c2d148d9f_ @ 0x18055C7B0 (_lambda_93656037d821f0cf4f10769c2d148d9f_--__lambda_93656037d821f0cf4f10769c2d148d9f_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_93656037d821f0cf4f10769c2d148d9f___(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  volatile signed __int32 **CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f_____lambda_74c676e1075650fb24d91a9b16da121f; // rax
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-39h] BYREF
  volatile signed __int32 *v13; // [rsp+28h] [rbp-31h] BYREF
  volatile signed __int32 *v14; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v15[96]; // [rsp+40h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v12 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((_QWORD *)(a1 + 48), &v12);
  v4 = v3;
  if ( v3 >= 0 )
  {
    lambda_93656037d821f0cf4f10769c2d148d9f_::_lambda_93656037d821f0cf4f10769c2d148d9f_(v15, a2);
    CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f_____lambda_74c676e1075650fb24d91a9b16da121f = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f_____lambda_74c676e1075650fb24d91a9b16da121f___(&v13, (__int64)v15);
    v6 = (__int64)*CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f_____lambda_74c676e1075650fb24d91a9b16da121f;
    v14 = *CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f_____lambda_74c676e1075650fb24d91a9b16da121f;
    *CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f_____lambda_74c676e1075650fb24d91a9b16da121f = 0LL;
    v7 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(v7);
    }
    lambda_93656037d821f0cf4f10769c2d148d9f_::__lambda_93656037d821f0cf4f10769c2d148d9f_(v15);
    if ( v6 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 24LL))(v12, v6);
      v4 = v10;
      if ( v10 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
        goto LABEL_11;
      }
      v8 = (unsigned int)v10;
      v9 = 81LL;
    }
    else
    {
      v4 = -2147024882;
      v8 = 2147942414LL;
      v9 = 80LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\internal\\shell\\inc\\creationthreaddispatcher.h",
      (const char *)v8);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (int)"onecoreuap\\internal\\shell\\inc\\creationthreaddispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  return v4;
}
