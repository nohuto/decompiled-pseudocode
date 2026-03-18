/*
 * XREFs of MiVadSupportsPhysicalContiguityQuery @ 0x140877434
 * Callers:
 *     MiProcessVaContiguityInformation @ 0x14070B810 (MiProcessVaContiguityInformation.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B64218 (MiQueryMemoryPhysicalContiguity.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadSupportsPhysicalContiguityQuery(int a1)
{
  return (a1 & 0x80000) != 0 && (a1 & 0x1C) == 0;
}
