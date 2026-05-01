/*
 * XREFs of _LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1_::_1_::catch$31 @ 0x1806D5154
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync__ResumeCoro_1_::_1_::catch_31(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 344),
    (void *)0x2D8,
    (int)"shellcommon\\internal\\shell\\inc\\LockScreenWidgetPackageHelper.h",
    a4);
  return 0LL;
}
