/*
 * XREFs of PsGetProcessImageFileName @ 0x140478D40
 * Callers:
 *     NtCreateIoRing @ 0x14079B5F0 (NtCreateIoRing.c)
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 *     ObCheckRefTraceProcess @ 0x140946938 (ObCheckRefTraceProcess.c)
 *     PopDiagTraceExecutePowerAction @ 0x1409F3E60 (PopDiagTraceExecutePowerAction.c)
 *     PiUEventHandleVetoEvent @ 0x140B269C4 (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x140B478A4 (PnpLogVetoInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 824;
}
