/*
 * XREFs of ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14023A1A0
 * Callers:
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x14015C858 (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 *     GetConsoleDesktop @ 0x14019C77C (GetConsoleDesktop.c)
 *     xxxConsoleControl @ 0x1401B62A0 (xxxConsoleControl.c)
 *     xxxWaitForInputIdle @ 0x1401FAC5C (xxxWaitForInputIdle.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1402484F0 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserDwmValidateWindow @ 0x140248A50 (NtUserDwmValidateWindow.c)
 *     NtUserSetActiveProcessForMonitor @ 0x14024D090 (NtUserSetActiveProcessForMonitor.c)
 *     ?xxxUserNotifyProcessCreateEx@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x140289DC0 (-xxxUserNotifyProcessCreateEx@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x140297650 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
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
