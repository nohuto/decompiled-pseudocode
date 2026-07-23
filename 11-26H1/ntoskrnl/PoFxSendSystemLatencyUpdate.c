/*
 * XREFs of PoFxSendSystemLatencyUpdate @ 0x1403960E8
 * Callers:
 *     PoNotifyVSyncChange @ 0x1403960B0 (PoNotifyVSyncChange.c)
 *     PopDeepSleepEvaluateCallback @ 0x1404D3700 (PopDeepSleepEvaluateCallback.c)
 *     PopCheckResiliencyScenarios @ 0x1409F8E64 (PopCheckResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x140B4A430 (PopWnfFullscreenVideoCallback.c)
 *     PopEnforceResiliencyScenarios @ 0x140B52A88 (PopEnforceResiliencyScenarios.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PpmIdleUpdateSystemLatencyLimit @ 0x14028F150 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PoFxSystemLatencyNotify @ 0x140395E64 (PoFxSystemLatencyNotify.c)
 *     PopFxGetLatencyLimitWithoutResiliency @ 0x1403961F8 (PopFxGetLatencyLimitWithoutResiliency.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall PoFxSendSystemLatencyUpdate(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int LatencyLimitWithoutResiliency; // ebx
  __int64 result; // rax
  signed __int32 v6[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v7; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  if ( BYTE4(PpmIdlePolicyLock.Padding[3]) && (!PopDeepSleepIsEnabled && PopPdcIdleResiliency || PopDeepSleepIsEngaged) )
    LatencyLimitWithoutResiliency = dword_140FBF46C;
  else
    LatencyLimitWithoutResiliency = PopFxGetLatencyLimitWithoutResiliency();
  result = (unsigned int)PopFxSystemLatencyLimit;
  if ( LatencyLimitWithoutResiliency != PopFxSystemLatencyLimit )
  {
    if ( LatencyLimitWithoutResiliency > PopFxSystemLatencyLimit )
    {
      PopFxSystemLatencyLimit = LatencyLimitWithoutResiliency;
      _InterlockedOr(v6, 0);
    }
    v7 = LatencyLimitWithoutResiliency;
    if ( PopDiagHandleRegistered )
    {
      if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_LATENCY_UPDATE) )
      {
        UserData.Ptr = (ULONGLONG)&v7;
        *(_QWORD *)&UserData.Size = 4LL;
        EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_LATENCY_UPDATE, 0LL, 0, 0LL, 0LL, 1u, &UserData);
      }
    }
    PoFxSystemLatencyNotify(LatencyLimitWithoutResiliency, a2, a3, a4);
    result = PpmIdleUpdateSystemLatencyLimit(LatencyLimitWithoutResiliency);
    PopFxSystemLatencyLimit = LatencyLimitWithoutResiliency;
  }
  return result;
}
