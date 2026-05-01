/*
 * XREFs of _AppViewEventHelpers::EventListener_IImmersiveShellHookService_IImmersiveShellHookNotification_AppViewEventHelpers::details::ShellHookRegistration_::Register_::_1_::catch$4 @ 0x1806B05F4
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022D70C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AppViewEventHelpers::EventListener_IImmersiveShellHookService_IImmersiveShellHookNotification_AppViewEventHelpers::details::ShellHookRegistration_::Register_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0xE1,
                           (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewEventHelpers.h",
                           a4);
  return 0LL;
}
