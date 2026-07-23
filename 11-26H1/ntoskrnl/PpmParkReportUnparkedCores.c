/*
 * XREFs of PpmParkReportUnparkedCores @ 0x14025CB80
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckQueuePhaseActions @ 0x140253FF8 (PpmCheckQueuePhaseActions.c)
 *     RtlSubtractAffinityEx @ 0x14025CBE8 (RtlSubtractAffinityEx.c)
 */

void PpmParkReportUnparkedCores()
{
  if ( PpmIsParkingEnabled )
  {
    if ( (unsigned int)RtlSubtractAffinityEx(
                         &PpmPerfChangedCoreParkingMask,
                         &PpmPerfNewCoreParkingMask,
                         &PpmPerfNewUnparkedMask) )
      PpmCheckQueuePhaseActions((__int64)&PpmPerfNewUnparkedMask, 1);
  }
}
