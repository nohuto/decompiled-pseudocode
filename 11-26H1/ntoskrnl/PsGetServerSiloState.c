/*
 * XREFs of PsGetServerSiloState @ 0x140216EC0
 * Callers:
 *     SepQueueWorkItem @ 0x140216B84 (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x1407F4578 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1407F45D0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspCatchCriticalBreak @ 0x140800248 (PspCatchCriticalBreak.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloState(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 1504) + 1272LL);
  else
    return 1LL;
}
