/*
 * XREFs of PoFxSendSystemLatencyUpdate @ 0x140394368
 * Callers:
 *     PoNotifyVSyncChange @ 0x140394330 (PoNotifyVSyncChange.c)
 *     PopDeepSleepEvaluateCallback @ 0x1404DA020 (PopDeepSleepEvaluateCallback.c)
 *     PopCheckResiliencyScenarios @ 0x140A3D444 (PopCheckResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x140B486A0 (PopWnfFullscreenVideoCallback.c)
 *     PopEnforceResiliencyScenarios @ 0x140B501F8 (PopEnforceResiliencyScenarios.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     PpmIdleUpdateSystemLatencyLimit @ 0x14028FBF0 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PoFxSystemLatencyNotify @ 0x1403940E4 (PoFxSystemLatencyNotify.c)
 *     PopFxGetLatencyLimitWithoutResiliency @ 0x140394478 (PopFxGetLatencyLimitWithoutResiliency.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall PoFxSendSystemLatencyUpdate(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int LatencyLimitWithoutResiliency; // ebx
  __int64 result; // rax
  signed __int32 v6[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v7; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  if ( stru_140F10828.WaitBlockFill5[44]
    && (!PopWeakChargerLock.SchedulerApcFill3[16] && unk_140F10DC0 || PopWeakChargerLock.SchedulerApcFill3[17]) )
  {
    LatencyLimitWithoutResiliency = dword_140FBE46C;
  }
  else
  {
    LatencyLimitWithoutResiliency = PopFxGetLatencyLimitWithoutResiliency();
  }
  result = (unsigned int)PopFxSystemLatencyLimit;
  if ( LatencyLimitWithoutResiliency != PopFxSystemLatencyLimit )
  {
    if ( LatencyLimitWithoutResiliency > PopFxSystemLatencyLimit )
    {
      PopFxSystemLatencyLimit = LatencyLimitWithoutResiliency;
      _InterlockedOr(v6, 0);
    }
    v7 = LatencyLimitWithoutResiliency;
    if ( byte_140E67628 )
    {
      if ( EtwEventEnabled(
             *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
             &POP_ETW_EVENT_SYSTEM_LATENCY_UPDATE) )
      {
        UserData.Ptr = (ULONGLONG)&v7;
        *(_QWORD *)&UserData.Size = 4LL;
        EtwWriteEx(
          *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
          &POP_ETW_EVENT_SYSTEM_LATENCY_UPDATE,
          0LL,
          0,
          0LL,
          0LL,
          1u,
          &UserData);
      }
    }
    PoFxSystemLatencyNotify(LatencyLimitWithoutResiliency, a2, a3, a4);
    result = PpmIdleUpdateSystemLatencyLimit(LatencyLimitWithoutResiliency);
    PopFxSystemLatencyLimit = LatencyLimitWithoutResiliency;
  }
  return result;
}
