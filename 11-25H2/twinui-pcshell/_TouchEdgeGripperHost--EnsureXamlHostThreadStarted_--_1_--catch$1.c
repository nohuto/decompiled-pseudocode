/*
 * XREFs of _TouchEdgeGripperHost::EnsureXamlHostThreadStarted_::_1_::catch$1 @ 0x1806CF4E7
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18065EE5C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall TouchEdgeGripperHost::EnsureXamlHostThreadStarted_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x95,
    (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegripperhost.cpp",
    a4);
  *(_BYTE *)(*(_QWORD *)(a2 + 64) + 24LL) = 0;
  MicrosoftTelemetryAssertTriggeredNoArgs();
  return 0LL;
}
