/*
 * XREFs of ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1401F1248
 * Callers:
 *     NtUserPhysicalToLogicalPoint @ 0x1401F1000 (NtUserPhysicalToLogicalPoint.c)
 *     NtUserLogicalToPhysicalPoint @ 0x1401F1120 (NtUserLogicalToPhysicalPoint.c)
 *     EditionQueryInertiaWorker @ 0x14023C6E0 (EditionQueryInertiaWorker.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x140266CC0 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1402B8E30 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
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
