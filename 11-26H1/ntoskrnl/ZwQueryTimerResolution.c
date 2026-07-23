/*
 * XREFs of ZwQueryTimerResolution @ 0x14072ADC0
 * Callers:
 *     DifZwQueryTimerResolutionWrapper @ 0x1406B8560 (DifZwQueryTimerResolutionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryTimerResolution(PULONG MaximumTime, PULONG MinimumTime, PULONG CurrentTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MaximumTime);
}
