/*
 * XREFs of MiGetProcessorDomain @ 0x1405148A4
 * Callers:
 *     MiInitializeZeroingDomains @ 0x14087F248 (MiInitializeZeroingDomains.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessorDomain(int a1)
{
  return *(unsigned int *)(KiProcessorBlock[a1] + 47412);
}
