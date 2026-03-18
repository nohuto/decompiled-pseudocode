/*
 * XREFs of LeaveRenderCrit @ 0x140167840
 * Callers:
 *     SetSysColor @ 0x1400AADC8 (SetSysColor.c)
 * Callees:
 *     <none>
 */

__int64 LeaveRenderCrit()
{
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax

  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  UserSessionState = W32GetUserSessionState(v2, v1);
  ExReleaseFastResource(*(_QWORD *)(UserSessionState + 8), CurrentThreadWin32Thread + 104);
  KeLeaveCriticalRegion();
  return PsLeavePriorityRegion();
}
