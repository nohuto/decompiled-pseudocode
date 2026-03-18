/*
 * XREFs of PopDirectedDripsDiagGetOrCreateDeviceDiagnostic @ 0x140B0C608
 * Callers:
 *     PopDirectedDripsDiagTraceBroadcastVisit @ 0x140B0C18C (PopDirectedDripsDiagTraceBroadcastVisit.c)
 *     PopDirectedDripsDiagBroadcastTreeBegin @ 0x140B0C394 (PopDirectedDripsDiagBroadcastTreeBegin.c)
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x140B0C538 (PopDirectedDripsDiagTraceMarkDevice.c)
 * Callees:
 *     PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x14077F104 (PopDirectedDripsDiagCreateDeviceDiagnostic.c)
 */

_QWORD *__fastcall PopDirectedDripsDiagGetOrCreateDeviceDiagnostic(__int64 a1)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a1 + 776);
  if ( !result )
    return PopDirectedDripsDiagCreateDeviceDiagnostic(a1);
  return result;
}
