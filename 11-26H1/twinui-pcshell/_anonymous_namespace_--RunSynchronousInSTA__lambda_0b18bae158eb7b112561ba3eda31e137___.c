/*
 * XREFs of _anonymous_namespace_::RunSynchronousInSTA__lambda_0b18bae158eb7b112561ba3eda31e137___ @ 0x1805E04A8
 * Callers:
 *     _anonymous_namespace_::ManageTaskbarPin @ 0x1805E7314 (_anonymous_namespace_--ManageTaskbarPin.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18028D81C (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1802C34B0 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_bc3ba0411b3bb280fb5103fcb7e05781___ @ 0x1805DFE7C (Windows--Internal--ComTaskPool--QueueTask__lambda_bc3ba0411b3bb280fb5103fcb7e05781___.c)
 *     _lambda_0b18bae158eb7b112561ba3eda31e137_::operator() @ 0x1805E3E48 (_lambda_0b18bae158eb7b112561ba3eda31e137_--operator().c)
 */

void __fastcall anonymous_namespace_::RunSynchronousInSTA__lambda_0b18bae158eb7b112561ba3eda31e137___(__int128 *a1)
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
  __int64 v13; // [rsp+58h] [rbp-28h]
  APTTYPE pAptType; // [rsp+60h] [rbp-20h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+64h] [rbp-1Ch] BYREF
  __int128 v16; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  pAptType = APTTYPE_STA;
  pAptQualifier = APTTYPEQUALIFIER_NONE;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  v3 = retaddr;
  if ( ApartmentType < 0 )
    goto LABEL_9;
  if ( pAptType && pAptType != APTTYPE_MAINSTA )
  {
    v16 = 0LL;
    __ExceptionPtrCreate(&v16);
    v10 = &v16;
    v11 = *a1;
    v12 = a1[1];
    v13 = *((_QWORD *)a1 + 4);
    CurrentThreadId = GetCurrentThreadId();
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_bc3ba0411b3bb280fb5103fcb7e05781___(
           v6,
           v5,
           CurrentThreadId,
           &v10);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9B,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v7,
        v9[0]);
    if ( !__ExceptionPtrToBool(&v16) )
    {
      __ExceptionPtrDestroy(&v16);
      return;
    }
    v8 = std::exception_ptr::exception_ptr((std::exception_ptr *)v9, (const struct std::exception_ptr *)&v16);
    std::rethrow_exception(v8);
LABEL_9:
    wil::details::in1diag3::Throw_Hr(
      v3,
      (void *)0x87,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)ApartmentType,
      v9[0]);
  }
  lambda_0b18bae158eb7b112561ba3eda31e137_::operator()(a1);
}
