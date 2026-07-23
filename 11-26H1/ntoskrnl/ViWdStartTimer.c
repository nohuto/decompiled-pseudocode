/*
 * XREFs of ViWdStartTimer @ 0x140C40424
 * Callers:
 *     VfWdCheckForSettingsChange @ 0x140C3FF60 (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x140C402F0 (ViWdIrpTimerDpcRoutine.c)
 * Callees:
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 */

__int64 ViWdStartTimer()
{
  return KiSetTimerEx((__int64)&ViWdIrpTimer, -10000000LL, 0, 0, (__int64)&ViWdIrpTimerDpc);
}
