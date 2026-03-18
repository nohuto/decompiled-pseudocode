/*
 * XREFs of KiShouldScanLocalReadyQueue @ 0x1403BF9A8
 * Callers:
 *     KiUpdateRunTime @ 0x14021F420 (KiUpdateRunTime.c)
 *     KiNormalPriorityReadyScan @ 0x1403BF1A4 (KiNormalPriorityReadyScan.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiShouldScanLocalReadyQueue(__int64 a1)
{
  return !KiForceParkingConfiguration || (*(_BYTE *)(a1 + 35) & 0x20) == 0;
}
