/*
 * XREFs of PpmPerfGetVmCppcConfig @ 0x14060906C
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PpmPerfGetVmCppcConfig(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        char a6,
        _QWORD *a7)
{
  __int64 v8; // r12
  unsigned int v11; // edi
  __int64 v12; // rdx
  unsigned int v13; // r8d
  unsigned int v14; // r11d
  unsigned int v15; // ecx
  char v16; // r13
  _PROC_PERF_DOMAIN *Domain; // rsi
  unsigned int MaxPercent; // r14d
  unsigned int MinThrottlePercent; // r10d
  unsigned int v20; // eax
  unsigned int MaxPolicyPercent; // edx
  unsigned int MaxEquivalentFrequencyPercent; // r9d
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rdx
  unsigned int MinPolicyPercent; // r8d
  unsigned int MinEquivalentFrequencyPercent; // ecx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int GuaranteedPercent; // r15d
  unsigned int v30; // eax
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // rtt
  unsigned int v33; // ecx
  unsigned int AutonomousActivityWindow; // r12d
  unsigned int EnergyPerfPreference; // r14d
  int v36; // eax
  char v38; // [rsp+40h] [rbp-81h]
  __int64 v40; // [rsp+60h] [rbp-61h] BYREF
  int v41; // [rsp+70h] [rbp-51h]
  unsigned int v42; // [rsp+78h] [rbp-49h]
  int v43; // [rsp+7Ch] [rbp-45h]
  int v44; // [rsp+80h] [rbp-41h]
  unsigned int v45; // [rsp+84h] [rbp-3Dh]
  unsigned int v46; // [rsp+88h] [rbp-39h]
  int v47; // [rsp+8Ch] [rbp-35h]
  char v48; // [rsp+A8h] [rbp-19h]
  char v49; // [rsp+AAh] [rbp-17h]

  v8 = a3;
  memset_0(&v40, 0, 0x50uLL);
  v11 = 0;
  PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, v12, v13);
  if ( PpmPerfVmPerfSelectionSupported )
  {
    v14 = -1;
    v15 = -1;
    if ( a1 )
      v14 = a1;
    if ( a2 )
      v15 = a2;
    if ( v14 == -1 && v15 == -1 && (_DWORD)v8 == -1 && a4 == -1 && a5 == -1 )
    {
      *a7 = 0LL;
    }
    else
    {
      v16 = 1;
      Domain = KeGetCurrentPrcb()->PowerState.CheckContext.Domain;
      MaxPercent = Domain->MaxPercent;
      MinThrottlePercent = Domain->MinThrottlePercent;
      if ( Domain->QosPolicies[0].PerfBoostMode )
      {
        v38 = 0;
        v20 = Domain->MaxPercent;
      }
      else
      {
        v38 = 1;
        v20 = 100;
      }
      MaxPolicyPercent = Domain->QosPolicies[0].MaxPolicyPercent;
      if ( MaxPolicyPercent < 0x64 && v20 >= MaxPolicyPercent )
        v20 = Domain->QosPolicies[0].MaxPolicyPercent;
      MaxEquivalentFrequencyPercent = Domain->QosPolicies[0].MaxEquivalentFrequencyPercent;
      if ( v20 < MaxEquivalentFrequencyPercent )
        MaxEquivalentFrequencyPercent = v20;
      if ( v15 == -1 )
        LODWORD(v23) = MaxEquivalentFrequencyPercent;
      else
        v23 = (100LL * v15 + ((unsigned __int64)Domain->NominalFrequency >> 1)) / Domain->NominalFrequency;
      if ( !a6 && (unsigned int)v23 >= MaxEquivalentFrequencyPercent )
        LODWORD(v23) = MaxEquivalentFrequencyPercent;
      if ( v14 == -1 )
      {
        LODWORD(v24) = Domain->MinThrottlePercent;
        if ( !Domain->QosPolicies[0].AllowThrottling )
          LODWORD(v24) = Domain->MinPerfPercent;
        MinPolicyPercent = Domain->QosPolicies[0].MinPolicyPercent;
        MinEquivalentFrequencyPercent = Domain->QosPolicies[0].MinEquivalentFrequencyPercent;
        v27 = MinPolicyPercent;
        if ( MinPolicyPercent <= MinEquivalentFrequencyPercent )
          v27 = Domain->QosPolicies[0].MinEquivalentFrequencyPercent;
        if ( (unsigned int)v24 <= v27 )
        {
          LODWORD(v24) = Domain->QosPolicies[0].MinEquivalentFrequencyPercent;
          if ( MinPolicyPercent > MinEquivalentFrequencyPercent )
            LODWORD(v24) = Domain->QosPolicies[0].MinPolicyPercent;
        }
      }
      else
      {
        v24 = (100LL * v14 + ((unsigned __int64)Domain->NominalFrequency >> 1)) / Domain->NominalFrequency;
      }
      v28 = v23;
      if ( (unsigned int)v24 < (unsigned int)v23 )
        v28 = v24;
      if ( MinThrottlePercent <= v28 )
      {
        MinThrottlePercent = v24;
        if ( (unsigned int)v24 >= (unsigned int)v23 )
          MinThrottlePercent = v23;
      }
      GuaranteedPercent = Domain->GuaranteedPercent;
      v30 = Domain->MaxPercent;
      if ( MinThrottlePercent < GuaranteedPercent )
        GuaranteedPercent = MinThrottlePercent;
      if ( (unsigned int)v23 < MaxPercent )
        v30 = v23;
      if ( GuaranteedPercent <= v30 )
      {
        if ( (unsigned int)v23 >= MaxPercent )
          LODWORD(v23) = Domain->MaxPercent;
      }
      else
      {
        LODWORD(v23) = GuaranteedPercent;
      }
      LODWORD(v31) = v23;
      if ( ((_DWORD)v8 != -1 || Domain->QosPolicies[0].ProvideGuidance)
        && ((_DWORD)v8 || Domain->AutonomousCapability != 1)
        && Domain->AutonomousCapability != 2 )
      {
        v32 = 100 * v8 + ((unsigned __int64)Domain->NominalFrequency >> 1);
        v33 = v32 / Domain->NominalFrequency;
        v31 = v32 / Domain->NominalFrequency;
        if ( (unsigned int)v23 < v33 )
          v33 = v23;
        if ( GuaranteedPercent <= v33 )
        {
          if ( (unsigned int)v23 < (unsigned int)v31 )
            LODWORD(v31) = v23;
        }
        else
        {
          LODWORD(v31) = GuaranteedPercent;
        }
        v16 = 0;
      }
      AutonomousActivityWindow = a4;
      if ( a4 == -1 )
        AutonomousActivityWindow = Domain->QosPolicies[0].AutonomousActivityWindow;
      if ( a5 == -1 )
      {
        EnergyPerfPreference = Domain->QosPolicies[0].EnergyPerfPreference;
      }
      else
      {
        EnergyPerfPreference = 100 * a5 / 0xFFu;
        if ( EnergyPerfPreference > 0x64 )
          EnergyPerfPreference = 100;
      }
      v36 = guard_dispatch_icall_no_overrides(Domain->Processors->PerfContext, (unsigned int)v31);
      v49 = v38;
      v41 = v36;
      v48 = v16;
      v42 = GuaranteedPercent;
      v43 = v23;
      v44 = v36;
      v45 = EnergyPerfPreference;
      v46 = AutonomousActivityWindow;
      v47 = 100;
      guard_dispatch_icall_no_overrides(Domain->Processors->PerfContext, 0LL);
      *a7 = v40;
    }
  }
  else
  {
    v11 = -1073741637;
  }
  PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
  return v11;
}
