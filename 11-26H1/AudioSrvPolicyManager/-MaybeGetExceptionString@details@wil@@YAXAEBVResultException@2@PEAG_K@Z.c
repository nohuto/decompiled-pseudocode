/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z @ 0x180033854
 * Callers:
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$0 @ 0x18004DC01 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$0.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$3 @ 0x18004DD15 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$3.c)
 * Callees:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180032BD4 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 */

void __fastcall wil::details::MaybeGetExceptionString(
        wil::details *this,
        const struct wil::ResultException *a2,
        unsigned __int16 *a3)
{
  if ( a2 )
    wil::GetFailureLogString(a2, a3, (__int64)this + 24, (const struct wil::FailureInfo *)a3);
}
