/*
 * XREFs of RtlpTpTimerQueueRundown @ 0x1800FB554
 * Callers:
 *     RtlpTpTimerRundown @ 0x180087C3C (RtlpTpTimerRundown.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FB3F0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     ZwSetEvent @ 0x18015F000 (ZwSetEvent.c)
 *     ZwAlertThreadByThreadId @ 0x18015FC50 (ZwAlertThreadByThreadId.c)
 */

LOGICAL __fastcall RtlpTpTimerQueueRundown(_QWORD *BaseAddress)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)BaseAddress[5];
  if ( v2 )
  {
    ZwAlertThreadByThreadId(v2);
  }
  else
  {
    v3 = (void *)BaseAddress[2];
    if ( v3 )
      ZwSetEvent(v3, 0LL);
  }
  return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
}
