/*
 * XREFs of _anonymous_namespace_::PhysicalCursorPointAsLogicalPoint @ 0x1400BA520
 * Callers:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x140039948 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     ?GetPendingMouseMovePoint@QHelper@@YA?AUtagLOGICALPOINT@@AEBVCInputDest@@@Z @ 0x1400B88B4 (-GetPendingMouseMovePoint@QHelper@@YA-AUtagLOGICALPOINT@@AEBVCInputDest@@@Z.c)
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1400EBE5C (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     ClearLogicalCursorPos @ 0x140215FA0 (ClearLogicalCursorPos.c)
 *     UpdateSavedPoint @ 0x140217040 (UpdateSavedPoint.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall anonymous_namespace_::PhysicalCursorPointAsLogicalPoint(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872);
  *a1 = *(_DWORD *)(v3 + 4960);
  UserSessionState = W32GetUserSessionState(v4, v3);
  a1[2] = 18;
  a1[1] = *(_DWORD *)(*(_QWORD *)(UserSessionState + 19872) + 4964LL);
  return a1;
}
