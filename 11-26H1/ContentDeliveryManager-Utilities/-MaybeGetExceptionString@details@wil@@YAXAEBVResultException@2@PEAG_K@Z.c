/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z @ 0x18003522C
 * Callers:
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$0 @ 0x1800BA3A6 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$0.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$3 @ 0x1800BA4BA (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$3.c)
 * Callees:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x1800314B8 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 */

void __fastcall wil::details::MaybeGetExceptionString(
        wil::details *this,
        const struct wil::ResultException *a2,
        unsigned __int16 *a3)
{
  if ( a2 )
    wil::GetFailureLogString(a2, a3, (__int64)this + 24, (const struct wil::FailureInfo *)a3);
}
