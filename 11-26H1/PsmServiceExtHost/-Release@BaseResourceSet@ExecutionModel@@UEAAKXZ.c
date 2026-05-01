/*
 * XREFs of ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x180059BE0
 * Callers:
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x180059BD0 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::Release(ExecutionModel::BaseResourceSet *this)
{
  int v1; // ebx
  _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 9);
  if ( v1 < 0 )
  {
    pExceptionRecord.ExceptionCode = -1073741675;
    pExceptionRecord.ExceptionFlags = 1;
    memset(&pExceptionRecord.ExceptionRecord, 0, 144);
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  else if ( !v1 && this )
  {
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return (unsigned int)v1;
}
