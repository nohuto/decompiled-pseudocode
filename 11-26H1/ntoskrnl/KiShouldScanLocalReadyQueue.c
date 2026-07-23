/*
 * XREFs of KiShouldScanLocalReadyQueue @ 0x1403C98A8
 * Callers:
 *     KiUpdateRunTime @ 0x140220DB0 (KiUpdateRunTime.c)
 *     KiNormalPriorityReadyScan @ 0x1403C90A4 (KiNormalPriorityReadyScan.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiShouldScanLocalReadyQueue(__int64 a1)
{
  return !KiForceParkingConfiguration || (*(_BYTE *)(a1 + 35) & 0x20) == 0;
}
