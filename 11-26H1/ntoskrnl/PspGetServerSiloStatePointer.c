/*
 * XREFs of PspGetServerSiloStatePointer @ 0x140529524
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1407EEA70 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsStartSiloMonitor @ 0x1407FBC40 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1407FBE80 (PsUnregisterSiloMonitor.c)
 *     PspNotifyServerSiloCreation @ 0x1407FC0DC (PspNotifyServerSiloCreation.c)
 *     PspBeginServerSiloShutdown @ 0x140B51B14 (PspBeginServerSiloShutdown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1504) + 1272LL;
}
