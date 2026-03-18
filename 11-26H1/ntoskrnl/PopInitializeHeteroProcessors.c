/*
 * XREFs of PopInitializeHeteroProcessors @ 0x140A9DA10
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x140A9D088 (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14025B888 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeConfigureHeteroProcessors @ 0x1403ED9F4 (KeConfigureHeteroProcessors.c)
 *     PpmEventTraceHeteroSets @ 0x1404BDA24 (PpmEventTraceHeteroSets.c)
 *     PpmHeteroDetectHgsCores @ 0x1404C87C4 (PpmHeteroDetectHgsCores.c)
 *     RtlIsZeroMemory @ 0x1404D9FD0 (RtlIsZeroMemory.c)
 *     PpmHeteroGetHgsPlusParkingEnablementStatus @ 0x1404E24E4 (PpmHeteroGetHgsPlusParkingEnablementStatus.c)
 *     PpmIdleEnableIdleDurationExpirationTimeout @ 0x1404E5664 (PpmIdleEnableIdleDurationExpirationTimeout.c)
 *     PpmHeteroReevaluateMultiCoreFeatures @ 0x14050B9B8 (PpmHeteroReevaluateMultiCoreFeatures.c)
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PpmEventHeteroConfigUpdate @ 0x140A9DE9C (PpmEventHeteroConfigUpdate.c)
 *     PpmEventHeteroPolicy @ 0x140A9E028 (PpmEventHeteroPolicy.c)
 *     PpmHeteroComputeMinRelativePerformane @ 0x140A9E258 (PpmHeteroComputeMinRelativePerformane.c)
 *     PopConfigureHeteroPolicies @ 0x140A9E35C (PopConfigureHeteroPolicies.c)
 *     PpmHeteroComputeRelativePerformance @ 0x140A9E9E8 (PpmHeteroComputeRelativePerformance.c)
 *     KeDetectHeterogeneousSets @ 0x140A9ED28 (KeDetectHeterogeneousSets.c)
 *     PpmHeteroDetectFavoredCores @ 0x140B084D0 (PpmHeteroDetectFavoredCores.c)
 *     PopHeteroCapabilityDeepCopy @ 0x140B1B81C (PopHeteroCapabilityDeepCopy.c)
 *     PopIsSimulatedArchitecturalHeteroPresent @ 0x140B54530 (PopIsSimulatedArchitecturalHeteroPresent.c)
 */

char __fastcall PopInitializeHeteroProcessors(char a1)
{
  unsigned __int64 NpxState; // r14
  int v2; // ebp
  char v3; // r8
  char v4; // r15
  ULONG ActiveProcessorCount; // eax
  unsigned __int8 v6; // r13
  unsigned int v7; // edi
  char v8; // r12
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // r8
  char v12; // al
  __int64 v13; // rsi
  unsigned int v14; // edi
  unsigned int v15; // ebx
  int v16; // edx
  int v18; // eax
  unsigned __int8 v19; // al
  __int64 v20; // rbx
  SIZE_T v21; // rax
  size_t v22; // rbx
  int v23; // ecx
  unsigned __int8 v24; // al
  unsigned __int8 IsSimulatedArchitecturalHeteroPresent; // al
  int v27; // [rsp+68h] [rbp+10h] BYREF
  SIZE_T Length; // [rsp+70h] [rbp+18h]

  NpxState = stru_140FC01F0.NpxState;
  v2 = 0;
  v3 = a1;
  if ( !stru_140FC01F0.NpxState )
    return 0;
  v4 = 0;
  if ( PpmEntryLevelPerfProfile
    || PpmBackgroundProfile
    || PpmEcoQosProfile
    || PpmUtilityQosProfile
    || PpmMultimediaQosProfile
    || PpmPerfAlwaysComputeQosEnabled )
  {
    if ( PpmPerfSchedulerDirectedPerfStatesSupported )
    {
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
      v3 = a1;
      if ( ActiveProcessorCount >= 2 )
        v4 = 1;
    }
  }
  if ( PpmPerfVmQosSupported )
  {
    v4 = 1;
LABEL_10:
    v6 = 1;
    if ( !PpmPerfQosGroupPolicyDisable )
      goto LABEL_11;
    goto LABEL_36;
  }
  if ( v4 )
    goto LABEL_10;
LABEL_36:
  v6 = 0;
LABEL_11:
  if ( v3 )
  {
    v18 = PpmHeteroWorkloadClasses;
    *(_DWORD *)(NpxState + 4) = PpmHeteroWorkloadClasses;
    memset_0((void *)(NpxState + 24), 0, 4LL * (unsigned int)(*(_DWORD *)NpxState * v18));
    PpmHeteroComputeRelativePerformance();
    PpmHeteroUpdateHgsConfiguration(NpxState);
    v7 = 0;
    v19 = PpmHeteroDetectHgsCores(NpxState);
    v9 = v19;
    v27 = v19;
    if ( v19 )
    {
      v7 = 5;
    }
    else
    {
      IsSimulatedArchitecturalHeteroPresent = PopIsSimulatedArchitecturalHeteroPresent(NpxState);
      v9 = IsSimulatedArchitecturalHeteroPresent;
      v27 = IsSimulatedArchitecturalHeteroPresent;
      if ( IsSimulatedArchitecturalHeteroPresent )
      {
        v7 = (unsigned __int8)PpmHeteroDetectFavoredCores(NpxState) != 0 ? 6 : 1;
      }
      else
      {
        v27 = KeDetectHeterogeneousSets(NpxState);
        v9 = v27;
        if ( v27 )
        {
          if ( (unsigned __int8)PpmHeteroDetectFavoredCores(NpxState) )
          {
            v7 = 6;
          }
          else
          {
            v7 = 2;
            if ( KeGetCurrentPrcb()->CpuVendor == 1 )
              v7 = 6;
          }
        }
        else
        {
          v24 = PpmHeteroDetectFavoredCores(NpxState);
          v9 = v24;
          v27 = v24;
          if ( v24 )
          {
            v7 = 3;
          }
          else if ( v6 )
          {
            v9 = 1;
            v27 = 1;
            v7 = 4;
          }
        }
      }
    }
    if ( v7 != PopHeteroSystem
      || (v8 = 0,
          v20 = (unsigned int)(*(_DWORD *)NpxState * *(_DWORD *)(NpxState + 4)),
          Length = 2LL * *(unsigned int *)(NpxState + 4),
          RtlCompareMemory((const void *)(NpxState + 24), (const void *)(PpmHeteroCapability + 24), 4 * v20) != 4 * v20)
      || (v21 = RtlCompareMemory(*(const void **)(NpxState + 16), *(const void **)(PpmHeteroCapability + 16), Length),
          v21 != Length) )
    {
      v8 = 1;
    }
    v3 = a1;
  }
  else
  {
    v7 = PopHeteroSystem;
    NpxState = PpmHeteroCapability;
    v8 = 0;
    v9 = PopHeteroSystem != 0;
    v27 = v9;
  }
  if ( v7 == 6 || v7 == 5 && ((PpmHeteroHgsVendor - 1) & 0xFD) == 0 )
    PpmHeteroReevaluateMultiCoreFeatures();
  if ( v3 )
  {
    if ( PpmHeteroMultiCoreClassesEnabled )
    {
      if ( v7 - 5 > 1 )
      {
        v22 = 2LL * *(unsigned int *)(NpxState + 4);
        Length = *(_QWORD *)(NpxState + 16);
        if ( !RtlIsZeroMemory((_BYTE *)Length, v22) )
        {
          v8 = 1;
          memset_0((void *)Length, 0, v22);
        }
      }
    }
  }
  PpmHeteroComputeMinRelativePerformane();
  LOBYTE(v10) = a1;
  LOBYTE(v11) = PpmMaxCoreClasses - 1;
  v12 = PopConfigureHeteroPolicies(v7, v10, v11);
  if ( v8 || v7 && v12 || PpmPerfQosSupportedAndAllowed != v6 )
  {
    KeConfigureHeteroProcessors(NpxState, v6, &v27);
    v9 = v27;
  }
  if ( v9 )
  {
    PopHeteroSystem = v7;
    if ( NpxState != PpmHeteroCapability )
      PopHeteroCapabilityDeepCopy(PpmHeteroCapability, NpxState);
    if ( v6 )
      PpmIdleEnableIdleDurationExpirationTimeout();
    goto LABEL_35;
  }
  v13 = PpmHeteroCapability;
  PopHeteroSystem = 0;
  v14 = *(_DWORD *)PpmHeteroCapability;
  v15 = *(_DWORD *)(PpmHeteroCapability + 4);
  memset_0((void *)(PpmHeteroCapability + 24), 0, 4LL * v15 * *(_DWORD *)PpmHeteroCapability);
  memset_0(*(void **)(v13 + 16), 0, 2LL * v15);
  memset_0(*(void **)(v13 + 8), 0, v14);
  if ( v4 )
LABEL_35:
    PpmPerfQosSupportedAndConfigured = 1;
  if ( ((PopHeteroSystem - 1) & 0xFFFFFFFA) != 0 )
  {
    PpmHeteroPolicy = 0;
    v16 = 0;
  }
  else
  {
    v16 = PpmHeteroDesiredPolicy;
    PpmHeteroPolicy = PpmHeteroDesiredPolicy;
  }
  if ( a1 && KiIntPartInitialized )
  {
    if ( *(_BYTE *)KiInterruptEfficiencyClassGroup <= 1u )
    {
      v23 = 0;
    }
    else
    {
      v23 = 1;
      if ( KeGetCurrentPrcb()->CpuVendor == 2 )
        v23 = 3 - (v16 != 0);
    }
    KiIntPartProcessorPriority = v23;
  }
  if ( PpmPerfArtificialDomainSetting == -1 )
  {
    LOBYTE(v2) = PopHeteroSystem != 0;
    PpmPerfArtificialDomainEnabled = v2;
  }
  PpmHeteroHgsParkingEnabled = PpmHeteroGetHgsPlusParkingEnablementStatus();
  PpmEventHeteroConfigUpdate();
  PpmEventHeteroPolicy(0LL);
  PpmEventTraceHeteroSets(1);
  PpmPerfQosSupportedAndAllowed = v6;
  return v8;
}
