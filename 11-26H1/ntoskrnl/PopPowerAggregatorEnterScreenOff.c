/*
 * XREFs of PopPowerAggregatorEnterScreenOff @ 0x1409F46A8
 * Callers:
 *     PopPowerAggregatorScreenOffActiveToScreenOffStateHandler @ 0x1407D9FC0 (PopPowerAggregatorScreenOffActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x1409F2CF8 (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1409F4510 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1409F4630 (PopPowerAggregatorScreenOffExitStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestReferenceAcquire @ 0x14049F9A0 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestReferenceRelease @ 0x14049FB30 (PopPowerRequestReferenceRelease.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404E00B4 (PopGetMonitorReasonFromPowerEventId.c)
 *     Feature_RSIdleRevoke__private_IsEnabledDeviceUsageNoInline @ 0x14060E904 (Feature_RSIdleRevoke__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPowerAggregatorSetCurrentState @ 0x1409F48F0 (PopPowerAggregatorSetCurrentState.c)
 *     PopPdcDisengagePhases @ 0x1409F4C8C (PopPdcDisengagePhases.c)
 *     PdcPoPerfOverride @ 0x1409F4CB8 (PdcPoPerfOverride.c)
 *     PopSleepstudyStartNextSession @ 0x1409F4CE0 (PopSleepstudyStartNextSession.c)
 *     PopPdcEngagePhases @ 0x140B47040 (PopPdcEngagePhases.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x140B49BC4 (PopSleepstudySnapModernStandbySessionData.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

struct _KTHREAD *__fastcall PopPowerAggregatorEnterScreenOff(_OWORD *a1)
{
  __m128i v1; // xmm2
  __int128 v2; // xmm1
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  unsigned int v11; // eax
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // esi
  __int128 v19; // [rsp+28h] [rbp-19h] BYREF
  __int128 v20; // [rsp+38h] [rbp-9h]
  __m128i v21; // [rsp+48h] [rbp+7h]
  __int128 v22; // [rsp+58h] [rbp+17h]
  __int128 v23; // [rsp+68h] [rbp+27h]
  __int128 v24; // [rsp+78h] [rbp+37h]

  v1 = *(__m128i *)((char *)a1 + 56);
  v2 = a1[1];
  v22 = *(_OWORD *)((char *)a1 + 72);
  v3 = _mm_cvtsi128_si32(v1);
  v24 = a1[2];
  v19 = 0LL;
  LODWORD(v19) = 4;
  v21 = v1;
  v23 = v2;
  v20 = 0LL;
  if ( v3 == 4 )
  {
    LOBYTE(v20) = v22;
    DWORD1(v20) = DWORD1(v22);
  }
  PopPowerAggregatorSetCurrentState(a1, &v19);
  PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
  if ( v3 == 1 )
    PopSleepstudySnapModernStandbySessionData(v5, v4, v6, v7, v19);
  if ( (v23 & 0xFFFFFFFC) != 0 || (_DWORD)v23 == 1 )
  {
    if ( v3 == 4 || v3 == 1 )
    {
      if ( v3 == 1 && (_QWORD)v24 == v21.m128i_i64[1] )
      {
        v11 = DWORD2(v22);
        if ( (DWORD2(v22) & 0xFF000000) != 0x1000000 || (DWORD2(v22) & 0xFFFFFF) == 0 )
          v11 = 50;
      }
      else
      {
        v11 = PopGetMonitorReasonFromPowerEventId(SDWORD2(v23)) & 0xFFFFFF;
      }
      PopSleepstudyStartNextSession(1LL, v11);
    }
    v12 = (BYTE8(v24) != 0) + 58;
    PopAcquirePolicyLock(v5, v4);
    if ( BYTE11(v24) )
    {
      dword_140E2719C = 1;
      v17 = v12 & (((unsigned int)Feature_RSIdleRevoke__private_IsEnabledDeviceUsageNoInline() == 0) - 34);
    }
    else
    {
      dword_140E2719C = 0;
      v17 = v12;
    }
    PopReleasePolicyLock(v14, v13, v15, v16, v19);
    if ( BYTE8(v24) && (_DWORD)v23 == 4 && HIDWORD(v24) == 1 )
    {
      if ( !PopPowerAggregatorIdleDisabledPowerRequestTaken )
      {
        PopPowerAggregatorIdleDisabledPowerRequestTaken = 1;
        PopPowerRequestReferenceAcquire(PopPowerAggregatorIdleDisabledPowerRequest, 1u);
      }
    }
    else if ( PopPowerAggregatorIdleDisabledPowerRequestTaken )
    {
      PopPowerAggregatorIdleDisabledPowerRequestTaken = 0;
      PopPowerRequestReferenceRelease(PopPowerAggregatorIdleDisabledPowerRequest, 1u);
    }
    PopPdcEngagePhases(v17);
  }
  else
  {
    PoModernStandbyActionInProgress = 0;
    PdcPoPerfOverride();
    PopPdcDisengagePhases();
    if ( PopPowerAggregatorIdleDisabledPowerRequestTaken )
    {
      PopPowerAggregatorIdleDisabledPowerRequestTaken = 0;
      PopPowerRequestReferenceRelease(PopPowerAggregatorIdleDisabledPowerRequest, 1u);
    }
  }
  return PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v8, v9, v10);
}
