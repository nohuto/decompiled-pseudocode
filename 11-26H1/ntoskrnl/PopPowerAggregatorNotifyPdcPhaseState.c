/*
 * XREFs of PopPowerAggregatorNotifyPdcPhaseState @ 0x1407D6C24
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x14060D4E0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1406004D0 (Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060B92C (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     PopExecutePowerAction @ 0x140A37D58 (PopExecutePowerAction.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140A3F1C4 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorEvaluateDozeTimers @ 0x140B2BBD4 (PopPowerAggregatorEvaluateDozeTimers.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

void __fastcall PopPowerAggregatorNotifyPdcPhaseState(int a1, char a2)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // [rsp+20h] [rbp-40h]
  _DWORD v16[4]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v17[2]; // [rsp+40h] [rbp-20h] BYREF

  if ( a1 != 2 )
    return;
  memset(v17, 0, sizeof(v17));
  IsEnabledDeviceUsageNoInline = Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline();
  v5 = 0LL;
  if ( IsEnabledDeviceUsageNoInline )
    v5 = 17LL;
  LODWORD(v17[0]) = v5;
  PopAcquirePolicyLock(v5, v4);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v6, v7, v8);
  if ( !a2 )
  {
    LOBYTE(PopPowerAggregatorLock.Timer.Period) = 0;
    goto LABEL_21;
  }
  if ( LODWORD(PopPowerAggregatorLock.QuantumTarget) == 1 )
  {
    BYTE2(stru_140F10828.WriteOperationCount) = 1;
    LOBYTE(PopPowerAggregatorLock.Timer.Period) = 1;
    if ( LODWORD(PopPowerAggregatorLock.WaitBlock[0].WaitListEntry.Flink) != 1 )
    {
      if ( LODWORD(PopPowerAggregatorLock.WaitBlock[0].WaitListEntry.Flink) == 2 )
        goto LABEL_16;
      if ( LODWORD(PopPowerAggregatorLock.WaitBlock[0].WaitListEntry.Flink) == 3 )
      {
LABEL_12:
        PopPowerAggregatorHandleIntentUnsafe(3LL, 0LL, 0LL, 53LL);
LABEL_19:
        LODWORD(PopPowerAggregatorLock.WaitBlock[0].WaitListEntry.Flink) = 0;
        goto LABEL_21;
      }
      if ( LODWORD(PopPowerAggregatorLock.WaitBlock[0].WaitListEntry.Flink) != 4 )
      {
        if ( LODWORD(PopPowerAggregatorLock.WaitBlock[0].WaitListEntry.Flink) != 5
          || !(unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
        {
          goto LABEL_19;
        }
        goto LABEL_12;
      }
      if ( !(unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
        goto LABEL_19;
    }
    if ( (unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
    {
      LODWORD(v17[0]) = 13;
      goto LABEL_19;
    }
LABEL_16:
    v9 = Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline();
    v10 = v17[0];
    if ( v9 )
      v10 = 14;
    LODWORD(v17[0]) = v10;
    goto LABEL_19;
  }
LABEL_21:
  PopPowerAggregatorEvaluateDozeTimers();
  PopReleaseRwLock(&PopPowerAggregatorLock);
  if ( (unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( LODWORD(v17[0]) != 17 )
    {
      DWORD1(v17[0]) = 128;
      v16[2] = 0;
      v16[0] = 3;
      v16[1] = -2147483612;
      PopExecutePowerAction((unsigned int)v17, 0, (unsigned int)v16, 5, 1);
    }
  }
  PopReleasePolicyLock(v12, v11, v13, v14, v15);
}
