/*
 * XREFs of MiVadSupportsPhysicalContiguityQuery @ 0x14087D814
 * Callers:
 *     MiProcessVaContiguityInformation @ 0x1407104C0 (MiProcessVaContiguityInformation.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B672B8 (MiQueryMemoryPhysicalContiguity.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadSupportsPhysicalContiguityQuery(int a1)
{
  return (a1 & 0x80000) != 0 && (a1 & 0x1C) == 0;
}
