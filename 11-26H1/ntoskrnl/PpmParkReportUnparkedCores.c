/*
 * XREFs of PpmParkReportUnparkedCores @ 0x14025B3A0
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckQueuePhaseActions @ 0x140252698 (PpmCheckQueuePhaseActions.c)
 *     RtlSubtractAffinityEx @ 0x14025B408 (RtlSubtractAffinityEx.c)
 */

void PpmParkReportUnparkedCores()
{
  if ( PopModernStandbyStateNotify.ReadyTime )
  {
    if ( (unsigned int)RtlSubtractAffinityEx(
                         &PpmPerfChangedCoreParkingMask,
                         &PpmPerfNewCoreParkingMask,
                         &PpmPerfNewUnparkedMask) )
      PpmCheckQueuePhaseActions((__int64)&PpmPerfNewUnparkedMask, 1);
  }
}
