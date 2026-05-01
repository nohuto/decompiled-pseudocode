/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::GetInvokeTypeFromContextAndAnimationProperties_::_1_::catch$33 @ 0x1806D33A5
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::GetInvokeTypeFromContextAndAnimationProperties_::_1_::catch_33(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_BYTE *)(a2 + 68) = 0;
  **(_QWORD **)(a2 + 80) = *(_QWORD *)(a2 + 64);
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 856),
    (void *)0xB05,
    (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
    a4);
  return 0LL;
}
