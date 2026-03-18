/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExitTsx @ 0x14073D140
 * Callers:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 * Callees:
 *     <none>
 */

void KiFlushBhbDuringTrapEntryOrExitTsx()
{
  __asm
  {
    xbegin  locret_14073D14D
    xabort  0
  }
  _mm_lfence();
  __debugbreak();
}
