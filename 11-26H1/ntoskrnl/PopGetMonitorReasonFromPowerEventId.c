/*
 * XREFs of PopGetMonitorReasonFromPowerEventId @ 0x1404E00B4
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1407D9690 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1407D99CC (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x1409F2F20 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x1409F44A0 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x1409F46A8 (PopPowerAggregatorEnterScreenOff.c)
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
