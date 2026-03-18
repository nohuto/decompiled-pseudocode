/*
 * XREFs of TtmpOpenTerminalHandle @ 0x140760870
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140438AF0 (PsGetProcessId.c)
 *     TtmiLogTerminalHandleOpened @ 0x14075F32C (TtmiLogTerminalHandleOpened.c)
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
