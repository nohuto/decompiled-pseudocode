/*
 * XREFs of LeaveRenderCrit @ 0x140034320
 * Callers:
 *     SetSysColor @ 0x14003405C (SetSysColor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveRenderCrit(__int64 a1, __int64 a2)
{
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 UserSessionState; // rax

  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2);
  UserSessionState = W32GetUserSessionState(v4, v3, v5, v6);
  ExReleaseFastResource(*(_QWORD *)(UserSessionState + 8), CurrentThreadWin32Thread + 104);
  KeLeaveCriticalRegion();
  return PsLeavePriorityRegion();
}
