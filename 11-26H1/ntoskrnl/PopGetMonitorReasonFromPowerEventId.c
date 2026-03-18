/*
 * XREFs of PopGetMonitorReasonFromPowerEventId @ 0x1404E6C14
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1407D64E0 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1407D683C (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140A37360 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140A388E0 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A38AE8 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetMonitorReasonFromPowerEventId(int a1)
{
  unsigned int v1; // edx
  unsigned int i; // eax

  v1 = 0;
  for ( i = 0; i < 0x3A; ++i )
  {
    if ( PopMonitorEventMapping[2 * i + 1] == a1 )
      return (unsigned int)PopMonitorEventMapping[2 * i];
  }
  return v1;
}
