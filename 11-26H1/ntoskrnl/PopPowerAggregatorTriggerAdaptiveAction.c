/*
 * XREFs of PopPowerAggregatorTriggerAdaptiveAction @ 0x1407DA1E0
 * Callers:
 *     PopAdaptiveStandbyActionWorker @ 0x1407E2C70 (PopAdaptiveStandbyActionWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060E8A8 (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     PopExecutePowerAction @ 0x1409F3918 (PopExecutePowerAction.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409FABE4 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopPowerAggregatorTriggerAdaptiveAction(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  __int64 result; // rax
  _DWORD v10[4]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v11[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v12; // [rsp+48h] [rbp-18h]
  __int64 v13; // [rsp+58h] [rbp-8h]

  v13 = 0LL;
  v11[0] = 17;
  v12 = 0LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, a2, a3, a4);
  if ( (_DWORD)xmmword_140F0D8D0 != 1 )
    goto LABEL_14;
  if ( byte_140F0D9EC )
  {
    v5 = a1 - 1;
    if ( !v5 )
    {
LABEL_11:
      v11[0] = 13;
      goto LABEL_14;
    }
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 )
      {
LABEL_9:
        PopPowerAggregatorHandleIntentUnsafe(3LL, 0LL, 0LL, 53LL);
        goto LABEL_14;
      }
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 || !(unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
          goto LABEL_14;
        goto LABEL_9;
      }
      if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
        goto LABEL_11;
    }
    else
    {
      v11[0] = 14;
    }
  }
  else
  {
    dword_140F0D9F0 = a1;
  }
LABEL_14:
  result = PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
  if ( v11[0] != 17 )
  {
    v11[1] = 128;
    v10[2] = 0;
    v10[0] = 3;
    v10[1] = -2147483612;
    return PopExecutePowerAction((unsigned int)v11, 0, (unsigned int)v10, 5, 1);
  }
  return result;
}
