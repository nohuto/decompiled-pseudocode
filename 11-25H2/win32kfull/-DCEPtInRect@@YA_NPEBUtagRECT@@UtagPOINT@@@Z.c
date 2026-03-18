/*
 * XREFs of ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1401C36A4
 * Callers:
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1401C2FD0 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1401C31A0 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1401C33B0 (NtUserPhysicalToLogicalPoint.c)
 *     NtUserLogicalToPhysicalPoint @ 0x1401C3520 (NtUserLogicalToPhysicalPoint.c)
 *     EditionQueryInertiaWorker @ 0x1402B0180 (EditionQueryInertiaWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall DCEPtInRect(const struct tagRECT *a1, struct tagPOINT a2)
{
  bool result; // al

  result = 0;
  if ( a1 && a2.x >= a1->left && a2.x <= a1->right && a2.y >= a1->top )
    return a2.y <= a1->bottom;
  return result;
}
