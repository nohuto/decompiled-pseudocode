/*
 * XREFs of PopPowerAggregatorNotifyPdcPhaseState @ 0x1407D9D94
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406105F0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060E8A8 (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     PopExecutePowerAction @ 0x1409F3918 (PopExecutePowerAction.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409FABE4 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorEvaluateDozeTimers @ 0x140B2DC54 (PopPowerAggregatorEvaluateDozeTimers.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

void __fastcall PopPowerAggregatorNotifyPdcPhaseState(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // [rsp+20h] [rbp-40h]
  _DWORD v11[4]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v12[2]; // [rsp+40h] [rbp-20h] BYREF

  if ( (_DWORD)a1 != 2 )
    return;
  v2 = a2;
  memset(v12, 0, sizeof(v12));
  LODWORD(v12[0]) = 17;
  PopAcquirePolicyLock(a1, a2);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v3, v4, v5);
  if ( !v2 )
  {
    byte_140F0D9EC = 0;
    goto LABEL_16;
  }
  if ( (_DWORD)xmmword_140F0D8D0 == 1 )
  {
    PoModernStandbyActionInProgress = 1;
    byte_140F0D9EC = 1;
    if ( dword_140F0D9F0 != 1 )
    {
      if ( dword_140F0D9F0 == 2 )
      {
        LODWORD(v12[0]) = 14;
        goto LABEL_13;
      }
      if ( dword_140F0D9F0 == 3 )
        goto LABEL_10;
      if ( dword_140F0D9F0 != 4 )
      {
        if ( dword_140F0D9F0 != 5
          || !(unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
        {
          goto LABEL_13;
        }
LABEL_10:
        PopPowerAggregatorHandleIntentUnsafe(3LL, 0LL, 0LL, 53LL);
LABEL_13:
        dword_140F0D9F0 = 0;
        goto LABEL_16;
      }
      if ( !(unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
        goto LABEL_13;
    }
    LODWORD(v12[0]) = 13;
    goto LABEL_13;
  }
LABEL_16:
  PopPowerAggregatorEvaluateDozeTimers();
  PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
  if ( LODWORD(v12[0]) != 17 )
  {
    DWORD1(v12[0]) = 128;
    v11[2] = 0;
    v11[0] = 3;
    v11[1] = -2147483612;
    PopExecutePowerAction((unsigned int)v12, 0, (unsigned int)v11, 5, 1);
  }
  PopReleasePolicyLock(v7, v6, v8, v9, v10);
}
