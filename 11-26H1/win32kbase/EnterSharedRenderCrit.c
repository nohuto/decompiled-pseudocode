/*
 * XREFs of EnterSharedRenderCrit @ 0x1401CE790
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct tagTHREADINFO *EnterSharedRenderCrit()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx

  PsEnterPriorityRegion();
  KeEnterCriticalRegion();
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v1, v0);
  UserSessionState = W32GetUserSessionState(v4, v3, v5);
  LOBYTE(v7) = 1;
  ExAcquireFastResourceShared(*(_QWORD *)(UserSessionState + 8), CurrentThreadWin32Thread + 104, v7);
  return PtiCurrent(v9, v8);
}
