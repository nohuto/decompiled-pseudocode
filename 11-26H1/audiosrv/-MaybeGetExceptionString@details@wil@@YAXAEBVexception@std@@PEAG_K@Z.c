/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z @ 0x1800B78DC
 * Callers:
 *     _wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch$0 @ 0x180167306 (_wil--details--RecognizeCaughtExceptionFromCallback_--_1_--catch$0.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$1 @ 0x1801673D2 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$4 @ 0x1801674E6 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$4.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$5 @ 0x18016753C (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$5.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$2 @ 0x180169388 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$2.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$3 @ 0x1801693C4 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$3.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$4 @ 0x180169400 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$4.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$8 @ 0x18016952F (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$8.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$9 @ 0x18016956B (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$9.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$10 @ 0x1801695A7 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$10.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$11 @ 0x1801695E3 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$11.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180048340 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::MaybeGetExceptionString(
        wil::details *this,
        const struct std::exception *a2,
        unsigned __int16 *a3)
{
  __int64 v5; // rax

  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(wil::details *))(*(_QWORD *)this + 8LL))(this);
    StringCchPrintfW((unsigned __int16 *)a2, (__int64)a3, L"std::exception: %hs", v5);
  }
}
