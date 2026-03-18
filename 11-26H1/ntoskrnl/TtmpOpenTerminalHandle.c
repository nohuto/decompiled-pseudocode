/*
 * XREFs of TtmpOpenTerminalHandle @ 0x1407EC790
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140466BE0 (PsGetProcessId.c)
 *     TtmiLogTerminalHandleOpened @ 0x1407EB284 (TtmiLogTerminalHandleOpened.c)
 */

__int64 __fastcall TtmpOpenTerminalHandle(__int64 a1, char a2, struct _KPROCESS *a3)
{
  if ( !a2 )
    a3 = PsInitialSystemProcess;
  if ( a3 )
    PsGetProcessId(a3);
  TtmiLogTerminalHandleOpened();
  return 0LL;
}
