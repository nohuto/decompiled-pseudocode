/*
 * XREFs of PopPowerAggregatorForceSessionSwitch @ 0x1407D69C0
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1404FD400 (PopPowerSourceChangeCallback.c)
 *     PopPreCriticalBatteryNotify @ 0x1407D58A0 (PopPreCriticalBatteryNotify.c)
 *     PopNotifyLidStateChange @ 0x140B51558 (PopNotifyLidStateChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     Feature_Servicing_LidCloseDisplayOff__private_IsEnabledDeviceUsageNoInline @ 0x14060B9E4 (Feature_Servicing_LidCloseDisplayOff__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140A3F1C4 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopPowerAggregatorForceSessionSwitch(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // ebx
  bool v6; // zf
  int v8; // [rsp+38h] [rbp+10h] BYREF

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, a2, a3, a4);
  v8 = 0;
  if ( LODWORD(PopPowerAggregatorLock.QuantumTarget) == 1 )
  {
    v5 = 3;
    if ( (unsigned int)Feature_Servicing_LidCloseDisplayOff__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !LOBYTE(PopPowerAggregatorLock.StackBase) )
        goto LABEL_16;
      if ( a1 != 4 )
      {
LABEL_8:
        v5 = 2;
        goto LABEL_16;
      }
      if ( *(_DWORD *)&PopPowerAggregatorLock.Timer.Processor == 8 )
      {
LABEL_16:
        PopPowerAggregatorHandleIntentUnsafe(v5, &v8, 0LL, a1);
        return PopReleaseRwLock(&PopPowerAggregatorLock);
      }
      v6 = *(_DWORD *)&PopPowerAggregatorLock.Timer.Processor == 2;
    }
    else
    {
      if ( a1 == 4 )
        goto LABEL_16;
      v6 = LOBYTE(PopPowerAggregatorLock.StackBase) == 0;
    }
    if ( !v6 )
      goto LABEL_8;
    goto LABEL_16;
  }
  if ( LODWORD(PopPowerAggregatorLock.QuantumTarget) == 4
    && LOBYTE(PopPowerAggregatorLock.StackBase)
    && ((a1 - 43) & 0xFFFFFFFC) == 0
    && a1 != 44 )
  {
    v5 = 10;
    goto LABEL_16;
  }
  return PopReleaseRwLock(&PopPowerAggregatorLock);
}
