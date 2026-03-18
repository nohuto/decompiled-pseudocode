/*
 * XREFs of EnterSharedRenderCrit @ 0x140167530
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct tagTHREADINFO *EnterSharedRenderCrit()
{
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // r8

  PsEnterPriorityRegion();
  KeEnterCriticalRegion();
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  UserSessionState = W32GetUserSessionState(v2, v1);
  LOBYTE(v4) = 1;
  ExAcquireFastResourceShared(*(_QWORD *)(UserSessionState + 8), CurrentThreadWin32Thread + 104, v4);
  return PtiCurrent();
}
