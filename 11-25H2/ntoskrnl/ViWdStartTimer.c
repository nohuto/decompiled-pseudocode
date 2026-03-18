/*
 * XREFs of ViWdStartTimer @ 0x140B8CD6C
 * Callers:
 *     VfWdCheckForSettingsChange @ 0x140B8C8B8 (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x140B8CC40 (ViWdIrpTimerDpcRoutine.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 */

__int64 ViWdStartTimer()
{
  return KiSetTimerEx((__int64)&ViWdIrpTimer, -10000000LL, 0, 0, (__int64)&ViWdIrpTimerDpc);
}
