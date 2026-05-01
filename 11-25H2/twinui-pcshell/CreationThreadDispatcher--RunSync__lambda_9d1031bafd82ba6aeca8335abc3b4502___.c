/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_9d1031bafd82ba6aeca8335abc3b4502___ @ 0x18033D4A4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dee6717be6521a69b3617cc3d38456df___::Run @ 0x18034E9C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dee6717be6521a69b3617cc3d38456df___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180038A20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801A9ED8 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_da808c229d1077a2c468725fb6db7686_____lambda_da808c229d1077a2c468725fb6db7686___ @ 0x18033C660 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_da808c229d1077a2c468725fb6db7686_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_9d1031bafd82ba6aeca8335abc3b4502___(
        __int64 a1,
        __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  volatile signed __int32 **CAsyncCallbackWithLambda__lambda_da808c229d1077a2c468725fb6db7686_____lambda_da808c229d1077a2c468725fb6db7686; // rax
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  volatile signed __int32 *v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+28h] [rbp-18h] BYREF
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  v14 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((_QWORD *)(a1 + 48), &v14);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v13 = *a2;
    CAsyncCallbackWithLambda__lambda_da808c229d1077a2c468725fb6db7686_____lambda_da808c229d1077a2c468725fb6db7686 = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_da808c229d1077a2c468725fb6db7686_____lambda_da808c229d1077a2c468725fb6db7686___(&v12, &v13);
    v6 = (__int64)*CAsyncCallbackWithLambda__lambda_da808c229d1077a2c468725fb6db7686_____lambda_da808c229d1077a2c468725fb6db7686;
    v13 = (__int64)*CAsyncCallbackWithLambda__lambda_da808c229d1077a2c468725fb6db7686_____lambda_da808c229d1077a2c468725fb6db7686;
    *CAsyncCallbackWithLambda__lambda_da808c229d1077a2c468725fb6db7686_____lambda_da808c229d1077a2c468725fb6db7686 = 0LL;
    v7 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(v7);
    }
    if ( v6 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 24LL))(v14, v6);
      v4 = v10;
      if ( v10 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
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
      (int)"OnecoreUAP\\Internal\\Shell\\Inc\\creationthreaddispatcher.h",
      (const char *)v8);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (int)"OnecoreUAP\\Internal\\Shell\\Inc\\creationthreaddispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  return v4;
}
