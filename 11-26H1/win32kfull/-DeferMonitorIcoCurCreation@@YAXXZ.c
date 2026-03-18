/*
 * XREFs of ?DeferMonitorIcoCurCreation@@YAXXZ @ 0x1401BFD60
 * Callers:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1401BFAEC (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DeferMonitorIcoCurCreation(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 UserSessionState; // rax

  v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 36344);
  _InterlockedOr((volatile signed __int32 *)(v2 + 100), 4u);
  UserSessionState = W32GetUserSessionState(v2, v3);
  KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(UserSessionState + 36344) + 72LL), 1, 0);
}
