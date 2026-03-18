/*
 * XREFs of WheapAddToDumpFile @ 0x1406D4C40
 * Callers:
 *     WheaReportHwError @ 0x1403DDD80 (WheaReportHwError.c)
 *     WheaRecoveryBugCheck @ 0x1406D4B50 (WheaRecoveryBugCheck.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14044AB54 (IoAddTriageDumpDataBlock.c)
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
