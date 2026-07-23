/*
 * XREFs of CcHasVolumeCumulativeTelemetryChanged @ 0x140200444
 * Callers:
 *     CcPostVolumeTelemetry @ 0x140495AE0 (CcPostVolumeTelemetry.c)
 * Callees:
 *     <none>
 */

char __fastcall CcHasVolumeCumulativeTelemetryChanged(_QWORD *a1)
{
  char result; // al

  result = 0;
  if ( a1[200] || a1[201] || a1[202] || a1[260] || a1[261] || a1[262] )
    return 1;
  return result;
}
