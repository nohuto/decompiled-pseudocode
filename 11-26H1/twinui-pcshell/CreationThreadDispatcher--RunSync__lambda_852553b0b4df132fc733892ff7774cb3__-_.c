/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_852553b0b4df132fc733892ff7774cb3__&_ @ 0x180580000
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2b80047eb1d5b1713ddd1132d615e18d___::Run @ 0x1805804F0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_2b80047eb1d5b1713ddd1132d615e18d___--.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008BE90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801A4724 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_1f1116661dbe82d04685ce830bd7b7fd_____lambda_1f1116661dbe82d04685ce830bd7b7fd___ @ 0x18057FEC0 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_1f1116661dbe82d04685ce830bd7b7fd_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_852553b0b4df132fc733892ff7774cb3____(
        __int64 a1,
        __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  volatile signed __int32 **CAsyncCallbackWithLambda__lambda_1f1116661dbe82d04685ce830bd7b7fd_____lambda_1f1116661dbe82d04685ce830bd7b7fd; // rax
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v13; // [rsp+40h] [rbp+20h] BYREF
  volatile signed __int32 *v14; // [rsp+50h] [rbp+30h] BYREF
  __int64 v15; // [rsp+58h] [rbp+38h] BYREF

  v13 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((_QWORD *)(a1 + 48), &v13);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v15 = *a2;
    CAsyncCallbackWithLambda__lambda_1f1116661dbe82d04685ce830bd7b7fd_____lambda_1f1116661dbe82d04685ce830bd7b7fd = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_1f1116661dbe82d04685ce830bd7b7fd_____lambda_1f1116661dbe82d04685ce830bd7b7fd___(&v14, &v15);
    v6 = (__int64)*CAsyncCallbackWithLambda__lambda_1f1116661dbe82d04685ce830bd7b7fd_____lambda_1f1116661dbe82d04685ce830bd7b7fd;
    v15 = (__int64)*CAsyncCallbackWithLambda__lambda_1f1116661dbe82d04685ce830bd7b7fd_____lambda_1f1116661dbe82d04685ce830bd7b7fd;
    *CAsyncCallbackWithLambda__lambda_1f1116661dbe82d04685ce830bd7b7fd_____lambda_1f1116661dbe82d04685ce830bd7b7fd = 0LL;
    v7 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(v7);
    }
    if ( v6 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, v6);
      v4 = v10;
      if ( v10 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
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
      (int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)v8);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  return v4;
}
