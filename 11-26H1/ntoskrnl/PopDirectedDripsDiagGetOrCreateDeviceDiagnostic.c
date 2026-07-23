/*
 * XREFs of PopDirectedDripsDiagGetOrCreateDeviceDiagnostic @ 0x140B0DFFC
 * Callers:
 *     PopDirectedDripsDiagTraceBroadcastVisit @ 0x140B0DB80 (PopDirectedDripsDiagTraceBroadcastVisit.c)
 *     PopDirectedDripsDiagBroadcastTreeBegin @ 0x140B0DD88 (PopDirectedDripsDiagBroadcastTreeBegin.c)
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x140B0DF2C (PopDirectedDripsDiagTraceMarkDevice.c)
 * Callees:
 *     PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x140781C04 (PopDirectedDripsDiagCreateDeviceDiagnostic.c)
 */

_QWORD *__fastcall PopDirectedDripsDiagGetOrCreateDeviceDiagnostic(__int64 a1)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a1 + 776);
  if ( !result )
    return PopDirectedDripsDiagCreateDeviceDiagnostic(a1);
  return result;
}
