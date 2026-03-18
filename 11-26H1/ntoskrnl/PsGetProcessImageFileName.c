/*
 * XREFs of PsGetProcessImageFileName @ 0x14047F3D0
 * Callers:
 *     NtCreateIoRing @ 0x140798AC0 (NtCreateIoRing.c)
 *     CmLoadAppKey @ 0x1408B2250 (CmLoadAppKey.c)
 *     ObCheckRefTraceProcess @ 0x140984928 (ObCheckRefTraceProcess.c)
 *     PopDiagTraceExecutePowerAction @ 0x140A382A0 (PopDiagTraceExecutePowerAction.c)
 *     PiUEventHandleVetoEvent @ 0x140B24524 (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x140B45874 (PnpLogVetoInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 824;
}
