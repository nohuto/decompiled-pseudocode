/*
 * XREFs of HalpPciMarkHiberPhase @ 0x1404AFD2C
 * Callers:
 *     HaliLocateHiberRanges @ 0x140C08410 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404AFD60 (PoSetHiberRange.c)
 */

void __fastcall HalpPciMarkHiberPhase(void *a1)
{
  PoSetHiberRange(a1, 2u, &HalpPCIConfigLock, 8uLL, 0x506C6148u);
}
