/*
 * XREFs of PspGetServerSiloStatePointer @ 0x14052B9B8
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1407F45D0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsStartSiloMonitor @ 0x140801670 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1408018B0 (PsUnregisterSiloMonitor.c)
 *     PspNotifyServerSiloCreation @ 0x140801B0C (PspNotifyServerSiloCreation.c)
 *     PspBeginServerSiloShutdown @ 0x140B543B4 (PspBeginServerSiloShutdown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1504) + 1272LL;
}
