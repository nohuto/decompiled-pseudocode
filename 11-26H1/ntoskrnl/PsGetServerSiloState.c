/*
 * XREFs of PsGetServerSiloState @ 0x140216B90
 * Callers:
 *     SepQueueWorkItem @ 0x140216854 (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x1407EEA18 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1407EEA70 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspCatchCriticalBreak @ 0x1407FA818 (PspCatchCriticalBreak.c)
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
