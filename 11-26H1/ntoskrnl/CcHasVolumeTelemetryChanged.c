/*
 * XREFs of CcHasVolumeTelemetryChanged @ 0x140495A9C
 * Callers:
 *     CcPostVolumeTelemetry @ 0x140495AE0 (CcPostVolumeTelemetry.c)
 * Callees:
 *     <none>
 */

char __fastcall CcHasVolumeTelemetryChanged(_QWORD *a1)
{
  char result; // al

  result = 0;
  if ( a1[46] || a1[47] || a1[48] || a1[106] || a1[107] || a1[108] )
    return 1;
  return result;
}
