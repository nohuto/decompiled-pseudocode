/*
 * XREFs of HalpAcpiMarkHiberPhase @ 0x140503FD4
 * Callers:
 *     HaliLocateHiberRanges @ 0x140C08410 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404AFD60 (PoSetHiberRange.c)
 */

void __fastcall HalpAcpiMarkHiberPhase(void *a1)
{
  if ( HalpAcpiPrmFwHandlerCount )
    PoSetHiberRange(
      a1,
      0x10000u,
      HalpAcpiPrmFwHandlerBlock,
      24LL * (unsigned int)HalpAcpiPrmFwHandlerCount,
      0x416C6148u);
}
