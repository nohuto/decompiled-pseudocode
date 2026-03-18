/*
 * XREFs of ExpQuerySystemInformation @ 0x140B145DC
 * Callers:
 *     NtQuerySystemInformationEx @ 0x140833690 (NtQuerySystemInformationEx.c)
 *     NtQuerySystemInformation @ 0x140B144F0 (NtQuerySystemInformation.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     KeFlushProcessWriteBuffers @ 0x14025167C (KeFlushProcessWriteBuffers.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExGetBigPoolInfo @ 0x1403460C8 (ExGetBigPoolInfo.c)
 *     MmQueryMemoryListInformation @ 0x1403485A8 (MmQueryMemoryListInformation.c)
 *     VslGetNestedPageProtectionFlags @ 0x14041D934 (VslGetNestedPageProtectionFlags.c)
 *     PoGetIdleTimes @ 0x1404280E0 (PoGetIdleTimes.c)
 *     KeGetProcessorIndexFromNumber @ 0x140428990 (KeGetProcessorIndexFromNumber.c)
 *     PpmCapturePerformanceDistribution @ 0x140428B10 (PpmCapturePerformanceDistribution.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x140470DF0 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     PoEnergyEstimationEnabled @ 0x14047C5D0 (PoEnergyEstimationEnabled.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14047C978 (PoGetPerfStateAndParkingInfo.c)
 *     KeIsKernelCetEnabled @ 0x140483900 (KeIsKernelCetEnabled.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x14048EFC0 (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     MmGetTotalCommitLimit @ 0x140491830 (MmGetTotalCommitLimit.c)
 *     MmGetPeakCommitment @ 0x140491850 (MmGetPeakCommitment.c)
 *     MmGetTotalCommittedPages @ 0x1404919A0 (MmGetTotalCommittedPages.c)
 *     MmGetAvailablePages @ 0x1404933C8 (MmGetAvailablePages.c)
 *     MmGetResidentAvailablePages @ 0x14049462C (MmGetResidentAvailablePages.c)
 *     ExpGetSystemBasicInformation @ 0x140496458 (ExpGetSystemBasicInformation.c)
 *     KeQueryGroupAffinity @ 0x14049AF50 (KeQueryGroupAffinity.c)
 *     ExpGetSystemProcessorInformation @ 0x1404A4D80 (ExpGetSystemProcessorInformation.c)
 *     MmGetSharedCommit @ 0x1404A6B94 (MmGetSharedCommit.c)
 *     MmGetProcessPartitionId @ 0x1404A9E18 (MmGetProcessPartitionId.c)
 *     MmGetNumberOfPhysicalPages @ 0x1404AF740 (MmGetNumberOfPhysicalPages.c)
 *     KeQueryCycleTimeStatsProcessor @ 0x1404B6970 (KeQueryCycleTimeStatsProcessor.c)
 *     KeQueryActiveGroupCount @ 0x1404BB3D0 (KeQueryActiveGroupCount.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x1404BCD14 (ExpGetSystemEmulationBasicInformation.c)
 *     MmGetHighestPhysicalPage @ 0x1404C3B80 (MmGetHighestPhysicalPage.c)
 *     KeGetRecommendedSharedDataAlignment @ 0x1404C5B80 (KeGetRecommendedSharedDataAlignment.c)
 *     MmGetLowestPhysicalPage @ 0x1404C7834 (MmGetLowestPhysicalPage.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1404C9E74 (MmQuerySystemWorkingSetInformation.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x1404CCA9C (ExpGetSystemEmulationProcessorInformation.c)
 *     KeQueryBootTimeValues @ 0x1404CD5EC (KeQueryBootTimeValues.c)
 *     KeIsUserCetAllowed @ 0x1404D6B7C (KeIsUserCetAllowed.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1404DA4D0 (KeQueryLogicalProcessorRelationship.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404E7FA4 (ExCpuSetResourceManagerAccessCheck.c)
 *     VslIsTrustletRunning @ 0x1404F35D4 (VslIsTrustletRunning.c)
 *     KeIsCetCapable @ 0x1404FAE58 (KeIsCetCapable.c)
 *     VslIsSecureKernelRunning @ 0x1404FAE6C (VslIsSecureKernelRunning.c)
 *     KeIsKernelCetAuditModeEnabled @ 0x1404FB774 (KeIsKernelCetAuditModeEnabled.c)
 *     KeQueryDpcWatchdogConfiguration @ 0x140517754 (KeQueryDpcWatchdogConfiguration.c)
 *     ExPoolQueryLimits @ 0x140518D40 (ExPoolQueryLimits.c)
 *     VfGetVerifierInformation @ 0x14051A5C4 (VfGetVerifierInformation.c)
 *     ExpQueryBootLoaderMetadata @ 0x140523504 (ExpQueryBootLoaderMetadata.c)
 *     VslQuerySecureKernelProfileInformation @ 0x140526690 (VslQuerySecureKernelProfileInformation.c)
 *     PsQueryCpuQuotaInformation @ 0x14052AF9C (PsQueryCpuQuotaInformation.c)
 *     HvlQueryMinrootInfo @ 0x14052CE9C (HvlQueryMinrootInfo.c)
 *     KeQuerySecureSpeculationInformation @ 0x14052F590 (KeQuerySecureSpeculationInformation.c)
 *     PsQueryActivityModerationUserSettings @ 0x1405303A0 (PsQueryActivityModerationUserSettings.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140531650 (KeGetAffinitizedInterruptsInfo.c)
 *     HvlQueryActiveProcessors @ 0x140531CA0 (HvlQueryActiveProcessors.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x14053217C (SeQueryTrustedPlatformModuleInformation.c)
 *     HvlQueryProcessorTopologyCount @ 0x140532990 (HvlQueryProcessorTopologyCount.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     ExpGetLookasideInformation @ 0x1406C9D20 (ExpGetLookasideInformation.c)
 *     Feature_NoPrecisePoolTagQueries__private_ReportDeviceUsage @ 0x1406C9F14 (Feature_NoPrecisePoolTagQueries__private_ReportDeviceUsage.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwFilterBootOption @ 0x140725170 (ZwFilterBootOption.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlSetVolatileMemory @ 0x1407330A0 (RtlSetVolatileMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExpQueryLegacyDriverInformation @ 0x14077038C (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryMemoryTopologyInformation @ 0x1407740EC (ExpQueryMemoryTopologyInformation.c)
 *     ExpGetObjectInformation @ 0x1407744F4 (ExpGetObjectInformation.c)
 *     ExpGetLockInformation @ 0x140775318 (ExpGetLockInformation.c)
 *     PsRootSiloInformation @ 0x1407753B8 (PsRootSiloInformation.c)
 *     ExpGetSystemProcessorFeaturesInformation @ 0x1407758EC (ExpGetSystemProcessorFeaturesInformation.c)
 *     HvlQuerySetBootPagesInfo @ 0x140776180 (HvlQuerySetBootPagesInfo.c)
 *     HvlQueryDetailInfo @ 0x140776C54 (HvlQueryDetailInfo.c)
 *     VslQueryTrustedAppRuntimeInformation @ 0x140777158 (VslQueryTrustedAppRuntimeInformation.c)
 *     ExpQueryNumaProximityNode @ 0x140777644 (ExpQueryNumaProximityNode.c)
 *     KeQueryKvaShadowInformation @ 0x140778BF4 (KeQueryKvaShadowInformation.c)
 *     ExpQueryInterruptSteeringInformation @ 0x140779EBC (ExpQueryInterruptSteeringInformation.c)
 *     HvlQueryEnlightenmentInfo @ 0x14077A5A4 (HvlQueryEnlightenmentInfo.c)
 *     SeSecurityModelQueryInformation @ 0x14077A94C (SeSecurityModelQueryInformation.c)
 *     ExpQuerySingleModuleInformation @ 0x14077AC20 (ExpQuerySingleModuleInformation.c)
 *     ExpQuerySystemMemoryNumaInformation @ 0x14077AF58 (ExpQuerySystemMemoryNumaInformation.c)
 *     IoQueryVhdBootInformation @ 0x14077BBF0 (IoQueryVhdBootInformation.c)
 *     WheaQuerySystemInformation @ 0x14077BCA4 (WheaQuerySystemInformation.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x14077F5CC (RtlReadUShortFromUser.c)
 *     RtlSetUserMemory @ 0x14077F608 (RtlSetUserMemory.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x14077F7E4 (RtlWriteUShortToUser.c)
 *     KeQuerySpeculationControlInformation @ 0x1407BA658 (KeQuerySpeculationControlInformation.c)
 *     ObQueryRefTraceInformationEx @ 0x1407C424C (ObQueryRefTraceInformationEx.c)
 *     ExpQueryModuleInformation @ 0x140832D20 (ExpQueryModuleInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x140832DEC (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryRuntimeAttestationReport @ 0x140832F9C (ExpQueryRuntimeAttestationReport.c)
 *     ExGetPoolTagInfo2 @ 0x140837888 (ExGetPoolTagInfo2.c)
 *     ExpQueryOriginalImageFeatureInformation @ 0x140846830 (ExpQueryOriginalImageFeatureInformation.c)
 *     ExpQuerySystemMemoryNumaCacheInformation @ 0x140846934 (ExpQuerySystemMemoryNumaCacheInformation.c)
 *     SeQueryHSTIResults @ 0x1408AB510 (SeQueryHSTIResults.c)
 *     PsLookupProcessByProcessId @ 0x1408EF4E0 (PsLookupProcessByProcessId.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ExpGetHandleInformationEx @ 0x140906AA4 (ExpGetHandleInformationEx.c)
 *     ExpGetHandleInformation @ 0x140907690 (ExpGetHandleInformation.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093E008 (EtwQueryPerformanceTraceInformation.c)
 *     ExpGetProcessInformation @ 0x14096767C (ExpGetProcessInformation.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1409D5658 (ExpGetSystemFirmwareTableInformation.c)
 *     PsGetSupportedProcessorArchitectures @ 0x1409EB9CC (PsGetSupportedProcessorArchitectures.c)
 *     PfQuerySuperfetchInformation @ 0x140A52EAC (PfQuerySuperfetchInformation.c)
 *     EtwTiLogSyscallUsage @ 0x140A53288 (EtwTiLogSyscallUsage.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140A5C194 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A77228 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     PsQueryFullProcessImageName @ 0x140A83F60 (PsQueryFullProcessImageName.c)
 *     CmQueryRegistryQuotaInformation @ 0x140A8811C (CmQueryRegistryQuotaInformation.c)
 *     ExAcquireTimeRefreshLockShared @ 0x140A8BDD0 (ExAcquireTimeRefreshLockShared.c)
 *     ExReleaseTimeRefreshLockShared @ 0x140A8BE50 (ExReleaseTimeRefreshLockShared.c)
 *     ExIsRestrictedCaller @ 0x140A8C678 (ExIsRestrictedCaller.c)
 *     CmQueryFeatureConfigurationSections @ 0x140AAD654 (CmQueryFeatureConfigurationSections.c)
 *     sub_140AB5C94 @ 0x140AB5C94 (sub_140AB5C94.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x140AB5EB0 (KeBuildLogicalProcessorSystemInformation.c)
 *     SeCodeIntegrityQueryInformation @ 0x140AB9C30 (SeCodeIntegrityQueryInformation.c)
 *     SeCodeIntegrityQueryPolicyInformation @ 0x140AC34DC (SeCodeIntegrityQueryPolicyInformation.c)
 *     CmQueryBuildVersionInformation @ 0x140AE0FA0 (CmQueryBuildVersionInformation.c)
 *     CmQuerySingleFeatureConfiguration @ 0x140AEFD08 (CmQuerySingleFeatureConfiguration.c)
 *     ExpQueryNumaProcessorMap @ 0x140AF62B8 (ExpQueryNumaProcessorMap.c)
 *     PfSnQueryPrefetcherInformation @ 0x140AF7B7C (PfSnQueryPrefetcherInformation.c)
 *     ExpGetSystemFlushInformation @ 0x140AF98B4 (ExpGetSystemFlushInformation.c)
 *     IoQuerySystemDeviceName @ 0x140AFA81C (IoQuerySystemDeviceName.c)
 *     SeSecureBootQueryInformation @ 0x140B0299C (SeSecureBootQueryInformation.c)
 *     MmGetPageFileInformation @ 0x140B13430 (MmGetPageFileInformation.c)
 *     SmQueryStoreInformation @ 0x140B26304 (SmQueryStoreInformation.c)
 *     VslIsEncryptionKeyAvailable @ 0x140B26DA0 (VslIsEncryptionKeyAvailable.c)
 *     ExpGetDeviceDataInformation @ 0x140B2C1AC (ExpGetDeviceDataInformation.c)
 *     sub_140B38E0C @ 0x140B38E0C (sub_140B38E0C.c)
 *     ExpQueryModuleInformationEx @ 0x140B3C7B8 (ExpQueryModuleInformationEx.c)
 *     IoQueryLowPriorityIoInformation @ 0x140B3D4BC (IoQueryLowPriorityIoInformation.c)
 *     ExpReadComPlusPackage @ 0x140B461F0 (ExpReadComPlusPackage.c)
 *     HvlQueryVsmProtectionInfo @ 0x140B51DB0 (HvlQueryVsmProtectionInfo.c)
 *     ExGetPoolTagInfo @ 0x140B5721C (ExGetPoolTagInfo.c)
 *     MmEnumerateBadPages @ 0x140B5D81C (MmEnumerateBadPages.c)
 *     ObQueryRefTraceInformation @ 0x140B5E750 (ObQueryRefTraceInformation.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140B6476C (ExpGetSystemWriteConstraintInformation.c)
 *     ExpQueryChannelInformation @ 0x140B66418 (ExpQueryChannelInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x140B680A0 (ExpGetSystemPlatformBinary.c)
 *     VslTransformDumpKey @ 0x140B69E24 (VslTransformDumpKey.c)
 *     KeQueryCpuSetInformation @ 0x140B6A8B4 (KeQueryCpuSetInformation.c)
 *     ExpQuerySystemMemoryNumaPerformanceInformation @ 0x140B6C088 (ExpQuerySystemMemoryNumaPerformanceInformation.c)
 *     ExQueryBootEntropyInformation @ 0x140B6CB9C (ExQueryBootEntropyInformation.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x140B6E708 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     VfGetVerifierInformationEx @ 0x140C200F4 (VfGetVerifierInformationEx.c)
 *     BgkQueryBootGraphicsInformation @ 0x140C4F008 (BgkQueryBootGraphicsInformation.c)
 */

int __fastcall ExpQuerySystemInformation(
        int a1,
        void *a2,
        unsigned int a3,
        char a4,
        struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *Address,
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
  int SystemProcessorFeaturesInformation; // eax
  struct _LIST_ENTRY *v27; // rcx
  size_t v28; // r8
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v29; // rcx
  int v30; // ebx
  int result; // eax
  int ChannelInformation; // eax
  unsigned int v33; // edx
  size_t v34; // r8
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v35; // rcx
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  int v39; // ebx
  int v40; // eax
  unsigned int jj; // esi
  _DWORD *v42; // rdx
  int v43; // r9d
  int v44; // ebx
  int v45; // ebx
  int v46; // ebx
  int v47; // ebx
  int v48; // ebx
  volatile unsigned int v49; // ecx
  LOGICAL_PROCESSOR_RELATIONSHIP v50; // r8d
  __int64 *v51; // rdx
  __int64 v52; // r9
  unsigned int v53; // eax
  int v54; // edx
  unsigned int v55; // r8d
  __int64 *v56; // rcx
  __int64 v57; // r9
  size_t v58; // r8
  struct _LIST_ENTRY *Flink; // rdx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v60; // rcx
  unsigned __int64 v61; // rbx
  int v62; // ebx
  int v63; // ebx
  int v64; // ebx
  int v65; // ebx
  volatile unsigned int v66; // esi
  struct _LIST_ENTRY *v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  struct _KLOCK_ENTRIES *v71; // r9
  size_t v72; // r8
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v73; // rcx
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
  LOGICAL_PROCESSOR_RELATIONSHIP v85; // edx
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
  PROCESSOR_CACHE_TYPE *p_Type; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v103; // rdx
  __int64 v104; // rdx
  int v105; // ebx
  int v106; // ebx
  int v107; // ebx
  int v108; // ebx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v109; // rbx
  ULONG v110; // edx
  _QWORD *p_Count; // rcx
  int v112; // ecx
  volatile unsigned int v113; // eax
  struct _PROCESSOR_NUMBER *p_ProcNumber; // rax
  NTSTATUS LogicalProcessorRelationship; // eax
  int v116; // eax
  struct _LIST_ENTRY *v117; // rbx
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  struct _KLOCK_ENTRIES *v121; // r9
  __int128 *v122; // rax
  __int64 v123; // rcx
  unsigned int v124; // eax
  bool v125; // cf
  unsigned int n; // r15d
  __int64 v127; // rax
  int v128; // ebx
  int v129; // ebx
  int v130; // ebx
  int v131; // ebx
  unsigned int v132; // eax
  unsigned int v133; // edx
  unsigned __int64 v134; // r8
  unsigned int v135; // edx
  __int64 v136; // rax
  unsigned __int16 v137; // ax
  unsigned __int16 v138; // dx
  unsigned __int16 v139; // dx
  unsigned __int16 v140; // dx
  unsigned __int64 PeakCommitment; // rax
  unsigned int v142; // eax
  size_t v143; // rcx
  unsigned int v144; // eax
  int v145; // ecx
  int v146; // ebx
  int v147; // ebx
  int v148; // ebx
  int v149; // ebx
  volatile unsigned int v150; // ebx
  char v151; // cl
  int v152; // ebx
  int v153; // ebx
  int v154; // ebx
  int v155; // ebx
  unsigned int v156; // eax
  bool v157; // cf
  unsigned int j; // r15d
  __int64 v159; // rcx
  char v160; // al
  char v161; // cl
  int NestedPageProtectionFlags; // edx
  __int64 v163; // rcx
  char IsEncryptionKeyAvailable; // al
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v165; // rax
  PVOID v166; // rbx
  int CpuSetInformation; // eax
  __int64 Pool2; // rax
  struct _KAFFINITY_EX *v169; // r15
  int v170; // ebx
  int v171; // ebx
  int v172; // ebx
  int v173; // ebx
  unsigned __int16 v174; // bx
  __int64 v175; // rbx
  int NodeNumber; // eax
  unsigned __int16 ProcessPartitionId; // bx
  __int64 v178; // rax
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v180; // rax
  unsigned int v181; // eax
  unsigned int i; // ebx
  int v183; // ecx
  int v184; // eax
  int v185; // ebx
  int v186; // ebx
  int v187; // ebx
  int v188; // ebx
  unsigned __int8 v189; // cl
  int v190; // ebx
  int v191; // ebx
  int v192; // ebx
  int v193; // ebx
  __int64 v194; // rax
  volatile unsigned int Lock; // eax
  size_t v196; // r8
  LIST_ENTRY *p_WaitListHead; // rdx
  int v198; // r15d
  int v199; // r15d
  int v200; // r15d
  int v201; // r15d
  PVOID v202; // rcx
  int TrustedAppRuntimeInformation; // eax
  __int64 *v204; // rdx
  __int64 *k; // rax
  __int64 v206; // r9
  volatile unsigned int Size; // [rsp+34h] [rbp-634h] BYREF
  unsigned __int16 Size_4; // [rsp+38h] [rbp-630h] BYREF
  unsigned int v209; // [rsp+3Ch] [rbp-62Ch]
  size_t v210; // [rsp+40h] [rbp-628h] BYREF
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+48h] [rbp-620h] BYREF
  volatile unsigned int v212; // [rsp+50h] [rbp-618h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+54h] [rbp-614h] BYREF
  void *Src; // [rsp+60h] [rbp-608h]
  unsigned int *v215; // [rsp+68h] [rbp-600h]
  __int16 v216; // [rsp+88h] [rbp-5E0h]
  PVOID v217[2]; // [rsp+90h] [rbp-5D8h] BYREF
  size_t v218; // [rsp+A0h] [rbp-5C8h] BYREF
  LOGICAL_PROCESSOR_RELATIONSHIP v219; // [rsp+A8h] [rbp-5C0h] BYREF
  LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType[3]; // [rsp+ACh] [rbp-5BCh] BYREF
  __int64 v221; // [rsp+B8h] [rbp-5B0h]
  PVOID v222; // [rsp+C0h] [rbp-5A8h]
  _QWORD *v223; // [rsp+C8h] [rbp-5A0h] BYREF
  HANDLE ProcessId[2]; // [rsp+D0h] [rbp-598h] BYREF
  volatile void *v225; // [rsp+E0h] [rbp-588h]
  int v226; // [rsp+230h] [rbp-438h]
  unsigned int v227; // [rsp+288h] [rbp-3E0h]
  __int16 v228; // [rsp+2D8h] [rbp-390h]
  int v229; // [rsp+2F0h] [rbp-378h] BYREF
  PEPROCESS Process; // [rsp+2F8h] [rbp-370h] BYREF
  __int64 v231; // [rsp+308h] [rbp-360h]
  unsigned int v232; // [rsp+318h] [rbp-350h]
  int v233; // [rsp+320h] [rbp-348h]
  LOGICAL_PROCESSOR_RELATIONSHIP Relationship; // [rsp+324h] [rbp-344h]
  _QWORD *v235; // [rsp+398h] [rbp-2D0h]
  void *v236; // [rsp+3E8h] [rbp-280h]
  __int64 v237; // [rsp+3F0h] [rbp-278h]
  volatile void *v238; // [rsp+3F8h] [rbp-270h]
  __int64 v239; // [rsp+400h] [rbp-268h]
  __int64 v240; // [rsp+408h] [rbp-260h]
  PVOID Object[2]; // [rsp+410h] [rbp-258h] BYREF
  __int128 v242; // [rsp+420h] [rbp-248h] BYREF
  struct _LIST_ENTRY v243; // [rsp+430h] [rbp-238h]
  struct _LIST_ENTRY v244; // [rsp+440h] [rbp-228h] BYREF
  struct _LIST_ENTRY v245; // [rsp+450h] [rbp-218h]
  struct _LIST_ENTRY v246; // [rsp+460h] [rbp-208h]
  struct _LIST_ENTRY v247; // [rsp+470h] [rbp-1F8h]
  struct _LIST_ENTRY v248; // [rsp+480h] [rbp-1E8h]
  struct _LIST_ENTRY v249; // [rsp+490h] [rbp-1D8h]
  struct _LIST_ENTRY v250; // [rsp+4A0h] [rbp-1C8h]
  struct _LIST_ENTRY v251; // [rsp+4B0h] [rbp-1B8h]
  struct _LIST_ENTRY *v252; // [rsp+4C0h] [rbp-1A8h]
  int v253; // [rsp+4C8h] [rbp-1A0h]
  _BYTE v254[12]; // [rsp+5D0h] [rbp-98h] BYREF
  int v255; // [rsp+5DCh] [rbp-8Ch]
  unsigned __int64 v256; // [rsp+5F8h] [rbp-70h]
  unsigned __int64 v257; // [rsp+600h] [rbp-68h]
  PVOID v258; // [rsp+618h] [rbp-50h]

  v210 = a3;
  Src = a2;
  v8 = Address;
  v215 = a7;
  v212 = 0;
  Object[0] = 0LL;
  v219 = RelationProcessorCore;
  v216 = 0;
  v222 = 0LL;
  Process = 0LL;
  ProcNumber = 0;
  v223 = 0LL;
  v218 = 0LL;
  v217[0] = 0LL;
  *(_OWORD *)ProcessId = 0LL;
  memset_0(&v242, 0, 0x1B0uLL);
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
  v209 = 0;
  LOWORD(Information) = 0;
  Size_4 = 0;
  v216 = 0;
  v221 = 0LL;
  ActiveProcessorCount = 0;
  v231 = 0LL;
  v229 = 9;
  if ( a1 <= 107 )
  {
    if ( a1 == 107 )
    {
      if ( (unsigned int)v210 < 4 )
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
            LODWORD(Information) = 0xFFFF;
            v21 = -1;
LABEL_55:
            ActiveProcessorCount = KeQueryActiveProcessorCountEx(v21);
            v209 = ActiveProcessorCount;
            goto LABEL_42;
          }
        }
LABEL_81:
        if ( (unsigned int)v210 < 2 )
          return -1073741811;
        v23 = a4 ? RtlReadUShortFromUser((unsigned __int16 *)Src) : *(unsigned __int16 *)Src;
        LOWORD(v209) = v23;
        LODWORD(Information) = v23;
        v228 = v23;
        ActiveGroupCount = KeQueryActiveGroupCount();
        v21 = v209;
        if ( (unsigned __int16)v209 >= ActiveGroupCount )
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
            v20 = Size_4;
            goto LABEL_108;
          }
          goto LABEL_81;
        }
        goto LABEL_81;
      }
      if ( (_DWORD)v210 != 4 )
        return -1073741811;
      if ( a4 )
        v229 = RtlReadULongFromUser((unsigned int *)Src);
      else
        RtlCopyVolatileMemory(&v229, Src, 4uLL);
    }
LABEL_60:
    v18 = v209;
    goto LABEL_43;
  }
  if ( a1 > 175 )
  {
    v14 = (unsigned int)(a1 - 178);
    if ( a1 == 178 )
    {
      if ( (_DWORD)v210 != 8 )
        return -1073741811;
      if ( a4 )
        ULong64FromUser = RtlReadULong64FromUser(Src);
      else
        ULong64FromUser = *(_QWORD *)Src;
      v231 = ULong64FromUser;
      v237 = ULong64FromUser;
      v18 = v209;
      v19 = 0LL;
      v20 = Size_4;
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
          if ( (unsigned int)v210 < 8 )
            return -1073741811;
          if ( a4 )
            ProcNumber = (struct _PROCESSOR_NUMBER)RtlReadULongFromUser((unsigned int *)Src + 1);
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
    if ( (_DWORD)v210 != 8 )
      return -1073741811;
    if ( a4 )
      v19 = (void *)RtlReadULong64FromUser(Src);
    else
      v19 = *(void **)Src;
    v236 = v19;
    v18 = v209;
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
      if ( (_DWORD)v210 )
      {
        if ( (_DWORD)v210 != 8 )
          return -1073741811;
        if ( a4 )
          v22 = RtlReadULong64FromUser(Src);
        else
          v22 = *(_QWORD *)Src;
        v221 = v22;
        v240 = v22;
      }
      else
      {
        v221 = 0LL;
      }
    }
    goto LABEL_60;
  }
  if ( (unsigned int)v210 < 2 )
    return -1073741811;
  v20 = a4 ? (unsigned __int16)RtlReadUShortFromUser((unsigned __int16 *)Src) : *(unsigned __int16 *)Src;
  v216 = v20;
  if ( (unsigned __int16)v20 >= (unsigned __int16)KeNumberNodes )
    return -1073741811;
  v18 = v209;
  v19 = 0LL;
LABEL_108:
  if ( a1 > 133 )
  {
    if ( a1 <= 193 )
    {
      if ( a1 == 193 )
      {
        v181 = 8 * KeQueryActiveGroupCount();
        Size = v181;
        if ( (unsigned int)Length < v181 )
          goto LABEL_464;
        memset_0(Address, 0, v181);
        for ( i = 0; ; ++i )
        {
          v227 = i;
          if ( i >= (unsigned __int16)KeNumberNodes )
            break;
          KeInitializeSchedulerSubNodeEnumerationContext(ProcessId, KeNodeBlock[i]);
          while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((unsigned int *)ProcessId, v217) )
            *((_QWORD *)&Address->Relationship + *((unsigned __int16 *)v217[0] + 68)) |= *((_QWORD *)v217[0] + 2);
        }
        goto LABEL_126;
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
          LOBYTE(Address->Relationship) = KdIgnoreUmExceptions;
LABEL_740:
          Size = v49;
          goto LABEL_126;
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
                goto LABEL_126;
              }
              ProcessorTopologyCount = BgkQueryBootGraphicsInformation(2LL, &Size);
              if ( ProcessorTopologyCount < 0 )
                goto LABEL_126;
              if ( Size )
              {
                if ( (unsigned int)Length < Size )
                  goto LABEL_464;
                ProcessorTopologyCount = BgkQueryBootGraphicsInformation(1LL, &v218);
                if ( ProcessorTopologyCount < 0 )
                  goto LABEL_126;
                v109 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)v218;
                if ( v218 )
                {
                  if ( PreviousMode )
                    RtlCopyToUser(Address, (void *)v218, Size);
                  else
                    RtlCopyVolatileMemory(Address, (const void *)v218, Size);
                  v110 = 1263093570;
                  goto LABEL_525;
                }
              }
              goto LABEL_519;
            }
            if ( a1 == 134 )
            {
              Size = 32;
              if ( (_DWORD)Length == 32 )
              {
                SystemProcessorFeaturesInformation = sub_140AB5C94((unsigned int)(a1 - 134), Address);
                goto LABEL_125;
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
                goto LABEL_689;
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
              goto LABEL_160;
            }
            Size = 8;
            if ( (unsigned int)Length < 8 )
            {
LABEL_395:
              ProcessorTopologyCount = -1073741820;
              goto LABEL_126;
            }
            if ( (unsigned int)HvlQueryActiveProcessors((unsigned int *)&v242, 0LL) )
              goto LABEL_439;
            ProcessorTopologyCount = HvlQueryProcessorTopologyCount(0LL, (_DWORD *)&v242 + 1);
            if ( ProcessorTopologyCount )
              goto LABEL_439;
            if ( PreviousMode )
              RtlWriteULong64ToUser(Address, v242);
            else
              RtlCopyVolatileMemory(Address, &v242, 8uLL);
LABEL_126:
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
LABEL_726:
            v143 = 48LL;
            if ( a1 != 8 )
              v143 = 72LL;
            v218 = v143;
            if ( !(_DWORD)Length || (unsigned int)Length % (unsigned int)v143 )
            {
              if ( a7 )
              {
                v145 = v18 * v143;
                if ( PreviousMode )
                  RtlWriteULongToUser(a7, v145);
                else
                  *a7 = v145;
              }
              return -1073741820;
            }
            HIDWORD(v210) = 0;
            v144 = 0;
            while ( 1 )
            {
              LODWORD(v210) = v144;
              if ( v144 >= v18 )
                break;
              *(_OWORD *)Object = 0LL;
              ProcNumber.Group = (unsigned __int16)Information;
              ProcNumber.Number = v144;
              ProcNumber.Reserved = 0;
              v217[0] = (PVOID)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
              v49 = HIDWORD(v210);
              if ( (unsigned int)Length < HIDWORD(v210) + (int)v218 )
                goto LABEL_740;
              HIDWORD(v210) += v218;
              PoGetIdleTimes(&ProcNumber, 0LL, (__int64)Object);
              v243.Flink = (struct _LIST_ENTRY *)((unsigned int)KeMaximumIncrement
                                                * (unsigned __int64)*((unsigned int *)v217[0] + 8594));
              *((_QWORD *)&v242 + 1) = (unsigned int)KeMaximumIncrement * (unsigned __int64)HIDWORD(Object[0]);
              v243.Blink = (struct _LIST_ENTRY *)((unsigned int)KeMaximumIncrement
                                                * (unsigned __int64)*((unsigned int *)v217[0] + 8595));
              v244.Flink = (struct _LIST_ENTRY *)((unsigned int)KeMaximumIncrement
                                                * (unsigned __int64)*((unsigned int *)v217[0] + 8596));
              *(_QWORD *)&v242 = (unsigned int)KeMaximumIncrement * (unsigned __int64)LODWORD(Object[0]);
              LODWORD(v244.Blink) = *((_DWORD *)v217[0] + 8592);
              if ( a1 == 141 )
              {
                v245 = (struct _LIST_ENTRY)((unsigned int)KeMaximumIncrement
                                          * (unsigned __int64)*((unsigned int *)v217[0] + 8603));
                HIDWORD(v244.Blink) = 0;
                v246.Flink = 0LL;
              }
              if ( PreviousMode )
                RtlCopyToUser(v8, &v242, (unsigned int)v218);
              else
                RtlCopyVolatileMemory(v8, &v242, (unsigned int)v218);
              v8 = (_QWORD *)((char *)v8 + (unsigned int)v218);
              v144 = v210 + 1;
              v18 = v209;
            }
            v49 = HIDWORD(v210);
            goto LABEL_740;
          }
          if ( a1 != 143 )
          {
            if ( a1 == 144 )
              goto LABEL_718;
            if ( a1 != 145 )
            {
              if ( a1 == 147 )
              {
                SystemProcessorFeaturesInformation = ExpQueryPortableWorkspaceEfiLauncherInformation(
                                                       Address,
                                                       (unsigned int)Length,
                                                       &Size);
                goto LABEL_125;
              }
              return -1073741821;
            }
          }
LABEL_896:
          SystemProcessorFeaturesInformation = SeSecureBootQueryInformation(
                                                 a1,
                                                 (char *)Address,
                                                 Length,
                                                 (unsigned int *)&Size,
                                                 PreviousMode);
          goto LABEL_125;
        }
        if ( a1 > 156 )
        {
          v152 = a1 - 157;
          if ( v152 )
          {
            v153 = v152 - 1;
            if ( v153 )
            {
              v154 = v153 - 1;
              if ( !v154 )
              {
                SystemProcessorFeaturesInformation = HvlQueryDetailInfo(Address, Length, PreviousMode, &Size);
                goto LABEL_125;
              }
              v155 = v154 - 1;
              if ( v155 )
              {
                if ( v155 == 2 )
                {
                  SystemProcessorFeaturesInformation = SeQueryTrustedPlatformModuleInformation(
                                                         (int *)Address,
                                                         Length,
                                                         &Size);
                  goto LABEL_125;
                }
                return -1073741821;
              }
              v156 = v18 << 6;
              Size = v18 << 6;
              if ( (unsigned int)Length >= 0x40 )
              {
                v157 = (unsigned int)Length < v156;
                if ( (unsigned int)Length < v156 )
                {
                  v18 = (unsigned int)Length >> 6;
                  v209 = (unsigned int)Length >> 6;
                  v157 = (unsigned int)Length < v156;
                }
                ProcessorTopologyCount = v157 ? 0xC0000004 : 0;
                for ( j = 0; j < v18; ++j )
                {
                  ProcNumber.Group = (unsigned __int16)Information;
                  ProcNumber.Number = j;
                  ProcNumber.Reserved = 0;
                  v159 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
                  KeQueryCycleTimeStatsProcessor(v159, v8);
                  v8 += 8;
                  v235 = v8;
                  v18 = v209;
                }
                goto LABEL_126;
              }
              goto LABEL_464;
            }
            Size = 1;
            if ( !(_DWORD)Length )
              goto LABEL_395;
            v160 = PoEnergyEstimationEnabled();
            if ( PreviousMode )
              RtlWriteUCharToUser(Address, v160);
            else
              LOBYTE(Address->Relationship) = v160;
          }
          else
          {
            Size = *(unsigned __int16 *)&ExpSysDbgLock.SuspendEvent.Header.Size + 24;
            if ( (unsigned int)Length < Size )
              goto LABEL_395;
            *(_OWORD *)v217 = 0LL;
            LODWORD(v217[0]) = ExpSysDbgLock.SuspendEvent.Header.Lock;
            if ( LOWORD(ExpSysDbgLock.SuspendEvent.Header.Lock) )
              v217[1] = &Address->Group.Reserved[12];
            if ( PreviousMode )
              RtlSetUserMemory(Address, 0, 0x18uLL);
            else
              RtlSetVolatileMemory(Address, 0, 0x18uLL);
            if ( PreviousMode )
              RtlWriteULongToUser(Address, *(int *)&ExpSysDbgLock.SchedulerApcFill5[80]);
            else
              Address->Relationship = *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[80];
            *(_OWORD *)ProcessId = *(_OWORD *)v217;
            if ( PreviousMode )
            {
              *(_OWORD *)Object = *(_OWORD *)v217;
              RtlWriteULongToUser(&Address->NumaNode.NodeNumber, _mm_cvtsi128_si32(*(__m128i *)v217));
              RtlWriteULong64ToUser(&Address->Group.Reserved[4], (__int64)v217[1]);
            }
            else
            {
              Address->NumaNode.NodeNumber = (ULONG)v217[0];
              *(PVOID *)&Address->Group.Reserved[4] = v217[1];
            }
            if ( !LOWORD(ExpSysDbgLock.SuspendEvent.Header.Lock) )
              goto LABEL_126;
            v58 = *(unsigned __int16 *)&ExpSysDbgLock.SuspendEvent.Header.Size;
            Flink = ExpSysDbgLock.SuspendEvent.Header.WaitListHead.Flink;
            v60 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)v217[1];
            if ( PreviousMode )
              goto LABEL_1136;
            RtlCopyVolatileMemory(
              v217[1],
              ExpSysDbgLock.SuspendEvent.Header.WaitListHead.Flink,
              *(unsigned __int16 *)&ExpSysDbgLock.SuspendEvent.Header.Size);
          }
          goto LABEL_126;
        }
        if ( a1 == 156 )
        {
          Size = 128;
          if ( (_DWORD)Length == 128 )
          {
            ProcessorTopologyCount = BgkQueryBootGraphicsInformation(3LL, &v242);
            if ( ProcessorTopologyCount >= 0 )
              memmove(Address, &v242, Size);
            goto LABEL_126;
          }
          goto LABEL_395;
        }
        v146 = a1 - 149;
        if ( !v146 )
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
          v151 = v242;
          if ( !KdpBootedNodebug )
            v151 = 1;
          LOBYTE(v242) = v151;
          BYTE1(v242) = (_BYTE)KdDebuggerEnabled;
          BYTE2(v242) = (_BYTE)KdDebuggerNotPresent == 0;
          v30 = 3;
          v35 = Address;
          v34 = 3LL;
          if ( !PreviousMode )
          {
            RtlCopyVolatileMemory(Address, &v242, 3uLL);
            goto LABEL_668;
          }
          goto LABEL_780;
        }
        v147 = v146 - 1;
        if ( !v147 )
        {
          if ( !Address || SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            ChannelInformation = ExpQueryBootLoaderMetadata(Address, Length, &Size, v9);
            v33 = 15;
            goto LABEL_160;
          }
          return -1073741727;
        }
        v148 = v147 - 1;
        if ( !v148 )
        {
          Size = 4;
          if ( (unsigned int)Length < 4 )
            goto LABEL_395;
          if ( PreviousMode )
            RtlWriteULongToUser(Address, ExSoftRebootFlags);
          else
            Address->Relationship = ExSoftRebootFlags;
          goto LABEL_126;
        }
        v149 = v148 - 2;
        if ( !v149 )
        {
          if ( !(_DWORD)v210 )
          {
            v150 = 32;
            Size = 32;
            if ( (unsigned int)Length < 0xC )
            {
              ProcessorTopologyCount = -1073741820;
              v226 = -1073741820;
            }
            else
            {
              if ( (unsigned int)Length <= 0x20 )
                v150 = Length;
              Size = v150;
              memmove(Address, &stru_140F12D20.KcsanThread, v150);
            }
            goto LABEL_126;
          }
          goto LABEL_395;
        }
        if ( v149 != 1 )
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
          goto LABEL_755;
        }
        SystemProcessorFeaturesInformation = ExpGetSystemProcessorFeaturesInformation(Address, PreviousMode);
LABEL_758:
        Size = 32;
        goto LABEL_125;
      }
      if ( a1 <= 179 )
      {
        if ( a1 == 179 )
          goto LABEL_896;
        if ( a1 <= 171 )
        {
          if ( a1 == 171 )
            goto LABEL_896;
          if ( a1 != 164 )
          {
            if ( a1 != 165 )
            {
              switch ( a1 )
              {
                case 166:
                  SystemProcessorFeaturesInformation = SeQueryHSTIResults(Address, Length, &Size);
                  goto LABEL_125;
                case 167:
                  SystemProcessorFeaturesInformation = ExpQuerySingleModuleInformation(
                                                         (__int64)Address,
                                                         Length,
                                                         PreviousMode,
                                                         &Size);
                  goto LABEL_125;
                case 169:
                  SystemProcessorFeaturesInformation = HvlQueryVsmProtectionInfo(Address);
                  goto LABEL_125;
              }
              return -1073741821;
            }
            Size = 16;
            if ( (_DWORD)Length == 16 )
            {
              LOBYTE(v242) = v242 & 0xEF | (16 * (BYTE4(ExpSysDbgLock.SuspendEvent.Header.WaitListHead.Blink) & 1));
              if ( VslIsSecureKernelRunning() )
              {
                LOBYTE(Size_4) = 0;
                LOBYTE(v242) = v161 | 1;
                NestedPageProtectionFlags = VslGetNestedPageProtectionFlags(0LL);
                LODWORD(Information) = NestedPageProtectionFlags;
                if ( (NestedPageProtectionFlags & 2) != 0 )
                  LOBYTE(v242) = v242 | 2;
                if ( (NestedPageProtectionFlags & 0x20) != 0 )
                  LOBYTE(v242) = v242 | 4;
                if ( (NestedPageProtectionFlags & 0x10) != 0 )
                  LOBYTE(v242) = v242 | 8;
                LOBYTE(v163) = BYTE1(v242);
                if ( (NestedPageProtectionFlags & 0x200) != 0 )
                {
                  LOBYTE(v163) = BYTE1(v242) | 2;
                  BYTE1(v242) |= 2u;
                }
                if ( v221 )
                {
                  ProcessorTopologyCount = VslIsTrustletRunning(v221, &Size_4);
                  LOBYTE(v163) = Size_4 & 1 | BYTE1(v242) & 0xFE;
                  BYTE1(v242) = v163;
                  NestedPageProtectionFlags = (int)Information;
                }
                if ( (NestedPageProtectionFlags & 0x800) != 0 )
                {
                  LOBYTE(v163) = v163 | 4;
                  BYTE1(v242) = v163;
                }
                if ( (NestedPageProtectionFlags & 0x1000) != 0 )
                {
                  LOBYTE(v163) = v163 | 8;
                  BYTE1(v242) = v163;
                }
                if ( (NestedPageProtectionFlags & 0x2000) != 0 )
                {
                  LOBYTE(v163) = v163 | 0x10;
                  BYTE1(v242) = v163;
                }
                if ( (NestedPageProtectionFlags & 0x10000) != 0 )
                {
                  LOBYTE(v163) = v163 | 0x20;
                  BYTE1(v242) = v163;
                }
                if ( (NestedPageProtectionFlags & 0x40000) != 0 )
                {
                  LOBYTE(v163) = v163 | 0x40;
                  BYTE1(v242) = v163;
                }
                if ( (NestedPageProtectionFlags & 0x80000) != 0 )
                  BYTE2(v242) |= 1u;
                IsEncryptionKeyAvailable = VslIsEncryptionKeyAvailable(v163);
                LOBYTE(v242) = v242 & 0xDF | (32 * (IsEncryptionKeyAvailable & 1));
              }
              if ( PreviousMode )
                RtlCopyToUser(Address, &v242, 0x10uLL);
              else
                RtlCopyVolatileMemory(Address, &v242, 0x10uLL);
              goto LABEL_126;
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
            Pool2 = ExAllocatePool2(0x100uLL);
            v169 = (struct _KAFFINITY_EX *)Pool2;
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)Pool2;
            if ( !Pool2 )
              return -1073741670;
            *(_WORD *)Pool2 = 1;
            *(_WORD *)(Pool2 + 2) = 32;
            *(_DWORD *)(Pool2 + 4) = 0;
            memset_0((void *)(Pool2 + 8), 0, 0x100uLL);
            KeGetAffinitizedInterruptsInfo(v169);
            if ( PreviousMode )
              RtlCopyToUser(Address, v169, 0x108uLL);
            else
              RtlCopyVolatileMemory(Address, v169, 0x108uLL);
            v110 = 0;
            p_Count = &v169->Count;
            goto LABEL_526;
          case 174:
            SystemProcessorFeaturesInformation = PsRootSiloInformation(
                                                   (unsigned int *)Address,
                                                   Length,
                                                   (unsigned int *)&Size,
                                                   PreviousMode);
            goto LABEL_125;
        }
        if ( a1 != 175 )
        {
          if ( a1 != 178 )
            return -1073741821;
          if ( !(_DWORD)Length )
            goto LABEL_464;
          if ( !PreviousMode || SeSinglePrivilegeCheck(SeSystemProfilePrivilege, PreviousMode) )
          {
            v165 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePool2(0x41uLL);
            v109 = v165;
            Information = v165;
            if ( !v165 )
              goto LABEL_519;
            ProcessorTopologyCount = VslQuerySecureKernelProfileInformation(v231, (struct _MDL *)v165, Length, &Size);
            if ( ProcessorTopologyCount >= 0 )
              memmove(Address, v109, Size);
            goto LABEL_560;
          }
          return -1073741727;
        }
        if ( v19 )
        {
          Object[0] = 0LL;
          result = ObReferenceObjectByHandle(v19, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, Object, 0LL);
          v222 = Object[0];
          if ( result < 0 )
            return result;
          v166 = Object[0];
        }
        else
        {
          v166 = 0LL;
        }
        CpuSetInformation = KeQueryCpuSetInformation(Address);
LABEL_885:
        ProcessorTopologyCount = CpuSetInformation;
        if ( v166 )
          ObfDereferenceObject(v222);
        goto LABEL_126;
      }
      if ( a1 > 185 )
      {
        if ( a1 == 186 )
        {
          if ( !(_DWORD)Length )
          {
            LOBYTE(Size_4) = 1;
            return ZwFilterBootOption(1LL, 270532611LL);
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
          if ( (_DWORD)Length == 8 )
          {
            ProcessorTopologyCount = PsQueryActivityModerationUserSettings(&v242);
            if ( ProcessorTopologyCount >= 0 )
              *(_QWORD *)&Address->Relationship = v242;
            goto LABEL_126;
          }
          return -1073741820;
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
            goto LABEL_755;
          }
          SystemProcessorFeaturesInformation = ExpGetSystemFlushInformation((char *)Address, PreviousMode);
          goto LABEL_758;
        }
LABEL_1164:
        SystemProcessorFeaturesInformation = SeCodeIntegrityQueryPolicyInformation(a1, (__int64)Src);
        goto LABEL_125;
      }
      if ( a1 == 185 )
      {
        SystemProcessorFeaturesInformation = sub_140B38E0C(Address, (unsigned int)Length);
        goto LABEL_125;
      }
      v170 = a1 - 180;
      if ( !v170 )
      {
        SystemProcessorFeaturesInformation = ExpQueryInterruptSteeringInformation(
                                               (int *)Src,
                                               (unsigned int)v210,
                                               Address,
                                               Length,
                                               &Size);
        goto LABEL_125;
      }
      v171 = v170 - 1;
      if ( v171 )
      {
        v172 = v171 - 1;
        if ( !v172 )
        {
          if ( (_DWORD)Length == 56 )
          {
            ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
            *(_QWORD *)&v242 = MmGetNumberOfPhysicalPages(ProcessPartitionId) << 12;
            *((_QWORD *)&v242 + 1) = MmGetAvailablePages(ProcessPartitionId) << 12;
            v243.Flink = (struct _LIST_ENTRY *)(MmGetResidentAvailablePages(ProcessPartitionId) << 12);
            v243.Blink = (struct _LIST_ENTRY *)(MmGetTotalCommittedPages(ProcessPartitionId) << 12);
            v244.Blink = (struct _LIST_ENTRY *)(MmGetTotalCommitLimit(ProcessPartitionId) << 12);
            v245.Flink = (struct _LIST_ENTRY *)(MmGetPeakCommitment(ProcessPartitionId) << 12);
            v244.Flink = (struct _LIST_ENTRY *)(MmGetSharedCommit() << 12);
            v178 = v242;
            if ( (unsigned __int64)v242 < *((_QWORD *)&v242 + 1) )
              v178 = *((_QWORD *)&v242 + 1);
            *(_QWORD *)&v242 = v178;
            Blink = v244.Blink;
            if ( v244.Blink < v243.Blink )
              Blink = v243.Blink;
            v244.Blink = Blink;
            v180 = v245.Flink;
            if ( v245.Flink < v243.Blink )
              v180 = v243.Blink;
            v245.Flink = v180;
            if ( PreviousMode )
              RtlCopyToUser(Address, &v242, 0x38uLL);
            else
              RtlCopyVolatileMemory(Address, &v242, 0x38uLL);
            Size = 56;
            goto LABEL_126;
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
        v173 = v172 - 1;
        if ( v173 )
        {
          if ( v173 == 1 )
          {
            if ( (_DWORD)Length == 24 )
            {
              v174 = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
              *(_QWORD *)&v242 = MmGetNumberOfPhysicalPages(v174) << 12;
              *((_QWORD *)&v242 + 1) = MmGetLowestPhysicalPage(v174) << 12;
              v243.Flink = (struct _LIST_ENTRY *)((MmGetHighestPhysicalPage(v174) << 12) + 4095);
              if ( PreviousMode )
                RtlCopyToUser(Address, &v242, 0x18uLL);
              else
                RtlCopyVolatileMemory(Address, &v242, 0x18uLL);
              Size = 24;
              goto LABEL_126;
            }
            if ( !a7 )
              return -1073741820;
            if ( !PreviousMode )
            {
              *a7 = 24;
              return -1073741820;
            }
            goto LABEL_173;
          }
          return -1073741821;
        }
        Size = 16;
        if ( (_DWORD)Length == 16 )
        {
          if ( PreviousMode )
            v175 = RtlReadULong64FromUser(Address);
          else
            v175 = *(_QWORD *)&Address->Relationship;
          v239 = v175;
          if ( PreviousMode )
            NodeNumber = RtlReadULongFromUser(&Address->NumaNode.NodeNumber);
          else
            NodeNumber = Address->NumaNode.NodeNumber;
          v233 = NodeNumber;
          SystemProcessorFeaturesInformation = ExpQueryCodeIntegrityCertificateInfo(v175, NodeNumber);
          goto LABEL_125;
        }
        goto LABEL_395;
      }
LABEL_1108:
      if ( v19 )
      {
        v217[0] = 0LL;
        result = ObReferenceObjectByHandle(v19, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, v217, 0LL);
        v202 = v217[0];
        v222 = v217[0];
        if ( result < 0 )
          return result;
        v166 = v217[0];
      }
      else
      {
        v166 = 0LL;
        v202 = 0LL;
      }
      CpuSetInformation = PsGetSupportedProcessorArchitectures(
                            Address,
                            v20,
                            Length,
                            (unsigned int *)&Size,
                            (__int64)v202);
      goto LABEL_885;
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
            v185 = a1 - 201;
            if ( !v185 )
            {
              SystemProcessorFeaturesInformation = KeQuerySpeculationControlInformation(
                                                     Address,
                                                     (unsigned int)Length,
                                                     (int *)&Size);
              goto LABEL_125;
            }
            v186 = v185 - 1;
            if ( v186 )
            {
              v187 = v186 - 4;
              if ( v187 )
              {
                v188 = v187 - 1;
                if ( !v188 )
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
                    Address->Relationship = NtGlobalFlag2;
                  goto LABEL_169;
                }
                if ( v188 == 1 )
                {
                  SystemProcessorFeaturesInformation = SeSecurityModelQueryInformation(
                                                         Address,
                                                         (unsigned int)Length,
                                                         &Size,
                                                         PreviousMode);
                  goto LABEL_125;
                }
                return -1073741821;
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
              v189 = ExpSysDbgLock.ApcState.Process->Header.Lock != 0;
              LODWORD(Information) = v189;
              if ( PreviousMode )
                RtlWriteUCharToUser(Address, v189);
              else
                LOBYTE(Address->Relationship) = v189;
              if ( PreviousMode )
                RtlWriteULongToUser(&Address->Size, 0);
              else
                Address->Size = 0;
LABEL_1021:
              Size = 8;
              goto LABEL_126;
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
              RtlWriteUCharToUser(Address, v242);
            else
              LOBYTE(Address->Relationship) = v242;
            goto LABEL_126;
          }
          switch ( a1 )
          {
            case 200:
              goto LABEL_528;
            case 194:
              SystemProcessorFeaturesInformation = VslTransformDumpKey(
                                                     Src,
                                                     (unsigned int)v210,
                                                     Address,
                                                     (unsigned int)Length,
                                                     (__int64)&Size,
                                                     PreviousMode);
              goto LABEL_125;
            case 195:
              if ( (unsigned int)Length >= 8 )
              {
                SystemProcessorFeaturesInformation = ExpGetSystemWriteConstraintInformation(Address);
                Size = 8;
                goto LABEL_125;
              }
              if ( !a7 )
                return -1073741820;
              if ( !PreviousMode )
              {
                *a7 = 8;
                return -1073741820;
              }
              goto LABEL_302;
            case 196:
              SystemProcessorFeaturesInformation = KeQueryKvaShadowInformation(Address, Length, PreviousMode, &Size);
              goto LABEL_125;
            case 197:
              Size = 8;
              if ( (unsigned int)Length < 8 )
                goto LABEL_395;
              if ( PreviousMode )
                RtlWriteULong64ToUser(Address, qword_140E2D638);
              else
                *(_QWORD *)&Address->Relationship = qword_140E2D638;
              goto LABEL_126;
          }
          v183 = a1 - 198;
          if ( a1 == 198 )
          {
            ProcessorTopologyCount = guard_dispatch_icall_no_overrides(34LL, 0LL);
            if ( ProcessorTopologyCount != -1073741820 )
              return -1073741637;
            if ( (unsigned int)Length >= v212 && Address )
            {
              if ( PreviousMode )
              {
                v109 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePool2(0x101uLL);
                Information = v109;
                if ( !v109 )
                  goto LABEL_519;
              }
              else
              {
                v109 = Address;
                Information = Address;
              }
              v184 = guard_dispatch_icall_no_overrides(34LL, v212);
              ProcessorTopologyCount = v184;
              if ( !PreviousMode )
                goto LABEL_126;
              if ( v184 < 0 )
                goto LABEL_560;
              goto LABEL_559;
            }
LABEL_561:
            v53 = v212;
            goto LABEL_517;
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
          v190 = a1 - 210;
          if ( !v190 )
          {
            SystemProcessorFeaturesInformation = CmQuerySingleFeatureConfiguration(
                                                   Src,
                                                   v210,
                                                   Address,
                                                   Length,
                                                   &Size,
                                                   KeGetCurrentThread()->PreviousMode);
            goto LABEL_125;
          }
          v191 = v190 - 1;
          if ( !v191 )
          {
            SystemProcessorFeaturesInformation = CmQueryFeatureConfigurationSections(
                                                   Src,
                                                   v210,
                                                   Address,
                                                   Length,
                                                   &Size,
                                                   KeGetCurrentThread()->PreviousMode);
            goto LABEL_125;
          }
          v192 = v191 - 2;
          if ( !v192 )
          {
            SystemProcessorFeaturesInformation = KeQuerySecureSpeculationInformation(
                                                   Address,
                                                   (unsigned int)Length,
                                                   &Size);
            goto LABEL_125;
          }
          v193 = v192 - 1;
          if ( v193 )
          {
            if ( v193 != 1 )
              return -1073741821;
            if ( PreviousMode )
              goto LABEL_1041;
            v194 = *(_QWORD *)&ExpSysDbgLock.SchedulerApc.Type;
            if ( *(_QWORD *)&ExpSysDbgLock.SchedulerApc.Type )
            {
              Size = 24;
              if ( (unsigned int)Length >= 0x18 )
              {
                *(_OWORD *)&Address->Relationship = **(_OWORD **)&ExpSysDbgLock.SchedulerApc.Type;
                *(_QWORD *)&Address->Group.Reserved[4] = *(_QWORD *)(v194 + 16);
                goto LABEL_126;
              }
              goto LABEL_395;
            }
            goto LABEL_1043;
          }
          if ( PreviousMode )
            return -1073741727;
          if ( !ExpSysDbgLock.SchedulerApc.Thread )
            goto LABEL_126;
          if ( !*(_QWORD *)ExpSysDbgLock.SchedulerApc.Thread )
            goto LABEL_126;
          Lock = ExpSysDbgLock.SchedulerApc.Thread->Header.Lock;
          Size = ExpSysDbgLock.SchedulerApc.Thread->Header.Lock;
          if ( !Address )
            goto LABEL_126;
          if ( (unsigned int)Length < Lock )
            goto LABEL_395;
          v196 = Lock;
          p_WaitListHead = &ExpSysDbgLock.SchedulerApc.Thread->Header.WaitListHead;
          goto LABEL_1053;
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
            v198 = 2 * KeIsKernelCetAuditModeEnabled();
            v199 = (KeIsKernelCetEnabled() | v198) << 7;
            v200 = 2 * (KeIsUserCetAllowed() | v199);
            v201 = v242 & 0xFFFFFCFC | KeIsCetCapable() | v200;
            LODWORD(v242) = v201;
            if ( PreviousMode )
              RtlWriteULongToUser(Address, v201);
            else
              RtlCopyVolatileMemory(Address, &v242, 4uLL);
            goto LABEL_169;
          case 222:
            SystemProcessorFeaturesInformation = CmQueryBuildVersionInformation(
                                                   (unsigned int *)Src,
                                                   v210,
                                                   Address,
                                                   Length,
                                                   &Size,
                                                   KeGetCurrentThread()->PreviousMode);
            goto LABEL_125;
          case 223:
            if ( !Src )
              return -1073741821;
            v30 = v210;
            ProcessorTopologyCount = ExPoolQueryLimits(
                                       Src,
                                       (unsigned int)v210,
                                       Address,
                                       (unsigned int)Length,
                                       KeGetCurrentThread()->PreviousMode);
            if ( ProcessorTopologyCount >= 0 )
              goto LABEL_668;
            goto LABEL_126;
          case 227:
            Size = 1;
            if ( (_DWORD)Length == 1 )
            {
              LOBYTE(Address->Relationship) = 1;
              goto LABEL_126;
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
      goto LABEL_125;
    }
    if ( a1 > 243 )
    {
      if ( a1 <= 251 )
      {
        if ( a1 == 251 )
        {
          SystemProcessorFeaturesInformation = ObQueryRefTraceInformationEx(
                                                 (char *)Address,
                                                 Length,
                                                 (unsigned int *)&Size);
          goto LABEL_125;
        }
        if ( a1 == 244 )
        {
LABEL_643:
          if ( (_DWORD)v210 )
            goto LABEL_395;
          ProcessorTopologyCount = MmEnumerateBadPages(&v223, v20);
          v134 = 0LL;
          v135 = 0;
          p_Count = v223;
          if ( v223 )
          {
            v134 = *v223 & 0xFFFFFFFFFFFFFLL;
            if ( v134 <= 0x1FFFFFFF )
            {
              v135 = 8 * *(_DWORD *)v223;
              Size = v135;
            }
            else
            {
              ProcessorTopologyCount = -1073741820;
            }
          }
          if ( (unsigned int)Length < v135 )
            ProcessorTopologyCount = -1073741820;
          if ( !v223 )
            goto LABEL_126;
          if ( ProcessorTopologyCount >= 0 )
          {
            if ( a1 == 128 )
            {
              v204 = v223 + 1;
              for ( k = v223 + 1; v134; --v134 )
              {
                if ( (*v204 & 0x4000000000000000LL) == 0 )
                {
                  v206 = *v204 & 0x7FFFFFFFFFFFFFFFLL;
                  *v204 = v206;
                  *k++ = v206;
                }
                ++v204;
              }
              Size = ((_DWORD)k - (_DWORD)p_Count - 8) & 0xFFFFFFF8;
            }
            memmove(Address, p_Count + 1, Size);
            p_Count = v223;
          }
          v110 = 0;
LABEL_526:
          ExFreePoolWithTag(p_Count, v110);
          goto LABEL_126;
        }
        if ( a1 != 247 )
        {
          if ( a1 != 248 )
          {
            if ( a1 == 249 )
            {
              SystemProcessorFeaturesInformation = ExpQuerySystemMemoryNumaCacheInformation(
                                                     Src,
                                                     v210,
                                                     Address,
                                                     Length,
                                                     &Size,
                                                     PreviousMode);
              goto LABEL_125;
            }
            if ( a1 != 250 )
              return -1073741821;
            Size = 16;
            if ( (unsigned int)Length < 0x10 || (Length & 7) != 0 )
              goto LABEL_395;
            v58 = 16LL;
            Flink = (struct _LIST_ENTRY *)&stru_140FC01F0.IptSaveArea;
            v60 = Address;
            if ( PreviousMode )
              goto LABEL_1136;
            RtlCopyVolatileMemory(Address, &stru_140FC01F0.IptSaveArea, 0x10uLL);
            goto LABEL_126;
          }
          goto LABEL_1164;
        }
        if ( PreviousMode && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
LABEL_1041:
          ProcessorTopologyCount = -1073741727;
          goto LABEL_126;
        }
        p_WaitListHead = ExpSysDbgLock.SchedulerApc.ApcListEntry.Flink;
        if ( !ExpSysDbgLock.SchedulerApc.ApcListEntry.Flink )
        {
LABEL_1043:
          ProcessorTopologyCount = -1073741810;
          goto LABEL_126;
        }
        Size = 32 * HIDWORD(ExpSysDbgLock.SchedulerApc.ApcListEntry.Flink->Flink) + 16;
        if ( (unsigned int)Length < Size )
          goto LABEL_395;
        v196 = Size;
LABEL_1053:
        memmove(Address, p_WaitListHead, v196);
        goto LABEL_126;
      }
      if ( a1 == 252 || a1 == 253 )
        goto LABEL_124;
      if ( a1 == 254 )
      {
        SystemProcessorFeaturesInformation = ExpQueryRuntimeAttestationReport(
                                               Src,
                                               v210,
                                               Address,
                                               Length,
                                               (unsigned int *)&Size,
                                               PreviousMode);
        goto LABEL_125;
      }
      v183 = a1 - 255;
      if ( a1 == 255 )
      {
        SystemProcessorFeaturesInformation = ExGetPoolTagInfo2(
                                               (int *)Address,
                                               Length,
                                               (unsigned int *)&Size,
                                               PreviousMode);
        goto LABEL_125;
      }
    }
    else
    {
      if ( a1 == 243 )
      {
        Size = 16;
        if ( (unsigned int)Length >= 0x10 )
        {
          TrustedAppRuntimeInformation = VslQueryTrustedAppRuntimeInformation((__int64)&v242);
          if ( TrustedAppRuntimeInformation < 0 )
            *(_QWORD *)&v242 = v242 & 0xFFFFFFFFFFFFFFFEuLL;
          ProcessorTopologyCount = 0;
          if ( TrustedAppRuntimeInformation >= 0 )
            ProcessorTopologyCount = TrustedAppRuntimeInformation;
          *(_OWORD *)&Address->Relationship = v242;
          goto LABEL_126;
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
                if ( a1 == 235 )
                {
                  LOBYTE(v9) = 1;
                  SystemProcessorFeaturesInformation = HvlQuerySetBootPagesInfo(
                                                         Address,
                                                         Length,
                                                         PreviousMode,
                                                         v9,
                                                         (unsigned int *)&Size);
                  goto LABEL_125;
                }
                return -1073741821;
              }
              Size = 17048;
              if ( (unsigned int)Length >= 0x4298 )
              {
                SystemProcessorFeaturesInformation = HvlQueryMinrootInfo(Address, Length, &Size);
                goto LABEL_125;
              }
              goto LABEL_395;
            }
            goto LABEL_439;
          }
          goto LABEL_541;
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
                                                 v210,
                                                 Address,
                                                 Length,
                                                 &Size);
          goto LABEL_125;
        case 239:
          SystemProcessorFeaturesInformation = ExpQuerySystemMemoryNumaInformation(
                                                 (__int64 *)Src,
                                                 v210,
                                                 Address,
                                                 Length,
                                                 &Size);
          goto LABEL_125;
      }
      v183 = a1 - 240;
      if ( a1 == 240 )
      {
        SystemProcessorFeaturesInformation = ExpQuerySystemMemoryNumaPerformanceInformation(
                                               Src,
                                               (unsigned int)v210,
                                               Address,
                                               (unsigned int)Length,
                                               &Size);
        goto LABEL_125;
      }
    }
LABEL_1162:
    if ( v183 != 1 )
      return -1073741821;
    goto LABEL_1164;
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
        goto LABEL_125;
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
                                                     (unsigned __int16)Information,
                                                     (char *)Address,
                                                     Length,
                                                     PreviousMode,
                                                     (unsigned int *)&Size);
              goto LABEL_125;
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
                    Address->Relationship = ObpObjectSecurityMode;
                  goto LABEL_169;
                }
                if ( v92 != 2 )
                  return -1073741821;
                if ( (_DWORD)Length == 8 )
                {
                  if ( v229 == 7 )
                  {
                    LODWORD(v242) = 7;
                    DWORD1(v242) = off_140E00B38[0] != xKdEnumerateDebuggingDevices;
                  }
                  else
                  {
                    if ( v229 != 8 )
                      return -1073741637;
                    LODWORD(v242) = 8;
                    DWORD1(v242) = (unsigned __int8)guard_dispatch_icall_no_overrides(1LL, v20);
                  }
                  if ( PreviousMode )
                    RtlWriteULong64ToUser(Address, v242);
                  else
                    RtlCopyVolatileMemory(Address, &v242, 8uLL);
                  goto LABEL_1021;
                }
                return -1073741811;
              }
LABEL_439:
              ProcessorTopologyCount = -1073741637;
              goto LABEL_126;
            }
            if ( (unsigned int)Length >= 0x20 )
            {
              if ( !(unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v210 + 1) )
              {
                ChannelInformation = ExGetBigPoolInfo(
                                       SHIDWORD(v210),
                                       (unsigned int *)Address,
                                       Length,
                                       (unsigned int *)&Size,
                                       PreviousMode);
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
LABEL_755:
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
            if ( !(unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v210 + 1) )
            {
              v93 = SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode);
              ChannelInformation = ExpQueryModuleInformationEx(
                                     HIDWORD(v210),
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
            goto LABEL_125;
          }
          if ( a1 == 80 )
          {
            SystemProcessorFeaturesInformation = MmQueryMemoryListInformation(
                                                   0xFFFFFFFFFFFFFFFFuLL,
                                                   Address,
                                                   Length,
                                                   PreviousMode,
                                                   &Size);
            goto LABEL_125;
          }
          if ( a1 != 81 )
            return -1073741821;
LABEL_613:
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
          MmQuerySystemWorkingSetInformation(v40, &v242);
          v58 = 64LL;
          Flink = (struct _LIST_ENTRY *)&v242;
          v60 = Address;
          if ( !PreviousMode )
          {
            RtlCopyVolatileMemory(Address, &v242, 0x40uLL);
            goto LABEL_126;
          }
          goto LABEL_1136;
        }
        v94 = 8 * v18;
        Size = v94;
        if ( (unsigned int)Length >= 8 )
        {
          v95 = (unsigned int)Length < v94;
          if ( (unsigned int)Length < v94 )
          {
            v209 = (unsigned int)Length >> 3;
            v95 = (unsigned int)Length < v94;
          }
          ProcessorTopologyCount = v95 ? 0xC0000004 : 0;
          LOBYTE(v14) = 1;
          KeFlushProcessWriteBuffers(v14);
          for ( m = 0; ; m = HIDWORD(v210) + 1 )
          {
            HIDWORD(v210) = m;
            if ( m >= v209 )
              break;
            ProcNumber.Group = (unsigned __int16)Information;
            ProcNumber.Number = m;
            ProcNumber.Reserved = 0;
            *v8++ = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 24) + 72LL);
            v235 = v8;
          }
          goto LABEL_126;
        }
LABEL_464:
        ProcessorTopologyCount = -1073741789;
        goto LABEL_126;
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
          goto LABEL_517;
        }
        v97 = a1 - 86;
        if ( !v97 )
        {
          SystemProcessorFeaturesInformation = ObQueryRefTraceInformation(Address, (unsigned int)Length, &Size);
          goto LABEL_125;
        }
        v98 = v97 - 1;
        if ( !v98 )
        {
          Size = 8;
          if ( (_DWORD)Length == 8 )
          {
            Address->Relationship = MmSpecialPoolTag;
            Address->Size = MmSpecialPoolCatchOverruns != 0;
            goto LABEL_126;
          }
          goto LABEL_395;
        }
        v99 = v98 - 1;
        if ( v99 )
        {
          v100 = v99 - 2;
          if ( v100 )
          {
            if ( v100 == 1 )
            {
              SystemProcessorFeaturesInformation = HvlQueryEnlightenmentInfo(Address, Length, PreviousMode, &Size);
              goto LABEL_125;
            }
            return -1073741821;
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
            goto LABEL_755;
          }
          if ( PreviousMode )
            RtlCopyToUser(Address, &ExpSysDbgLock.SchedulerApcFill5[48], 0x10uLL);
          else
            RtlCopyVolatileMemory(Address, &ExpSysDbgLock.SchedulerApcFill5[48], 0x10uLL);
          p_Type = &Address->Cache.Type;
          if ( PreviousMode )
            RtlWriteULongToUser(p_Type, *(int *)&ExpSysDbgLock.SchedulerApcFill5[64]);
          else
            RtlCopyVolatileMemory(p_Type, &ExpSysDbgLock.SchedulerApcFill5[64], 4uLL);
          if ( (unsigned int)Length < Size )
          {
LABEL_220:
            Size = 20;
            goto LABEL_126;
          }
          if ( PreviousMode )
            RtlWriteULong64ToUser(&Address->Group.Reserved[12], (__int64)ExpSysDbgLock.SchedulerApc.SystemArgument2);
          else
            *(_QWORD *)&Address->Group.Reserved[12] = ExpSysDbgLock.SchedulerApc.SystemArgument2;
        }
        else
        {
          *(_OWORD *)ProcessId = 0LL;
          v225 = 0LL;
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
            ProbeForRead(v225, WORD1(ProcessId[1]), 2u);
          CurrentThread = KeGetCurrentThread();
          LODWORD(Information) = WORD1(ProcessId[1]);
          --CurrentThread->KernelApcDisable;
          ProcessorTopologyCount = PsLookupProcessByProcessId(ProcessId[0], &Process);
          if ( ProcessorTopologyCount < 0 )
          {
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v103);
            return ProcessorTopologyCount;
          }
          ProcessorTopologyCount = PsQueryFullProcessImageName(
                                     (__int64)Process,
                                     &Address->NumaNode.NodeNumber,
                                     (void *)v225,
                                     (unsigned int *)&Information,
                                     PreviousMode);
          ObfDereferenceObjectWithTag(Process, 0x746C6644u);
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v104);
          if ( ProcessorTopologyCount == -1073741820 )
          {
            if ( PreviousMode )
              RtlWriteUShortToUser(&Address->Cache.LineSize, (__int16)Information);
            else
              Address->Cache.LineSize = (unsigned __int16)Information;
          }
        }
        goto LABEL_126;
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
          LOWORD(Object[1]) = (_WORD)Information;
          Object[0] = (PVOID)KeQueryGroupAffinity((USHORT)Information);
          v217[0] = (PVOID)__popcnt((unsigned __int64)Object[0]);
          ProcessorTopologyCount = PpmCapturePerformanceDistribution(0LL, 0, (int)v217[0], (__int64)Object, &v212);
          if ( ProcessorTopologyCount != -1073741820 )
            goto LABEL_126;
          v53 = v212;
          if ( v212 > (unsigned int)Length )
            goto LABEL_517;
          v109 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePool2(0x40uLL);
          Information = v109;
          if ( !v109 )
            goto LABEL_519;
          ProcessorTopologyCount = PpmCapturePerformanceDistribution(
                                     (unsigned __int64)v109,
                                     v212,
                                     (int)v217[0],
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
          goto LABEL_525;
        }
        v112 = 99;
      }
      else
      {
        v112 = 98;
      }
LABEL_528:
      SystemProcessorFeaturesInformation = IoQuerySystemDeviceName(v112, (__int64)Address);
      goto LABEL_125;
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
        goto LABEL_125;
      }
      if ( a1 > 108 )
      {
        v128 = a1 - 109;
        if ( !v128 )
        {
          LOBYTE(v9) = PreviousMode;
          SystemProcessorFeaturesInformation = SmQueryStoreInformation(v14, Address, (unsigned int)Length, v9, &Size);
          goto LABEL_125;
        }
        v129 = v128 - 3;
        if ( !v129 )
        {
          SystemProcessorFeaturesInformation = IoQueryVhdBootInformation(v14, Address, Length, &Size, PreviousMode);
          goto LABEL_125;
        }
        v130 = v129 - 1;
        if ( !v130 )
        {
          SystemProcessorFeaturesInformation = PsQueryCpuQuotaInformation(
                                                 Address,
                                                 (unsigned int)Length,
                                                 PreviousMode,
                                                 &Size);
          goto LABEL_125;
        }
        v131 = v130 - 1;
        if ( !v131 )
          goto LABEL_594;
        if ( v131 != 1 )
          return -1073741821;
        if ( !(_DWORD)v210 )
        {
          Size = 8;
          if ( (unsigned int)Length >= 8 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(Address, DbgkErrorPortStartTimeout);
            else
              Address->Relationship = DbgkErrorPortStartTimeout;
            if ( PreviousMode )
              RtlWriteULongToUser(&Address->Size, DbgkErrorPortCommTimeout);
            else
              Address->Size = DbgkErrorPortCommTimeout;
            goto LABEL_126;
          }
        }
        goto LABEL_395;
      }
      switch ( a1 )
      {
        case 'l':
          v124 = 8 * v18;
          Size = 8 * v18;
          if ( (unsigned int)Length >= 8 )
          {
            v125 = (unsigned int)Length < v124;
            if ( (unsigned int)Length < v124 )
            {
              v18 = (unsigned int)Length >> 3;
              v209 = (unsigned int)Length >> 3;
              v125 = (unsigned int)Length < v124;
            }
            ProcessorTopologyCount = v125 ? 0xC0000004 : 0;
            for ( n = 0; n < v18; ++n )
            {
              ProcNumber.Group = (unsigned __int16)Information;
              ProcNumber.Number = n;
              ProcNumber.Reserved = 0;
              v127 = *(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 34680);
              if ( PreviousMode )
                RtlWriteULong64ToUser(v8, v127);
              else
                *v8 = v127;
              ++v8;
              v18 = v209;
            }
            goto LABEL_126;
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
          v117 = PsGetCurrentServerSiloGlobals()[76].Blink;
          ExAcquireTimeRefreshLockShared(v119, v118, v120, v121);
          v122 = &v242;
          v123 = 3LL;
          do
          {
            *v122 = (__int128)*v117;
            v122[1] = (__int128)v117[1];
            v122[2] = (__int128)v117[2];
            v122[3] = (__int128)v117[3];
            v122[4] = (__int128)v117[4];
            v122[5] = (__int128)v117[5];
            v122[6] = (__int128)v117[6];
            v122 += 8;
            *(v122 - 1) = (__int128)v117[7];
            v117 += 8;
            --v123;
          }
          while ( v123 );
          *v122 = (__int128)*v117;
          v122[1] = (__int128)v117[1];
          v122[2] = (__int128)v117[2];
          ExReleaseTimeRefreshLockShared();
          v72 = 432LL;
          v73 = Address;
          if ( !PreviousMode )
          {
            RtlCopyVolatileMemory(Address, &v242, 0x1B0uLL);
            goto LABEL_316;
          }
          goto LABEL_314;
        case 'g':
          SystemProcessorFeaturesInformation = SeCodeIntegrityQueryInformation((__int64)Address, (unsigned int)Length);
          goto LABEL_125;
      }
      if ( a1 != 105 )
      {
        if ( a1 == 106 )
        {
          ProcessorTopologyCount = -1073741821;
          goto LABEL_126;
        }
        if ( a1 != 107 )
          return -1073741821;
LABEL_541:
        Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)&v242;
        v113 = 80;
        v212 = 80;
        if ( (unsigned int)Length < 0x50 )
        {
          v113 = Length;
          v212 = Length;
        }
        Size = v113;
        p_ProcNumber = &ProcNumber;
        if ( a1 != 231 )
          p_ProcNumber = 0LL;
        v217[0] = p_ProcNumber;
        v109 = Information;
        while ( 1 )
        {
          LogicalProcessorRelationship = KeQueryLogicalProcessorRelationship(
                                           p_ProcNumber,
                                           RelationshipType[0],
                                           v109,
                                           (PULONG)&Size);
          ProcessorTopologyCount = LogicalProcessorRelationship;
          if ( LogicalProcessorRelationship >= 0 )
            break;
          if ( LogicalProcessorRelationship != -1073741820 )
            goto LABEL_1096;
          if ( Size > (unsigned int)Length )
          {
            ProcessorTopologyCount = -1073741820;
            goto LABEL_1096;
          }
          if ( v109 && v109 != (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)&v242 )
            ExFreePoolWithTag(v109, 0);
          v109 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePool2(0x101uLL);
          Information = v109;
          if ( !v109 )
          {
            ProcessorTopologyCount = -1073741670;
            goto LABEL_1096;
          }
          v212 = Size;
          p_ProcNumber = (struct _PROCESSOR_NUMBER *)v217[0];
        }
        if ( PreviousMode )
          RtlCopyToUser(Address, v109, Size);
        else
          RtlCopyVolatileMemory(Address, v109, Size);
        ProcessorTopologyCount = 0;
LABEL_1096:
        if ( !v109 || v109 == (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)&v242 )
          goto LABEL_126;
        v110 = 0;
        goto LABEL_525;
      }
      ProcessorTopologyCount = guard_dispatch_icall_no_overrides(23LL, 0LL);
      if ( ProcessorTopologyCount != -1073741820 )
        goto LABEL_439;
      if ( (unsigned int)Length >= v212 && Address )
      {
        if ( PreviousMode )
        {
          v109 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePool2(0x101uLL);
          Information = v109;
          if ( !v109 )
            goto LABEL_519;
        }
        else
        {
          v109 = Address;
          Information = Address;
        }
        v116 = guard_dispatch_icall_no_overrides(23LL, v212);
        ProcessorTopologyCount = v116;
        if ( !PreviousMode )
          goto LABEL_126;
        if ( v116 < 0 )
          goto LABEL_560;
LABEL_559:
        memmove(Address, v109, Size);
LABEL_560:
        v110 = 1868983881;
LABEL_525:
        p_Count = v109;
        goto LABEL_526;
      }
      goto LABEL_561;
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
              goto LABEL_125;
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
          v132 = 4 * (unsigned __int16)KeNumberNodes;
          Size = v132;
          if ( (unsigned int)Length >= v132 )
          {
            v58 = v132;
            Flink = (struct _LIST_ENTRY *)((char *)KeNodeDistance
                                         + 4 * (unsigned __int16)KeNumberNodes * (unsigned __int16)v20);
            v60 = Address;
            if ( !PreviousMode )
            {
              RtlCopyVolatileMemory(Address, Flink, v132);
              goto LABEL_126;
            }
            goto LABEL_1136;
          }
          goto LABEL_395;
        }
        v40 = 2;
        goto LABEL_613;
      }
      Size = 8;
      if ( (_DWORD)Length != 8 || !Address )
        goto LABEL_395;
      v109 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePool2(0x101uLL);
      v217[0] = v109;
      if ( v109 )
      {
        ProcessorTopologyCount = guard_dispatch_icall_no_overrides(26LL, 8LL);
        if ( ProcessorTopologyCount >= 0 )
        {
          LODWORD(v242) = v109->Relationship;
          v133 = v109->Size & 1 | DWORD1(v242) & 0xFFFFFFFE;
          DWORD1(v242) = v133 ^ (v109->Size ^ v133) & 2 ^ (v109->Size ^ v133 ^ (v109->Size ^ v133) & 2) & 4;
          if ( PreviousMode )
            RtlWriteULong64ToUser(Address, v242);
          else
            RtlCopyVolatileMemory(Address, &v242, 8uLL);
        }
        goto LABEL_560;
      }
LABEL_519:
      ProcessorTopologyCount = -1073741670;
      goto LABEL_126;
    }
    switch ( a1 )
    {
      case '{':
        v30 = 32;
        if ( (_DWORD)Length == 32 )
        {
          v137 = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
          *(_QWORD *)&v242 = MmGetAvailablePages(v137);
          *((_QWORD *)&v242 + 1) = MmGetTotalCommittedPages(v138);
          v243.Flink = (struct _LIST_ENTRY *)MmGetTotalCommitLimit(v139);
          PeakCommitment = MmGetPeakCommitment(v140);
          v243.Blink = (struct _LIST_ENTRY *)PeakCommitment;
          if ( PeakCommitment < *((_QWORD *)&v242 + 1) )
            PeakCommitment = *((_QWORD *)&v242 + 1);
          v243.Blink = (struct _LIST_ENTRY *)PeakCommitment;
          v34 = 32LL;
          v35 = Address;
          if ( !PreviousMode )
          {
            RtlCopyVolatileMemory(Address, &v242, 0x20uLL);
            goto LABEL_668;
          }
LABEL_780:
          RtlCopyToUser(v35, &v242, v34);
          goto LABEL_668;
        }
        if ( !a7 )
          return -1073741820;
        if ( !PreviousMode )
        {
          *a7 = 32;
          return -1073741820;
        }
        goto LABEL_755;
      case '|':
        Size = 12;
        if ( (unsigned int)Length < 4 )
          goto LABEL_395;
        Relationship = Address->Relationship;
        if ( Relationship == RelationNumaNode )
        {
          if ( (unsigned int)Length >= 0xC )
          {
            Address->NumaNode.NodeNumber = 0;
            Address->Size = 0;
            Address->NumaNode.NodeNumber = 1;
            Address->Size = 1;
            if ( MEMORY[0xFFFFF780000003C6] )
              Address->Size &= ~1u;
            goto LABEL_126;
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
          ProcessorTopologyCount = BgkQueryBootGraphicsInformation(0LL, &v242);
          if ( ProcessorTopologyCount >= 0 )
          {
            v136 = v242;
            if ( PreviousMode )
              v136 = 0LL;
            *(_QWORD *)&v242 = v136;
            memmove(Address, &v242, Size);
          }
          goto LABEL_126;
        }
        goto LABEL_395;
    }
    if ( a1 != 128 )
      return -1073741821;
    goto LABEL_643;
  }
  if ( a1 == 65 )
  {
    if ( (unsigned int)Length < 4 )
    {
      if ( a7 )
        *a7 = 4;
      return -1073741820;
    }
    v85 = RelationProcessorCore;
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
    Address->Relationship = v85;
    goto LABEL_169;
  }
  if ( a1 > 25 )
  {
    if ( a1 > 51 )
    {
      if ( a1 <= 59 )
      {
        if ( a1 == 59 )
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
            Address->Relationship = MEMORY[0xFFFFF780000002E0];
          goto LABEL_169;
        }
        if ( a1 != 53 )
        {
          switch ( a1 )
          {
            case '7':
              SystemProcessorFeaturesInformation = ExpQueryNumaProcessorMap(Address, Length, PreviousMode, &Size);
              goto LABEL_125;
            case '8':
              SystemProcessorFeaturesInformation = PfSnQueryPrefetcherInformation(
                                                     0LL,
                                                     Address,
                                                     Length,
                                                     PreviousMode,
                                                     &Size);
              goto LABEL_125;
            case '9':
              goto LABEL_124;
            case ':':
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
                Address->Relationship = RecommendedSharedDataAlignment;
LABEL_169:
              Size = 4;
              goto LABEL_126;
          }
          return -1073741821;
        }
        if ( (unsigned int)Length >= 0x10 )
        {
          v219 = Address->Relationship;
          v77 = *(volatile void **)&Address->Processor.Flags;
          v238 = v77;
          v78 = Address->Size;
          v232 = v78;
          ProbeForWrite(v77, v78, 4u);
          SystemProcessorFeaturesInformation = ExpGetProcessInformation(
                                                 (char *)v77,
                                                 v78,
                                                 (unsigned int *)&Size,
                                                 &v219,
                                                 5);
          goto LABEL_125;
        }
        if ( !a7 )
          return -1073741820;
        if ( !PreviousMode )
        {
          *a7 = 16;
          return -1073741820;
        }
LABEL_355:
        RtlWriteULongToUser(a7, 16);
        return -1073741820;
      }
      v79 = a1 - 60;
      if ( !v79 )
      {
        SystemProcessorFeaturesInformation = ExpQueryNumaAvailableMemory(Address, Length, &Size, PreviousMode);
        goto LABEL_125;
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
            if ( !a7 )
              return -1073741820;
            if ( !PreviousMode )
            {
              *a7 = 12;
              return -1073741820;
            }
            goto LABEL_384;
          }
          SystemProcessorFeaturesInformation = ExpGetSystemEmulationProcessorInformation((__int64)Address);
          goto LABEL_153;
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
          if ( !(unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v210 + 1) )
          {
            ChannelInformation = ExpGetHandleInformationEx(HIDWORD(v210), (__int64)Address, Length, &Size);
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
          HIDWORD(v210) = v83;
          if ( v83 >= v18 )
            break;
          memset_0(v254, 0, 0x50uLL);
          ProcNumber.Group = (unsigned __int16)Information;
          ProcNumber.Number = BYTE4(v210);
          ProcNumber.Reserved = 0;
          v84 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
          PoGetPerfStateAndParkingInfo(&ProcNumber, (__int64)&v242, 0LL, (unsigned __int64 *)Object);
          memset_0(v254, 0, 0x50uLL);
          v256 = (unsigned int)KeMaximumIncrement
               * (unsigned __int64)(unsigned int)(*(_DWORD *)(v84 + 34372) + *(_DWORD *)(v84 + 34376));
          v257 = (unsigned int)KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v84 + 24) + 652LL);
          if ( BYTE4(v243.Blink) )
          {
            v254[0] = BYTE8(v242);
            v254[7] = BYTE12(v242);
            v254[8] = v243.Flink;
            v255 = 1;
          }
          v258 = Object[0];
          if ( PreviousMode )
            RtlCopyToUser(v8, v254, 0x50uLL);
          else
            RtlCopyVolatileMemory(v8, v254, 0x50uLL);
          v8 += 10;
          v83 = HIDWORD(v210) + 1;
          v18 = v209;
        }
        goto LABEL_126;
      }
      goto LABEL_395;
    }
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
            goto LABEL_125;
          }
          if ( !a7 )
            return -1073741820;
          if ( !PreviousMode )
          {
            *a7 = 16;
            return -1073741820;
          }
          goto LABEL_355;
        }
        v44 = a1 - 28;
        if ( !v44 )
        {
          if ( (_DWORD)Length == 12 || (_DWORD)Length == 24 )
          {
            ExAcquireTimeRefreshLockShared(v14, v20, v15, v9);
            v61 = KeTimeAdjustmentFrequency;
            LOBYTE(Size_4) = KeTimeSynchronization;
            ExReleaseTimeRefreshLockShared();
            if ( (_DWORD)Length == 24 )
            {
              *(_QWORD *)&v242 = v61;
              *((_QWORD *)&v242 + 1) = MEMORY[0xFFFFF78000000300];
              LOBYTE(v243.Flink) = Size_4;
            }
            else
            {
              LODWORD(v242) = MEMORY[0xFFFFF78000000300] * (unsigned __int64)(unsigned int)KeMaximumIncrement / v61;
              DWORD1(v242) = KeMaximumIncrement;
              BYTE8(v242) = Size_4;
            }
            v28 = (unsigned int)Length;
            v29 = Address;
            if ( PreviousMode )
            {
LABEL_135:
              RtlCopyToUser(v29, &v242, v28);
LABEL_137:
              Size = Length;
              goto LABEL_126;
            }
LABEL_136:
            RtlCopyVolatileMemory(Address, &v242, (unsigned int)Length);
            goto LABEL_137;
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
                                                 (unsigned int *)Address,
                                                 Length,
                                                 PreviousMode,
                                                 (unsigned int *)&Size);
          goto LABEL_125;
        }
        v47 = v46 - 2;
        if ( v47 )
        {
          v48 = v47 - 2;
          if ( v48 )
          {
            if ( v48 == 1 )
            {
              v49 = 48;
              if ( (unsigned int)Length < 0x30 )
              {
                if ( a7 )
                {
                  if ( PreviousMode )
                  {
LABEL_689:
                    RtlWriteULongToUser(a7, 48);
                    return -1073741820;
                  }
                  *a7 = 48;
                }
                return -1073741820;
              }
              v50 = RelationProcessorCore;
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
              Address->Relationship = v50;
              Address->Size = KeThreadSwitchCounters;
              Address->NumaNode.NodeNumber = dword_140F26B68;
              Address->Cache.CacheSize = dword_140F26B64;
              Address->Cache.Type = dword_140F26B6C;
              *(_DWORD *)&Address->Group.Reserved[8] = dword_140F26B70;
              *(_DWORD *)&Address->Group.Reserved[12] = dword_140F26B78;
              *(_DWORD *)&Address->Group.Reserved[16] = dword_140F26B74;
              *(_DWORD *)&Address->Group.GroupInfo[0].MaximumProcessorCount = dword_140F26B7C;
              *(_DWORD *)&Address->Group.GroupInfo[0].Reserved[2] = dword_140F26B80;
              *(_DWORD *)&Address->Group.GroupInfo[0].Reserved[6] = dword_140F26B84;
              *(_DWORD *)&Address->Group.GroupInfo[0].Reserved[10] = dword_140F26B88;
              goto LABEL_740;
            }
            return -1073741821;
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
            LOBYTE(Address->Relationship) = (_BYTE)KdDebuggerEnabled;
          if ( PreviousMode )
            RtlWriteUCharToUser((_BYTE *)&Address->Relationship + 1, (char)KdDebuggerNotPresent);
          else
            BYTE1(Address->Relationship) = (_BYTE)KdDebuggerNotPresent;
          v53 = 2;
LABEL_517:
          Size = v53;
          goto LABEL_126;
        }
        if ( (unsigned int)Length < 0x10 )
        {
          if ( !a7 )
            return -1073741820;
          if ( !PreviousMode )
          {
            *a7 = 16;
            return -1073741820;
          }
          goto LABEL_355;
        }
        Size = 16;
        v54 = 0;
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
        LODWORD(v242) = v54;
        *(_QWORD *)((char *)&v242 + 4) = v55;
        HIDWORD(v242) = 0;
        v58 = 16LL;
        Flink = (struct _LIST_ENTRY *)&v242;
        v60 = Address;
        if ( !PreviousMode )
        {
          RtlCopyVolatileMemory(Address, &v242, 0x10uLL);
          goto LABEL_126;
        }
LABEL_1136:
        RtlCopyToUser(v60, Flink, v58);
        goto LABEL_126;
      }
      v62 = a1 - 42;
      if ( v62 )
      {
        v63 = v62 - 1;
        if ( !v63 )
        {
          if ( (unsigned int)Length >= 0x18 )
          {
            Size = Length;
            SystemProcessorFeaturesInformation = ExpQueryLegacyDriverInformation(
                                                   (__int64)Address,
                                                   (unsigned int *)&Size);
            goto LABEL_125;
          }
          if ( a7 )
            *a7 = 24;
          return -1073741820;
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
            goto LABEL_125;
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
LABEL_302:
            RtlWriteULongToUser(a7, 8);
            return -1073741820;
          }
          if ( PreviousMode )
            RtlWriteULong64ToUser(Address, 0xFFFF800000000000uLL);
          else
            *(_QWORD *)&Address->Relationship = 0xFFFF800000000000uLL;
          goto LABEL_1021;
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
        v242 = (__int128)*v67;
        v243 = v67[1];
        v244 = v67[2];
        v245 = v67[3];
        v246 = v67[4];
        v247 = v67[5];
        v248 = v67[6];
        v249 = v67[7];
        v67 += 8;
        v250 = *v67;
        v251 = v67[1];
        v252 = v67[2].Flink;
        v253 = (int)v67[2].Blink;
        ExReleaseTimeRefreshLockShared();
        v72 = 172LL;
        v73 = Address;
        if ( !PreviousMode )
        {
          RtlCopyVolatileMemory(Address, &v242, 0xACuLL);
          goto LABEL_316;
        }
LABEL_314:
        RtlCopyToUser(v73, &v242, v72);
LABEL_316:
        Size = v66;
        goto LABEL_317;
      }
      Size = 48 * v18;
      if ( (unsigned int)Length >= 48 * v18 )
      {
        for ( ii = 0; ii < v18; ++ii )
        {
          ProcNumber.Group = (unsigned __int16)Information;
          ProcNumber.Number = ii;
          ProcNumber.Reserved = 0;
          PoGetIdleTimes(&ProcNumber, (__int64)&v242, 0LL);
          if ( PreviousMode )
            RtlCopyToUser(v8, &v242, 0x30uLL);
          else
            RtlCopyVolatileMemory(v8, &v242, 0x30uLL);
          v8 += 6;
          v18 = v209;
        }
        goto LABEL_126;
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
    SystemProcessorFeaturesInformation = VfGetVerifierInformation(
                                           Address,
                                           (unsigned int)Length,
                                           (unsigned int *)&Size,
                                           v75);
    goto LABEL_125;
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
                if ( v39 == 1 )
                {
                  if ( (unsigned int)Length >= 0x40 )
                  {
                    if ( !(unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v210 + 1) )
                    {
                      ChannelInformation = ExpGetObjectInformation(SHIDWORD(v210), (__int64)Address, Length, &Size);
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
                return -1073741821;
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
                goto LABEL_755;
              }
              if ( ((unsigned __int8)Address & 7) == 0 )
              {
                if ( !(unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v210 + 1) )
                {
                  ChannelInformation = ExpGetHandleInformation(HIDWORD(v210), (__int64)Address, Length, &Size);
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
        goto LABEL_126;
      }
LABEL_718:
      v142 = 32;
      if ( a1 != 18 )
        v142 = 40;
      Size = v142;
      if ( (unsigned int)Length >= v142 )
      {
        Size = 0;
        SystemProcessorFeaturesInformation = MmGetPageFileInformation(
                                               (ULONG **)0xFFFFFFFFFFFFFFFFLL,
                                               (int *)Address,
                                               Length,
                                               PreviousMode,
                                               a1 == 144,
                                               (unsigned int *)&Size);
        goto LABEL_125;
      }
      if ( a7 )
      {
        if ( PreviousMode )
          RtlWriteULongToUser(a7, v142);
        else
          *a7 = v142;
      }
      return -1073741820;
    }
    if ( a1 == 19 )
      goto LABEL_206;
    v40 = 2;
    if ( a1 != 21 )
    {
      if ( a1 == 22 )
      {
        if ( (unsigned int)Length >= 0x30 )
        {
          Feature_NoPrecisePoolTagQueries__private_ReportDeviceUsage();
          LOBYTE(v43) = PreviousMode;
          SystemProcessorFeaturesInformation = ExGetPoolTagInfo((_DWORD)Address, Length, (unsigned int)&Size, v43, 0);
          goto LABEL_125;
        }
        if ( !a7 )
          return -1073741820;
        if ( PreviousMode )
          goto LABEL_689;
        *a7 = 48;
        return -1073741820;
      }
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
        *(_QWORD *)((char *)&v242 + 4) = __PAIR64__(KiMinimumDpcRate, KiMaximumDpcQueueDepth);
        HIDWORD(v242) = KiAdjustDpcThreshold;
        LODWORD(v243.Flink) = KiIdealDpcRate;
        if ( PreviousMode )
          RtlCopyToUser(Address, &v242, 0x14uLL);
        else
          RtlCopyVolatileMemory(Address, &v242, 0x14uLL);
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
        ProcNumber.Group = (unsigned __int16)Information;
        ProcNumber.Number = jj;
        ProcNumber.Reserved = 0;
        v42 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
        LODWORD(v242) = v42[2895];
        DWORD1(v242) = v42[3607];
        DWORD2(v242) = v42[3627];
        HIDWORD(v242) = KeTimeIncrement;
        v243.Flink = 0LL;
        if ( PreviousMode )
          RtlCopyToUser(v8, &v242, 0x18uLL);
        else
          RtlCopyVolatileMemory(v8, &v242, 0x18uLL);
        v8 += 3;
        v18 = v209;
      }
LABEL_317:
      ProcessorTopologyCount = 0;
      goto LABEL_126;
    }
    goto LABEL_613;
  }
  if ( a1 == 12 )
  {
    if ( (unsigned int)Length >= 0x38 )
    {
      if ( !(unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v210 + 1) )
      {
        ChannelInformation = ExpGetLockInformation(HIDWORD(v210), (__int64)Address, Length, &Size);
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
          if ( !(unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v210 + 1) )
          {
            ChannelInformation = ExpQueryModuleInformation(SHIDWORD(v210), Address, Length, PreviousMode, (int *)&Size);
            v33 = 0;
LABEL_160:
            ProcessorTopologyCount = ChannelInformation;
            EtwTiLogSyscallUsage(ChannelInformation, v33);
            goto LABEL_126;
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
          Address->Relationship = NtGlobalFlag;
        goto LABEL_169;
      }
      goto LABEL_726;
    }
    v30 = 24;
    if ( (_DWORD)Length != 24 )
    {
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
    v242 = xmmword_140FD5818;
    v243.Flink = (struct _LIST_ENTRY *)qword_140FD582C;
    v34 = 24LL;
    v35 = Address;
    if ( !PreviousMode )
    {
      RtlCopyVolatileMemory(Address, &v242, 0x18uLL);
LABEL_668:
      Size = v30;
      goto LABEL_126;
    }
    goto LABEL_780;
  }
  switch ( a1 )
  {
    case 6:
      return -1073741637;
    case 0:
LABEL_594:
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
      goto LABEL_125;
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
LABEL_153:
      Size = 12;
      goto LABEL_125;
  }
  if ( a1 != 2 )
  {
    if ( a1 != 3 )
    {
      if ( a1 != 4 )
      {
        if ( a1 == 5 )
        {
LABEL_124:
          SystemProcessorFeaturesInformation = ExpGetProcessInformation(
                                                 (char *)Address,
                                                 Length,
                                                 (unsigned int *)&Size,
                                                 0LL,
                                                 a1);
LABEL_125:
          ProcessorTopologyCount = SystemProcessorFeaturesInformation;
          goto LABEL_126;
        }
        return -1073741821;
      }
      return -1073741822;
    }
    if ( (unsigned int)Length > 0x30 )
    {
      if ( a7 )
      {
        if ( PreviousMode )
          goto LABEL_689;
        *a7 = 48;
      }
      return -1073741820;
    }
    KeQueryBootTimeValues((_QWORD *)&v242 + 1, (LARGE_INTEGER *)&v242, &v244);
    v27 = PsGetCurrentServerSiloGlobals()[76].Blink;
    v243.Flink = v27[27].Blink;
    LODWORD(v243.Blink) = v27[27].Flink;
    v244.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF780000003B0];
    v28 = (unsigned int)Length;
    v29 = Address;
    if ( PreviousMode )
      goto LABEL_135;
    goto LABEL_136;
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
  v30 = 376;
  if ( (unsigned int)Length <= 0x178 )
    v30 = Length;
  result = ExpQuerySystemPerformanceInformation(v18, Address, v30, PreviousMode);
  ProcessorTopologyCount = result;
  if ( result >= 0 )
    goto LABEL_668;
  return result;
}
