/*
 * XREFs of ?SendShellNotificationsOnHardExit@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A803C
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140217238 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402A67FC (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?MarkActionForMoveSizeShellNotifications@@YAXPEAUMOVESIZEDATA@@PEAVCWindowAction@AdvancedWindowPos@@@Z @ 0x1402A79AC (-MarkActionForMoveSizeShellNotifications@@YAXPEAUMOVESIZEDATA@@PEAVCWindowAction@AdvancedWindowP.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall SendShellNotificationsOnHardExit(struct MOVESIZEDATA *a1)
{
  __int64 v2; // rdx
  _BYTE v3[168]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v4[40]; // [rsp+C8h] [rbp-40h] BYREF

  AdvancedWindowPos::CWindowAction::CWindowAction((__int64)v3, 0);
  MarkActionForMoveSizeShellNotifications(a1, (struct AdvancedWindowPos::CWindowAction *)v3);
  AdvancedWindowPos::xxxApplyWindowAction(*((_QWORD *)a1 + 2), v3, 10LL);
  CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr(
    (CThreadLockedCurrentMonitorTopologyPtr *)v4,
    v2);
}
