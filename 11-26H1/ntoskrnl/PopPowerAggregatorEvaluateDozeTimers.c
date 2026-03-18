/*
 * XREFs of PopPowerAggregatorEvaluateDozeTimers @ 0x140B2BBD4
 * Callers:
 *     PopPowerAggregatorDozeTimerWorker @ 0x1407D66B0 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopPowerAggregatorNotifyAcDcStateChange @ 0x1407D6BE0 (PopPowerAggregatorNotifyAcDcStateChange.c)
 *     PopPowerAggregatorNotifyPdcPhaseState @ 0x1407D6C24 (PopPowerAggregatorNotifyPdcPhaseState.c)
 * Callees:
 *     PopQueryRestrictedStandbyTimeoutSeconds @ 0x1407C8F2C (PopQueryRestrictedStandbyTimeoutSeconds.c)
 *     PopPowerAggregatorDozeTimerArm @ 0x1407D65DC (PopPowerAggregatorDozeTimerArm.c)
 *     PopPowerAggregatorDozeTimerDisarm @ 0x140B2BCBC (PopPowerAggregatorDozeTimerDisarm.c)
 */

unsigned __int64 PopPowerAggregatorEvaluateDozeTimers()
{
  unsigned __int64 result; // rax
  unsigned __int64 v1; // rdx
  __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx

  PopPowerAggregatorDozeTimerDisarm(&PopPowerAggregatorLock.Header.WaitListHead.Blink, 0LL);
  result = PopPowerAggregatorDozeTimerDisarm(&PopPowerAggregatorLock.Header.WaitListHead.Blink, 1LL);
  if ( LOBYTE(PopPowerAggregatorLock.Timer.Period) )
  {
    LODWORD(v1) = 0;
    if ( PopPowerAggregatorRestrictedStandbyDozeTimeoutSeconds )
    {
      result = PopQueryRestrictedStandbyTimeoutSeconds();
      LODWORD(v1) = result;
      PopPowerAggregatorRestrictedStandbyDozeTimeoutSeconds = result;
    }
    v2 = MEMORY[0xFFFFF78000000014];
    if ( !*(_BYTE *)stru_140F0C428.WaitBlock[2].Object )
      goto LABEL_9;
    v3 = *((_QWORD *)stru_140F0C428.WaitBlock[2].Object + 4);
    if ( !v3 )
      return result;
    if ( v3 < MEMORY[0xFFFFF78000000014]
      || (v4 = v3 - MEMORY[0xFFFFF78000000014],
          result = 0xD6BF94D5E57A42BDuLL * v4,
          v1 = v4 / 0x989680,
          (unsigned int)(v4 / 0x989680) < 0xA) )
    {
      LODWORD(v1) = 10;
    }
    else
    {
LABEL_9:
      if ( !(_DWORD)v1 )
        return result;
    }
    PopPowerAggregatorDozeTimerArm(
      (__int64)&PopPowerAggregatorLock.Header.WaitListHead.Blink,
      0,
      -10000000LL * (unsigned int)v1);
    result = (unsigned __int64)stru_140F0C428.WaitBlock[2].Object;
    if ( *(_BYTE *)stru_140F0C428.WaitBlock[2].Object )
    {
      result = *((_QWORD *)stru_140F0C428.WaitBlock[2].Object + 5);
      if ( result != -1LL )
        return PopPowerAggregatorDozeTimerArm(
                 (__int64)&PopPowerAggregatorLock.Header.WaitListHead.Blink,
                 1u,
                 v2 - result);
    }
  }
  return result;
}
