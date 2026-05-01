/*
 * XREFs of _anonymous_namespace_::RunSynchronousInSTA__lambda_cee785af8d302cd9df31740eee0ba185___ @ 0x1805BCBC8
 * Callers:
 *     ??$ApplyTaskbarLayout@$$VP8CPinnedList@@EAAJXZ@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJXZ@Z @ 0x1805BA984 (--$ApplyTaskbarLayout@$$VP8CPinnedList@@EAAJXZ@PinManager@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x180295DBC (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1802CBEC8 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9817d0d27ecc98a2fb26c2c5eeb40406___ @ 0x1805BC6E0 (Windows--Internal--ComTaskPool--QueueTask__lambda_9817d0d27ecc98a2fb26c2c5eeb40406___.c)
 *     ??R_lambda_cee785af8d302cd9df31740eee0ba185_@@QEBA@XZ @ 0x1805C0164 (--R_lambda_cee785af8d302cd9df31740eee0ba185_@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall anonymous_namespace_::RunSynchronousInSTA__lambda_cee785af8d302cd9df31740eee0ba185___(__int128 *a1)
{
  HRESULT ApartmentType; // eax
  wil::details::in1diag3 *v3; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  std::exception_ptr *v8; // rax
  __int128 *v9; // [rsp+20h] [rbp-40h] BYREF
  __int128 v10; // [rsp+28h] [rbp-38h]
  APTTYPE pAptType; // [rsp+38h] [rbp-28h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+3Ch] [rbp-24h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  pAptType = APTTYPE_STA;
  pAptQualifier = APTTYPEQUALIFIER_NONE;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  v3 = retaddr;
  if ( ApartmentType < 0 )
    goto LABEL_9;
  if ( pAptType && pAptType != APTTYPE_MAINSTA )
  {
    v13 = 0LL;
    __ExceptionPtrCreate(&v13);
    v9 = &v13;
    v10 = *a1;
    CurrentThreadId = GetCurrentThreadId();
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_9817d0d27ecc98a2fb26c2c5eeb40406___(
           v6,
           v5,
           CurrentThreadId,
           (__int64)&v9);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC1,
        (int)"pcshell\\twinui\\PinManager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v7,
        (int)v9);
    if ( !__ExceptionPtrToBool(&v13) )
    {
      __ExceptionPtrDestroy(&v13);
      return;
    }
    v8 = std::exception_ptr::exception_ptr((std::exception_ptr *)&v9, (const struct std::exception_ptr *)&v13);
    std::rethrow_exception(v8);
LABEL_9:
    wil::details::in1diag3::Throw_Hr(
      v3,
      (void *)0xAD,
      (int)"pcshell\\twinui\\PinManager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)ApartmentType,
      (int)v9);
  }
  _lambda_cee785af8d302cd9df31740eee0ba185_::operator()(a1);
}
