/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z @ 0x1802DD75C
 * Callers:
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$1 @ 0x1806A8BAD (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$4 @ 0x1806A8CBB (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$4.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$5 @ 0x1806A8D0E (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$5.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$2 @ 0x1806B658D (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$2.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$3 @ 0x1806B65C9 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$3.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$4 @ 0x1806B6605 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$4.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$8 @ 0x1806B6734 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$8.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$9 @ 0x1806B6770 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$9.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$10 @ 0x1806B67AC (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$10.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$11 @ 0x1806B67E8 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$11.c)
 *     _wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch$0 @ 0x1806B98AA (_wil--details--RecognizeCaughtExceptionFromCallback_--_1_--catch$0.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18001FEDC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
