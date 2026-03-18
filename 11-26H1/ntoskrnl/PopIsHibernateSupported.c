/*
 * XREFs of PopIsHibernateSupported @ 0x140B2E808
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 *     PopCheckAndHandleThermalConditions @ 0x1404ED080 (PopCheckAndHandleThermalConditions.c)
 *     PopPowerAggregatorDetermineTargetSystemPowerState @ 0x140943D98 (PopPowerAggregatorDetermineTargetSystemPowerState.c)
 *     PopVerifySystemPowerPolicy @ 0x1409442F4 (PopVerifySystemPowerPolicy.c)
 *     PopVerifySystemPowerState @ 0x140B24424 (PopVerifySystemPowerState.c)
 *     PopIsDozeSupported @ 0x140B2E7C8 (PopIsDozeSupported.c)
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
