/*
 * XREFs of _anonymous_namespace_::RunSynchronousInSTA__lambda_1aef1f30231a1d8f4110e6f712366876___ @ 0x180296B0C
 * Callers:
 *     ??$ApplyTaskbarLayout@W4TaskbarLayoutType@@P8CPinnedList@@EAAJW41@@Z@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJW4TaskbarLayoutType@@@Z1@Z @ 0x180295FC8 (--$ApplyTaskbarLayout@W4TaskbarLayoutType@@P8CPinnedList@@EAAJW41@@Z@PinManager@implementation@S.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x180295DBC (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1802CBEC8 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_55fb27597a19a53197572ef24b15bb6e___ @ 0x1805BC5D0 (Windows--Internal--ComTaskPool--QueueTask__lambda_55fb27597a19a53197572ef24b15bb6e___.c)
 *     ??R_lambda_1aef1f30231a1d8f4110e6f712366876_@@QEBA@XZ @ 0x1805BFBE0 (--R_lambda_1aef1f30231a1d8f4110e6f712366876_@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall anonymous_namespace_::RunSynchronousInSTA__lambda_1aef1f30231a1d8f4110e6f712366876___(__int128 *a1)
{
  HRESULT ApartmentType; // eax
  wil::details::in1diag3 *v3; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  const void *v8; // rax
  __int128 *v9; // [rsp+20h] [rbp-40h] BYREF
  __int128 v10; // [rsp+28h] [rbp-38h]
  __int64 v11; // [rsp+38h] [rbp-28h]
  APTTYPE pAptType; // [rsp+40h] [rbp-20h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+44h] [rbp-1Ch] BYREF
  __int128 v14; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  pAptType = APTTYPE_STA;
  pAptQualifier = APTTYPEQUALIFIER_NONE;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  v3 = retaddr;
  if ( ApartmentType < 0 )
    goto LABEL_9;
  if ( pAptType && pAptType != APTTYPE_MAINSTA )
  {
    v14 = 0LL;
    __ExceptionPtrCreate(&v14);
    v9 = &v14;
    v10 = *a1;
    v11 = *((_QWORD *)a1 + 2);
    CurrentThreadId = GetCurrentThreadId();
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_55fb27597a19a53197572ef24b15bb6e___(
           v6,
           v5,
           CurrentThreadId,
           &v9);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC1,
        (int)"pcshell\\twinui\\PinManager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v7,
        (int)v9);
    if ( !__ExceptionPtrToBool(&v14) )
    {
      __ExceptionPtrDestroy(&v14);
      return;
    }
    v8 = (const void *)std::exception_ptr::exception_ptr(
                         (std::exception_ptr *)&v9,
                         (const struct std::exception_ptr *)&v14);
    std::rethrow_exception(v8);
LABEL_9:
    wil::details::in1diag3::Throw_Hr(
      v3,
      (void *)0xAD,
      (int)"pcshell\\twinui\\PinManager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)ApartmentType,
      (int)v9);
  }
  _lambda_1aef1f30231a1d8f4110e6f712366876_::operator()(a1);
}
