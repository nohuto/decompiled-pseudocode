/*
 * XREFs of ?vDisableSynchronizeNKAPC@@YAXPEAX00@Z @ 0x140325F90
 * Callers:
 *     <none>
 * Callees:
 *     ?vDisableTimers@@YAXK@Z @ 0x1402365DC (-vDisableTimers@@YAXK@Z.c)
 */

void __fastcall vDisableSynchronizeNKAPC(void *a1, void *a2, void *a3)
{
  int v3; // ebx
  __int64 v4; // rdx

  v3 = (int)a2;
  UserEnterUserCritSec(a1, a2, a3);
  vDisableTimers(v3, v4);
  UserLeaveUserCritSec();
}
