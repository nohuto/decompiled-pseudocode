/*
 * XREFs of PopIdleTriggerAdaptiveStandbyAction @ 0x1407DA37C
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x14077595C (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404F15DC (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14050EC70 (PopIdleArmAoAcDozeS4Timer.c)
 *     Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1406004D0 (Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPowerAggregatorTriggerAdaptiveAction @ 0x1407D70B0 (PopPowerAggregatorTriggerAdaptiveAction.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopIdleTriggerAdaptiveStandbyAction(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-8h]

  Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline();
  PopAcquirePolicyLock(v3, v2);
  v7 = 3LL;
  if ( a1 == 3 )
  {
    PopPowerAggregatorTriggerAdaptiveAction(3);
  }
  else
  {
    LODWORD(stru_140F0F620.KcsanThread) = a1;
    if ( LOBYTE(stru_140F0F620.Padding[1]) )
    {
      PopIdleCancelAoAcDozeS4Timer(4u);
      PopIdleArmAoAcDozeS4Timer();
    }
  }
  return PopReleasePolicyLock(v7, v4, v5, v6, v9);
}
