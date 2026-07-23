/*
 * XREFs of TppTimerpFree @ 0x1800D73E0
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x1800D7474 (TppDestroyTimer.c)
 */

LOGICAL __fastcall TppTimerpFree(PVOID BaseAddress)
{
  TppDestroyTimer();
  return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x100000, BaseAddress);
}
