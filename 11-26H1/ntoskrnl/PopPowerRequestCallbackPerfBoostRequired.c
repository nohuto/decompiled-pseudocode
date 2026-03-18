/*
 * XREFs of PopPowerRequestCallbackPerfBoostRequired @ 0x140A9CFA0
 * Callers:
 *     <none>
 * Callees:
 *     PpmHeteroHgsCheckContainmentDecision @ 0x1402589C8 (PpmHeteroHgsCheckContainmentDecision.c)
 *     Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline @ 0x1402592B4 (Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmParkApplyPolicy @ 0x1402592F0 (PpmParkApplyPolicy.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PpmPerfClearBootOverrides @ 0x1404FE288 (PpmPerfClearBootOverrides.c)
 *     PoLatencySensitivityHint @ 0x140530410 (PoLatencySensitivityHint.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140A9D254 (PpmPerfUpdateDomainPolicy.c)
 */

__int64 __fastcall PopPowerRequestCallbackPerfBoostRequired(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdx
  char v5; // r8
  unsigned __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 )
  {
    PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, a2, a3);
    LOBYTE(stru_140F11D08.RealtimePriorityFloor) = 1;
    PpmHeteroHgsCheckContainmentDecision();
    if ( (unsigned int)Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline() )
      PpmParkApplyPolicy();
    PpmPerfUpdateDomainPolicy(0LL);
    PoLatencySensitivityHint(3);
  }
  else
  {
    PpmPerfClearBootOverrides(a1, a2, 0);
    PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, v4, v5);
    LOBYTE(stru_140F11D08.RealtimePriorityFloor) = 0;
    PpmHeteroHgsCheckContainmentDecision();
    if ( (unsigned int)Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline() )
      PpmParkApplyPolicy();
    PpmPerfUpdateDomainPolicy(0LL);
  }
  v7 = 0xFFFFFFFF00000001uLL;
  if ( a3 )
    LODWORD(v7) = 3;
  return ZwUpdateWnfStateData((__int64)&WNF_SEB_LOW_LATENCY_POWER_REQUEST, (__int64)&v7);
}
