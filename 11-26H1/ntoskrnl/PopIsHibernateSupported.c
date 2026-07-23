/*
 * XREFs of PopIsHibernateSupported @ 0x140B30758
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 *     PopCheckAndHandleThermalConditions @ 0x1404E6660 (PopCheckAndHandleThermalConditions.c)
 *     PopPowerAggregatorDetermineTargetSystemPowerState @ 0x1409BF708 (PopPowerAggregatorDetermineTargetSystemPowerState.c)
 *     PopVerifySystemPowerPolicy @ 0x1409BFC64 (PopVerifySystemPowerPolicy.c)
 *     PopVerifySystemPowerState @ 0x140B268C4 (PopVerifySystemPowerState.c)
 *     PopIsDozeSupported @ 0x140B30718 (PopIsDozeSupported.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIsHibernateSupported(_BYTE *a1)
{
  bool result; // al

  result = 0;
  if ( a1[6] )
  {
    if ( a1[8] )
      return a1[22] == 2;
  }
  return result;
}
