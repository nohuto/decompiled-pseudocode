/*
 * XREFs of MiGetProcessorDomain @ 0x14050E314
 * Callers:
 *     MiInitializeZeroingDomains @ 0x140885648 (MiInitializeZeroingDomains.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessorDomain(int a1)
{
  return *(unsigned int *)(KiProcessorBlock[a1] + 47412);
}
