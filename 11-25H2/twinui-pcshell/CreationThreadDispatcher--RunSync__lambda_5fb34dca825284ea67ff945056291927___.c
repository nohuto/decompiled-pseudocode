/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_5fb34dca825284ea67ff945056291927___ @ 0x1804ED1A4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0___::Run @ 0x1804F01D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180038A20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801A9ED8 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab_____lambda_d7583171fb1f2a9ae92a561f008d6bab___ @ 0x1804ECC88 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_5fb34dca825284ea67ff945056291927___(
        __int64 a1,
        __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rax
  volatile signed __int32 **CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab_____lambda_d7583171fb1f2a9ae92a561f008d6bab; // rax
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+28h] [rbp-18h] BYREF
  char v15; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v17; // [rsp+60h] [rbp+20h] BYREF
  volatile signed __int32 *v18; // [rsp+70h] [rbp+30h] BYREF
  volatile signed __int32 *v19; // [rsp+78h] [rbp+38h] BYREF

  v17 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((_QWORD *)(a1 + 48), &v17);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v13 = *a2;
    v5 = a2[1];
    a2[1] = 0LL;
    v14 = v5;
    v15 = *((_BYTE *)a2 + 16);
    CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab_____lambda_d7583171fb1f2a9ae92a561f008d6bab = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab_____lambda_d7583171fb1f2a9ae92a561f008d6bab___(&v18, (__int64)&v13);
    v7 = (__int64)*CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab_____lambda_d7583171fb1f2a9ae92a561f008d6bab;
    v19 = *CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab_____lambda_d7583171fb1f2a9ae92a561f008d6bab;
    *CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab_____lambda_d7583171fb1f2a9ae92a561f008d6bab = 0LL;
    v8 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(v8);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
    if ( v7 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 24LL))(v17, v7);
      v4 = v11;
      if ( v11 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
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
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  return v4;
}
