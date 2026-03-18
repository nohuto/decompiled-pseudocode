/*
 * XREFs of _anonymous_namespace_::PhysicalCursorPointAsLogicalPoint @ 0x1400CFE80
 * Callers:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1400D0C28 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     ?GetPendingMouseMovePoint@QHelper@@YA?AUtagLOGICALPOINT@@AEBVCInputDest@@@Z @ 0x140119300 (-GetPendingMouseMovePoint@QHelper@@YA-AUtagLOGICALPOINT@@AEBVCInputDest@@@Z.c)
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x140119374 (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     PostPendingMouseMove @ 0x140119440 (PostPendingMouseMove.c)
 *     ClearLogicalCursorPos @ 0x1401C4B10 (ClearLogicalCursorPos.c)
 *     UpdateSavedPoint @ 0x14021C560 (UpdateSavedPoint.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall anonymous_namespace_::PhysicalCursorPointAsLogicalPoint(_DWORD *a1, int a2, int a3)
{
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  __int64 UserSessionState; // rax

  v4 = *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 19904);
  *a1 = *(_DWORD *)(v4 + 4960);
  UserSessionState = W32GetUserSessionState(v5, v4, v6);
  a1[2] = 18;
  a1[1] = *(_DWORD *)(*(_QWORD *)(UserSessionState + 19904) + 4964LL);
  return a1;
}
