/*
 * XREFs of PpmPerfGetVmPerfConfig @ 0x1406093B4
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PpmPerfGetVmPerfConfig(int a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  unsigned int v6; // r8d
  _PROC_PERF_DOMAIN *Domain; // rsi
  unsigned int MinThrottlePercent; // r14d
  unsigned int MinPerfPercent; // r10d
  unsigned int MaxPercent; // r11d
  unsigned int MinPolicyPercent; // edx
  unsigned int v12; // eax
  unsigned int MinEquivalentFrequencyPercent; // ecx
  char v14; // r12
  unsigned int v15; // eax
  unsigned int MaxPolicyPercent; // ecx
  unsigned int MaxEquivalentFrequencyPercent; // r9d
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ebx
  unsigned int v21; // r15d
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  bool v29; // zf
  __int64 v31; // [rsp+50h] [rbp-39h] BYREF
  int v32; // [rsp+60h] [rbp-29h]
  unsigned int v33; // [rsp+68h] [rbp-21h]
  unsigned int v34; // [rsp+6Ch] [rbp-1Dh]
  int v35; // [rsp+70h] [rbp-19h]
  unsigned int EnergyPerfPreference; // [rsp+74h] [rbp-15h]
  unsigned int AutonomousActivityWindow; // [rsp+78h] [rbp-11h]
  unsigned int ResourcePriority; // [rsp+7Ch] [rbp-Dh]
  bool v39; // [rsp+98h] [rbp+Fh]
  char v40; // [rsp+9Ah] [rbp+11h]

  memset_0(&v31, 0, 0x50uLL);
  v4 = 0;
  PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, v5, v6);
  if ( !PpmPerfVmPerfSelectionSupported )
  {
    v4 = -1073741637;
    goto LABEL_64;
  }
  if ( !a1 )
  {
    *a2 = 0LL;
    goto LABEL_64;
  }
  Domain = KeGetCurrentPrcb()->PowerState.CheckContext.Domain;
  MinThrottlePercent = Domain->MinThrottlePercent;
  MinPerfPercent = MinThrottlePercent;
  MaxPercent = Domain->MaxPercent;
  if ( !Domain->QosPolicies[0].AllowThrottling )
    MinPerfPercent = Domain->MinPerfPercent;
  MinPolicyPercent = Domain->QosPolicies[0].MinPolicyPercent;
  v12 = MinPolicyPercent;
  MinEquivalentFrequencyPercent = Domain->QosPolicies[0].MinEquivalentFrequencyPercent;
  if ( MinPolicyPercent <= MinEquivalentFrequencyPercent )
    v12 = Domain->QosPolicies[0].MinEquivalentFrequencyPercent;
  if ( MinPerfPercent <= v12 )
  {
    MinPerfPercent = Domain->QosPolicies[0].MinEquivalentFrequencyPercent;
    if ( MinPolicyPercent > MinEquivalentFrequencyPercent )
      MinPerfPercent = Domain->QosPolicies[0].MinPolicyPercent;
  }
  if ( Domain->QosPolicies[0].PerfBoostMode )
  {
    v14 = 0;
    v15 = Domain->MaxPercent;
  }
  else
  {
    v14 = 1;
    v15 = 100;
  }
  MaxPolicyPercent = Domain->QosPolicies[0].MaxPolicyPercent;
  if ( MaxPolicyPercent < 0x64 && v15 >= MaxPolicyPercent )
    v15 = Domain->QosPolicies[0].MaxPolicyPercent;
  MaxEquivalentFrequencyPercent = Domain->QosPolicies[0].MaxEquivalentFrequencyPercent;
  if ( v15 < MaxEquivalentFrequencyPercent )
    MaxEquivalentFrequencyPercent = v15;
  v19 = ((Domain->NominalFrequency >> 1) + 100 * a1) / Domain->NominalFrequency;
  v18 = v19;
  v20 = v19;
  if ( MaxEquivalentFrequencyPercent < v19 )
    v19 = MaxEquivalentFrequencyPercent;
  if ( MinPerfPercent < v18 )
    v18 = MinPerfPercent;
  if ( v18 <= MinThrottlePercent )
  {
    v21 = Domain->MinThrottlePercent;
    if ( MinPerfPercent < v20 )
      goto LABEL_34;
  }
  else
  {
    if ( MinPerfPercent < v20 )
    {
      v21 = MinPerfPercent;
LABEL_34:
      v22 = MinPerfPercent;
      goto LABEL_29;
    }
    v21 = v20;
  }
  v22 = v20;
LABEL_29:
  if ( v22 <= v19 )
  {
    v23 = v19;
  }
  else
  {
    v23 = v20;
    if ( MinPerfPercent < v20 )
      v23 = MinPerfPercent;
  }
  if ( v23 >= MaxPercent )
  {
    v25 = Domain->MaxPercent;
  }
  else
  {
    v24 = v20;
    if ( MinPerfPercent < v20 )
      v24 = MinPerfPercent;
    if ( v24 <= v19 )
    {
      v25 = v19;
    }
    else
    {
      v25 = v20;
      if ( MinPerfPercent < v20 )
        v25 = MinPerfPercent;
    }
  }
  if ( v25 <= MinThrottlePercent )
  {
    v20 = Domain->MinThrottlePercent;
  }
  else
  {
    v26 = v20;
    if ( MinPerfPercent < v20 )
      v26 = MinPerfPercent;
    if ( v26 <= v19 )
    {
      v27 = v19;
    }
    else
    {
      v27 = v20;
      if ( MinPerfPercent < v20 )
        v27 = MinPerfPercent;
    }
    if ( v27 >= MaxPercent )
    {
      v20 = Domain->MaxPercent;
    }
    else
    {
      v28 = v20;
      if ( MinPerfPercent < v20 )
        v28 = MinPerfPercent;
      if ( v28 <= v19 )
      {
        v20 = v19;
      }
      else if ( MinPerfPercent < v20 )
      {
        v20 = MinPerfPercent;
      }
    }
  }
  v32 = guard_dispatch_icall_no_overrides(Domain->Processors->PerfContext, v20);
  v29 = Domain->QosPolicies[0].ProvideGuidance == 0;
  v40 = v14;
  v39 = v29;
  v33 = v21;
  v34 = v20;
  v35 = v32;
  EnergyPerfPreference = Domain->QosPolicies[0].EnergyPerfPreference;
  AutonomousActivityWindow = Domain->QosPolicies[0].AutonomousActivityWindow;
  ResourcePriority = Domain->QosPolicies[0].ResourcePriority;
  guard_dispatch_icall_no_overrides(Domain->Processors->PerfContext, 0LL);
  *a2 = v31;
LABEL_64:
  PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
  return v4;
}
