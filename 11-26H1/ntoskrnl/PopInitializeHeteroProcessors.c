/*
 * XREFs of PopInitializeHeteroProcessors @ 0x140B76758
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x140AD8B10 (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KeConfigureHeteroProcessors @ 0x140452524 (KeConfigureHeteroProcessors.c)
 *     PpmEventTraceHeteroSets @ 0x1404B7270 (PpmEventTraceHeteroSets.c)
 *     RtlIsZeroMemory @ 0x1404D36B0 (RtlIsZeroMemory.c)
 *     PpmHeteroGetHgsPlusParkingEnablementStatus @ 0x1404DBBC4 (PpmHeteroGetHgsPlusParkingEnablementStatus.c)
 *     PpmIdleEnableIdleDurationExpirationTimeout @ 0x1404DEC04 (PpmIdleEnableIdleDurationExpirationTimeout.c)
 *     PpmHeteroReevaluateMultiCoreFeatures @ 0x140505428 (PpmHeteroReevaluateMultiCoreFeatures.c)
 *     PpmHeteroDetectHgsCores @ 0x140516AD8 (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140517458 (PpmHeteroUpdateHgsConfiguration.c)
 *     Feature_ReinitWpsMinEfficiency__private_IsEnabledDeviceUsageNoInline @ 0x14060D314 (Feature_ReinitWpsMinEfficiency__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline @ 0x14060D3CC (Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PpmHeteroPopulateRelativeCapability @ 0x1407DA910 (PpmHeteroPopulateRelativeCapability.c)
 *     PopConfigureHeteroPolicies @ 0x140AA9D88 (PopConfigureHeteroPolicies.c)
 *     PpmHeteroComputeMinRelativePerformane @ 0x140ABE034 (PpmHeteroComputeMinRelativePerformane.c)
 *     PpmEventHeteroConfigUpdate @ 0x140AED8B0 (PpmEventHeteroConfigUpdate.c)
 *     PpmEventHeteroPolicy @ 0x140AFBADC (PpmEventHeteroPolicy.c)
 *     PpmHeteroComputeRelativePerformance @ 0x140AFF6E4 (PpmHeteroComputeRelativePerformance.c)
 *     PpmHeteroDetectFavoredCores @ 0x140B0A44C (PpmHeteroDetectFavoredCores.c)
 *     KeDetectHeterogeneousSets @ 0x140B2663C (KeDetectHeterogeneousSets.c)
 *     PopIsSimulatedArchitecturalHeteroPresent @ 0x140B56DD0 (PopIsSimulatedArchitecturalHeteroPresent.c)
 *     PopHeteroCapabilityDeepCopy @ 0x140B76650 (PopHeteroCapabilityDeepCopy.c)
 */

char __fastcall PopInitializeHeteroProcessors(char a1, char a2)
{
  char *Object; // rsi
  int v3; // ebp
  char v4; // r8
  char v5; // r15
  char v6; // r12
  ULONG ActiveProcessorCount; // eax
  unsigned __int8 v8; // r13
  int v9; // eax
  int v10; // edi
  unsigned __int8 v11; // al
  int v12; // r14d
  unsigned __int8 IsSimulatedArchitecturalHeteroPresent; // al
  unsigned __int8 v14; // al
  __int64 v15; // rbx
  SIZE_T v16; // rax
  size_t v17; // rbx
  char v18; // bl
  __int64 v19; // rsi
  unsigned int v20; // edi
  unsigned int v21; // ebx
  int v22; // edx
  int v23; // ecx
  int v27; // [rsp+80h] [rbp+18h] BYREF
  SIZE_T Length; // [rsp+88h] [rbp+20h]

  Object = (char *)stru_140FC11F0.WaitBlock[1].Object;
  v3 = 0;
  v4 = a1;
  if ( !stru_140FC11F0.WaitBlock[1].Object )
    return 0;
  v6 = 0;
  if ( PopDirectedDripsDiagLock.QueuedScb
    || PopDirectedDripsDiagLock.ReadTransferCount
    || PopDirectedDripsDiagLock.WriteTransferCount
    || *(_QWORD *)&PopDirectedDripsDiagLock.ThreadTimerDelay
    || PopDirectedDripsDiagLock.OtherTransferCount
    || PpmPerfAlwaysComputeQosEnabled )
  {
    if ( PpmPerfSchedulerDirectedPerfStatesSupported )
    {
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
      v4 = a1;
      if ( ActiveProcessorCount >= 2 )
        v6 = 1;
    }
  }
  if ( PpmPerfVmQosSupported )
  {
    v6 = 1;
    goto LABEL_15;
  }
  if ( v6 )
  {
LABEL_15:
    v8 = 1;
    if ( !PpmPerfQosGroupPolicyDisable )
      goto LABEL_17;
  }
  v8 = 0;
LABEL_17:
  if ( v4 )
  {
    v9 = PpmHeteroWorkloadClasses;
    *((_DWORD *)Object + 1) = PpmHeteroWorkloadClasses;
    memset_0(Object + 48, 0, 4LL * (unsigned int)(*(_DWORD *)Object * v9));
    PpmHeteroComputeRelativePerformance();
    PpmHeteroUpdateHgsConfiguration((__int64)Object);
    v10 = 0;
    v11 = PpmHeteroDetectHgsCores((__int64)Object);
    v12 = v11;
    v27 = v11;
    if ( v11 )
    {
      v10 = 5;
    }
    else
    {
      IsSimulatedArchitecturalHeteroPresent = PopIsSimulatedArchitecturalHeteroPresent((__int64)Object);
      v12 = IsSimulatedArchitecturalHeteroPresent;
      v27 = IsSimulatedArchitecturalHeteroPresent;
      if ( IsSimulatedArchitecturalHeteroPresent )
      {
        v10 = PpmHeteroDetectFavoredCores((__int64)Object) != 0 ? 6 : 1;
      }
      else
      {
        v27 = KeDetectHeterogeneousSets((__int64)Object);
        v12 = v27;
        if ( v27 )
        {
          if ( PpmHeteroDetectFavoredCores((__int64)Object) )
          {
            v10 = 6;
          }
          else
          {
            v10 = 2;
            if ( KeGetCurrentPrcb()->CpuVendor == 1 )
              v10 = 6;
          }
        }
        else
        {
          v14 = PpmHeteroDetectFavoredCores((__int64)Object);
          v12 = v14;
          v27 = v14;
          if ( v14 )
          {
            v10 = 3;
          }
          else if ( v8 )
          {
            v12 = 1;
            v27 = 1;
            v10 = 4;
          }
        }
      }
    }
    if ( v10 != PopHeteroSystem
      || (v5 = 0,
          v15 = (unsigned int)(*(_DWORD *)Object * *((_DWORD *)Object + 1)),
          Length = 2LL * *((unsigned int *)Object + 1),
          RtlCompareMemory(Object + 48, (const void *)(PpmHeteroCapability + 48), 4 * v15) != 4 * v15)
      || (v16 = RtlCompareMemory(*((const void **)Object + 3), *(const void **)(PpmHeteroCapability + 24), Length),
          v16 != Length) )
    {
      v5 = 1;
    }
    v4 = a1;
  }
  else
  {
    v10 = PopHeteroSystem;
    Object = (char *)PpmHeteroCapability;
    v5 = 0;
    v12 = PopHeteroSystem != 0;
    v27 = v12;
  }
  if ( v10 == 6 || v10 == 5 && ((PpmHeteroHgsVendor - 1) & 0xFD) == 0 )
    PpmHeteroReevaluateMultiCoreFeatures();
  if ( v4 )
  {
    if ( PpmHeteroMultiCoreClassesEnabled )
    {
      if ( (unsigned int)(v10 - 5) > 1 )
      {
        v17 = 2LL * *((unsigned int *)Object + 1);
        Length = *((_QWORD *)Object + 3);
        if ( !RtlIsZeroMemory((PVOID)Length, v17) )
        {
          v5 = 1;
          memset_0((void *)Length, 0, v17);
        }
      }
    }
  }
  PpmHeteroComputeMinRelativePerformane();
  v18 = PopConfigureHeteroPolicies(v10, a1, PpmMaxCoreClasses - 1);
  if ( (unsigned int)Feature_ReinitWpsMinEfficiency__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a2 || v5 || v10 && v18 || PpmPerfQosSupportedAndAllowed != v8 )
    {
      if ( (unsigned int)Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline() && v10 )
        PpmHeteroPopulateRelativeCapability((unsigned int *)Object);
      goto LABEL_61;
    }
  }
  else if ( v5 || v10 && v18 || PpmPerfQosSupportedAndAllowed != v8 )
  {
LABEL_61:
    KeConfigureHeteroProcessors((__int64)Object, v8, &v27);
    v12 = v27;
  }
  if ( v12 )
  {
    PopHeteroSystem = v10;
    if ( Object != (char *)PpmHeteroCapability )
      PopHeteroCapabilityDeepCopy(PpmHeteroCapability, (const void **)Object);
    if ( v8 )
      PpmIdleEnableIdleDurationExpirationTimeout();
    goto LABEL_69;
  }
  v19 = PpmHeteroCapability;
  PopHeteroSystem = 0;
  v20 = *(_DWORD *)PpmHeteroCapability;
  v21 = *(_DWORD *)(PpmHeteroCapability + 4);
  memset_0((void *)(PpmHeteroCapability + 48), 0, 4LL * v21 * *(_DWORD *)PpmHeteroCapability);
  memset_0(*(void **)(v19 + 24), 0, 2LL * v21);
  memset_0(*(void **)(v19 + 16), 0, v20);
  if ( v6 )
LABEL_69:
    PpmPerfQosSupportedAndConfigured = 1;
  if ( ((PopHeteroSystem - 1) & 0xFFFFFFFA) != 0 )
  {
    PpmHeteroPolicy = 0;
    v22 = 0;
  }
  else
  {
    v22 = PpmHeteroDesiredPolicy;
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
        v23 = 3 - (v22 != 0);
    }
    KiIntPartProcessorPriority = v23;
  }
  if ( PpmPerfArtificialDomainSetting == -1 )
  {
    LOBYTE(v3) = PopHeteroSystem != 0;
    PpmPerfArtificialDomainEnabled = v3;
  }
  PpmHeteroHgsParkingEnabled = PpmHeteroGetHgsPlusParkingEnablementStatus();
  PpmEventHeteroConfigUpdate();
  PpmEventHeteroPolicy(0);
  PpmEventTraceHeteroSets(1);
  PpmPerfQosSupportedAndAllowed = v8;
  return v5;
}
