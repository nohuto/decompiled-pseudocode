/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x1403AB220
 * Callers:
 *     PopSetWatchdog @ 0x1403AAE58 (PopSetWatchdog.c)
 *     PopWatchdogDpc @ 0x14060D700 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x14060D7A0 (PopWatchdogWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
