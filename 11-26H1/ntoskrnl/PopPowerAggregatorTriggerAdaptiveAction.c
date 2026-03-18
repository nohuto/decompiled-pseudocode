/*
 * XREFs of PopPowerAggregatorTriggerAdaptiveAction @ 0x1407D70B0
 * Callers:
 *     PopIdleTriggerAdaptiveStandbyAction @ 0x1407DA37C (PopIdleTriggerAdaptiveStandbyAction.c)
 *     PopAdaptiveStandbyActionWorker @ 0x1407DE5F0 (PopAdaptiveStandbyActionWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1406004D0 (Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060B92C (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     PopExecutePowerAction @ 0x140A37D58 (PopExecutePowerAction.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140A3F1C4 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopPowerAggregatorTriggerAdaptiveAction(int a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9
  __int64 v5; // rdx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  __int64 result; // rax
  _DWORD v11[4]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v12[2]; // [rsp+40h] [rbp-20h] BYREF

  memset(v12, 0, sizeof(v12));
  IsEnabledDeviceUsageNoInline = Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline();
  v5 = 0LL;
  if ( IsEnabledDeviceUsageNoInline )
    v5 = 17LL;
  LODWORD(v12[0]) = v5;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v5, v3, v4);
  if ( LODWORD(PopPowerAggregatorLock.QuantumTarget) != 1 )
    goto LABEL_18;
  if ( !LOBYTE(PopPowerAggregatorLock.Timer.Period) )
  {
    LODWORD(PopPowerAggregatorLock.WaitBlock[0].WaitListEntry.Flink) = a1;
    goto LABEL_18;
  }
  v6 = a1 - 1;
  if ( !v6 )
    goto LABEL_13;
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_15:
    if ( (unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
      LODWORD(v12[0]) = 14;
    goto LABEL_18;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
LABEL_11:
    PopPowerAggregatorHandleIntentUnsafe(3LL, 0LL, 0LL, 53LL);
    goto LABEL_18;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( !(unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
      goto LABEL_18;
LABEL_13:
    if ( (unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
    {
      LODWORD(v12[0]) = 13;
      goto LABEL_18;
    }
    goto LABEL_15;
  }
  if ( v9 == 1 && (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_11;
LABEL_18:
  PopReleaseRwLock(&PopPowerAggregatorLock);
  result = Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    if ( LODWORD(v12[0]) != 17 )
    {
      DWORD1(v12[0]) = 128;
      v11[2] = 0;
      v11[0] = 3;
      v11[1] = -2147483612;
      return PopExecutePowerAction((unsigned int)v12, 0, (unsigned int)v11, 5, 1);
    }
  }
  return result;
}
