/*
 * XREFs of IsCurrentSessionServiceSession @ 0x140165ED8
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1401132A0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?CheckInitialSessions@@YAJXZ @ 0x140165D48 (-CheckInitialSessions@@YAJXZ.c)
 *     IsIMMEnabledSystem @ 0x140165EB0 (IsIMMEnabledSystem.c)
 *     ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1401A6560 (-xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ?GetPsProcessWindowState@tagPROCESSINFO@@QEBA?AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolicy@1@@Z @ 0x1401CC3C4 (-GetPsProcessWindowState@tagPROCESSINFO@@QEBA-AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolic.c)
 *     _RegisterLogonProcess @ 0x1401D98D0 (_RegisterLogonProcess.c)
 *     UpdateDelegationTargetForMouseInput @ 0x14021C4C0 (UpdateDelegationTargetForMouseInput.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     IsServiceSession @ 0x140165EF4 (IsServiceSession.c)
 */

__int64 __fastcall IsCurrentSessionServiceSession(__int64 a1)
{
  unsigned int CurrentWin32kSessionId; // eax

  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(a1);
  return IsServiceSession(CurrentWin32kSessionId);
}
