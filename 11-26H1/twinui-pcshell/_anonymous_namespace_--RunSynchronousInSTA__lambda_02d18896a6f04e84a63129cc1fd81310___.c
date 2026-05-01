/*
 * XREFs of _anonymous_namespace_::RunSynchronousInSTA__lambda_02d18896a6f04e84a63129cc1fd81310___ @ 0x1805E0218
 * Callers:
 *     _anonymous_namespace_::PinShellItem @ 0x1805E8068 (_anonymous_namespace_--PinShellItem.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18028D81C (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1802C34B0 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d94d82cd4edd08e6199a1e53cb8b0ecd___ @ 0x1805E002C (Windows--Internal--ComTaskPool--QueueTask__lambda_d94d82cd4edd08e6199a1e53cb8b0ecd___.c)
 *     _lambda_02d18896a6f04e84a63129cc1fd81310_::operator() @ 0x1805E3C98 (_lambda_02d18896a6f04e84a63129cc1fd81310_--operator().c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall anonymous_namespace_::RunSynchronousInSTA__lambda_02d18896a6f04e84a63129cc1fd81310___(__int128 *a1)
{
  HRESULT ApartmentType; // eax
  wil::details::in1diag3 *v3; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  std::exception_ptr *v8; // rax
  int v9[4]; // [rsp+20h] [rbp-60h] BYREF
  __int128 *v10; // [rsp+30h] [rbp-50h] BYREF
  __int128 v11; // [rsp+38h] [rbp-48h]
  __int128 v12; // [rsp+48h] [rbp-38h]
  APTTYPE pAptType; // [rsp+58h] [rbp-28h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+5Ch] [rbp-24h] BYREF
  __int128 v15; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  pAptType = APTTYPE_STA;
  pAptQualifier = APTTYPEQUALIFIER_NONE;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  v3 = retaddr;
  if ( ApartmentType < 0 )
    goto LABEL_9;
  if ( pAptType && pAptType != APTTYPE_MAINSTA )
  {
    v15 = 0LL;
    __ExceptionPtrCreate(&v15);
    v10 = &v15;
    v11 = *a1;
    v12 = a1[1];
    CurrentThreadId = GetCurrentThreadId();
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_d94d82cd4edd08e6199a1e53cb8b0ecd___(
           v6,
           v5,
           CurrentThreadId,
           (__int64)&v10);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9B,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v7,
        v9[0]);
    if ( !__ExceptionPtrToBool(&v15) )
    {
      __ExceptionPtrDestroy(&v15);
      return;
    }
    v8 = std::exception_ptr::exception_ptr((std::exception_ptr *)v9, (const struct std::exception_ptr *)&v15);
    std::rethrow_exception(v8);
LABEL_9:
    wil::details::in1diag3::Throw_Hr(
      v3,
      (void *)0x87,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)ApartmentType,
      v9[0]);
  }
  lambda_02d18896a6f04e84a63129cc1fd81310_::operator()(a1);
}
