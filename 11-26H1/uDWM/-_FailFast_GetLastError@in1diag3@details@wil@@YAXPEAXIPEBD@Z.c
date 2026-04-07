/*
 * XREFs of ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009311C
 * Callers:
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180053F94 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800778A0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x18007C320 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180086EF8 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?DispatchUdwmDiagnosticsControlMessage@@YAXPEBUUdwmDiagnosticsControlMessage@@@Z @ 0x1800B4C80 (-DispatchUdwmDiagnosticsControlMessage@@YAXPEBUUdwmDiagnosticsControlMessage@@@Z.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x180090424 (--$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_FailFast_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::ReportFailure_GetLastError<3>(this, a2, a3, a4, v4, retaddr);
}
