/*
 * XREFs of IsCurrentSessionServiceSession @ 0x140083918
 * Callers:
 *     IsIMMEnabledSystem @ 0x140082BC0 (IsIMMEnabledSystem.c)
 *     ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x140083B88 (-xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EA660 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?CheckInitialSessions@@YAJXZ @ 0x140153818 (-CheckInitialSessions@@YAJXZ.c)
 *     _RegisterLogonProcess @ 0x14016BF30 (_RegisterLogonProcess.c)
 *     UpdateDelegationTargetForMouseInput @ 0x140216FA0 (UpdateDelegationTargetForMouseInput.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     IsServiceSession @ 0x140083934 (IsServiceSession.c)
 */

__int64 IsCurrentSessionServiceSession()
{
  unsigned int CurrentWin32kSessionId; // eax

  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  return IsServiceSession(CurrentWin32kSessionId);
}
