/*
 * XREFs of ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14025E14C
 * Callers:
 *     NtUserSetActiveProcessForMonitor @ 0x1401A10E0 (NtUserSetActiveProcessForMonitor.c)
 *     NtUserDwmValidateWindow @ 0x1401A1B80 (NtUserDwmValidateWindow.c)
 *     GetConsoleDesktop @ 0x1401C6DA0 (GetConsoleDesktop.c)
 *     xxxWaitForInputIdle @ 0x14022D64C (xxxWaitForInputIdle.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x140249EE0 (NtUserCheckProcessForClipboardAccess.c)
 *     xxxConsoleControl @ 0x140278BE4 (xxxConsoleControl.c)
 *     ?xxxUserNotifyProcessCreateEx@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x1402A68E4 (-xxxUserNotifyProcessCreateEx@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1402B3470 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CLockProcessByPid::GetProcessInfo(CLockProcessByPid *this)
{
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  v1 = *((_QWORD *)this + 3);
  if ( !v1 )
    return 0LL;
  result = PsGetProcessWin32Process(v1);
  if ( result )
    result &= -(__int64)(*(_QWORD *)result != 0LL);
  return result;
}
