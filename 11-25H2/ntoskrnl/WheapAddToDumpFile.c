/*
 * XREFs of WheapAddToDumpFile @ 0x14064FD2C
 * Callers:
 *     WheaReportHwError @ 0x140353D30 (WheaReportHwError.c)
 *     WheaRecoveryBugCheck @ 0x14064FC40 (WheaRecoveryBugCheck.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 */

char __fastcall WheapAddToDumpFile(__int64 a1, int a2)
{
  char result; // al

  if ( a1 )
  {
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) != 0 )
      return IoAddTriageDumpDataBlock(a1 & 0xFFFFF000, (PVOID)(((a1 & 0xFFF) + 4095 + a2) & 0xFFFFF000));
  }
  return result;
}
