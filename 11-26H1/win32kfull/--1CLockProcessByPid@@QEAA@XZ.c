/*
 * XREFs of ??1CLockProcessByPid@@QEAA@XZ @ 0x1401A37F4
 * Callers:
 *     ?IsValid@CProcessAsPid@@QEBA_NXZ @ 0x1401A0C88 (-IsValid@CProcessAsPid@@QEBA_NXZ.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1401A10E0 (NtUserSetActiveProcessForMonitor.c)
 *     NtUserDwmValidateWindow @ 0x1401A1B80 (NtUserDwmValidateWindow.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x1401A5930 (-xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 *     GetConsoleDesktop @ 0x1401C6DA0 (GetConsoleDesktop.c)
 *     xxxWaitForInputIdle @ 0x14022D64C (xxxWaitForInputIdle.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x140249EE0 (NtUserCheckProcessForClipboardAccess.c)
 *     xxxConsoleControl @ 0x140278BE4 (xxxConsoleControl.c)
 *     ?xxxUserNotifyProcessCreateEx@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x1402A68E4 (-xxxUserNotifyProcessCreateEx@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 *     ?_CheckAllowForeground2@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x1402AB32C (-_CheckAllowForeground2@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 *     ?GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z @ 0x1402AD928 (-GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1402B3470 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_Cleanup@CLockProcessByPid@@AEAAXXZ @ 0x1401A4E94 (-_Cleanup@CLockProcessByPid@@AEAAXXZ.c)
 */

void __fastcall CLockProcessByPid::~CLockProcessByPid(CLockProcessByPid *this)
{
  if ( *((_QWORD *)this + 3) )
  {
    if ( (*((_DWORD *)this + 5) & 8) != 0 )
      *((_QWORD *)PtiCurrent((__int64)this) + 47) = *((_QWORD *)this + 6);
    CLockProcessByPid::_Cleanup(this);
  }
}
