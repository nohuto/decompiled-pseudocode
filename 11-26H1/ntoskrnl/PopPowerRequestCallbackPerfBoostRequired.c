/*
 * XREFs of PopPowerRequestCallbackPerfBoostRequired @ 0x140AD8CF0
 * Callers:
 *     <none>
 * Callees:
 *     PpmHeteroHgsCheckContainmentDecision @ 0x14025A1A8 (PpmHeteroHgsCheckContainmentDecision.c)
 *     Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline @ 0x14025AA94 (Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmParkApplyPolicy @ 0x14025AAD0 (PpmParkApplyPolicy.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PpmPerfClearBootOverrides @ 0x1404F77C8 (PpmPerfClearBootOverrides.c)
 *     PoLatencySensitivityHint @ 0x140532910 (PoLatencySensitivityHint.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AD8DD8 (PpmPerfUpdateDomainPolicy.c)
 */

NTSTATUS __fastcall PopPowerRequestCallbackPerfBoostRequired(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdx
  char v5; // r8
  unsigned __int64 Buffer; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, a2, a3);
    PpmPerfMaxOverrideEnabled = 1;
    PpmHeteroHgsCheckContainmentDecision();
    if ( (unsigned int)Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline() )
      PpmParkApplyPolicy();
    PpmPerfUpdateDomainPolicy(0LL);
    PoLatencySensitivityHint(3);
  }
  else
  {
    PpmPerfClearBootOverrides(a1, a2, 0);
    PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, v4, v5);
    PpmPerfMaxOverrideEnabled = 0;
    PpmHeteroHgsCheckContainmentDecision();
    if ( (unsigned int)Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline() )
      PpmParkApplyPolicy();
    PpmPerfUpdateDomainPolicy(0LL);
  }
  Buffer = 0xFFFFFFFF00000001uLL;
  if ( a3 )
    LODWORD(Buffer) = 3;
  return ZwUpdateWnfStateData(&WNF_SEB_LOW_LATENCY_POWER_REQUEST, &Buffer, 8u, 0LL, 0LL, 0, 0);
}
