/*
 * XREFs of RtlpTpTimerQueueRundown @ 0x1800FBE04
 * Callers:
 *     RtlpTpTimerRundown @ 0x1800677EC (RtlpTpTimerRundown.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FBCA0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     ZwSetEvent @ 0x18015F100 (ZwSetEvent.c)
 *     ZwAlertThreadByThreadId @ 0x18015FD50 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall RtlpTpTimerQueueRundown(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    ZwAlertThreadByThreadId(v4, a2, a3);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( v5 )
      ZwSetEvent(v5, 0LL);
  }
  return RtlFreeHeap_0();
}
