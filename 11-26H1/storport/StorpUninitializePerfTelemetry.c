/*
 * XREFs of StorpUninitializePerfTelemetry @ 0x1400C44E0
 * Callers:
 *     StorpInitializePerfTelemetry @ 0x1400B7744 (StorpInitializePerfTelemetry.c)
 *     StorpUnRegisterTraceLogging @ 0x140190464 (StorpUnRegisterTraceLogging.c)
 * Callees:
 *     <none>
 */

void StorpUninitializePerfTelemetry()
{
  if ( P )
    ExFreePoolWithTag(P, 0x65546152u);
  if ( qword_140173030 )
    ExFreePoolWithTag(qword_140173030, 0x65546152u);
  if ( qword_140173038 )
    ExFreePoolWithTag(qword_140173038, 0x65546152u);
  if ( qword_140173040 )
    ExFreePoolWithTag(qword_140173040, 0x65546152u);
  if ( *((_QWORD *)&xmmword_140173050 + 1) )
    ExFreePoolWithTag(*((PVOID *)&xmmword_140173050 + 1), 0x65546152u);
  if ( xmmword_140173060 )
    ExFreePoolWithTag(xmmword_140173060, 0x65546152u);
  if ( *(&xmmword_140173060 + 1) )
    ExFreePoolWithTag(*(&xmmword_140173060 + 1), 0x65546152u);
  if ( xmmword_140173070 )
    ExFreePoolWithTag(xmmword_140173070, 0x65546152u);
  if ( *((_QWORD *)&xmmword_140173080 + 1) )
    ExFreePoolWithTag(*((PVOID *)&xmmword_140173080 + 1), 0x65546152u);
  if ( xmmword_140173090 )
    ExFreePoolWithTag(xmmword_140173090, 0x65546152u);
  if ( *(&xmmword_140173090 + 1) )
    ExFreePoolWithTag(*(&xmmword_140173090 + 1), 0x65546152u);
  if ( xmmword_1401730A0 )
    ExFreePoolWithTag(xmmword_1401730A0, 0x65546152u);
}
