/*
 * XREFs of ?GetTID@tagTHREADINFO@@QEBAKXZ @ 0x140137220
 * Callers:
 *     ?ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400F77B0 (-ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z.c)
 *     ?ComputeAndTestForegroundActivate@tagTHREADINFO@@QEAA_NXZ @ 0x1401923B0 (-ComputeAndTestForegroundActivate@tagTHREADINFO@@QEAA_NXZ.c)
 *     ?ClearForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z @ 0x1401C9990 (-ClearForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z.c)
 *     ?SetForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z @ 0x1401C9E20 (-SetForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z.c)
 *     GetKeyboardInputThreadId @ 0x14021B640 (GetKeyboardInputThreadId.c)
 *     IsKeyboardDelegationTarget @ 0x14021BCF0 (IsKeyboardDelegationTarget.c)
 * Callees:
 *     <none>
 */

HANDLE __fastcall tagTHREADINFO::GetTID(PETHREAD *this)
{
  return PsGetThreadId(*this);
}
