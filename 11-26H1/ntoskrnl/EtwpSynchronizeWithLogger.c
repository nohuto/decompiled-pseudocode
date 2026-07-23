/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x140AB31F8
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1405311FC (EtwpTransitionToRealtime.c)
 *     EtwpIncrementTraceFile @ 0x14077E0A0 (EtwpIncrementTraceFile.c)
 *     EtwpUpdateTrace @ 0x140AB081C (EtwpUpdateTrace.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140AB2BB4 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpFlushTrace @ 0x140AB2FD0 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x140AB34A8 (EtwpRealtimeConnect.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x1403087F0 (KeInsertQueueDpc.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 */

__int64 __fastcall EtwpSynchronizeWithLogger(__int64 a1, unsigned int a2)
{
  struct _KEVENT *v2; // rsi
  unsigned int v5; // ebx
  __int64 result; // rax

  v2 = (struct _KEVENT *)(a1 + 456);
  KeResetEvent((PRKEVENT)(a1 + 456));
  _InterlockedOr((volatile signed __int32 *)(a1 + 824), a2);
  if ( KeGetEffectiveIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 8u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 568), 0LL, 0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)(a1 + 480), 0, 0);
  }
  KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  v5 = *(_DWORD *)(a1 + 40);
  KeResetEvent(v2);
  result = v5;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}
