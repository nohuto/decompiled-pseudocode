/*
 * XREFs of RtlpTpTimerRundown @ 0x1800677EC
 * Callers:
 *     RtlpTpTimerFinalizationCallback @ 0x180065D40 (RtlpTpTimerFinalizationCallback.c)
 *     RtlDeleteTimer @ 0x180067850 (RtlDeleteTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FBCA0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     RtlpTpDeleteData @ 0x180067444 (RtlpTpDeleteData.c)
 *     RtlpTpTimerQueueRundown @ 0x1800FBE04 (RtlpTpTimerQueueRundown.c)
 *     ZwSetEvent @ 0x18015F100 (ZwSetEvent.c)
 */

__int64 __fastcall RtlpTpTimerRundown(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  RtlpTpDeleteData((void **)(a1 + 16));
  if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 56), 0xFFFFFFFF) == 1 )
    RtlpTpTimerQueueRundown(*(_QWORD *)(a1 + 56));
  return RtlFreeHeap_0();
}
