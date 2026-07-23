/*
 * XREFs of PopPowerAggregatorEvaluateDozeTimers @ 0x140B2DC54
 * Callers:
 *     PopPowerAggregatorDozeTimerWorker @ 0x1407D9840 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopPowerAggregatorNotifyAcDcStateChange @ 0x1407D9D50 (PopPowerAggregatorNotifyAcDcStateChange.c)
 *     PopPowerAggregatorNotifyPdcPhaseState @ 0x1407D9D94 (PopPowerAggregatorNotifyPdcPhaseState.c)
 * Callees:
 *     PopQueryRestrictedStandbyTimeoutSeconds @ 0x1407CBFCC (PopQueryRestrictedStandbyTimeoutSeconds.c)
 *     PopPowerAggregatorDozeTimerArm @ 0x1407D9768 (PopPowerAggregatorDozeTimerArm.c)
 *     PopPowerAggregatorDozeTimerDisarm @ 0x140B2DD3C (PopPowerAggregatorDozeTimerDisarm.c)
 */

unsigned __int64 PopPowerAggregatorEvaluateDozeTimers()
{
  unsigned __int64 result; // rax
  unsigned __int64 v1; // rdx
  __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx

  PopPowerAggregatorDozeTimerDisarm(PopPowerAggregatorContext, 0LL);
  result = PopPowerAggregatorDozeTimerDisarm(PopPowerAggregatorContext, 1LL);
  if ( byte_140F0D9EC )
  {
    LODWORD(v1) = 0;
    if ( PopPowerAggregatorRestrictedStandbyDozeTimeoutSeconds )
    {
      result = PopQueryRestrictedStandbyTimeoutSeconds();
      LODWORD(v1) = result;
      PopPowerAggregatorRestrictedStandbyDozeTimeoutSeconds = result;
    }
    v2 = MEMORY[0xFFFFF78000000014];
    if ( !**(_BYTE **)&PopPdcDeviceListLock.Spare36 )
      goto LABEL_9;
    v3 = *(_QWORD *)(*(_QWORD *)&PopPdcDeviceListLock.Spare36 + 32LL);
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
    PopPowerAggregatorDozeTimerArm((__int64)PopPowerAggregatorContext, 0, -10000000LL * (unsigned int)v1);
    result = *(_QWORD *)&PopPdcDeviceListLock.Spare36;
    if ( **(_BYTE **)&PopPdcDeviceListLock.Spare36 )
    {
      result = *(_QWORD *)(*(_QWORD *)&PopPdcDeviceListLock.Spare36 + 40LL);
      if ( result != -1LL )
        return PopPowerAggregatorDozeTimerArm((__int64)PopPowerAggregatorContext, 1u, v2 - result);
    }
  }
  return result;
}
