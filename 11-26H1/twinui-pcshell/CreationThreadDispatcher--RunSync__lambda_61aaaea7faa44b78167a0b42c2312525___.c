/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_61aaaea7faa44b78167a0b42c2312525___ @ 0x1804F5DBC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c46833f4c9ea63983b862330b23aa69b___::Run @ 0x180503140 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c46833f4c9ea63983b862330b23aa69b___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008BE90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801A4724 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_3817caec24270342e05ef3f717925b64_____lambda_3817caec24270342e05ef3f717925b64___ @ 0x1804F46D0 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_3817caec24270342e05ef3f717925b64_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_61aaaea7faa44b78167a0b42c2312525___(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rax
  volatile signed __int32 **CAsyncCallbackWithLambda__lambda_3817caec24270342e05ef3f717925b64_____lambda_3817caec24270342e05ef3f717925b64; // rax
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  __int64 v13[2]; // [rsp+20h] [rbp-20h] BYREF
  int v14; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v16; // [rsp+60h] [rbp+20h] BYREF
  volatile signed __int32 *v17; // [rsp+70h] [rbp+30h] BYREF
  volatile signed __int32 *v18; // [rsp+78h] [rbp+38h] BYREF

  v16 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((_QWORD *)(a1 + 48), &v16);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
    v13[0] = v5;
    v13[1] = *(_QWORD *)(a2 + 8);
    v14 = *(_DWORD *)(a2 + 16);
    CAsyncCallbackWithLambda__lambda_3817caec24270342e05ef3f717925b64_____lambda_3817caec24270342e05ef3f717925b64 = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_3817caec24270342e05ef3f717925b64_____lambda_3817caec24270342e05ef3f717925b64___(&v17, v13);
    v7 = (__int64)*CAsyncCallbackWithLambda__lambda_3817caec24270342e05ef3f717925b64_____lambda_3817caec24270342e05ef3f717925b64;
    v18 = *CAsyncCallbackWithLambda__lambda_3817caec24270342e05ef3f717925b64_____lambda_3817caec24270342e05ef3f717925b64;
    *CAsyncCallbackWithLambda__lambda_3817caec24270342e05ef3f717925b64_____lambda_3817caec24270342e05ef3f717925b64 = 0LL;
    v8 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(v8);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v13);
    if ( v7 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, v7);
      v4 = v11;
      if ( v11 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
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
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  return v4;
}
