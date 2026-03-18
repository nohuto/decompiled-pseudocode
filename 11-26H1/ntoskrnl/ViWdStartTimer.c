/*
 * XREFs of ViWdStartTimer @ 0x140C3A414
 * Callers:
 *     VfWdCheckForSettingsChange @ 0x140C39F50 (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x140C3A2E0 (ViWdIrpTimerDpcRoutine.c)
 * Callees:
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 */

__int64 ViWdStartTimer()
{
  return KiSetTimerEx((__int64)&ViWdIrpTimer, -10000000LL, 0, 0, (__int64)&ViWdIrpTimerDpc);
}
