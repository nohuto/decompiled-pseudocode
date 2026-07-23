/*
 * XREFs of HalpTimerMarkHiberPhase @ 0x14057A014
 * Callers:
 *     HaliLocateHiberRanges @ 0x140C0E620 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 */

void __fastcall HalpTimerMarkHiberPhase(__int64 a1)
{
  if ( !a1 )
  {
    if ( HalpTimerReferencePage )
      PoSetHiberRange(0LL, 0x10000u, HalpTimerReferencePage, 0x1000uLL, 0x546C6148u);
  }
}
