/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x1403B4F30
 * Callers:
 *     PopSetWatchdog @ 0x1403B4B68 (PopSetWatchdog.c)
 *     PopWatchdogDpc @ 0x140610800 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x1406108A0 (PopWatchdogWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
