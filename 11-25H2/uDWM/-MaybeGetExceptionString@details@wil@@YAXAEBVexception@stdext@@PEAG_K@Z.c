/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@stdext@@PEAG_K@Z @ 0x18009E3C8
 * Callers:
 *     _wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch$0 @ 0x1800EC9E6 (_wil--details--RecognizeCaughtExceptionFromCallback_--_1_--catch$0.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$1 @ 0x1800ECAB2 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$4 @ 0x1800ECBC0 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$4.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$5 @ 0x1800ECC13 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$5.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$2 @ 0x1800ECD30 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$2.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$3 @ 0x1800ECD6C (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$3.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$4 @ 0x1800ECDA8 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$4.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$8 @ 0x1800ECED7 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$8.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$9 @ 0x1800ECF13 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$9.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$10 @ 0x1800ECF4F (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$10.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$11 @ 0x1800ECF8B (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$11.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180082F30 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::MaybeGetExceptionString(
        wil::details *this,
        const struct stdext::exception *a2,
        unsigned __int16 *a3)
{
  __int64 v5; // rax

  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(wil::details *))(*(_QWORD *)this + 8LL))(this);
    StringCchPrintfW((unsigned __int16 *)a2, (size_t)a3, (size_t *)L"std::exception: %hs", v5);
  }
}
