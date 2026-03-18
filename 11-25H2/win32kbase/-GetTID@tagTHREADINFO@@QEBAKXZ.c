/*
 * XREFs of ?GetTID@tagTHREADINFO@@QEBAKXZ @ 0x1400F1F80
 * Callers:
 *     ?ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400C0B80 (-ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z.c)
 *     ?ComputeAndTestForegroundActivate@tagTHREADINFO@@QEAA_NXZ @ 0x140161BA0 (-ComputeAndTestForegroundActivate@tagTHREADINFO@@QEAA_NXZ.c)
 *     ?SetForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z @ 0x140162110 (-SetForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z.c)
 *     ?ClearForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z @ 0x1401A6230 (-ClearForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z.c)
 *     IsKeyboardDelegationTarget @ 0x1402167C0 (IsKeyboardDelegationTarget.c)
 * Callees:
 *     <none>
 */

HANDLE __fastcall tagTHREADINFO::GetTID(PETHREAD *this)
{
  return PsGetThreadId(*this);
}
