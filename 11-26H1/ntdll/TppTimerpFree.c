/*
 * XREFs of TppTimerpFree @ 0x1800DA420
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x1800DA4B4 (TppDestroyTimer.c)
 */

__int64 TppTimerpFree()
{
  TppDestroyTimer();
  return RtlFreeHeap_0();
}
