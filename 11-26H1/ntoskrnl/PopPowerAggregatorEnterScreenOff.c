/*
 * XREFs of PopPowerAggregatorEnterScreenOff @ 0x140A38AE8
 * Callers:
 *     PopPowerAggregatorScreenOffActiveToScreenOffStateHandler @ 0x1407D6E90 (PopPowerAggregatorScreenOffActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x140A37138 (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x140A38950 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x140A38A70 (PopPowerAggregatorScreenOffExitStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestReferenceAcquire @ 0x1404A6310 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestReferenceRelease @ 0x1404A64A0 (PopPowerRequestReferenceRelease.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404E6C14 (PopGetMonitorReasonFromPowerEventId.c)
 *     Feature_RSIdleRevoke__private_IsEnabledDeviceUsageNoInline @ 0x14060B988 (Feature_RSIdleRevoke__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140A38D30 (PopPowerAggregatorSetCurrentState.c)
 *     PopPdcDisengagePhases @ 0x140A390CC (PopPdcDisengagePhases.c)
 *     PdcPoPerfOverride @ 0x140A390F8 (PdcPoPerfOverride.c)
 *     PopSleepstudyStartNextSession @ 0x140A39120 (PopSleepstudyStartNextSession.c)
 *     PopPdcEngagePhases @ 0x140B45340 (PopPdcEngagePhases.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x140B47E34 (PopSleepstudySnapModernStandbySessionData.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
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
  PopReleaseRwLock(&PopPowerAggregatorLock);
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
      dword_140E2705C = 1;
      v17 = v12 & (((unsigned int)Feature_RSIdleRevoke__private_IsEnabledDeviceUsageNoInline() == 0) - 34);
    }
    else
    {
      dword_140E2705C = 0;
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
    BYTE2(stru_140F10828.WriteOperationCount) = 0;
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
