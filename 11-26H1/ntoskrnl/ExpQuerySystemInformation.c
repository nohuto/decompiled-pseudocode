/*
 * XREFs of ExpQuerySystemInformation @ 0x140B169CC
 * Callers:
 *     NtQuerySystemInformationEx @ 0x1408398D0 (NtQuerySystemInformationEx.c)
 *     NtQuerySystemInformation @ 0x140B168E0 (NtQuerySystemInformation.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PoGetIdleTimes @ 0x14021A3C0 (PoGetIdleTimes.c)
 *     KeGetProcessorIndexFromNumber @ 0x14021AC70 (KeGetProcessorIndexFromNumber.c)
 *     KeFlushProcessWriteBuffers @ 0x140252FDC (KeFlushProcessWriteBuffers.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExGetBigPoolInfo @ 0x140348148 (ExGetBigPoolInfo.c)
 *     MmQueryMemoryListInformation @ 0x14034A628 (MmQueryMemoryListInformation.c)
 *     VslGetNestedPageProtectionFlags @ 0x140415184 (VslGetNestedPageProtectionFlags.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x14046A570 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     PoEnergyEstimationEnabled @ 0x140475F40 (PoEnergyEstimationEnabled.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1404762E8 (PoGetPerfStateAndParkingInfo.c)
 *     KeIsKernelCetEnabled @ 0x14047D230 (KeIsKernelCetEnabled.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x140488B00 (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     MmGetTotalCommitLimit @ 0x14048B380 (MmGetTotalCommitLimit.c)
 *     MmGetPeakCommitment @ 0x14048B3A0 (MmGetPeakCommitment.c)
 *     MmGetTotalCommittedPages @ 0x14048B4F0 (MmGetTotalCommittedPages.c)
 *     MmGetAvailablePages @ 0x14048C960 (MmGetAvailablePages.c)
 *     MmGetResidentAvailablePages @ 0x14048E17C (MmGetResidentAvailablePages.c)
 *     ExpGetSystemBasicInformation @ 0x14048FFA8 (ExpGetSystemBasicInformation.c)
 *     KeQueryGroupAffinity @ 0x140494AA0 (KeQueryGroupAffinity.c)
 *     ExpGetSystemProcessorInformation @ 0x14049E410 (ExpGetSystemProcessorInformation.c)
 *     MmGetSharedCommit @ 0x1404A0224 (MmGetSharedCommit.c)
 *     MmGetProcessPartitionId @ 0x1404A34A8 (MmGetProcessPartitionId.c)
 *     MmGetNumberOfPhysicalPages @ 0x1404A8DD0 (MmGetNumberOfPhysicalPages.c)
 *     KeQueryCycleTimeStatsProcessor @ 0x1404AFDC0 (KeQueryCycleTimeStatsProcessor.c)
 *     PpmCapturePerformanceDistribution @ 0x1404B01CC (PpmCapturePerformanceDistribution.c)
 *     KeQueryActiveGroupCount @ 0x1404B4BB0 (KeQueryActiveGroupCount.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x1404B64F4 (ExpGetSystemEmulationBasicInformation.c)
 *     MmGetHighestPhysicalPage @ 0x1404BD3D0 (MmGetHighestPhysicalPage.c)
 *     KeGetRecommendedSharedDataAlignment @ 0x1404BF530 (KeGetRecommendedSharedDataAlignment.c)
 *     MmGetLowestPhysicalPage @ 0x1404C1144 (MmGetLowestPhysicalPage.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1404C38A4 (MmQuerySystemWorkingSetInformation.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x1404C623C (ExpGetSystemEmulationProcessorInformation.c)
 *     KeQueryBootTimeValues @ 0x1404C7020 (KeQueryBootTimeValues.c)
 *     KeIsUserCetAllowed @ 0x1404D034C (KeIsUserCetAllowed.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1404D3BB0 (KeQueryLogicalProcessorRelationship.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404E1364 (ExCpuSetResourceManagerAccessCheck.c)
 *     VslIsTrustletRunning @ 0x1404ECBB4 (VslIsTrustletRunning.c)
 *     KeIsCetCapable @ 0x1404F4468 (KeIsCetCapable.c)
 *     VslIsSecureKernelRunning @ 0x1404F447C (VslIsSecureKernelRunning.c)
 *     KeIsKernelCetAuditModeEnabled @ 0x1404F4BC0 (KeIsKernelCetAuditModeEnabled.c)
 *     KeQueryDpcWatchdogConfiguration @ 0x1405111C4 (KeQueryDpcWatchdogConfiguration.c)
 *     ExPoolQueryLimits @ 0x1405127B0 (ExPoolQueryLimits.c)
 *     VfGetVerifierInformation @ 0x140514034 (VfGetVerifierInformation.c)
 *     ExpQueryBootLoaderMetadata @ 0x140525B74 (ExpQueryBootLoaderMetadata.c)
 *     VslQuerySecureKernelProfileInformation @ 0x140528D00 (VslQuerySecureKernelProfileInformation.c)
 *     PsQueryCpuQuotaInformation @ 0x14052D4BC (PsQueryCpuQuotaInformation.c)
 *     HvlQueryMinrootInfo @ 0x14052F3BC (HvlQueryMinrootInfo.c)
 *     KeQuerySecureSpeculationInformation @ 0x140531AB0 (KeQuerySecureSpeculationInformation.c)
 *     PsQueryActivityModerationUserSettings @ 0x1405328A0 (PsQueryActivityModerationUserSettings.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140533B50 (KeGetAffinitizedInterruptsInfo.c)
 *     HvlQueryActiveProcessors @ 0x140534140 (HvlQueryActiveProcessors.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x14053461C (SeQueryTrustedPlatformModuleInformation.c)
 *     HvlQueryProcessorTopologyCount @ 0x140534E30 (HvlQueryProcessorTopologyCount.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     ExpGetLookasideInformation @ 0x1406CDD00 (ExpGetLookasideInformation.c)
 *     Feature_3336553784__private_IsEnabledDeviceUsageNoInline @ 0x1406CDEF4 (Feature_3336553784__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_NoPrecisePoolTagQueries__private_ReportDeviceUsage @ 0x1406CDF50 (Feature_NoPrecisePoolTagQueries__private_ReportDeviceUsage.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwFilterBootOption @ 0x140729D40 (ZwFilterBootOption.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExpQueryLegacyDriverInformation @ 0x14077338C (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryMemoryTopologyInformation @ 0x1407770EC (ExpQueryMemoryTopologyInformation.c)
 *     ExpGetObjectInformation @ 0x1407774F4 (ExpGetObjectInformation.c)
 *     ExpGetLockInformation @ 0x140778318 (ExpGetLockInformation.c)
 *     PsRootSiloInformation @ 0x1407783B8 (PsRootSiloInformation.c)
 *     ExpGetSystemProcessorFeaturesInformation @ 0x1407788EC (ExpGetSystemProcessorFeaturesInformation.c)
 *     HvlQuerySetBootPagesInfo @ 0x140779028 (HvlQuerySetBootPagesInfo.c)
 *     HvlQueryDetailInfo @ 0x140779AFC (HvlQueryDetailInfo.c)
 *     VslQueryTrustedAppRuntimeInformation @ 0x14077A000 (VslQueryTrustedAppRuntimeInformation.c)
 *     ExpQueryNumaProximityNode @ 0x14077A4EC (ExpQueryNumaProximityNode.c)
 *     KeQueryKvaShadowInformation @ 0x14077BA94 (KeQueryKvaShadowInformation.c)
 *     ExpQueryInterruptSteeringInformation @ 0x14077CDEC (ExpQueryInterruptSteeringInformation.c)
 *     HvlQueryEnlightenmentInfo @ 0x14077D4D4 (HvlQueryEnlightenmentInfo.c)
 *     SeSecurityModelQueryInformation @ 0x14077D87C (SeSecurityModelQueryInformation.c)
 *     ExpQuerySingleModuleInformation @ 0x14077DB50 (ExpQuerySingleModuleInformation.c)
 *     ExpQuerySystemMemoryNumaInformation @ 0x14077DDAC (ExpQuerySystemMemoryNumaInformation.c)
 *     IoQueryVhdBootInformation @ 0x14077E830 (IoQueryVhdBootInformation.c)
 *     WheaQuerySystemInformation @ 0x14077E8E4 (WheaQuerySystemInformation.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     RtlSetUserMemory @ 0x140782108 (RtlSetUserMemory.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 *     KeQuerySpeculationControlInformation @ 0x1407BD6B8 (KeQuerySpeculationControlInformation.c)
 *     ObQueryRefTraceInformationEx @ 0x1407C72AC (ObQueryRefTraceInformationEx.c)
 *     ExpQueryModuleInformation @ 0x140838F60 (ExpQueryModuleInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x14083902C (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryRuntimeAttestationReport @ 0x1408391DC (ExpQueryRuntimeAttestationReport.c)
 *     ExGetPoolTagInfo2 @ 0x14083DAC8 (ExGetPoolTagInfo2.c)
 *     ExpQueryOriginalImageFeatureInformation @ 0x14084CA90 (ExpQueryOriginalImageFeatureInformation.c)
 *     ExpQuerySystemMemoryNumaCacheInformation @ 0x14084CB94 (ExpQuerySystemMemoryNumaCacheInformation.c)
 *     SeQueryHSTIResults @ 0x1408B1980 (SeQueryHSTIResults.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     CmQueryBuildVersionInformation @ 0x14097E578 (CmQueryBuildVersionInformation.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1409A6638 (ExpGetSystemFirmwareTableInformation.c)
 *     ExpGetProcessInformation @ 0x1409DC1B8 (ExpGetProcessInformation.c)
 *     ExIsRestrictedCaller @ 0x1409DDEE0 (ExIsRestrictedCaller.c)
 *     PsGetSupportedProcessorArchitectures @ 0x1409E819C (PsGetSupportedProcessorArchitectures.c)
 *     ExpGetHandleInformationEx @ 0x140A2ED04 (ExpGetHandleInformationEx.c)
 *     ExpGetHandleInformation @ 0x140A2F8F0 (ExpGetHandleInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140A31120 (EtwQueryPerformanceTraceInformation.c)
 *     PfQuerySuperfetchInformation @ 0x140A5C19C (PfQuerySuperfetchInformation.c)
 *     EtwTiLogSyscallUsage @ 0x140A5C578 (EtwTiLogSyscallUsage.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140A69154 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A7FF48 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     PsQueryFullProcessImageName @ 0x140A892B4 (PsQueryFullProcessImageName.c)
 *     CmQueryRegistryQuotaInformation @ 0x140A8F24C (CmQueryRegistryQuotaInformation.c)
 *     ExAcquireTimeRefreshLockShared @ 0x140A910A0 (ExAcquireTimeRefreshLockShared.c)
 *     ExReleaseTimeRefreshLockShared @ 0x140A91120 (ExReleaseTimeRefreshLockShared.c)
 *     CmQueryFeatureConfigurationSections @ 0x140AAB714 (CmQueryFeatureConfigurationSections.c)
 *     sub_140AB7034 @ 0x140AB7034 (sub_140AB7034.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x140AB7250 (KeBuildLogicalProcessorSystemInformation.c)
 *     SeCodeIntegrityQueryInformation @ 0x140ABB0F4 (SeCodeIntegrityQueryInformation.c)
 *     SeCodeIntegrityQueryPolicyInformation @ 0x140AC514C (SeCodeIntegrityQueryPolicyInformation.c)
 *     CmQuerySingleFeatureConfiguration @ 0x140AF28CC (CmQuerySingleFeatureConfiguration.c)
 *     ExpQueryNumaProcessorMap @ 0x140AF8958 (ExpQueryNumaProcessorMap.c)
 *     PfSnQueryPrefetcherInformation @ 0x140AFA21C (PfSnQueryPrefetcherInformation.c)
 *     ExpGetSystemFlushInformation @ 0x140AFBD40 (ExpGetSystemFlushInformation.c)
 *     IoQuerySystemDeviceName @ 0x140AFCA84 (IoQuerySystemDeviceName.c)
 *     SeSecureBootQueryInformation @ 0x140B046CC (SeSecureBootQueryInformation.c)
 *     MmGetPageFileInformation @ 0x140B14EF4 (MmGetPageFileInformation.c)
 *     SmQueryStoreInformation @ 0x140B28564 (SmQueryStoreInformation.c)
 *     VslIsEncryptionKeyAvailable @ 0x140B29000 (VslIsEncryptionKeyAvailable.c)
 *     ExpGetDeviceDataInformation @ 0x140B2E22C (ExpGetDeviceDataInformation.c)
 *     sub_140B3B01C @ 0x140B3B01C (sub_140B3B01C.c)
 *     ExpQueryModuleInformationEx @ 0x140B3EA38 (ExpQueryModuleInformationEx.c)
 *     IoQueryLowPriorityIoInformation @ 0x140B3F58C (IoQueryLowPriorityIoInformation.c)
 *     ExpReadComPlusPackage @ 0x140B48220 (ExpReadComPlusPackage.c)
 *     HvlQueryVsmProtectionInfo @ 0x140B54650 (HvlQueryVsmProtectionInfo.c)
 *     ExGetPoolTagInfo @ 0x140B5A170 (ExGetPoolTagInfo.c)
 *     MmEnumerateBadPages @ 0x140B6099C (MmEnumerateBadPages.c)
 *     ObQueryRefTraceInformation @ 0x140B618D0 (ObQueryRefTraceInformation.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140B6780C (ExpGetSystemWriteConstraintInformation.c)
 *     ExpQueryChannelInformation @ 0x140B693A4 (ExpQueryChannelInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x140B6B030 (ExpGetSystemPlatformBinary.c)
 *     VslTransformDumpKey @ 0x140B6CDB4 (VslTransformDumpKey.c)
 *     KeQueryCpuSetInformation @ 0x140B6DAC4 (KeQueryCpuSetInformation.c)
 *     ExpQuerySystemMemoryNumaPerformanceInformation @ 0x140B6F184 (ExpQuerySystemMemoryNumaPerformanceInformation.c)
 *     ExQueryBootEntropyInformation @ 0x140B6FF6C (ExQueryBootEntropyInformation.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x140B71C48 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     VfGetVerifierInformationEx @ 0x140C26100 (VfGetVerifierInformationEx.c)
 *     BgkQueryBootGraphicsInformation @ 0x140C55008 (BgkQueryBootGraphicsInformation.c)
 */

NTSTATUS __fastcall ExpQuerySystemInformation(
        int a1,
        void *a2,
        unsigned int a3,
        char a4,
        unsigned int *Address,
        SIZE_T Length,
        unsigned int *a7)
{
  _QWORD *v8; // r14
  struct _KLOCK_ENTRIES *v9; // r9
  int ProcessorTopologyCount; // esi
  char PreviousMode; // r12
  ULONG v12; // r8d
  int ULongFromUser; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  ULONG ActiveProcessorCount; // eax
  bool v17; // zf
  unsigned int v18; // r10d
  void *v19; // r11
  __int64 v20; // rdx
  USHORT v21; // cx
  __int64 v22; // rax
  int v23; // eax
  USHORT ActiveGroupCount; // ax
  __int64 ULong64FromUser; // rax
  struct _LIST_ENTRY *v26; // rcx
  size_t v27; // r8
  unsigned int *v28; // rcx
  int v29; // ebx
  NTSTATUS result; // eax
  int SystemProcessorFeaturesInformation; // eax
  int ChannelInformation; // eax
  unsigned int v33; // edx
  size_t v34; // r8
  unsigned int *v35; // rcx
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  int v39; // ebx
  int v40; // eax
  unsigned int jj; // esi
  __int64 v42; // rdx
  int v43; // r9d
  int v44; // ebx
  int v45; // ebx
  int v46; // ebx
  int v47; // ebx
  int v48; // ebx
  unsigned int v49; // ecx
  unsigned int v50; // r8d
  __int64 *v51; // rdx
  __int64 v52; // r9
  unsigned int v53; // eax
  LOGICAL_PROCESSOR_RELATIONSHIP v54; // edx
  DWORD v55; // r8d
  __int64 *v56; // rcx
  __int64 v57; // r9
  size_t v58; // r8
  char *SchedulerSharedSystemSlot; // rdx
  unsigned int *v60; // rcx
  unsigned __int64 v61; // rbx
  int v62; // ebx
  int v63; // ebx
  int v64; // ebx
  int v65; // ebx
  unsigned int v66; // esi
  struct _LIST_ENTRY *v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  struct _KLOCK_ENTRIES *v71; // r9
  size_t v72; // r8
  unsigned int *v73; // rcx
  unsigned int ii; // r15d
  int v75; // r9d
  ULONG RecommendedSharedDataAlignment; // eax
  volatile void *v77; // rbx
  unsigned int v78; // esi
  int v79; // ebx
  int v80; // ebx
  int v81; // ebx
  int v82; // ebx
  unsigned int v83; // eax
  __int64 v84; // rbx
  unsigned int v85; // edx
  __int64 *v86; // rcx
  __int64 v87; // r8
  int v88; // ebx
  int v89; // ebx
  int v90; // ebx
  int v91; // ebx
  int v92; // ebx
  BOOLEAN v93; // al
  unsigned int v94; // r10d
  bool v95; // cf
  unsigned int m; // eax
  int v97; // ebx
  int v98; // ebx
  int v99; // ebx
  int v100; // ebx
  _DWORD *v101; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v103; // rdx
  __int64 v104; // rdx
  int v105; // ebx
  int v106; // ebx
  int v107; // ebx
  int v108; // ebx
  _DWORD *v109; // rbx
  ULONG v110; // edx
  char *v111; // rcx
  int v112; // ecx
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v113; // rsi
  unsigned int v114; // eax
  _PROCESSOR_NUMBER *p_ProcNumber; // rax
  NTSTATUS v116; // eax
  int v117; // eax
  struct _LIST_ENTRY *Blink; // rbx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  struct _KLOCK_ENTRIES *v122; // r9
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *p_Information; // rax
  __int64 v124; // rcx
  unsigned int v125; // eax
  bool v126; // cf
  unsigned int n; // r15d
  __int64 v128; // rax
  int v129; // ebx
  int v130; // ebx
  int v131; // ebx
  int v132; // ebx
  unsigned int v133; // eax
  DWORD v134; // edx
  unsigned __int64 v135; // r8
  unsigned int v136; // edx
  __int64 v137; // rax
  unsigned __int16 v138; // ax
  unsigned __int16 v139; // dx
  unsigned __int16 v140; // dx
  unsigned __int16 v141; // dx
  unsigned __int64 PeakCommitment; // rax
  unsigned int v143; // eax
  size_t v144; // rcx
  unsigned int v145; // eax
  int v146; // ecx
  int v147; // ebx
  int v148; // ebx
  int v149; // ebx
  int v150; // ebx
  unsigned int v151; // ebx
  char Relationship; // cl
  int v153; // ebx
  int v154; // ebx
  int v155; // ebx
  int v156; // ebx
  unsigned int v157; // eax
  bool v158; // cf
  unsigned int j; // r15d
  __int64 v160; // rcx
  char v161; // al
  char v162; // cl
  int NestedPageProtectionFlags; // edx
  __int64 v164; // rcx
  char IsEncryptionKeyAvailable; // al
  struct _MDL *v166; // rax
  PVOID v167; // rbx
  int CpuSetInformation; // eax
  struct _KAFFINITY_EX *Pool2; // rax
  struct _KAFFINITY_EX *v170; // r15
  int v171; // ebx
  int v172; // ebx
  int v173; // ebx
  int v174; // ebx
  unsigned __int16 v175; // bx
  __int64 v176; // rbx
  int v177; // eax
  unsigned __int16 ProcessPartitionId; // bx
  __int64 v179; // rax
  unsigned __int64 Mask; // rax
  __int64 v181; // rax
  unsigned int v182; // eax
  unsigned int i; // ebx
  int v184; // ecx
  int v185; // eax
  int v186; // ebx
  int v187; // ebx
  int v188; // ebx
  int v189; // ebx
  unsigned __int8 v190; // cl
  int v191; // ebx
  int v192; // ebx
  int v193; // ebx
  int v194; // ebx
  _QWORD *v195; // rax
  unsigned int v196; // eax
  size_t v197; // r8
  char *v198; // rdx
  int v199; // r15d
  int v200; // r15d
  int v201; // r15d
  unsigned __int32 v202; // r15d
  PVOID v203; // rcx
  int TrustedAppRuntimeInformation; // eax
  __int64 *v205; // rdx
  __int64 *k; // rax
  __int64 v207; // r9
  unsigned int Size; // [rsp+34h] [rbp-644h] BYREF
  _WORD Size_4[2]; // [rsp+38h] [rbp-640h] BYREF
  unsigned int v210; // [rsp+3Ch] [rbp-63Ch]
  size_t v211; // [rsp+40h] [rbp-638h] BYREF
  PVOID P; // [rsp+48h] [rbp-630h] BYREF
  unsigned int v213; // [rsp+50h] [rbp-628h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+54h] [rbp-624h] BYREF
  void *Src; // [rsp+60h] [rbp-618h]
  unsigned int *v216; // [rsp+68h] [rbp-610h]
  __int16 v217; // [rsp+88h] [rbp-5F0h]
  PVOID v218[2]; // [rsp+90h] [rbp-5E8h] BYREF
  size_t v219; // [rsp+A0h] [rbp-5D8h] BYREF
  unsigned int v220; // [rsp+A8h] [rbp-5D0h] BYREF
  LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType[3]; // [rsp+ACh] [rbp-5CCh] BYREF
  __int64 v222; // [rsp+B8h] [rbp-5C0h]
  PVOID v223; // [rsp+C0h] [rbp-5B8h]
  _QWORD *v224; // [rsp+C8h] [rbp-5B0h] BYREF
  HANDLE ProcessId[2]; // [rsp+D0h] [rbp-5A8h] BYREF
  volatile void *v226; // [rsp+E0h] [rbp-598h]
  int v227; // [rsp+230h] [rbp-448h]
  unsigned int v228; // [rsp+288h] [rbp-3F0h]
  __int16 v229; // [rsp+2DCh] [rbp-39Ch]
  int v230[3]; // [rsp+2F4h] [rbp-384h] BYREF
  PEPROCESS Process; // [rsp+300h] [rbp-378h] BYREF
  __int64 v232; // [rsp+310h] [rbp-368h]
  unsigned int v233; // [rsp+320h] [rbp-358h]
  int v234; // [rsp+328h] [rbp-350h]
  unsigned int v235; // [rsp+32Ch] [rbp-34Ch]
  _QWORD *v236; // [rsp+3A0h] [rbp-2D8h]
  void *v237; // [rsp+3F0h] [rbp-288h]
  __int64 v238; // [rsp+3F8h] [rbp-280h]
  volatile void *v239; // [rsp+400h] [rbp-278h]
  __int64 v240; // [rsp+408h] [rbp-270h]
  __int64 v241; // [rsp+410h] [rbp-268h]
  PVOID Object[2]; // [rsp+420h] [rbp-258h] BYREF
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+430h] [rbp-248h] BYREF
  struct _LIST_ENTRY v244; // [rsp+480h] [rbp-1F8h]
  struct _LIST_ENTRY v245; // [rsp+490h] [rbp-1E8h]
  struct _LIST_ENTRY v246; // [rsp+4A0h] [rbp-1D8h]
  struct _LIST_ENTRY v247; // [rsp+4B0h] [rbp-1C8h]
  struct _LIST_ENTRY v248; // [rsp+4C0h] [rbp-1B8h]
  struct _LIST_ENTRY *Flink; // [rsp+4D0h] [rbp-1A8h]
  int v250; // [rsp+4D8h] [rbp-1A0h]
  _BYTE v251[12]; // [rsp+5E0h] [rbp-98h] BYREF
  int v252; // [rsp+5ECh] [rbp-8Ch]
  unsigned __int64 v253; // [rsp+608h] [rbp-70h]
  unsigned __int64 v254; // [rsp+610h] [rbp-68h]
  PVOID v255; // [rsp+628h] [rbp-50h]

  v211 = a3;
  Src = a2;
  v8 = Address;
  v216 = a7;
  v213 = 0;
  Object[0] = 0LL;
  v220 = 0;
  v217 = 0;
  v223 = 0LL;
  Process = 0LL;
  ProcNumber = 0;
  v224 = 0LL;
  v219 = 0LL;
  v218[0] = 0LL;
  *(_OWORD *)ProcessId = 0LL;
  memset_0(&Information, 0, 0x1B0uLL);
  ProcessorTopologyCount = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    v14 = 2LL;
    goto LABEL_31;
  }
  if ( a1 > 158 )
  {
    if ( a1 > 210 )
    {
      if ( a1 != 227 )
      {
LABEL_26:
        v12 = 4;
        goto LABEL_27;
      }
    }
    else if ( a1 == 210 || a1 == 160 || a1 != 163 && a1 != 169 && a1 != 202 )
    {
      goto LABEL_26;
    }
    goto LABEL_24;
  }
  if ( a1 == 158 )
  {
LABEL_24:
    v12 = 1;
    goto LABEL_27;
  }
  if ( a1 > 133 )
  {
    if ( a1 == 138 || a1 == 139 || a1 == 140 || a1 != 145 && a1 != 147 && a1 != 149 )
      goto LABEL_26;
    goto LABEL_24;
  }
  if ( a1 >= 72 || a1 == 5 )
    goto LABEL_26;
  if ( a1 != 12 )
  {
    if ( a1 != 35 )
      goto LABEL_26;
    goto LABEL_24;
  }
  v12 = 8;
LABEL_27:
  ProbeForWrite(Address, (unsigned int)Length, v12);
  if ( a7 )
  {
    ULongFromUser = RtlReadULongFromUser(a7);
    RtlWriteULongToUser(a7, ULongFromUser);
  }
  v14 = 2LL;
LABEL_31:
  Size = 0;
  v15 = 0xFFFFLL;
  RelationshipType[0] = RelationAll;
  v210 = 0;
  LOWORD(P) = 0;
  Size_4[0] = 0;
  v217 = 0;
  v222 = 0LL;
  ActiveProcessorCount = 0;
  v232 = 0LL;
  v230[0] = 9;
  if ( a1 <= 107 )
  {
    if ( a1 == 107 )
    {
      if ( (unsigned int)v211 < 4 )
        return -1073741811;
      if ( a4 )
        RelationshipType[0] = RtlReadULongFromUser((unsigned int *)Src);
      else
        RtlCopyVolatileMemory(RelationshipType, Src, 4uLL);
    }
    else
    {
      if ( a1 <= 61 )
      {
        if ( a1 != 61 )
        {
          if ( a1 == 2 )
            goto LABEL_54;
          if ( a1 != 8 && a1 != 23 )
          {
            if ( a1 != 33 && a1 != 36 )
            {
              v17 = a1 == 42;
              goto LABEL_41;
            }
LABEL_54:
            LODWORD(P) = 0xFFFF;
            v21 = -1;
LABEL_55:
            ActiveProcessorCount = KeQueryActiveProcessorCountEx(v21);
            v210 = ActiveProcessorCount;
            goto LABEL_42;
          }
        }
LABEL_81:
        if ( (unsigned int)v211 < 2 )
          return -1073741811;
        v23 = a4 ? RtlReadUShortFromUser((unsigned __int16 *)Src) : *(unsigned __int16 *)Src;
        LOWORD(v210) = v23;
        LODWORD(P) = v23;
        v229 = v23;
        ActiveGroupCount = KeQueryActiveGroupCount();
        v21 = v210;
        if ( (unsigned __int16)v210 >= ActiveGroupCount )
          return -1073741811;
        goto LABEL_55;
      }
      if ( a1 == 65 )
        goto LABEL_54;
      if ( a1 != 72 )
      {
        if ( a1 != 73 && a1 != 83 )
        {
          v17 = a1 == 100;
LABEL_41:
          if ( !v17 )
          {
LABEL_42:
            v18 = ActiveProcessorCount;
LABEL_43:
            v19 = 0LL;
LABEL_44:
            v20 = Size_4[0];
            goto LABEL_108;
          }
          goto LABEL_81;
        }
        goto LABEL_81;
      }
      if ( (_DWORD)v211 != 4 )
        return -1073741811;
      if ( a4 )
        v230[0] = RtlReadULongFromUser((unsigned int *)Src);
      else
        RtlCopyVolatileMemory(v230, Src, 4uLL);
    }
LABEL_60:
    v18 = v210;
    goto LABEL_43;
  }
  if ( a1 > 175 )
  {
    v14 = (unsigned int)(a1 - 178);
    if ( a1 == 178 )
    {
      if ( (_DWORD)v211 != 8 )
        return -1073741811;
      if ( a4 )
        ULong64FromUser = RtlReadULong64FromUser(Src);
      else
        ULong64FromUser = *(_QWORD *)Src;
      v232 = ULong64FromUser;
      v238 = ULong64FromUser;
      v18 = v210;
      v19 = 0LL;
      v20 = Size_4[0];
      goto LABEL_108;
    }
    v14 = (unsigned int)(a1 - 181);
    if ( a1 != 181 )
    {
      v14 = (unsigned int)(a1 - 230);
      if ( a1 != 230 )
      {
        v14 = (unsigned int)(a1 - 231);
        if ( a1 == 231 )
        {
          if ( (unsigned int)v211 < 8 )
            return -1073741811;
          if ( a4 )
            ProcNumber = (_PROCESSOR_NUMBER)RtlReadULongFromUser((unsigned int *)Src + 1);
          else
            RtlCopyVolatileMemory(&ProcNumber, (char *)Src + 4, 4uLL);
          if ( a4 )
            RelationshipType[0] = RtlReadULongFromUser((unsigned int *)Src);
          else
            RtlCopyVolatileMemory(RelationshipType, Src, 4uLL);
        }
        goto LABEL_60;
      }
    }
LABEL_98:
    if ( (_DWORD)v211 != 8 )
      return -1073741811;
    if ( a4 )
      v19 = (void *)RtlReadULong64FromUser(Src);
    else
      v19 = *(void **)Src;
    v237 = v19;
    v18 = v210;
    goto LABEL_44;
  }
  if ( a1 == 175 )
    goto LABEL_98;
  if ( a1 == 108 )
    goto LABEL_81;
  if ( a1 != 121 )
  {
    if ( a1 == 141 || a1 == 160 )
      goto LABEL_81;
    if ( a1 == 165 )
    {
      if ( (_DWORD)v211 )
      {
        if ( (_DWORD)v211 != 8 )
          return -1073741811;
        if ( a4 )
          v22 = RtlReadULong64FromUser(Src);
        else
          v22 = *(_QWORD *)Src;
        v222 = v22;
        v241 = v22;
      }
      else
      {
        v222 = 0LL;
      }
    }
    goto LABEL_60;
  }
  if ( (unsigned int)v211 < 2 )
    return -1073741811;
  v20 = a4 ? (unsigned __int16)RtlReadUShortFromUser((unsigned __int16 *)Src) : *(unsigned __int16 *)Src;
  v217 = v20;
  if ( (unsigned __int16)v20 >= (unsigned __int16)KeNumberNodes )
    return -1073741811;
  v18 = v210;
  v19 = 0LL;
LABEL_108:
  if ( a1 > 133 )
  {
    if ( a1 <= 193 )
    {
      if ( a1 == 193 )
      {
        v182 = 8 * KeQueryActiveGroupCount();
        Size = v182;
        if ( (unsigned int)Length < v182 )
          goto LABEL_464;
        memset_0(Address, 0, v182);
        for ( i = 0; ; ++i )
        {
          v228 = i;
          if ( i >= (unsigned __int16)KeNumberNodes )
            break;
          KeInitializeSchedulerSubNodeEnumerationContext(ProcessId, KeNodeBlock[i]);
          while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((unsigned int *)ProcessId, v218) )
            *(_QWORD *)&Address[2 * *((unsigned __int16 *)v218[0] + 68)] |= *((_QWORD *)v218[0] + 2);
        }
        goto LABEL_1171;
      }
      if ( a1 <= 163 )
      {
        if ( a1 == 163 )
        {
          v49 = 1;
          if ( !(_DWORD)Length )
          {
            if ( a7 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a7, 1);
              else
                *a7 = 1;
            }
            return -1073741820;
          }
          *(_BYTE *)Address = KdIgnoreUmExceptions;
          goto LABEL_741;
        }
        if ( a1 <= 148 )
        {
          if ( a1 == 148 )
            goto LABEL_124;
          if ( a1 <= 140 )
          {
            if ( a1 == 140 )
            {
              if ( !a7 && (unsigned int)Length < 8 )
              {
                ProcessorTopologyCount = -1073741811;
                goto LABEL_1171;
              }
              ProcessorTopologyCount = BgkQueryBootGraphicsInformation(2LL, &Size);
              if ( ProcessorTopologyCount < 0 )
                goto LABEL_1171;
              if ( Size )
              {
                if ( (unsigned int)Length < Size )
                  goto LABEL_464;
                ProcessorTopologyCount = BgkQueryBootGraphicsInformation(1LL, &v219);
                if ( ProcessorTopologyCount < 0 )
                  goto LABEL_1171;
                v109 = (_DWORD *)v219;
                if ( v219 )
                {
                  if ( PreviousMode )
                    RtlCopyToUser(Address, (void *)v219, Size);
                  else
                    RtlCopyVolatileMemory(Address, (const void *)v219, Size);
                  v110 = 1263093570;
                  goto LABEL_526;
                }
              }
              goto LABEL_520;
            }
            if ( a1 == 134 )
            {
              Size = 32;
              if ( (_DWORD)Length == 32 )
              {
                SystemProcessorFeaturesInformation = sub_140AB7034((unsigned int)(a1 - 134), Address);
                goto LABEL_1170;
              }
              goto LABEL_395;
            }
            if ( a1 != 135 )
            {
              if ( a1 == 136 || a1 == 137 )
              {
                if ( (_DWORD)Length == 48 )
                  return ExpGetDeviceDataInformation((unsigned int)a1, Address, 48LL);
                if ( !a7 )
                  return -1073741820;
                if ( !PreviousMode )
                {
                  *a7 = 48;
                  return -1073741820;
                }
                goto LABEL_690;
              }
              if ( a1 == 138 )
              {
                ChannelInformation = ExpQueryMemoryTopologyInformation(Address, Length, &Size, PreviousMode);
                v33 = 10;
              }
              else
              {
                ChannelInformation = ExpQueryChannelInformation(Address);
                v33 = 11;
              }
LABEL_160:
              ProcessorTopologyCount = ChannelInformation;
              EtwTiLogSyscallUsage(ChannelInformation, v33);
              goto LABEL_1171;
            }
            Size = 8;
            if ( (unsigned int)Length < 8 )
            {
LABEL_395:
              ProcessorTopologyCount = -1073741820;
              goto LABEL_1171;
            }
            if ( (unsigned int)HvlQueryActiveProcessors((unsigned int *)&Information, 0LL) )
              goto LABEL_439;
            ProcessorTopologyCount = HvlQueryProcessorTopologyCount(0LL, &Information.Size);
            if ( ProcessorTopologyCount )
              goto LABEL_439;
            if ( PreviousMode )
              RtlWriteULong64ToUser(Address, *(__int64 *)&Information.Relationship);
            else
              RtlCopyVolatileMemory(Address, &Information, 8uLL);
LABEL_1171:
            if ( a7 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a7, Size);
              else
                *a7 = Size;
            }
            return ProcessorTopologyCount;
          }
          if ( a1 == 141 )
          {
LABEL_727:
            v144 = 48LL;
            if ( a1 != 8 )
              v144 = 72LL;
            v219 = v144;
            if ( !(_DWORD)Length || (unsigned int)Length % (unsigned int)v144 )
            {
              if ( a7 )
              {
                v146 = v18 * v144;
                if ( PreviousMode )
                  RtlWriteULongToUser(a7, v146);
                else
                  *a7 = v146;
              }
              return -1073741820;
            }
            HIDWORD(v211) = 0;
            v145 = 0;
            while ( 1 )
            {
              LODWORD(v211) = v145;
              if ( v145 >= v18 )
                break;
              *(_OWORD *)Object = 0LL;
              ProcNumber.Group = (unsigned __int16)P;
              ProcNumber.Number = v145;
              ProcNumber.Reserved = 0;
              v218[0] = (PVOID)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
              v49 = HIDWORD(v211);
              if ( (unsigned int)Length < HIDWORD(v211) + (int)v219 )
                goto LABEL_741;
              HIDWORD(v211) += v219;
              PoGetIdleTimes(&ProcNumber, 0LL, (__int64)Object);
              *(_QWORD *)&Information.Group.Reserved[4] = KeMaximumIncrement
                                                        * (unsigned __int64)*((unsigned int *)v218[0] + 8594);
              *(_QWORD *)&Information.Processor.Flags = KeMaximumIncrement * (unsigned __int64)HIDWORD(Object[0]);
              *(_QWORD *)&Information.Group.Reserved[12] = KeMaximumIncrement
                                                         * (unsigned __int64)*((unsigned int *)v218[0] + 8595);
              Information.Processor.GroupMask[0].Mask = KeMaximumIncrement
                                                      * (unsigned __int64)*((unsigned int *)v218[0] + 8596);
              *(_QWORD *)&Information.Relationship = KeMaximumIncrement * (unsigned __int64)LODWORD(Object[0]);
              *(_DWORD *)&Information.Group.GroupInfo[0].Reserved[6] = *((_DWORD *)v218[0] + 8592);
              if ( a1 == 141 )
              {
                *(_OWORD *)&Information.Group.GroupInfo[0].Reserved[14] = KeMaximumIncrement
                                                                        * (unsigned __int64)*((unsigned int *)v218[0]
                                                                                            + 8603);
                *(_DWORD *)&Information.Group.GroupInfo[0].Reserved[10] = 0;
                *(_QWORD *)&Information.Group.GroupInfo[0].Reserved[30] = 0LL;
              }
              if ( PreviousMode )
                RtlCopyToUser(v8, &Information, (unsigned int)v219);
              else
                RtlCopyVolatileMemory(v8, &Information, (unsigned int)v219);
              v8 = (_QWORD *)((char *)v8 + (unsigned int)v219);
              v145 = v211 + 1;
              v18 = v210;
            }
            v49 = HIDWORD(v211);
            goto LABEL_741;
          }
          if ( a1 != 143 )
          {
            if ( a1 == 144 )
              goto LABEL_719;
            if ( a1 != 145 )
            {
              if ( a1 != 147 )
                return -1073741821;
              SystemProcessorFeaturesInformation = ExpQueryPortableWorkspaceEfiLauncherInformation(
                                                     Address,
                                                     (unsigned int)Length,
                                                     &Size);
              goto LABEL_1170;
            }
          }
LABEL_897:
          SystemProcessorFeaturesInformation = SeSecureBootQueryInformation(
                                                 a1,
                                                 (char *)Address,
                                                 Length,
                                                 &Size,
                                                 PreviousMode);
          goto LABEL_1170;
        }
        if ( a1 > 156 )
        {
          v153 = a1 - 157;
          if ( v153 )
          {
            v154 = v153 - 1;
            if ( v154 )
            {
              v155 = v154 - 1;
              if ( !v155 )
              {
                SystemProcessorFeaturesInformation = HvlQueryDetailInfo(Address, Length, PreviousMode, &Size);
                goto LABEL_1170;
              }
              v156 = v155 - 1;
              if ( v156 )
              {
                if ( v156 != 2 )
                  return -1073741821;
                SystemProcessorFeaturesInformation = SeQueryTrustedPlatformModuleInformation(
                                                       (int *)Address,
                                                       Length,
                                                       &Size);
                goto LABEL_1170;
              }
              v157 = v18 << 6;
              Size = v18 << 6;
              if ( (unsigned int)Length >= 0x40 )
              {
                v158 = (unsigned int)Length < v157;
                if ( (unsigned int)Length < v157 )
                {
                  v18 = (unsigned int)Length >> 6;
                  v210 = (unsigned int)Length >> 6;
                  v158 = (unsigned int)Length < v157;
                }
                ProcessorTopologyCount = v158 ? 0xC0000004 : 0;
                for ( j = 0; j < v18; ++j )
                {
                  ProcNumber.Group = (unsigned __int16)P;
                  ProcNumber.Number = j;
                  ProcNumber.Reserved = 0;
                  v160 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
                  KeQueryCycleTimeStatsProcessor(v160, v8);
                  v8 += 8;
                  v236 = v8;
                  v18 = v210;
                }
                goto LABEL_1171;
              }
              goto LABEL_464;
            }
            Size = 1;
            if ( !(_DWORD)Length )
              goto LABEL_395;
            v161 = PoEnergyEstimationEnabled();
            if ( PreviousMode )
              RtlWriteUCharToUser(Address, v161);
            else
              *(_BYTE *)Address = v161;
          }
          else
          {
            Size = *(unsigned __int16 *)&ExpSysDbgLock.FreezeFlags + 24;
            if ( (unsigned int)Length < Size )
              goto LABEL_395;
            *(_OWORD *)v218 = 0LL;
            LODWORD(v218[0]) = *(_DWORD *)&ExpSysDbgLock.AbWaitEntryCount;
            if ( ExpSysDbgLock.AbEntryCountValue )
              v218[1] = Address + 6;
            if ( PreviousMode )
              RtlSetUserMemory(Address, 0, 0x18uLL);
            else
              RtlSetVolatileMemory(Address, 0, 0x18uLL);
            if ( PreviousMode )
              RtlWriteULongToUser(Address, (int)ExpSysDbgLock.MutantListHead.Blink);
            else
              *Address = (unsigned int)ExpSysDbgLock.MutantListHead.Blink;
            *(_OWORD *)ProcessId = *(_OWORD *)v218;
            if ( PreviousMode )
            {
              *(_OWORD *)Object = *(_OWORD *)v218;
              RtlWriteULongToUser(Address + 2, _mm_cvtsi128_si32(*(__m128i *)v218));
              RtlWriteULong64ToUser((_QWORD *)Address + 2, (__int64)v218[1]);
            }
            else
            {
              Address[2] = (unsigned int)v218[0];
              *((PVOID *)Address + 2) = v218[1];
            }
            if ( !ExpSysDbgLock.AbEntryCountValue )
              goto LABEL_1171;
            v58 = *(unsigned __int16 *)&ExpSysDbgLock.FreezeFlags;
            SchedulerSharedSystemSlot = (char *)ExpSysDbgLock.SchedulerSharedSystemSlot;
            v60 = (unsigned int *)v218[1];
            if ( PreviousMode )
              goto LABEL_1136;
            RtlCopyVolatileMemory(
              v218[1],
              ExpSysDbgLock.SchedulerSharedSystemSlot,
              *(unsigned __int16 *)&ExpSysDbgLock.FreezeFlags);
          }
          goto LABEL_1171;
        }
        if ( a1 == 156 )
        {
          Size = 128;
          if ( (_DWORD)Length == 128 )
          {
            ProcessorTopologyCount = BgkQueryBootGraphicsInformation(3LL, &Information);
            if ( ProcessorTopologyCount >= 0 )
              memmove(Address, &Information, Size);
            goto LABEL_1171;
          }
          goto LABEL_395;
        }
        v147 = a1 - 149;
        if ( !v147 )
        {
          if ( (unsigned int)Length < 3 )
          {
            if ( a7 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a7, 3);
              else
                *a7 = 3;
            }
            return -1073741820;
          }
          Relationship = Information.Relationship;
          if ( !KdpBootedNodebug )
            Relationship = 1;
          LOBYTE(Information.Relationship) = Relationship;
          BYTE1(Information.Relationship) = (_BYTE)KdDebuggerEnabled;
          BYTE2(Information.Relationship) = (_BYTE)KdDebuggerNotPresent == 0;
          v29 = 3;
          v35 = Address;
          v34 = 3LL;
          if ( !PreviousMode )
          {
            RtlCopyVolatileMemory(Address, &Information, 3uLL);
            goto LABEL_669;
          }
          goto LABEL_781;
        }
        v148 = v147 - 1;
        if ( !v148 )
        {
          if ( !Address || SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            ChannelInformation = ExpQueryBootLoaderMetadata(Address, Length, &Size, v9);
            v33 = 15;
            goto LABEL_160;
          }
          return -1073741727;
        }
        v149 = v148 - 1;
        if ( !v149 )
        {
          Size = 4;
          if ( (unsigned int)Length < 4 )
            goto LABEL_395;
          if ( PreviousMode )
            RtlWriteULongToUser(Address, ExSoftRebootFlags);
          else
            *Address = ExSoftRebootFlags;
          goto LABEL_1171;
        }
        v150 = v149 - 2;
        if ( !v150 )
        {
          if ( !(_DWORD)v211 )
          {
            v151 = 32;
            Size = 32;
            if ( (unsigned int)Length < 0xC )
            {
              ProcessorTopologyCount = -1073741820;
              v227 = -1073741820;
            }
            else
            {
              if ( (unsigned int)Length <= 0x20 )
                v151 = Length;
              Size = v151;
              memmove(Address, &stru_140F12EA0.KcsanThread, v151);
            }
            goto LABEL_1171;
          }
          goto LABEL_395;
        }
        if ( v150 != 1 )
          return -1073741821;
        if ( (unsigned int)Length < 0x20 )
        {
          if ( !a7 )
            return -1073741820;
          if ( !PreviousMode )
          {
            *a7 = 32;
            return -1073741820;
          }
          goto LABEL_756;
        }
        SystemProcessorFeaturesInformation = ExpGetSystemProcessorFeaturesInformation(Address, PreviousMode);
LABEL_759:
        Size = 32;
        goto LABEL_1170;
      }
      if ( a1 <= 179 )
      {
        if ( a1 == 179 )
          goto LABEL_897;
        if ( a1 <= 171 )
        {
          if ( a1 == 171 )
            goto LABEL_897;
          if ( a1 != 164 )
          {
            if ( a1 != 165 )
            {
              switch ( a1 )
              {
                case 166:
                  SystemProcessorFeaturesInformation = SeQueryHSTIResults(Address, Length, &Size);
                  break;
                case 167:
                  SystemProcessorFeaturesInformation = ExpQuerySingleModuleInformation(
                                                         (__int64)Address,
                                                         Length,
                                                         PreviousMode,
                                                         &Size);
                  break;
                case 169:
                  SystemProcessorFeaturesInformation = HvlQueryVsmProtectionInfo(Address);
                  break;
                default:
                  return -1073741821;
              }
              goto LABEL_1170;
            }
            Size = 16;
            if ( (_DWORD)Length == 16 )
            {
              LOBYTE(Information.Relationship) = Information.Relationship & 0xEF | (16
                                                                                  * (ExpSysDbgLock.ThreadTimerDelay & 1));
              if ( VslIsSecureKernelRunning() )
              {
                LOBYTE(Size_4[0]) = 0;
                LOBYTE(Information.Relationship) = v162 | 1;
                NestedPageProtectionFlags = VslGetNestedPageProtectionFlags(0LL);
                LODWORD(P) = NestedPageProtectionFlags;
                if ( (NestedPageProtectionFlags & 2) != 0 )
                  LOBYTE(Information.Relationship) |= 2u;
                if ( (NestedPageProtectionFlags & 0x20) != 0 )
                  LOBYTE(Information.Relationship) |= 4u;
                if ( (NestedPageProtectionFlags & 0x10) != 0 )
                  LOBYTE(Information.Relationship) |= 8u;
                LOBYTE(v164) = BYTE1(Information.Relationship);
                if ( (NestedPageProtectionFlags & 0x200) != 0 )
                {
                  LOBYTE(v164) = BYTE1(Information.Relationship) | 2;
                  BYTE1(Information.Relationship) |= 2u;
                }
                if ( v222 )
                {
                  ProcessorTopologyCount = VslIsTrustletRunning(v222, Size_4);
                  LOBYTE(v164) = Size_4[0] & 1 | BYTE1(Information.Relationship) & 0xFE;
                  BYTE1(Information.Relationship) = v164;
                  NestedPageProtectionFlags = (int)P;
                }
                if ( (NestedPageProtectionFlags & 0x800) != 0 )
                {
                  LOBYTE(v164) = v164 | 4;
                  BYTE1(Information.Relationship) = v164;
                }
                if ( (NestedPageProtectionFlags & 0x1000) != 0 )
                {
                  LOBYTE(v164) = v164 | 8;
                  BYTE1(Information.Relationship) = v164;
                }
                if ( (NestedPageProtectionFlags & 0x2000) != 0 )
                {
                  LOBYTE(v164) = v164 | 0x10;
                  BYTE1(Information.Relationship) = v164;
                }
                if ( (NestedPageProtectionFlags & 0x10000) != 0 )
                {
                  LOBYTE(v164) = v164 | 0x20;
                  BYTE1(Information.Relationship) = v164;
                }
                if ( (NestedPageProtectionFlags & 0x40000) != 0 )
                {
                  LOBYTE(v164) = v164 | 0x40;
                  BYTE1(Information.Relationship) = v164;
                }
                if ( (NestedPageProtectionFlags & 0x80000) != 0 )
                  BYTE2(Information.Relationship) |= 1u;
                IsEncryptionKeyAvailable = VslIsEncryptionKeyAvailable(v164);
                LOBYTE(Information.Relationship) = Information.Relationship & 0xDF | (32 * (IsEncryptionKeyAvailable & 1));
              }
              if ( PreviousMode )
                RtlCopyToUser(Address, &Information, 0x10uLL);
              else
                RtlCopyVolatileMemory(Address, &Information, 0x10uLL);
              goto LABEL_1171;
            }
            if ( a7 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a7, 16);
              else
                *a7 = 16;
            }
            goto LABEL_395;
          }
          goto LABEL_1164;
        }
        switch ( a1 )
        {
          case 172:
            goto LABEL_1164;
          case 173:
            result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
            ProcessorTopologyCount = result;
            if ( result < 0 )
              return result;
            Size = 264;
            if ( (_DWORD)Length != 264 )
              goto LABEL_395;
            Pool2 = (struct _KAFFINITY_EX *)ExAllocatePool2(0x100uLL);
            v170 = Pool2;
            P = Pool2;
            if ( !Pool2 )
              return -1073741670;
            Pool2->Count = 1;
            Pool2->Size = 32;
            Pool2->Reserved = 0;
            memset_0(&Pool2->8, 0, sizeof(Pool2->8));
            KeGetAffinitizedInterruptsInfo(v170);
            if ( PreviousMode )
              RtlCopyToUser(Address, v170, 0x108uLL);
            else
              RtlCopyVolatileMemory(Address, v170, 0x108uLL);
            v110 = 0;
            v111 = (char *)v170;
            goto LABEL_527;
          case 174:
            SystemProcessorFeaturesInformation = PsRootSiloInformation(Address, Length, &Size, PreviousMode);
            goto LABEL_1170;
        }
        if ( a1 != 175 )
        {
          if ( a1 != 178 )
            return -1073741821;
          if ( !(_DWORD)Length )
            goto LABEL_464;
          if ( !PreviousMode || SeSinglePrivilegeCheck(SeSystemProfilePrivilege, PreviousMode) )
          {
            v166 = (struct _MDL *)ExAllocatePool2(0x41uLL);
            v109 = v166;
            P = v166;
            if ( !v166 )
              goto LABEL_520;
            ProcessorTopologyCount = VslQuerySecureKernelProfileInformation(v232, v166, Length, &Size);
            if ( ProcessorTopologyCount >= 0 )
              memmove(Address, v109, Size);
            goto LABEL_561;
          }
          return -1073741727;
        }
        if ( v19 )
        {
          Object[0] = 0LL;
          result = ObReferenceObjectByHandle(v19, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, Object, 0LL);
          v223 = Object[0];
          if ( result < 0 )
            return result;
          v167 = Object[0];
        }
        else
        {
          v167 = 0LL;
        }
        CpuSetInformation = KeQueryCpuSetInformation(Address);
LABEL_886:
        ProcessorTopologyCount = CpuSetInformation;
        if ( v167 )
          ObfDereferenceObject(v223);
        goto LABEL_1171;
      }
      if ( a1 > 185 )
      {
        if ( a1 == 186 )
        {
          if ( !(_DWORD)Length )
          {
            LOBYTE(Size_4[0]) = 1;
            return ZwFilterBootOption(FilterBootOptionOperationSetElement, 0x10200003u, 0x260000A0u, Size_4, 1u);
          }
          if ( a7 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a7, 0);
            else
              *a7 = 0;
          }
          return -1073741820;
        }
        if ( a1 == 188 )
        {
          if ( (_DWORD)Length != 8 )
            return -1073741820;
          ProcessorTopologyCount = PsQueryActivityModerationUserSettings(&Information);
          if ( ProcessorTopologyCount >= 0 )
            *(_QWORD *)Address = *(_QWORD *)&Information.Relationship;
          goto LABEL_1171;
        }
        if ( a1 != 189 && a1 != 190 )
        {
          if ( a1 != 192 )
            return -1073741821;
          if ( (unsigned int)Length < 0x20 )
          {
            if ( !a7 )
              return -1073741820;
            if ( !PreviousMode )
            {
              *a7 = 32;
              return -1073741820;
            }
            goto LABEL_756;
          }
          SystemProcessorFeaturesInformation = ExpGetSystemFlushInformation((char *)Address, PreviousMode);
          goto LABEL_759;
        }
LABEL_1164:
        SystemProcessorFeaturesInformation = SeCodeIntegrityQueryPolicyInformation(a1, (__int64)Src);
        goto LABEL_1170;
      }
      if ( a1 == 185 )
      {
        SystemProcessorFeaturesInformation = sub_140B3B01C(Address, (unsigned int)Length);
        goto LABEL_1170;
      }
      v171 = a1 - 180;
      if ( !v171 )
      {
        SystemProcessorFeaturesInformation = ExpQueryInterruptSteeringInformation(
                                               (int *)Src,
                                               (unsigned int)v211,
                                               Address,
                                               Length,
                                               &Size);
        goto LABEL_1170;
      }
      v172 = v171 - 1;
      if ( v172 )
      {
        v173 = v172 - 1;
        if ( !v173 )
        {
          if ( (_DWORD)Length == 56 )
          {
            ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
            *(_QWORD *)&Information.Relationship = MmGetNumberOfPhysicalPages(ProcessPartitionId) << 12;
            *(_QWORD *)&Information.Processor.Flags = MmGetAvailablePages(ProcessPartitionId) << 12;
            *(_QWORD *)&Information.Group.Reserved[4] = MmGetResidentAvailablePages(ProcessPartitionId) << 12;
            *(_QWORD *)&Information.Group.Reserved[12] = MmGetTotalCommittedPages(ProcessPartitionId) << 12;
            Information.Cache.GroupMask.Mask = MmGetTotalCommitLimit(ProcessPartitionId) << 12;
            *(_QWORD *)&Information.Group.GroupInfo[0].Reserved[14] = MmGetPeakCommitment(ProcessPartitionId) << 12;
            Information.Processor.GroupMask[0].Mask = MmGetSharedCommit() << 12;
            v179 = *(_QWORD *)&Information.Relationship;
            if ( *(_QWORD *)&Information.Relationship < *(_QWORD *)&Information.Processor.Flags )
              v179 = *(_QWORD *)&Information.Processor.Flags;
            *(_QWORD *)&Information.Relationship = v179;
            Mask = Information.Cache.GroupMask.Mask;
            if ( Information.Cache.GroupMask.Mask < *(_QWORD *)&Information.Group.Reserved[12] )
              Mask = *(_QWORD *)&Information.Group.Reserved[12];
            Information.Cache.GroupMask.Mask = Mask;
            v181 = *(_QWORD *)&Information.Group.GroupInfo[0].Reserved[14];
            if ( *(_QWORD *)&Information.Group.GroupInfo[0].Reserved[14] < *(_QWORD *)&Information.Group.Reserved[12] )
              v181 = *(_QWORD *)&Information.Group.Reserved[12];
            *(_QWORD *)&Information.Group.GroupInfo[0].Reserved[14] = v181;
            if ( PreviousMode )
              RtlCopyToUser(Address, &Information, 0x38uLL);
            else
              RtlCopyVolatileMemory(Address, &Information, 0x38uLL);
            Size = 56;
            goto LABEL_1171;
          }
          if ( !a7 )
            return -1073741820;
          if ( !PreviousMode )
          {
            *a7 = 56;
            return -1073741820;
          }
          goto LABEL_375;
        }
        v174 = v173 - 1;
        if ( v174 )
        {
          if ( v174 != 1 )
            return -1073741821;
          if ( (_DWORD)Length == 24 )
          {
            v175 = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
            *(_QWORD *)&Information.Relationship = MmGetNumberOfPhysicalPages(v175) << 12;
            *(_QWORD *)&Information.Processor.Flags = MmGetLowestPhysicalPage(v175) << 12;
            *(_QWORD *)&Information.Group.Reserved[4] = (MmGetHighestPhysicalPage(v175) << 12) + 4095;
            if ( PreviousMode )
              RtlCopyToUser(Address, &Information, 0x18uLL);
            else
              RtlCopyVolatileMemory(Address, &Information, 0x18uLL);
            Size = 24;
            goto LABEL_1171;
          }
          if ( !a7 )
            return -1073741820;
          if ( !PreviousMode )
          {
            *a7 = 24;
            return -1073741820;
          }
LABEL_173:
          RtlWriteULongToUser(a7, 24);
          return -1073741820;
        }
        Size = 16;
        if ( (_DWORD)Length == 16 )
        {
          if ( PreviousMode )
            v176 = RtlReadULong64FromUser(Address);
          else
            v176 = *(_QWORD *)Address;
          v240 = v176;
          if ( PreviousMode )
            v177 = RtlReadULongFromUser(Address + 2);
          else
            v177 = Address[2];
          v234 = v177;
          SystemProcessorFeaturesInformation = ExpQueryCodeIntegrityCertificateInfo(v176, v177);
          goto LABEL_1170;
        }
        goto LABEL_395;
      }
LABEL_1108:
      if ( v19 )
      {
        v218[0] = 0LL;
        result = ObReferenceObjectByHandle(v19, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, v218, 0LL);
        v203 = v218[0];
        v223 = v218[0];
        if ( result < 0 )
          return result;
        v167 = v218[0];
      }
      else
      {
        v167 = 0LL;
        v203 = 0LL;
      }
      CpuSetInformation = PsGetSupportedProcessorArchitectures(Address, v20, Length, &Size, (__int64)v203);
      goto LABEL_886;
    }
    if ( a1 <= 229 )
    {
      if ( a1 != 229 )
      {
        if ( a1 <= 209 )
        {
          if ( a1 == 209 )
            goto LABEL_1164;
          v112 = 200;
          if ( a1 > 200 )
          {
            v186 = a1 - 201;
            if ( !v186 )
            {
              SystemProcessorFeaturesInformation = KeQuerySpeculationControlInformation(
                                                     Address,
                                                     (unsigned int)Length,
                                                     (int *)&Size);
              goto LABEL_1170;
            }
            v187 = v186 - 1;
            if ( v187 )
            {
              v188 = v187 - 4;
              if ( v188 )
              {
                v189 = v188 - 1;
                if ( !v189 )
                {
                  if ( (_DWORD)Length != 4 )
                  {
                    if ( !a7 )
                      return -1073741820;
                    if ( !PreviousMode )
                    {
                      *a7 = 4;
                      return -1073741820;
                    }
                    goto LABEL_345;
                  }
                  if ( PreviousMode )
                    RtlWriteULongToUser(Address, NtGlobalFlag2);
                  else
                    *Address = NtGlobalFlag2;
                  goto LABEL_169;
                }
                if ( v189 != 1 )
                  return -1073741821;
                SystemProcessorFeaturesInformation = SeSecurityModelQueryInformation(
                                                       Address,
                                                       (unsigned int)Length,
                                                       &Size,
                                                       PreviousMode);
                goto LABEL_1170;
              }
              if ( (_DWORD)Length != 8 )
              {
                if ( !a7 )
                  return -1073741820;
                if ( !PreviousMode )
                {
                  *a7 = 8;
                  return -1073741820;
                }
                goto LABEL_302;
              }
              v190 = ExpSysDbgLock.WaitBlockList->WaitListEntry.Flink != 0;
              LODWORD(P) = v190;
              if ( PreviousMode )
                RtlWriteUCharToUser(Address, v190);
              else
                *(_BYTE *)Address = v190;
              if ( PreviousMode )
                RtlWriteULongToUser(Address + 1, 0);
              else
                Address[1] = 0;
              goto LABEL_1022;
            }
            Size = 1;
            if ( (_DWORD)Length != 1 )
            {
              if ( a7 )
              {
                if ( PreviousMode )
                  RtlWriteULongToUser(a7, 1);
                else
                  *a7 = 1;
              }
              goto LABEL_395;
            }
            LODWORD(Src) = 0;
            ProcessorTopologyCount = guard_dispatch_icall_no_overrides(48LL, 1LL);
            if ( ProcessorTopologyCount < 0 || (_DWORD)Src != 1 )
              goto LABEL_439;
            if ( PreviousMode )
              RtlWriteUCharToUser(Address, Information.Relationship);
            else
              *(_BYTE *)Address = Information.Relationship;
            goto LABEL_1171;
          }
          switch ( a1 )
          {
            case 200:
              goto LABEL_529;
            case 194:
              SystemProcessorFeaturesInformation = VslTransformDumpKey(
                                                     Src,
                                                     (unsigned int)v211,
                                                     Address,
                                                     (unsigned int)Length,
                                                     (__int64)&Size,
                                                     PreviousMode);
              goto LABEL_1170;
            case 195:
              if ( (unsigned int)Length >= 8 )
              {
                SystemProcessorFeaturesInformation = ExpGetSystemWriteConstraintInformation(Address);
                Size = 8;
                goto LABEL_1170;
              }
              if ( !a7 )
                return -1073741820;
              if ( !PreviousMode )
              {
                *a7 = 8;
                return -1073741820;
              }
LABEL_302:
              RtlWriteULongToUser(a7, 8);
              return -1073741820;
            case 196:
              SystemProcessorFeaturesInformation = KeQueryKvaShadowInformation(Address, Length, PreviousMode, &Size);
              goto LABEL_1170;
            case 197:
              Size = 8;
              if ( (unsigned int)Length < 8 )
                goto LABEL_395;
              if ( PreviousMode )
                RtlWriteULong64ToUser(Address, qword_140E2D7B8);
              else
                *(_QWORD *)Address = qword_140E2D7B8;
              goto LABEL_1171;
          }
          v184 = a1 - 198;
          if ( a1 == 198 )
          {
            ProcessorTopologyCount = guard_dispatch_icall_no_overrides(34LL, 0LL);
            if ( ProcessorTopologyCount != -1073741820 )
              return -1073741637;
            if ( (unsigned int)Length >= v213 && Address )
            {
              if ( PreviousMode )
              {
                v109 = (_DWORD *)ExAllocatePool2(0x101uLL);
                P = v109;
                if ( !v109 )
                  goto LABEL_520;
              }
              else
              {
                v109 = Address;
                P = Address;
              }
              v185 = guard_dispatch_icall_no_overrides(34LL, v213);
              ProcessorTopologyCount = v185;
              if ( !PreviousMode )
                goto LABEL_1171;
              if ( v185 < 0 )
                goto LABEL_561;
              goto LABEL_560;
            }
LABEL_562:
            v53 = v213;
            goto LABEL_518;
          }
          goto LABEL_1162;
        }
        if ( a1 <= 216 )
        {
          if ( a1 == 216 )
          {
            Size = 32;
            if ( (_DWORD)Length == 32 )
            {
              ChannelInformation = WheaQuerySystemInformation();
              v33 = 16;
              goto LABEL_160;
            }
            goto LABEL_395;
          }
          v191 = a1 - 210;
          if ( !v191 )
          {
            SystemProcessorFeaturesInformation = CmQuerySingleFeatureConfiguration(
                                                   Src,
                                                   v211,
                                                   Address,
                                                   Length,
                                                   &Size,
                                                   KeGetCurrentThread()->PreviousMode);
            goto LABEL_1170;
          }
          v192 = v191 - 1;
          if ( !v192 )
          {
            SystemProcessorFeaturesInformation = CmQueryFeatureConfigurationSections(
                                                   Src,
                                                   v211,
                                                   Address,
                                                   Length,
                                                   &Size,
                                                   KeGetCurrentThread()->PreviousMode);
            goto LABEL_1170;
          }
          v193 = v192 - 2;
          if ( !v193 )
          {
            SystemProcessorFeaturesInformation = KeQuerySecureSpeculationInformation(
                                                   Address,
                                                   (unsigned int)Length,
                                                   &Size);
            goto LABEL_1170;
          }
          v194 = v193 - 1;
          if ( v194 )
          {
            if ( v194 != 1 )
              return -1073741821;
            if ( PreviousMode )
              goto LABEL_1042;
            v195 = ExpSysDbgLock.SchedulerApc.Reserved[1];
            if ( ExpSysDbgLock.SchedulerApc.Reserved[1] )
            {
              Size = 24;
              if ( (unsigned int)Length >= 0x18 )
              {
                *(_OWORD *)Address = *(_OWORD *)ExpSysDbgLock.SchedulerApc.Reserved[1];
                *((_QWORD *)Address + 2) = v195[2];
                goto LABEL_1171;
              }
              goto LABEL_395;
            }
            goto LABEL_1044;
          }
          if ( PreviousMode )
            return -1073741727;
          if ( !ExpSysDbgLock.SchedulerApc.Reserved[2] )
            goto LABEL_1171;
          if ( !*(_QWORD *)ExpSysDbgLock.SchedulerApc.Reserved[2] )
            goto LABEL_1171;
          v196 = *(_DWORD *)ExpSysDbgLock.SchedulerApc.Reserved[2];
          Size = *(_DWORD *)ExpSysDbgLock.SchedulerApc.Reserved[2];
          if ( !Address )
            goto LABEL_1171;
          if ( (unsigned int)Length < v196 )
            goto LABEL_395;
          v197 = v196;
          v198 = (char *)ExpSysDbgLock.SchedulerApc.Reserved[2] + 8;
          goto LABEL_1054;
        }
        switch ( a1 )
        {
          case 221:
            if ( (_DWORD)Length != 4 )
            {
              if ( !a7 )
                return -1073741820;
              if ( !PreviousMode )
              {
                *a7 = 4;
                return -1073741820;
              }
              goto LABEL_345;
            }
            v199 = 2 * KeIsKernelCetAuditModeEnabled();
            v200 = (KeIsKernelCetEnabled() | v199) << 7;
            v201 = 2 * (KeIsUserCetAllowed() | v200);
            v202 = Information.Relationship & 0xFFFFFCFC | KeIsCetCapable() | v201;
            Information.Relationship = v202;
            if ( PreviousMode )
              RtlWriteULongToUser(Address, v202);
            else
              RtlCopyVolatileMemory(Address, &Information, 4uLL);
            goto LABEL_169;
          case 222:
            SystemProcessorFeaturesInformation = CmQueryBuildVersionInformation(
                                                   (unsigned int *)Src,
                                                   v211,
                                                   Address,
                                                   Length,
                                                   &Size,
                                                   KeGetCurrentThread()->PreviousMode);
            goto LABEL_1170;
          case 223:
            if ( !Src )
              return -1073741821;
            v29 = v211;
            ProcessorTopologyCount = ExPoolQueryLimits(
                                       Src,
                                       (unsigned int)v211,
                                       Address,
                                       (unsigned int)Length,
                                       KeGetCurrentThread()->PreviousMode);
            if ( ProcessorTopologyCount < 0 )
              goto LABEL_1171;
            goto LABEL_669;
          case 227:
            Size = 1;
            if ( (_DWORD)Length == 1 )
            {
              *(_BYTE *)Address = 1;
              goto LABEL_1171;
            }
            if ( a7 )
              *a7 = 1;
            goto LABEL_395;
        }
        if ( a1 != 228 )
          return -1073741821;
      }
      Size = Length;
      SystemProcessorFeaturesInformation = KeQueryDpcWatchdogConfiguration(Address, (unsigned int)Length, a1, v9);
      goto LABEL_1170;
    }
    if ( a1 <= 243 )
    {
      if ( a1 == 243 )
      {
        Size = 16;
        if ( (unsigned int)Length >= 0x10 )
        {
          TrustedAppRuntimeInformation = VslQueryTrustedAppRuntimeInformation((__int64)&Information);
          if ( TrustedAppRuntimeInformation < 0 )
            *(_QWORD *)&Information.Relationship &= ~1uLL;
          ProcessorTopologyCount = 0;
          if ( TrustedAppRuntimeInformation >= 0 )
            ProcessorTopologyCount = TrustedAppRuntimeInformation;
          *(_OWORD *)Address = *(_OWORD *)&Information.Relationship;
          goto LABEL_1171;
        }
        goto LABEL_395;
      }
      if ( a1 <= 236 )
      {
        if ( a1 == 236 )
          goto LABEL_439;
        if ( a1 != 230 )
        {
          if ( a1 != 231 )
          {
            if ( a1 != 232 )
            {
              if ( a1 != 234 )
              {
                if ( a1 != 235 )
                  return -1073741821;
                LOBYTE(v9) = 1;
                SystemProcessorFeaturesInformation = HvlQuerySetBootPagesInfo(Address, Length, PreviousMode, v9, &Size);
                goto LABEL_1170;
              }
              Size = 17048;
              if ( (unsigned int)Length >= 0x4298 )
              {
                SystemProcessorFeaturesInformation = HvlQueryMinrootInfo(Address, Length, &Size);
                goto LABEL_1170;
              }
              goto LABEL_395;
            }
            goto LABEL_439;
          }
          goto LABEL_542;
        }
        goto LABEL_1108;
      }
      switch ( a1 )
      {
        case 237:
          goto LABEL_439;
        case 238:
          SystemProcessorFeaturesInformation = ExpQueryOriginalImageFeatureInformation(
                                                 Src,
                                                 v211,
                                                 Address,
                                                 Length,
                                                 &Size);
          goto LABEL_1170;
        case 239:
          SystemProcessorFeaturesInformation = ExpQuerySystemMemoryNumaInformation(
                                                 (__int64 *)Src,
                                                 v211,
                                                 Address,
                                                 Length,
                                                 &Size);
          goto LABEL_1170;
      }
      v184 = a1 - 240;
      if ( a1 == 240 )
      {
        SystemProcessorFeaturesInformation = ExpQuerySystemMemoryNumaPerformanceInformation(
                                               Src,
                                               (unsigned int)v211,
                                               Address,
                                               (unsigned int)Length,
                                               &Size);
        goto LABEL_1170;
      }
LABEL_1162:
      if ( v184 != 1 )
        return -1073741821;
      goto LABEL_1164;
    }
    if ( a1 > 251 )
    {
      if ( a1 == 252 || a1 == 253 )
        goto LABEL_124;
      if ( a1 == 254 )
      {
        SystemProcessorFeaturesInformation = ExpQueryRuntimeAttestationReport(
                                               Src,
                                               v211,
                                               Address,
                                               Length,
                                               &Size,
                                               PreviousMode);
        goto LABEL_1170;
      }
      v184 = a1 - 255;
      if ( a1 == 255 )
      {
        SystemProcessorFeaturesInformation = ExGetPoolTagInfo2((int *)Address, Length, &Size, PreviousMode);
        goto LABEL_1170;
      }
      goto LABEL_1162;
    }
    if ( a1 == 251 )
    {
      SystemProcessorFeaturesInformation = ObQueryRefTraceInformationEx((char *)Address, Length, &Size);
      goto LABEL_1170;
    }
    if ( a1 == 244 )
    {
LABEL_644:
      if ( (_DWORD)v211 )
        goto LABEL_395;
      ProcessorTopologyCount = MmEnumerateBadPages(&v224, v20);
      v135 = 0LL;
      v136 = 0;
      v111 = (char *)v224;
      if ( v224 )
      {
        v135 = *v224 & 0xFFFFFFFFFFFFFLL;
        if ( v135 <= 0x1FFFFFFF )
        {
          v136 = 8 * *(_DWORD *)v224;
          Size = v136;
        }
        else
        {
          ProcessorTopologyCount = -1073741820;
        }
      }
      if ( (unsigned int)Length < v136 )
        ProcessorTopologyCount = -1073741820;
      if ( !v224 )
        goto LABEL_1171;
      if ( ProcessorTopologyCount >= 0 )
      {
        if ( a1 == 128 )
        {
          v205 = v224 + 1;
          for ( k = v224 + 1; v135; --v135 )
          {
            if ( (*v205 & 0x4000000000000000LL) == 0 )
            {
              v207 = *v205 & 0x7FFFFFFFFFFFFFFFLL;
              *v205 = v207;
              *k++ = v207;
            }
            ++v205;
          }
          Size = ((_DWORD)k - (_DWORD)v111 - 8) & 0xFFFFFFF8;
        }
        memmove(Address, v111 + 8, Size);
        v111 = (char *)v224;
      }
      v110 = 0;
LABEL_527:
      ExFreePoolWithTag(v111, v110);
      goto LABEL_1171;
    }
    if ( a1 != 247 )
    {
      if ( a1 != 248 )
      {
        if ( a1 == 249 )
        {
          SystemProcessorFeaturesInformation = ExpQuerySystemMemoryNumaCacheInformation(
                                                 Src,
                                                 v211,
                                                 Address,
                                                 Length,
                                                 &Size,
                                                 PreviousMode);
          goto LABEL_1170;
        }
        if ( a1 != 250 )
          return -1073741821;
        Size = 16;
        if ( (unsigned int)Length >= 0x10 && (Length & 7) == 0 )
        {
          v58 = 16LL;
          SchedulerSharedSystemSlot = (char *)&stru_140FC11F0.IptSaveArea;
          v60 = Address;
          if ( !PreviousMode )
          {
            RtlCopyVolatileMemory(Address, &stru_140FC11F0.IptSaveArea, 0x10uLL);
            goto LABEL_1171;
          }
          goto LABEL_1136;
        }
        goto LABEL_395;
      }
      goto LABEL_1164;
    }
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    {
LABEL_1042:
      ProcessorTopologyCount = -1073741727;
      goto LABEL_1171;
    }
    v198 = (char *)ExpSysDbgLock.SchedulerApc.Reserved[0];
    if ( !ExpSysDbgLock.SchedulerApc.Reserved[0] )
    {
LABEL_1044:
      ProcessorTopologyCount = -1073741810;
      goto LABEL_1171;
    }
    Size = 32 * *((_DWORD *)ExpSysDbgLock.SchedulerApc.Reserved[0] + 1) + 16;
    if ( (unsigned int)Length < Size )
      goto LABEL_395;
    v197 = Size;
LABEL_1054:
    memmove(Address, v198, v197);
    goto LABEL_1171;
  }
  if ( a1 == 133 )
  {
    if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    {
      ChannelInformation = ExpGetSystemPlatformBinary(Address);
      v33 = 13;
      goto LABEL_160;
    }
    return -1073741727;
  }
  if ( a1 > 65 )
  {
    if ( a1 <= 101 )
    {
      if ( a1 == 101 )
      {
        SystemProcessorFeaturesInformation = ExpQueryNumaProximityNode(Address, Length, &Size, PreviousMode);
        goto LABEL_1170;
      }
      if ( a1 <= 83 )
      {
        if ( a1 != 83 )
        {
          if ( a1 <= 73 )
          {
            if ( a1 == 73 )
            {
              SystemProcessorFeaturesInformation = KeBuildLogicalProcessorSystemInformation(
                                                     (unsigned __int16)P,
                                                     (char *)Address,
                                                     Length,
                                                     PreviousMode,
                                                     &Size);
              goto LABEL_1170;
            }
            v88 = a1 - 66;
            if ( v88 )
            {
              v89 = v88 - 1;
              if ( !v89 )
                return -1073741821;
              v90 = v89 - 1;
              if ( !v90 )
                return -1073741821;
              v91 = v90 - 1;
              if ( v91 )
              {
                v92 = v91 - 1;
                if ( !v92 )
                {
                  if ( (_DWORD)Length != 4 )
                  {
                    if ( !a7 )
                      return -1073741820;
                    if ( !PreviousMode )
                    {
                      *a7 = 4;
                      return -1073741820;
                    }
                    goto LABEL_345;
                  }
                  if ( PreviousMode )
                    RtlWriteULongToUser(Address, ObpObjectSecurityMode);
                  else
                    *Address = ObpObjectSecurityMode;
                  goto LABEL_169;
                }
                if ( v92 != 2 )
                  return -1073741821;
                if ( (_DWORD)Length == 8 )
                {
                  if ( v230[0] == 7 )
                  {
                    Information.Relationship = RelationProcessorModule;
                    Information.Size = off_140E00B38[0] != xKdEnumerateDebuggingDevices;
                  }
                  else
                  {
                    if ( v230[0] != 8 )
                      return -1073741637;
                    Information.Relationship = 8;
                    Information.Size = (unsigned __int8)guard_dispatch_icall_no_overrides(1LL, v20);
                  }
                  if ( PreviousMode )
                    RtlWriteULong64ToUser(Address, *(__int64 *)&Information.Relationship);
                  else
                    RtlCopyVolatileMemory(Address, &Information, 8uLL);
                  goto LABEL_1022;
                }
                return -1073741811;
              }
LABEL_439:
              ProcessorTopologyCount = -1073741637;
              goto LABEL_1171;
            }
            if ( (unsigned int)Length >= 0x20 )
            {
              if ( !(unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v211 + 1) )
              {
                ChannelInformation = ExGetBigPoolInfo(SHIDWORD(v211), Address, Length, &Size, PreviousMode);
                v33 = 7;
                goto LABEL_160;
              }
              return -1073741790;
            }
            if ( !a7 )
              return -1073741820;
            if ( !PreviousMode )
            {
              *a7 = 32;
              return -1073741820;
            }
LABEL_756:
            RtlWriteULongToUser(a7, 32);
            return -1073741820;
          }
          if ( a1 == 76 )
          {
            ChannelInformation = ExpGetSystemFirmwareTableInformation((char *)Address, PreviousMode, Length, &Size);
            v33 = 14;
            goto LABEL_160;
          }
          if ( a1 == 77 )
          {
            if ( !(unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v211 + 1) )
            {
              v93 = SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode);
              ChannelInformation = ExpQueryModuleInformationEx(
                                     HIDWORD(v211),
                                     (_DWORD)Address,
                                     Length,
                                     v93 == 0,
                                     PreviousMode,
                                     (__int64)&Size);
              v33 = 1;
              goto LABEL_160;
            }
            return -1073741790;
          }
          v40 = 2;
          if ( a1 == 79 )
          {
            SystemProcessorFeaturesInformation = PfQuerySuperfetchInformation(0LL, Address, Length, PreviousMode, &Size);
            goto LABEL_1170;
          }
          if ( a1 == 80 )
          {
            SystemProcessorFeaturesInformation = MmQueryMemoryListInformation(
                                                   0xFFFFFFFFFFFFFFFFuLL,
                                                   Address,
                                                   Length,
                                                   PreviousMode,
                                                   &Size);
            goto LABEL_1170;
          }
          if ( a1 != 81 )
            return -1073741821;
LABEL_614:
          Size = 64;
          if ( (unsigned int)Length < 0x40 )
          {
            if ( !a7 )
              return -1073741820;
            if ( !PreviousMode )
            {
              *a7 = 64;
              return -1073741820;
            }
            goto LABEL_194;
          }
          if ( a1 != 119 )
          {
            v40 = 1;
            if ( a1 == 120 )
              v40 = 3;
          }
          MmQuerySystemWorkingSetInformation(v40, &Information);
          v58 = 64LL;
          SchedulerSharedSystemSlot = (char *)&Information;
          v60 = Address;
          if ( !PreviousMode )
          {
            RtlCopyVolatileMemory(Address, &Information, 0x40uLL);
            goto LABEL_1171;
          }
LABEL_1136:
          RtlCopyToUser(v60, SchedulerSharedSystemSlot, v58);
          goto LABEL_1171;
        }
        v94 = 8 * v18;
        Size = v94;
        if ( (unsigned int)Length >= 8 )
        {
          v95 = (unsigned int)Length < v94;
          if ( (unsigned int)Length < v94 )
          {
            v210 = (unsigned int)Length >> 3;
            v95 = (unsigned int)Length < v94;
          }
          ProcessorTopologyCount = v95 ? 0xC0000004 : 0;
          LOBYTE(v14) = 1;
          KeFlushProcessWriteBuffers(v14);
          for ( m = 0; ; m = HIDWORD(v211) + 1 )
          {
            HIDWORD(v211) = m;
            if ( m >= v210 )
              break;
            ProcNumber.Group = (unsigned __int16)P;
            ProcNumber.Number = m;
            ProcNumber.Reserved = 0;
            *v8++ = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 24) + 72LL);
            v236 = v8;
          }
          goto LABEL_1171;
        }
LABEL_464:
        ProcessorTopologyCount = -1073741789;
        goto LABEL_1171;
      }
      if ( a1 <= 92 )
      {
        if ( a1 == 92 )
        {
          if ( !PreviousMode )
            return -1073741637;
          if ( (_DWORD)Length != 40 )
          {
            if ( a7 )
              *a7 = 40;
            return -1073741820;
          }
          ProcessorTopologyCount = VfGetVerifierInformationEx(Address);
          v53 = ((ProcessorTopologyCount >> 31) & 0xFFFFFFD8) + 40;
          goto LABEL_518;
        }
        v97 = a1 - 86;
        if ( !v97 )
        {
          SystemProcessorFeaturesInformation = ObQueryRefTraceInformation(Address, (unsigned int)Length, &Size);
          goto LABEL_1170;
        }
        v98 = v97 - 1;
        if ( !v98 )
        {
          Size = 8;
          if ( (_DWORD)Length == 8 )
          {
            *Address = MmSpecialPoolTag;
            Address[1] = MmSpecialPoolCatchOverruns != 0;
            goto LABEL_1171;
          }
          goto LABEL_395;
        }
        v99 = v98 - 1;
        if ( v99 )
        {
          v100 = v99 - 2;
          if ( v100 )
          {
            if ( v100 != 1 )
              return -1073741821;
            SystemProcessorFeaturesInformation = HvlQueryEnlightenmentInfo(Address, Length, PreviousMode, &Size);
            goto LABEL_1170;
          }
          Size = 32;
          if ( (unsigned int)Length < 0x14 )
          {
            if ( !a7 )
              return -1073741820;
            if ( !PreviousMode )
            {
              *a7 = 32;
              return -1073741820;
            }
            goto LABEL_756;
          }
          if ( PreviousMode )
            RtlCopyToUser(Address, &ExpSysDbgLock.SuspendEvent.Header.WaitListHead.Blink, 0x10uLL);
          else
            RtlCopyVolatileMemory(Address, &ExpSysDbgLock.SuspendEvent.Header.WaitListHead.Blink, 0x10uLL);
          v101 = Address + 4;
          if ( PreviousMode )
            RtlWriteULongToUser(v101, (int)ExpSysDbgLock.ThreadListEntry.Blink);
          else
            RtlCopyVolatileMemory(v101, &ExpSysDbgLock.ThreadListEntry.Blink, 4uLL);
          if ( (unsigned int)Length < Size )
          {
LABEL_220:
            Size = 20;
            goto LABEL_1171;
          }
          if ( PreviousMode )
            RtlWriteULong64ToUser((_QWORD *)Address + 3, (__int64)ExpSysDbgLock.MutantListHead.Flink);
          else
            *((_QWORD *)Address + 3) = ExpSysDbgLock.MutantListHead.Flink;
        }
        else
        {
          *(_OWORD *)ProcessId = 0LL;
          v226 = 0LL;
          Size = 24;
          if ( (_DWORD)Length != 24 )
            goto LABEL_395;
          if ( PreviousMode )
            RtlCopyFromUser(ProcessId, Address, 0x18uLL);
          else
            RtlCopyVolatileMemory(ProcessId, Address, 0x18uLL);
          if ( LOWORD(ProcessId[1]) || (BYTE2(ProcessId[1]) & 1) != 0 )
            return -1073741811;
          if ( PreviousMode )
            ProbeForRead(v226, WORD1(ProcessId[1]), 2u);
          CurrentThread = KeGetCurrentThread();
          LODWORD(P) = WORD1(ProcessId[1]);
          --CurrentThread->KernelApcDisable;
          ProcessorTopologyCount = PsLookupProcessByProcessId(ProcessId[0], &Process);
          if ( ProcessorTopologyCount < 0 )
          {
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v103);
            return ProcessorTopologyCount;
          }
          ProcessorTopologyCount = PsQueryFullProcessImageName(
                                     (__int64)Process,
                                     Address + 2,
                                     (void *)v226,
                                     (unsigned int *)&P,
                                     PreviousMode);
          ObfDereferenceObjectWithTag(Process, 0x746C6644u);
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v104);
          if ( ProcessorTopologyCount == -1073741820 )
          {
            if ( PreviousMode )
              RtlWriteUShortToUser((_WORD *)Address + 5, (__int16)P);
            else
              *((_WORD *)Address + 5) = (_WORD)P;
          }
        }
        goto LABEL_1171;
      }
      v105 = a1 - 95;
      if ( !v105 )
        return -1073741637;
      v106 = v105 - 1;
      if ( !v106 )
        return -1073741822;
      v107 = v106 - 2;
      if ( v107 )
      {
        v108 = v107 - 1;
        if ( v108 )
        {
          if ( v108 != 1 )
            return -1073741821;
          *(_OWORD *)Object = 0LL;
          LOWORD(Object[1]) = (_WORD)P;
          Object[0] = (PVOID)KeQueryGroupAffinity((USHORT)P);
          v218[0] = (PVOID)__popcnt((unsigned __int64)Object[0]);
          ProcessorTopologyCount = PpmCapturePerformanceDistribution(0LL, 0, (int)v218[0], (__int64)Object, &v213);
          if ( ProcessorTopologyCount != -1073741820 )
            goto LABEL_1171;
          v53 = v213;
          if ( v213 > (unsigned int)Length )
          {
            ProcessorTopologyCount = -1073741820;
            goto LABEL_518;
          }
          v109 = (_DWORD *)ExAllocatePool2(0x40uLL);
          P = v109;
          if ( !v109 )
            goto LABEL_520;
          ProcessorTopologyCount = PpmCapturePerformanceDistribution(
                                     (unsigned __int64)v109,
                                     v213,
                                     (int)v218[0],
                                     (__int64)Object,
                                     &Size);
          if ( ProcessorTopologyCount >= 0 )
          {
            if ( PreviousMode )
              RtlCopyToUser(Address, v109, Size);
            else
              RtlCopyVolatileMemory(Address, v109, Size);
          }
          v110 = 1951223888;
          goto LABEL_526;
        }
        v112 = 99;
      }
      else
      {
        v112 = 98;
      }
LABEL_529:
      SystemProcessorFeaturesInformation = IoQuerySystemDeviceName(v112, (__int64)Address);
      goto LABEL_1170;
    }
    if ( a1 <= 116 )
    {
      if ( a1 == 116 )
      {
        SystemProcessorFeaturesInformation = IoQueryLowPriorityIoInformation(
                                               v14,
                                               Address,
                                               (unsigned int)Length,
                                               &Size,
                                               PreviousMode);
        goto LABEL_1170;
      }
      if ( a1 > 108 )
      {
        v129 = a1 - 109;
        if ( !v129 )
        {
          LOBYTE(v9) = PreviousMode;
          SystemProcessorFeaturesInformation = SmQueryStoreInformation(v14, Address, (unsigned int)Length, v9, &Size);
          goto LABEL_1170;
        }
        v130 = v129 - 3;
        if ( !v130 )
        {
          SystemProcessorFeaturesInformation = IoQueryVhdBootInformation(v14, Address, Length, &Size, PreviousMode);
          goto LABEL_1170;
        }
        v131 = v130 - 1;
        if ( !v131 )
        {
          SystemProcessorFeaturesInformation = PsQueryCpuQuotaInformation(
                                                 Address,
                                                 (unsigned int)Length,
                                                 PreviousMode,
                                                 &Size);
          goto LABEL_1170;
        }
        v132 = v131 - 1;
        if ( !v132 )
          goto LABEL_595;
        if ( v132 != 1 )
          return -1073741821;
        if ( !(_DWORD)v211 )
        {
          Size = 8;
          if ( (unsigned int)Length >= 8 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(Address, DbgkErrorPortStartTimeout);
            else
              *Address = DbgkErrorPortStartTimeout;
            if ( PreviousMode )
              RtlWriteULongToUser(Address + 1, DbgkErrorPortCommTimeout);
            else
              Address[1] = DbgkErrorPortCommTimeout;
            goto LABEL_1171;
          }
        }
        goto LABEL_395;
      }
      switch ( a1 )
      {
        case 'l':
          v125 = 8 * v18;
          Size = 8 * v18;
          if ( (unsigned int)Length >= 8 )
          {
            v126 = (unsigned int)Length < v125;
            if ( (unsigned int)Length < v125 )
            {
              v18 = (unsigned int)Length >> 3;
              v210 = (unsigned int)Length >> 3;
              v126 = (unsigned int)Length < v125;
            }
            ProcessorTopologyCount = v126 ? 0xC0000004 : 0;
            for ( n = 0; n < v18; ++n )
            {
              ProcNumber.Group = (unsigned __int16)P;
              ProcNumber.Number = n;
              ProcNumber.Reserved = 0;
              v128 = *(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 34680);
              if ( PreviousMode )
                RtlWriteULong64ToUser(v8, v128);
              else
                *v8 = v128;
              ++v8;
              v18 = v210;
            }
            goto LABEL_1171;
          }
          goto LABEL_464;
        case 'f':
          v66 = 432;
          if ( (unsigned int)Length < 0x1B0 )
          {
            if ( a7 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a7, 432);
              else
                *a7 = 432;
            }
            return -1073741820;
          }
          Blink = PsGetCurrentServerSiloGlobals()[76].Blink;
          ExAcquireTimeRefreshLockShared(v120, v119, v121, v122);
          p_Information = &Information;
          v124 = 3LL;
          do
          {
            *(struct _LIST_ENTRY *)&p_Information->Relationship = *Blink;
            *(struct _LIST_ENTRY *)&p_Information->Group.Reserved[4] = Blink[1];
            *(struct _LIST_ENTRY *)&p_Information->Group.GroupInfo[0].MaximumProcessorCount = Blink[2];
            *(struct _LIST_ENTRY *)&p_Information->Group.GroupInfo[0].Reserved[14] = Blink[3];
            *(struct _LIST_ENTRY *)&p_Information->Group.GroupInfo[0].Reserved[30] = Blink[4];
            *(struct _LIST_ENTRY *)&p_Information[1].Relationship = Blink[5];
            *(struct _LIST_ENTRY *)&p_Information[1].Group.Reserved[4] = Blink[6];
            p_Information = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)((char *)p_Information + 128);
            *(struct _LIST_ENTRY *)&p_Information[-1].Group.GroupInfo[0].Reserved[30] = Blink[7];
            Blink += 8;
            --v124;
          }
          while ( v124 );
          *(struct _LIST_ENTRY *)&p_Information->Relationship = *Blink;
          *(struct _LIST_ENTRY *)&p_Information->Group.Reserved[4] = Blink[1];
          *(struct _LIST_ENTRY *)&p_Information->Group.GroupInfo[0].MaximumProcessorCount = Blink[2];
          ExReleaseTimeRefreshLockShared();
          v72 = 432LL;
          v73 = Address;
          if ( !PreviousMode )
          {
            RtlCopyVolatileMemory(Address, &Information, 0x1B0uLL);
            goto LABEL_316;
          }
          goto LABEL_314;
        case 'g':
          SystemProcessorFeaturesInformation = SeCodeIntegrityQueryInformation((__int64)Address, (unsigned int)Length);
          goto LABEL_1170;
      }
      if ( a1 != 105 )
      {
        if ( a1 == 106 )
        {
          ProcessorTopologyCount = -1073741821;
          goto LABEL_1171;
        }
        if ( a1 != 107 )
          return -1073741821;
LABEL_542:
        v113 = &Information;
        P = &Information;
        v114 = 80;
        v213 = 80;
        if ( (unsigned int)Length < 0x50 )
        {
          v114 = Length;
          v213 = Length;
        }
        Size = v114;
        p_ProcNumber = &ProcNumber;
        if ( a1 != 231 )
          p_ProcNumber = 0LL;
        for ( v218[0] = p_ProcNumber; ; p_ProcNumber = (_PROCESSOR_NUMBER *)v218[0] )
        {
          v116 = KeQueryLogicalProcessorRelationship(p_ProcNumber, RelationshipType[0], v113, &Size);
          ProcessorTopologyCount = v116;
          if ( v116 >= 0 )
            break;
          if ( v116 != -1073741820 )
            goto LABEL_1096;
          if ( Size > (unsigned int)Length )
          {
            ProcessorTopologyCount = -1073741820;
            goto LABEL_1096;
          }
          if ( P && P != &Information )
            ExFreePoolWithTag(P, 0);
          v113 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePool2(0x101uLL);
          P = v113;
          if ( !v113 )
          {
            ProcessorTopologyCount = -1073741670;
            goto LABEL_1096;
          }
          v213 = Size;
        }
        if ( PreviousMode )
          RtlCopyToUser(Address, P, Size);
        else
          RtlCopyVolatileMemory(Address, P, Size);
        ProcessorTopologyCount = 0;
LABEL_1096:
        if ( !P || P == &Information )
          goto LABEL_1171;
        v110 = 0;
        v111 = (char *)P;
        goto LABEL_527;
      }
      ProcessorTopologyCount = guard_dispatch_icall_no_overrides(23LL, 0LL);
      if ( ProcessorTopologyCount != -1073741820 )
        goto LABEL_439;
      if ( (unsigned int)Length >= v213 && Address )
      {
        if ( PreviousMode )
        {
          v109 = (_DWORD *)ExAllocatePool2(0x101uLL);
          P = v109;
          if ( !v109 )
            goto LABEL_520;
        }
        else
        {
          v109 = Address;
          P = Address;
        }
        v117 = guard_dispatch_icall_no_overrides(23LL, v213);
        ProcessorTopologyCount = v117;
        if ( !PreviousMode )
          goto LABEL_1171;
        if ( v117 < 0 )
          goto LABEL_561;
LABEL_560:
        memmove(Address, v109, Size);
LABEL_561:
        v110 = 1868983881;
LABEL_526:
        v111 = (char *)v109;
        goto LABEL_527;
      }
      goto LABEL_562;
    }
    if ( a1 <= 122 )
    {
      if ( a1 != 122 )
      {
        if ( a1 == 117 )
        {
          Size = 1096;
          if ( (_DWORD)Length == 1096 )
          {
            if ( !PreviousMode )
            {
              SystemProcessorFeaturesInformation = ExQueryBootEntropyInformation(Address, v20);
              goto LABEL_1170;
            }
            return -1073741790;
          }
          goto LABEL_395;
        }
        if ( a1 == 118 )
        {
          if ( !PreviousMode )
            return -1073741637;
          if ( (unsigned int)Length < 0x110 )
          {
            if ( a7 )
              *a7 = 272;
            return -1073741820;
          }
          v75 = 1;
          goto LABEL_334;
        }
        if ( a1 != 119 && a1 != 120 )
        {
          v133 = 4 * (unsigned __int16)KeNumberNodes;
          Size = v133;
          if ( (unsigned int)Length >= v133 )
          {
            v58 = v133;
            SchedulerSharedSystemSlot = (char *)KeNodeDistance
                                      + 4 * (unsigned __int16)KeNumberNodes * (unsigned __int16)v20;
            v60 = Address;
            if ( !PreviousMode )
            {
              RtlCopyVolatileMemory(Address, SchedulerSharedSystemSlot, v133);
              goto LABEL_1171;
            }
            goto LABEL_1136;
          }
          goto LABEL_395;
        }
        v40 = 2;
        goto LABEL_614;
      }
      Size = 8;
      if ( (_DWORD)Length != 8 || !Address )
        goto LABEL_395;
      v109 = (_DWORD *)ExAllocatePool2(0x101uLL);
      v218[0] = v109;
      if ( v109 )
      {
        ProcessorTopologyCount = guard_dispatch_icall_no_overrides(26LL, 8LL);
        if ( ProcessorTopologyCount >= 0 )
        {
          Information.Relationship = *v109;
          v134 = v109[1] & 1 | Information.Size & 0xFFFFFFFE;
          Information.Size = v134 ^ (v109[1] ^ v134) & 2 ^ (v109[1] ^ v134 ^ (v109[1] ^ v134) & 2) & 4;
          if ( PreviousMode )
            RtlWriteULong64ToUser(Address, *(__int64 *)&Information.Relationship);
          else
            RtlCopyVolatileMemory(Address, &Information, 8uLL);
        }
        goto LABEL_561;
      }
LABEL_520:
      ProcessorTopologyCount = -1073741670;
      goto LABEL_1171;
    }
    switch ( a1 )
    {
      case '{':
        v29 = 32;
        if ( (_DWORD)Length == 32 )
        {
          v138 = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
          *(_QWORD *)&Information.Relationship = MmGetAvailablePages(v138);
          *(_QWORD *)&Information.Processor.Flags = MmGetTotalCommittedPages(v139);
          *(_QWORD *)&Information.Group.Reserved[4] = MmGetTotalCommitLimit(v140);
          PeakCommitment = MmGetPeakCommitment(v141);
          *(_QWORD *)&Information.Group.Reserved[12] = PeakCommitment;
          if ( PeakCommitment < *(_QWORD *)&Information.Processor.Flags )
            PeakCommitment = *(_QWORD *)&Information.Processor.Flags;
          *(_QWORD *)&Information.Group.Reserved[12] = PeakCommitment;
          v34 = 32LL;
          v35 = Address;
          if ( !PreviousMode )
          {
            RtlCopyVolatileMemory(Address, &Information, 0x20uLL);
            goto LABEL_669;
          }
          goto LABEL_781;
        }
        if ( !a7 )
          return -1073741820;
        if ( !PreviousMode )
        {
          *a7 = 32;
          return -1073741820;
        }
        goto LABEL_756;
      case '|':
        Size = 12;
        if ( (unsigned int)Length < 4 )
          goto LABEL_395;
        v235 = *Address;
        if ( v235 == 1 )
        {
          if ( (unsigned int)Length >= 0xC )
          {
            Address[2] = 0;
            Address[1] = 0;
            Address[2] = 1;
            Address[1] = 1;
            if ( MEMORY[0xFFFFF780000003C6] )
              Address[1] &= ~1u;
            goto LABEL_1171;
          }
          goto LABEL_395;
        }
        goto LABEL_439;
      case '}':
        return -1073741821;
      case '~':
        Size = 32;
        if ( (_DWORD)Length == 32 )
        {
          ProcessorTopologyCount = BgkQueryBootGraphicsInformation(0LL, &Information);
          if ( ProcessorTopologyCount >= 0 )
          {
            v137 = *(_QWORD *)&Information.Relationship;
            if ( PreviousMode )
              v137 = 0LL;
            *(_QWORD *)&Information.Relationship = v137;
            memmove(Address, &Information, Size);
          }
          goto LABEL_1171;
        }
        goto LABEL_395;
    }
    if ( a1 != 128 )
      return -1073741821;
    goto LABEL_644;
  }
  if ( a1 == 65 )
  {
    if ( (unsigned int)Length < 4 )
    {
      if ( a7 )
        *a7 = 4;
      return -1073741820;
    }
    v85 = 0;
    if ( v18 )
    {
      v86 = KiProcessorBlock;
      v87 = v18;
      do
      {
        v85 += *(_DWORD *)(*v86++ + 34812);
        --v87;
      }
      while ( v87 );
    }
    *Address = v85;
    goto LABEL_169;
  }
  if ( a1 > 25 )
  {
    if ( a1 <= 51 )
    {
      if ( a1 != 51 )
      {
        if ( a1 <= 37 )
        {
          if ( a1 == 37 )
          {
            if ( (unsigned int)Length >= 0x10 )
            {
              LOBYTE(v20) = PreviousMode;
              SystemProcessorFeaturesInformation = CmQueryRegistryQuotaInformation(
                                                     (__int64)Address,
                                                     v20,
                                                     v15,
                                                     (__int64)v9);
              Size = 16;
              goto LABEL_1170;
            }
            if ( !a7 )
              return -1073741820;
            if ( !PreviousMode )
            {
              *a7 = 16;
              return -1073741820;
            }
          }
          else
          {
            v44 = a1 - 28;
            if ( !v44 )
            {
              if ( (_DWORD)Length == 12 || (_DWORD)Length == 24 )
              {
                ExAcquireTimeRefreshLockShared(v14, v20, v15, v9);
                v61 = KeTimeAdjustmentFrequency;
                LOBYTE(Size_4[0]) = KeTimeSynchronization;
                ExReleaseTimeRefreshLockShared();
                if ( (_DWORD)Length == 24 )
                {
                  *(_QWORD *)&Information.Relationship = v61;
                  *(_QWORD *)&Information.Processor.Flags = MEMORY[0xFFFFF78000000300];
                  Information.Processor.Reserved[6] = Size_4[0];
                }
                else
                {
                  Information.Relationship = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement / v61;
                  Information.Size = KeMaximumIncrement;
                  Information.Processor.Flags = Size_4[0];
                }
                v27 = (unsigned int)Length;
                v28 = Address;
                if ( PreviousMode )
                {
LABEL_136:
                  RtlCopyToUser(v28, &Information, v27);
LABEL_138:
                  Size = Length;
                  goto LABEL_1171;
                }
LABEL_137:
                RtlCopyVolatileMemory(Address, &Information, (unsigned int)Length);
                goto LABEL_138;
              }
              if ( !a7 )
                return -1073741820;
              if ( !PreviousMode )
              {
                *a7 = 12;
                return -1073741820;
              }
LABEL_384:
              RtlWriteULongToUser(a7, 12);
              return -1073741820;
            }
            v45 = v44 - 1;
            if ( !v45 )
              return -1073741822;
            v46 = v45 - 2;
            if ( !v46 )
            {
              SystemProcessorFeaturesInformation = EtwQueryPerformanceTraceInformation(
                                                     Address,
                                                     Length,
                                                     PreviousMode,
                                                     &Size);
              goto LABEL_1170;
            }
            v47 = v46 - 2;
            if ( v47 )
            {
              v48 = v47 - 2;
              if ( v48 )
              {
                if ( v48 != 1 )
                  return -1073741821;
                v49 = 48;
                if ( (unsigned int)Length < 0x30 )
                {
                  if ( !a7 )
                    return -1073741820;
                  if ( !PreviousMode )
                  {
                    *a7 = 48;
                    return -1073741820;
                  }
                  goto LABEL_690;
                }
                v50 = 0;
                if ( v18 )
                {
                  v51 = KiProcessorBlock;
                  v52 = v18;
                  do
                  {
                    v50 += *(_DWORD *)(*v51++ + 11580);
                    --v52;
                  }
                  while ( v52 );
                }
                *Address = v50;
                Address[1] = KeThreadSwitchCounters;
                Address[2] = dword_140F26F88;
                Address[3] = dword_140F26F84;
                Address[4] = dword_140F26F8C;
                Address[5] = dword_140F26F90;
                Address[6] = dword_140F26F98;
                Address[7] = dword_140F26F94;
                Address[8] = dword_140F26F9C;
                Address[9] = dword_140F26FA0;
                Address[10] = dword_140F26FA4;
                Address[11] = dword_140F26FA8;
LABEL_741:
                Size = v49;
                goto LABEL_1171;
              }
              if ( (unsigned int)Length < 2 )
              {
                if ( a7 )
                {
                  if ( PreviousMode )
                    RtlWriteULongToUser(a7, 2);
                  else
                    *a7 = 2;
                }
                return -1073741820;
              }
              if ( PreviousMode )
                RtlWriteUCharToUser(Address, (char)KdDebuggerEnabled);
              else
                *(_BYTE *)Address = (_BYTE)KdDebuggerEnabled;
              if ( PreviousMode )
                RtlWriteUCharToUser((_BYTE *)Address + 1, (char)KdDebuggerNotPresent);
              else
                *((_BYTE *)Address + 1) = (_BYTE)KdDebuggerNotPresent;
              v53 = 2;
LABEL_518:
              Size = v53;
              goto LABEL_1171;
            }
            if ( (unsigned int)Length >= 0x10 )
            {
              Size = 16;
              v54 = RelationProcessorCore;
              v55 = 0;
              if ( v18 )
              {
                v56 = KiProcessorBlock;
                v57 = v18;
                do
                {
                  v54 += *(_DWORD *)(*v56 + 35832);
                  v55 += *(_DWORD *)(*v56++ + 34416);
                  --v57;
                }
                while ( v57 );
              }
              Information.Relationship = v54;
              Information.Size = v55;
              *(_QWORD *)&Information.Processor.Flags = 0LL;
              v58 = 16LL;
              SchedulerSharedSystemSlot = (char *)&Information;
              v60 = Address;
              if ( !PreviousMode )
              {
                RtlCopyVolatileMemory(Address, &Information, 0x10uLL);
                goto LABEL_1171;
              }
              goto LABEL_1136;
            }
            if ( !a7 )
              return -1073741820;
            if ( !PreviousMode )
            {
              *a7 = 16;
              return -1073741820;
            }
          }
LABEL_355:
          RtlWriteULongToUser(a7, 16);
          return -1073741820;
        }
        v62 = a1 - 42;
        if ( v62 )
        {
          v63 = v62 - 1;
          if ( !v63 )
          {
            if ( (unsigned int)Length < 0x18 )
            {
              if ( a7 )
                *a7 = 24;
              return -1073741820;
            }
            Size = Length;
            SystemProcessorFeaturesInformation = ExpQueryLegacyDriverInformation((__int64)Address, &Size);
            goto LABEL_1170;
          }
          v64 = v63 - 1;
          if ( v64 )
          {
            v65 = v64 - 1;
            if ( !v65 )
            {
              SystemProcessorFeaturesInformation = ExpGetLookasideInformation(
                                                     (__int64)Address,
                                                     (unsigned int)Length,
                                                     &Size);
              goto LABEL_1170;
            }
            if ( v65 != 5 )
              return -1073741821;
            if ( (_DWORD)Length != 8 )
            {
              if ( !a7 )
                return -1073741820;
              if ( !PreviousMode )
              {
                *a7 = 8;
                return -1073741820;
              }
              goto LABEL_302;
            }
            if ( PreviousMode )
              RtlWriteULong64ToUser(Address, 0xFFFF800000000000uLL);
            else
              *(_QWORD *)Address = 0xFFFF800000000000uLL;
LABEL_1022:
            Size = 8;
            goto LABEL_1171;
          }
          v66 = 172;
          if ( (unsigned int)Length < 0xAC )
          {
            if ( a7 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a7, 172);
              else
                *a7 = 172;
            }
            return -1073741820;
          }
          v67 = PsGetCurrentServerSiloGlobals()[76].Blink;
          ExAcquireTimeRefreshLockShared(v69, v68, v70, v71);
          *(struct _LIST_ENTRY *)&Information.Relationship = *v67;
          *(struct _LIST_ENTRY *)&Information.Group.Reserved[4] = v67[1];
          *(struct _LIST_ENTRY *)&Information.Group.GroupInfo[0].MaximumProcessorCount = v67[2];
          *(struct _LIST_ENTRY *)&Information.Group.GroupInfo[0].Reserved[14] = v67[3];
          *(struct _LIST_ENTRY *)&Information.Group.GroupInfo[0].Reserved[30] = v67[4];
          v244 = v67[5];
          v245 = v67[6];
          v246 = v67[7];
          v67 += 8;
          v247 = *v67;
          v248 = v67[1];
          Flink = v67[2].Flink;
          v250 = (int)v67[2].Blink;
          ExReleaseTimeRefreshLockShared();
          v72 = 172LL;
          v73 = Address;
          if ( !PreviousMode )
          {
            RtlCopyVolatileMemory(Address, &Information, 0xACuLL);
            goto LABEL_316;
          }
LABEL_314:
          RtlCopyToUser(v73, &Information, v72);
LABEL_316:
          Size = v66;
          goto LABEL_317;
        }
        Size = 48 * v18;
        if ( (unsigned int)Length >= 48 * v18 )
        {
          for ( ii = 0; ii < v18; ++ii )
          {
            ProcNumber.Group = (unsigned __int16)P;
            ProcNumber.Number = ii;
            ProcNumber.Reserved = 0;
            PoGetIdleTimes(&ProcNumber, (__int64)&Information, 0LL);
            if ( PreviousMode )
              RtlCopyToUser(v8, &Information, 0x30uLL);
            else
              RtlCopyVolatileMemory(v8, &Information, 0x30uLL);
            v8 += 6;
            v18 = v210;
          }
          goto LABEL_1171;
        }
        goto LABEL_395;
      }
      if ( !PreviousMode )
        return -1073741637;
      if ( (unsigned int)Length < 0x90 )
      {
        if ( a7 )
          *a7 = 144;
        return -1073741820;
      }
      v75 = 0;
LABEL_334:
      SystemProcessorFeaturesInformation = VfGetVerifierInformation(Address, (unsigned int)Length, &Size, v75);
      goto LABEL_1170;
    }
    if ( a1 > 59 )
    {
      v79 = a1 - 60;
      if ( !v79 )
      {
        SystemProcessorFeaturesInformation = ExpQueryNumaAvailableMemory(Address, Length, &Size, PreviousMode);
        goto LABEL_1170;
      }
      v80 = v79 - 1;
      if ( v80 )
      {
        v81 = v80 - 1;
        if ( !v81 )
        {
          if ( (_DWORD)Length != 64 )
          {
            if ( !a7 )
              return -1073741820;
            if ( !PreviousMode )
            {
              *a7 = 64;
              return -1073741820;
            }
            goto LABEL_194;
          }
          SystemProcessorFeaturesInformation = ExpGetSystemEmulationBasicInformation(Address, PreviousMode);
          goto LABEL_393;
        }
        v82 = v81 - 1;
        if ( !v82 )
        {
          if ( (unsigned int)Length < 0xC )
          {
            if ( a7 )
            {
              if ( !PreviousMode )
              {
                *a7 = 12;
                return -1073741820;
              }
              goto LABEL_384;
            }
            return -1073741820;
          }
          SystemProcessorFeaturesInformation = ExpGetSystemEmulationProcessorInformation((__int64)Address);
LABEL_153:
          Size = 12;
          goto LABEL_1170;
        }
        if ( v82 != 1 )
          return -1073741821;
        if ( (unsigned int)Length < 0x38 )
        {
          if ( !a7 )
            return -1073741820;
          if ( !PreviousMode )
          {
            *a7 = 56;
            return -1073741820;
          }
          goto LABEL_375;
        }
        if ( ((unsigned __int8)Address & 7) == 0 )
        {
          if ( !(unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v211 + 1) )
          {
            ChannelInformation = ExpGetHandleInformationEx(HIDWORD(v211), (__int64)Address, Length, &Size);
            v33 = 5;
            goto LABEL_160;
          }
          return -1073741790;
        }
        return -2147483646;
      }
      Size = 80 * v18;
      if ( (unsigned int)Length >= 80 * v18 )
      {
        v83 = 0;
        while ( 1 )
        {
          HIDWORD(v211) = v83;
          if ( v83 >= v18 )
            break;
          memset_0(v251, 0, 0x50uLL);
          ProcNumber.Group = (unsigned __int16)P;
          ProcNumber.Number = BYTE4(v211);
          ProcNumber.Reserved = 0;
          v84 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
          PoGetPerfStateAndParkingInfo(&ProcNumber, (__int64)&Information, 0LL, (unsigned __int64 *)Object);
          memset_0(v251, 0, 0x50uLL);
          v253 = KeMaximumIncrement
               * (unsigned __int64)(unsigned int)(*(_DWORD *)(v84 + 34372) + *(_DWORD *)(v84 + 34376));
          v254 = KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v84 + 24) + 652LL);
          if ( Information.Processor.Reserved[18] )
          {
            v251[0] = Information.Processor.Flags;
            v251[7] = Information.Processor.Reserved[2];
            v251[8] = Information.Processor.Reserved[6];
            v252 = 1;
          }
          v255 = Object[0];
          if ( PreviousMode )
            RtlCopyToUser(v8, v251, 0x50uLL);
          else
            RtlCopyVolatileMemory(v8, v251, 0x50uLL);
          v8 += 10;
          v83 = HIDWORD(v211) + 1;
          v18 = v210;
        }
        goto LABEL_1171;
      }
      goto LABEL_395;
    }
    switch ( a1 )
    {
      case ';':
        if ( (_DWORD)Length != 4 )
        {
          if ( !a7 )
            return -1073741820;
          if ( !PreviousMode )
          {
            *a7 = 4;
            return -1073741820;
          }
          goto LABEL_345;
        }
        if ( MEMORY[0xFFFFF780000002E0] == -1 )
        {
          result = ExpReadComPlusPackage(v14, v20);
          ProcessorTopologyCount = result;
          if ( result < 0 )
            return result;
        }
        if ( PreviousMode )
          RtlWriteULongToUser(Address, MEMORY[0xFFFFF780000002E0]);
        else
          *Address = MEMORY[0xFFFFF780000002E0];
        goto LABEL_169;
      case '5':
        if ( (unsigned int)Length >= 0x10 )
        {
          v220 = *Address;
          v77 = (volatile void *)*((_QWORD *)Address + 1);
          v239 = v77;
          v78 = Address[1];
          v233 = v78;
          ProbeForWrite(v77, v78, 4u);
          SystemProcessorFeaturesInformation = ExpGetProcessInformation((char *)v77, v78, &Size, &v220, 5);
          goto LABEL_1170;
        }
        if ( !a7 )
          return -1073741820;
        if ( !PreviousMode )
        {
          *a7 = 16;
          return -1073741820;
        }
        goto LABEL_355;
      case '7':
        SystemProcessorFeaturesInformation = ExpQueryNumaProcessorMap(Address, Length, PreviousMode, &Size);
        goto LABEL_1170;
      case '8':
        SystemProcessorFeaturesInformation = PfSnQueryPrefetcherInformation(0LL, Address, Length, PreviousMode, &Size);
        goto LABEL_1170;
    }
    if ( a1 != 57 )
    {
      if ( a1 != 58 )
        return -1073741821;
      if ( (unsigned int)Length < 4 )
      {
        if ( !a7 )
          return -1073741820;
        if ( !PreviousMode )
        {
          *a7 = 4;
          return -1073741820;
        }
        goto LABEL_345;
      }
      RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
      if ( PreviousMode )
        RtlWriteULongToUser(Address, RecommendedSharedDataAlignment);
      else
        *Address = RecommendedSharedDataAlignment;
LABEL_169:
      Size = 4;
      goto LABEL_1171;
    }
LABEL_124:
    if ( (unsigned int)Feature_3336553784__private_IsEnabledDeviceUsageNoInline()
      && a1 == 253
      && (unsigned int)Length < 0xC )
    {
      if ( a7 )
      {
        if ( !PreviousMode )
        {
          *a7 = 12;
          return -1073741820;
        }
        goto LABEL_384;
      }
      return -1073741820;
    }
    SystemProcessorFeaturesInformation = ExpGetProcessInformation((char *)Address, Length, &Size, 0LL, a1);
    goto LABEL_1170;
  }
  if ( a1 == 25 )
    return -1073741822;
  if ( a1 > 12 )
  {
    if ( a1 <= 18 )
    {
      if ( a1 != 18 )
      {
        v36 = a1 - 13;
        if ( v36 )
        {
          v37 = v36 - 1;
          if ( v37 )
          {
            v38 = v37 - 1;
            if ( v38 )
            {
              v39 = v38 - 1;
              if ( v39 )
              {
                if ( v39 != 1 )
                  return -1073741821;
                if ( (unsigned int)Length >= 0x40 )
                {
                  if ( !(unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v211 + 1) )
                  {
                    ChannelInformation = ExpGetObjectInformation(SHIDWORD(v211), (__int64)Address, Length, &Size);
                    v33 = 6;
                    goto LABEL_160;
                  }
                  return -1073741790;
                }
                if ( !a7 )
                  return -1073741820;
                if ( !PreviousMode )
                {
                  *a7 = 64;
                  return -1073741820;
                }
LABEL_194:
                RtlWriteULongToUser(a7, 64);
                return -1073741820;
              }
              if ( (unsigned int)Length < 0x20 )
              {
                if ( !a7 )
                  return -1073741820;
                if ( !PreviousMode )
                {
                  *a7 = 32;
                  return -1073741820;
                }
                goto LABEL_756;
              }
              if ( ((unsigned __int8)Address & 7) == 0 )
              {
                if ( !(unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v211 + 1) )
                {
                  ChannelInformation = ExpGetHandleInformation(HIDWORD(v211), (__int64)Address, Length, &Size);
                  v33 = 4;
                  goto LABEL_160;
                }
                return -1073741790;
              }
              return -2147483646;
            }
          }
        }
LABEL_206:
        ProcessorTopologyCount = -1073741822;
        goto LABEL_1171;
      }
LABEL_719:
      v143 = 32;
      if ( a1 != 18 )
        v143 = 40;
      Size = v143;
      if ( (unsigned int)Length < v143 )
      {
        if ( a7 )
        {
          if ( PreviousMode )
            RtlWriteULongToUser(a7, v143);
          else
            *a7 = v143;
        }
        return -1073741820;
      }
      Size = 0;
      SystemProcessorFeaturesInformation = MmGetPageFileInformation(
                                             (ULONG **)0xFFFFFFFFFFFFFFFFLL,
                                             (int *)Address,
                                             Length,
                                             PreviousMode,
                                             a1 == 144,
                                             &Size);
      goto LABEL_1170;
    }
    if ( a1 == 19 )
      goto LABEL_206;
    v40 = 2;
    if ( a1 != 21 )
    {
      if ( a1 != 22 )
      {
        if ( a1 != 23 )
        {
          if ( a1 != 24 )
            return -1073741821;
          if ( (_DWORD)Length != 20 )
          {
            if ( a7 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a7, 20);
              else
                *a7 = 20;
            }
            return -1073741820;
          }
          Information.Size = KiMaximumDpcQueueDepth;
          *(_QWORD *)&Information.Processor.Flags = __PAIR64__(KiAdjustDpcThreshold, KiMinimumDpcRate);
          Information.Cache.Type = KiIdealDpcRate;
          if ( PreviousMode )
            RtlCopyToUser(Address, &Information, 0x14uLL);
          else
            RtlCopyVolatileMemory(Address, &Information, 0x14uLL);
          goto LABEL_220;
        }
        Size = 24 * v18;
        if ( (unsigned int)Length < 24 * v18 )
        {
          if ( a7 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a7, 24 * v18);
            else
              *a7 = Size;
          }
          return -1073741820;
        }
        for ( jj = 0; jj < v18; ++jj )
        {
          ProcNumber.Group = (unsigned __int16)P;
          ProcNumber.Number = jj;
          ProcNumber.Reserved = 0;
          v42 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
          Information.Relationship = *(_DWORD *)(v42 + 11580);
          Information.Size = *(_DWORD *)(v42 + 14428);
          Information.NumaNode.NodeNumber = *(_DWORD *)(v42 + 14508);
          *(_QWORD *)Information.Group.Reserved = (unsigned int)KeTimeIncrement;
          *(_DWORD *)&Information.Group.Reserved[8] = 0;
          if ( PreviousMode )
            RtlCopyToUser(v8, &Information, 0x18uLL);
          else
            RtlCopyVolatileMemory(v8, &Information, 0x18uLL);
          v8 += 3;
          v18 = v210;
        }
LABEL_317:
        ProcessorTopologyCount = 0;
        goto LABEL_1171;
      }
      if ( (unsigned int)Length < 0x30 )
      {
        if ( !a7 )
          return -1073741820;
        if ( !PreviousMode )
        {
          *a7 = 48;
          return -1073741820;
        }
        goto LABEL_690;
      }
      Feature_NoPrecisePoolTagQueries__private_ReportDeviceUsage();
      LOBYTE(v43) = PreviousMode;
      SystemProcessorFeaturesInformation = ExGetPoolTagInfo((_DWORD)Address, Length, (unsigned int)&Size, v43, 0);
LABEL_1170:
      ProcessorTopologyCount = SystemProcessorFeaturesInformation;
      goto LABEL_1171;
    }
    goto LABEL_614;
  }
  if ( a1 == 12 )
  {
    if ( (unsigned int)Length >= 0x38 )
    {
      if ( !(unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v211 + 1) )
      {
        ChannelInformation = ExpGetLockInformation(HIDWORD(v211), (__int64)Address, Length, &Size);
        v33 = 2;
        goto LABEL_160;
      }
      return -1073741790;
    }
    if ( !a7 )
      return -1073741820;
    if ( !PreviousMode )
    {
      *a7 = 56;
      return -1073741820;
    }
LABEL_375:
    RtlWriteULongToUser(a7, 56);
    return -1073741820;
  }
  if ( a1 > 6 )
  {
    if ( a1 != 7 )
    {
      if ( a1 != 8 )
      {
        if ( a1 != 9 )
        {
          if ( a1 == 10 )
            return -1073741822;
          if ( !(unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v211 + 1) )
          {
            ChannelInformation = ExpQueryModuleInformation(SHIDWORD(v211), Address, Length, PreviousMode, (int *)&Size);
            v33 = 0;
            goto LABEL_160;
          }
          return -1073741790;
        }
        if ( (_DWORD)Length != 4 )
        {
          if ( !a7 )
            return -1073741820;
          if ( !PreviousMode )
          {
            *a7 = 4;
            return -1073741820;
          }
LABEL_345:
          RtlWriteULongToUser(a7, 4);
          return -1073741820;
        }
        if ( PreviousMode )
          RtlWriteULongToUser(Address, NtGlobalFlag);
        else
          *Address = NtGlobalFlag;
        goto LABEL_169;
      }
      goto LABEL_727;
    }
    v29 = 24;
    if ( (_DWORD)Length != 24 )
    {
      if ( !a7 )
        return -1073741820;
      if ( !PreviousMode )
      {
        *a7 = 24;
        return -1073741820;
      }
      goto LABEL_173;
    }
    Information.Relationship = dword_140FD6828;
    *(_QWORD *)&Information.Size = qword_140FD682C;
    Information.Cache.CacheSize = qword_140FD6834;
    *(_QWORD *)&Information.Group.Reserved[4] = qword_140FD683C;
    v34 = 24LL;
    v35 = Address;
    if ( !PreviousMode )
    {
      RtlCopyVolatileMemory(Address, &Information, 0x18uLL);
      goto LABEL_669;
    }
LABEL_781:
    RtlCopyToUser(v35, &Information, v34);
    goto LABEL_669;
  }
  switch ( a1 )
  {
    case 6:
      return -1073741637;
    case 0:
LABEL_595:
      if ( (_DWORD)Length != 64 )
      {
        if ( !a7 )
          return -1073741820;
        if ( !PreviousMode )
        {
          *a7 = 64;
          return -1073741820;
        }
        goto LABEL_194;
      }
      SystemProcessorFeaturesInformation = ExpGetSystemBasicInformation(Address, PreviousMode);
LABEL_393:
      Size = 64;
      goto LABEL_1170;
    case 1:
      if ( (unsigned int)Length < 0xC )
      {
        if ( !a7 )
          return -1073741820;
        if ( !PreviousMode )
        {
          *a7 = 12;
          return -1073741820;
        }
        goto LABEL_384;
      }
      SystemProcessorFeaturesInformation = ExpGetSystemProcessorInformation(Address, PreviousMode);
      goto LABEL_153;
  }
  if ( a1 != 2 )
  {
    if ( a1 != 3 )
    {
      if ( a1 != 4 )
      {
        if ( a1 == 5 )
          goto LABEL_124;
        return -1073741821;
      }
      return -1073741822;
    }
    if ( (unsigned int)Length > 0x30 )
    {
      if ( !a7 )
        return -1073741820;
      if ( !PreviousMode )
      {
        *a7 = 48;
        return -1073741820;
      }
LABEL_690:
      RtlWriteULongToUser(a7, 48);
      return -1073741820;
    }
    KeQueryBootTimeValues(
      &Information.Processor.Flags,
      (LARGE_INTEGER *)&Information,
      &Information.Processor.GroupMask[0].Mask);
    v26 = PsGetCurrentServerSiloGlobals()[76].Blink;
    *(_QWORD *)&Information.Group.Reserved[4] = v26[27].Blink;
    *(_DWORD *)&Information.Group.Reserved[12] = v26[27].Flink;
    Information.Cache.GroupMask.Mask = MEMORY[0xFFFFF780000003B0];
    v27 = (unsigned int)Length;
    v28 = Address;
    if ( PreviousMode )
      goto LABEL_136;
    goto LABEL_137;
  }
  if ( (unsigned int)Length < 0x138 )
  {
    if ( a7 )
    {
      if ( PreviousMode )
        RtlWriteULongToUser(a7, 376);
      else
        *a7 = 376;
    }
    return -1073741820;
  }
  v29 = 376;
  if ( (unsigned int)Length <= 0x178 )
    v29 = Length;
  result = ExpQuerySystemPerformanceInformation(v18, Address, v29, PreviousMode);
  ProcessorTopologyCount = result;
  if ( result >= 0 )
  {
LABEL_669:
    Size = v29;
    goto LABEL_1171;
  }
  return result;
}
