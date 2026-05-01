/*
 * XREFs of ?Log_GetLastErrorMsg@in1diag3@details@wil@@YAKPEAXIPEBD1ZZ @ 0x180633104
 * Callers:
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x180633140 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 * Callees:
 *     ??$ReportFailure_GetLastErrorMsg@$01@details@wil@@YAKPEAXIPEBD1101PEAD@Z @ 0x18033CEAC (--$ReportFailure_GetLastErrorMsg@$01@details@wil@@YAKPEAXIPEBD1101PEAD@Z.c)
 */

__int64 wil::details::in1diag3::Log_GetLastErrorMsg(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4,
        const char *a5,
        ...)
{
  int v6; // [rsp+20h] [rbp-38h]
  const char *retaddr; // [rsp+58h] [rbp+0h]

  return wil::details::ReportFailure_GetLastErrorMsg<2>(
           this,
           a2,
           a3,
           a4,
           v6,
           retaddr,
           (unsigned __int64)a4,
           (char *)&a5);
}
