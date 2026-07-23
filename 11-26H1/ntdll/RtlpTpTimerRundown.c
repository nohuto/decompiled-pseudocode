/*
 * XREFs of RtlpTpTimerRundown @ 0x180087C3C
 * Callers:
 *     RtlpTpTimerFinalizationCallback @ 0x180086190 (RtlpTpTimerFinalizationCallback.c)
 *     RtlDeleteTimer @ 0x180087CA0 (RtlDeleteTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FB3F0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     RtlpTpDeleteData @ 0x180087894 (RtlpTpDeleteData.c)
 *     RtlpTpTimerQueueRundown @ 0x1800FB554 (RtlpTpTimerQueueRundown.c)
 *     ZwSetEvent @ 0x18015F000 (ZwSetEvent.c)
 */

LOGICAL __fastcall RtlpTpTimerRundown(PVOID BaseAddress)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)BaseAddress + 9);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  RtlpTpDeleteData((void **)BaseAddress + 2);
  if ( _InterlockedExchangeAdd(*((volatile signed __int32 **)BaseAddress + 7), 0xFFFFFFFF) == 1 )
    RtlpTpTimerQueueRundown(*((PVOID *)BaseAddress + 7));
  return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
}
