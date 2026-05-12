/*
 * XREFs of StorpIsTelemetryErrorEntryEmpty @ 0x14005C060
 * Callers:
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1400C2424 (StorpTelemetrySendUnitErrorDataSummary.c)
 * Callees:
 *     <none>
 */

bool __fastcall StorpIsTelemetryErrorEntryEmpty(_BYTE *a1)
{
  bool result; // al

  result = 0;
  if ( !*a1 && !a1[1] && !a1[2] && !a1[3] )
    return a1[4] == 0;
  return result;
}
