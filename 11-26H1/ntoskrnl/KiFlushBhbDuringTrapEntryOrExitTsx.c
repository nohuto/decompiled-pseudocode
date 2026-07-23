/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExitTsx @ 0x140741D40
 * Callers:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 * Callees:
 *     <none>
 */

void KiFlushBhbDuringTrapEntryOrExitTsx()
{
  __asm
  {
    xbegin  locret_140741D4D
    xabort  0
  }
  _mm_lfence();
  __debugbreak();
}
