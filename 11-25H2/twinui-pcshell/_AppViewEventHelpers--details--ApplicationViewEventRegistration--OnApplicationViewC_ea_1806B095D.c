/*
 * XREFs of _AppViewEventHelpers::details::ApplicationViewEventRegistration::OnApplicationViewChanged_::_1_::catch$8 @ 0x1806B095D
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022D70C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AppViewEventHelpers::details::ApplicationViewEventRegistration::OnApplicationViewChanged_::_1_::catch_8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 96) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 88),
                           (void *)0x5E,
                           (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewEventHelpers.h",
                           a4);
  return 0LL;
}
