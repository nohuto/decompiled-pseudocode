/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z @ 0x1802DD730
 * Callers:
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$0 @ 0x1806A8B4A (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$0.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$3 @ 0x1806A8C58 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$3.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$0 @ 0x1806B64E7 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$0.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$6 @ 0x1806B668E (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$6.c)
 * Callees:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x18018E1A0 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 */

void __fastcall wil::details::MaybeGetExceptionString(
        wil::details *this,
        const struct wil::ResultException *a2,
        unsigned __int16 *a3)
{
  if ( a2 )
    wil::GetFailureLogString(a2, a3, (__int64)this + 24, (const struct wil::FailureInfo *)a3);
}
