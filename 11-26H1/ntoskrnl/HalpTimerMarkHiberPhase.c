/*
 * XREFs of HalpTimerMarkHiberPhase @ 0x140577AE4
 * Callers:
 *     HaliLocateHiberRanges @ 0x140C08410 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404AFD60 (PoSetHiberRange.c)
 */

void __fastcall HalpTimerMarkHiberPhase(__int64 a1)
{
  if ( !a1 )
  {
    if ( HalpTimerReferencePage )
      PoSetHiberRange(0LL, 0x10000u, HalpTimerReferencePage, 0x1000uLL, 0x546C6148u);
  }
}
