/*
 * XREFs of MiVadPhysicalMemoryPfnsReferenced @ 0x1404C946C
 * Callers:
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadPhysicalMemoryPfnsReferenced(unsigned int a1)
{
  return (a1 >> 25) & 1;
}
