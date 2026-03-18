/*
 * XREFs of MiVadPhysicalMemoryPfnsReferenced @ 0x1404CFA3C
 * Callers:
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadPhysicalMemoryPfnsReferenced(unsigned int a1)
{
  return (a1 >> 25) & 1;
}
