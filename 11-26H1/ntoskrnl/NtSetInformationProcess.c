/*
 * XREFs of NtSetInformationProcess @ 0x140B781E0
 * Callers:
 *     DifNtSetInformationProcessWrapper @ 0x14068FE90 (DifNtSetInformationProcessWrapper.c)
 * Callees:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetExecuteOptions @ 0x140202B0C (KeSetExecuteOptions.c)
 *     IoBoostThreadIoPriority @ 0x140205BAC (IoBoostThreadIoPriority.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     PsSetIoPriorityThread @ 0x140239BF4 (PsSetIoPriorityThread.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     PsSetPagePriorityThread @ 0x140384E10 (PsSetPagePriorityThread.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403C6CB0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C6FA0 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsGetSessionId @ 0x14043FD70 (PsGetSessionId.c)
 *     PspLockUnlockProcessExclusive @ 0x140441BB0 (PspLockUnlockProcessExclusive.c)
 *     KeChangeMemoryAttributes @ 0x140453D18 (KeChangeMemoryAttributes.c)
 *     KeQueryPrimaryGroupProcess @ 0x14045BF08 (KeQueryPrimaryGroupProcess.c)
 *     PsIsSystemProcess @ 0x1404688E0 (PsIsSystemProcess.c)
 *     MmGetMaximumUserAddress @ 0x14046C090 (MmGetMaximumUserAddress.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     KeVerifyGroupAffinity @ 0x14047D244 (KeVerifyGroupAffinity.c)
 *     PspLockProcessExclusive @ 0x140481AF8 (PspLockProcessExclusive.c)
 *     RtlInsertDynamicUserFunctionTable @ 0x140483144 (RtlInsertDynamicUserFunctionTable.c)
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     PspUnlockProcessExclusive @ 0x1404898F4 (PspUnlockProcessExclusive.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     RtlRemoveDynamicUserFunctionTable @ 0x14049A280 (RtlRemoveDynamicUserFunctionTable.c)
 *     KeSetDisableBoostProcess @ 0x14049D728 (KeSetDisableBoostProcess.c)
 *     MmGetMinWsPagePriority @ 0x1404AACF0 (MmGetMinWsPagePriority.c)
 *     MmGetDefaultPagePriority @ 0x1404AFDB0 (MmGetDefaultPagePriority.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x1404BFAD8 (PspSynchronizeThreadIsolationDomains.c)
 *     RtlInterlockedSetClearBits @ 0x1404C51EC (RtlInterlockedSetClearBits.c)
 *     PspLockProcessSharedUnsafe @ 0x1404D02E0 (PspLockProcessSharedUnsafe.c)
 *     KeIsUserCetAllowed @ 0x1404D034C (KeIsUserCetAllowed.c)
 *     KeInitializeGate @ 0x1404D0428 (KeInitializeGate.c)
 *     MmSetMemoryPriorityProcess @ 0x1404D0A3C (MmSetMemoryPriorityProcess.c)
 *     KeIsCoreIsolationMitigationPolicyEnforceable @ 0x1404D3AD8 (KeIsCoreIsolationMitigationPolicyEnforceable.c)
 *     MmRemoveExecuteGrants @ 0x1404D543C (MmRemoveExecuteGrants.c)
 *     KeSynchronizeSecurityDomain @ 0x1404D6B28 (KeSynchronizeSecurityDomain.c)
 *     PspUnlockProcessSharedUnsafe @ 0x1404D6D7C (PspUnlockProcessSharedUnsafe.c)
 *     Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline @ 0x1404DE6B0 (Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404E1364 (ExCpuSetResourceManagerAccessCheck.c)
 *     PspEnqueueProcessQosChangeNotification @ 0x140518208 (PspEnqueueProcessQosChangeNotification.c)
 *     EtwTraceProcessSetInPrivateMode @ 0x140527460 (EtwTraceProcessSetInPrivateMode.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140528290 (KeRecomputeCpuSetAffinityProcess.c)
 *     IoRevokeHandlesForProcess @ 0x14052DB88 (IoRevokeHandlesForProcess.c)
 *     KeBoostPriorityThread @ 0x14052EA80 (KeBoostPriorityThread.c)
 *     KeSetCpuSetsProcess @ 0x14052FE54 (KeSetCpuSetsProcess.c)
 *     xKdEnumerateDebuggingDevices @ 0x140532BC0 (xKdEnumerateDebuggingDevices.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline @ 0x1405FBDB4 (Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline.c)
 *     PsSetProcessPowerThrottlingState @ 0x140617EEC (PsSetProcessPowerThrottlingState.c)
 *     Feature_579542328__private_IsEnabledDeviceUsageNoInline @ 0x140618448 (Feature_579542328__private_IsEnabledDeviceUsageNoInline.c)
 *     MmReleaseCommitForMemResetPages @ 0x1406EA1AC (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x1406EA39C (MmSetCommitReleaseEligibility.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspAssignPrimaryToken @ 0x140776B18 (PspAssignPrimaryToken.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14077980C (PsIumEnableOnDemandDebugWithResponse.c)
 *     PspApplyCoreIsolationPolicy @ 0x1407799A4 (PspApplyCoreIsolationPolicy.c)
 *     SeCodeIntegritySetInformationProcess @ 0x14077AE18 (SeCodeIntegritySetInformationProcess.c)
 *     PsSetProcessHandleTracingInformation @ 0x14077DFB0 (PsSetProcessHandleTracingInformation.c)
 *     RtlCopyToUserFromUser @ 0x140781DE8 (RtlCopyToUserFromUser.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     RtlStringLengthFromUser @ 0x140782168 (RtlStringLengthFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     PspSyscallProviderOptIn @ 0x1407F35B0 (PspSyscallProviderOptIn.c)
 *     PspSetQuotaLimits @ 0x1407F6AFC (PspSetQuotaLimits.c)
 *     ExSystemExceptionFilter @ 0x14083CCA0 (ExSystemExceptionFilter.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     RtlIsSandboxedToken @ 0x1408FBA10 (RtlIsSandboxedToken.c)
 *     SeCaptureSubjectContextEx @ 0x1408FBAB0 (SeCaptureSubjectContextEx.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     PspCombineSecurityDomains @ 0x14091CFB8 (PspCombineSecurityDomains.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PsGetNextProcessThread @ 0x14094ADD0 (PsGetNextProcessThread.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x140988354 (PspSchedulerSharedDataRegionCreate.c)
 *     LpcRequestPort @ 0x14098DE90 (LpcRequestPort.c)
 *     ObReferenceProcessHandleTable @ 0x1409BB940 (ObReferenceProcessHandleTable.c)
 *     PspUpdatePebForAffinityChange @ 0x1409E5A34 (PspUpdatePebForAffinityChange.c)
 *     MmAllocateUserStack @ 0x1409EE7D8 (MmAllocateUserStack.c)
 *     PspFreeUserFiberShadowStack @ 0x140A045EC (PspFreeUserFiberShadowStack.c)
 *     ObpSetDeviceMap @ 0x140A2236C (ObpSetDeviceMap.c)
 *     SeCheckPrivilegedObject @ 0x140A8287C (SeCheckPrivilegedObject.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x140A8467C (PspSetProcessDefaultHardErrorMode.c)
 *     EtwCheckSecurityLoggerAccess @ 0x140A8599C (EtwCheckSecurityLoggerAccess.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140A94144 (PspGetNoChildProcessRestrictedPolicy.c)
 *     KeSetAutoAlignmentProcess @ 0x140AAEC94 (KeSetAutoAlignmentProcess.c)
 *     PsSetProcessPriorityByClass @ 0x140ABC220 (PsSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140ABC24C (PspSetProcessForegroundBackgroundRequest.c)
 *     PsSetProcessFaultInformation @ 0x140AC0480 (PsSetProcessFaultInformation.c)
 *     MmProcessWorkingSetControl @ 0x140AEC57C (MmProcessWorkingSetControl.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x140AECFD8 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     ExEnableHandleExceptions @ 0x140AFC710 (ExEnableHandleExceptions.c)
 *     PoSetProcessEnergyTrackingState @ 0x140AFDCC0 (PoSetProcessEnergyTrackingState.c)
 *     PspSetProcessAffinitySafe @ 0x140AFE330 (PspSetProcessAffinitySafe.c)
 *     PspGetRedirectionTrustPolicy @ 0x140B002E4 (PspGetRedirectionTrustPolicy.c)
 *     KeSetCheckStackExtentsProcess @ 0x140B02F4C (KeSetCheckStackExtentsProcess.c)
 *     PspSetRedirectionTrustPolicy @ 0x140B040DC (PspSetRedirectionTrustPolicy.c)
 *     EtwSetProcessTelemetryCoverage @ 0x140B0F758 (EtwSetProcessTelemetryCoverage.c)
 *     PspSetProcessPriorityClass @ 0x140B11C80 (PspSetProcessPriorityClass.c)
 *     PspSetupUserFiberShadowStack @ 0x140B33888 (PspSetupUserFiberShadowStack.c)
 *     SeSetVirtualizationToken @ 0x140B33E8C (SeSetVirtualizationToken.c)
 *     PsIsSystemWideMitigationOptionSet @ 0x140B3FDC4 (PsIsSystemWideMitigationOptionSet.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x140B40E18 (PspSetNoChildProcessRestrictedPolicy.c)
 *     MmValidateUserCallTarget @ 0x140B48CA8 (MmValidateUserCallTarget.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140B643BC (PspEnableProcessOptionalXStateFeatures.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x140B688A4 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140B694A0 (PspProcessDynamicEHContinuationTargets.c)
 *     PfSnSetAltPrefetchParam @ 0x140B6E9FC (PfSnSetAltPrefetchParam.c)
 *     PspAssignCpuPartitionsToProcessByHandle @ 0x140B715F4 (PspAssignCpuPartitionsToProcessByHandle.c)
 *     PspSetProcessAffinityUpdateMode @ 0x140B71A98 (PspSetProcessAffinityUpdateMode.c)
 *     PspSetProcessPriorityByClassIgnoreForegroundBoost @ 0x140B7D69C (PspSetProcessPriorityByClassIgnoreForegroundBoost.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  size_t v4; // r13
  __int128 *v5; // r15
  HANDLE v7; // r10
  unsigned int v8; // edi
  char PreviousMode; // r12
  ULONG v10; // r8d
  char v11; // r14
  __int32 v12; // ebx
  __int32 v13; // ebx
  __int32 v14; // ebx
  __int32 v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  NTSTATUS result; // eax
  struct _KLOCK_ENTRIES *v21; // r9
  NTSTATUS v22; // eax
  NTSTATUS v23; // ebx
  void *v24; // rax
  unsigned int v25; // r14d
  void *v26; // rbx
  unsigned __int64 v27; // rbx
  NTSTATUS v28; // esi
  PVOID v29; // rcx
  signed __int64 *v30; // roff
  signed __int64 v31; // r14
  signed __int64 v32; // rdx
  _DWORD *v33; // rcx
  signed __int64 v34; // rax
  void *v35; // r14
  int v36; // eax
  int v37; // r14d
  __int64 v38; // r8
  struct _KLOCK_ENTRIES *v39; // r9
  struct _KTHREAD *i; // rdx
  struct _KTHREAD *NextProcessThread; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  struct _KTHREAD *v44; // rbx
  PVOID v45; // rcx
  int v46; // eax
  unsigned int v47; // ecx
  char v48; // si
  int v49; // ebx
  __int32 v50; // ebx
  __int32 v51; // ebx
  __int32 v52; // ebx
  __int32 v53; // ebx
  int v54; // ebx
  int v55; // ebx
  int v56; // ebx
  void *v57; // rsi
  PVOID v58; // rbx
  void *ProcessServerSilo; // rax
  int v60; // eax
  _BOOL8 v61; // rbx
  __int64 v62; // rax
  bool v63; // zf
  __int64 v64; // rcx
  __int64 v65; // r13
  __int64 v66; // rdx
  __int64 v67; // r8
  struct _KLOCK_ENTRIES *v68; // r9
  int v69; // ebx
  HANDLE v70; // rbx
  char v71; // al
  unsigned __int8 v72; // bl
  __int64 v73; // r8
  struct _KLOCK_ENTRIES *v74; // r9
  __int64 v75; // r13
  __int16 v76; // dx
  char v77; // al
  int SessionId; // eax
  __int32 v79; // ebx
  __int32 v80; // ebx
  __int32 v81; // ebx
  __int32 v82; // ebx
  int v83; // ebx
  int v84; // ebx
  int v85; // ebx
  __int64 v86; // r8
  struct _KLOCK_ENTRIES *v87; // r9
  __int64 v88; // r13
  int v89; // r8d
  volatile signed __int32 *v90; // r9
  signed __int32 v91; // eax
  signed __int32 v92; // edx
  PVOID v93; // rcx
  char *v94; // rax
  char *v95; // rbx
  unsigned __int64 v96; // rbx
  struct _KTHREAD *v97; // r12
  struct _KLOCK_ENTRIES *v98; // r9
  __int64 Flink_low; // rdx
  unsigned int v100; // ecx
  struct _LIST_ENTRY **p_Blink; // r8
  _KPROCESS *v102; // r8
  __int16 v103; // dx
  char v104; // al
  __int64 v105; // rdx
  unsigned int v106; // r15d
  _QWORD *v107; // rdx
  PVOID j; // rcx
  _QWORD *v109; // rbx
  __int64 v110; // rax
  __int64 v111; // rbx
  __int64 v112; // r13
  size_t v113; // r8
  unsigned int *v114; // rbx
  int v115; // eax
  _OWORD *v116; // rbx
  int v117; // eax
  unsigned int *v118; // rbx
  int v119; // eax
  unsigned int *v120; // rbx
  __int64 v121; // rax
  char *v122; // rbx
  int v123; // eax
  struct _KTHREAD *v124; // rcx
  int v125; // ebx
  unsigned int v126; // ebx
  __int64 v127; // rax
  __int64 v128; // r8
  struct _KLOCK_ENTRIES *v129; // r9
  volatile signed __int32 *v130; // r9
  signed __int32 v131; // eax
  __int64 v132; // r8
  signed __int32 v133; // edx
  _QWORD *v134; // rdi
  char v135; // r12
  int v136; // eax
  int v137; // eax
  __int64 *v138; // rdx
  int v139; // eax
  int v140; // ebx
  char v141; // al
  __int64 v142; // rcx
  _KPROCESS *v143; // rbx
  __int16 v144; // dx
  char v145; // dl
  char v146; // r8
  unsigned __int64 v147; // rdx
  __int16 v148; // dx
  int v149; // ebx
  unsigned int v150; // r15d
  __int64 v151; // r8
  struct _KLOCK_ENTRIES *v152; // r9
  __int64 v153; // r13
  PVOID v154; // r8
  volatile signed __int32 *v155; // rax
  volatile signed __int32 *v156; // rcx
  __int16 v157; // dx
  char v158; // al
  int v159; // eax
  __int64 v160; // rcx
  __int64 *v161; // rdx
  _DWORD *v162; // rcx
  __int32 v163; // ebx
  __int32 v164; // ebx
  __int32 v165; // ebx
  __int32 v166; // ebx
  int v167; // ebx
  int v168; // ebx
  int v169; // ebx
  __int64 v170; // rdx
  struct _KLOCK_ENTRIES *v171; // r9
  HANDLE v172; // rbx
  volatile signed __int32 *p_Lock; // r8
  __int64 v174; // rcx
  unsigned int v175; // edx
  unsigned __int64 v176; // rax
  __int64 v177; // r8
  struct _KLOCK_ENTRIES *v178; // r9
  char v179; // al
  char v180; // al
  char v181; // cl
  bool IsSandboxedToken; // bl
  int v183; // r8d
  int v184; // r10d
  volatile signed __int32 *v185; // rcx
  int v186; // edx
  int v187; // eax
  bool v188; // zf
  int v189; // r10d
  int v190; // eax
  char v191; // dl
  __int64 v192; // rdx
  __int64 v193; // rdx
  __int64 v194; // rdx
  __int64 v195; // rcx
  int v196; // ecx
  int v197; // r8d
  int v198; // r9d
  int v199; // edx
  int RedirectionTrustPolicy; // eax
  __int64 v201; // r8
  struct _KLOCK_ENTRIES *v202; // r9
  int v203; // ecx
  int v204; // edx
  unsigned int v205; // edx
  char v206; // dl
  signed __int64 v207; // rcx
  _QWORD *v208; // rax
  unsigned int NoChildProcessRestrictedPolicy; // eax
  PVOID v210; // rcx
  int v211; // edx
  unsigned int v212; // r8d
  int v213; // r9d
  int v214; // eax
  struct _LIST_ENTRY *v215; // rdx
  int v216; // esi
  __int64 v217; // r8
  struct _KLOCK_ENTRIES *v218; // r9
  void *v219; // rbx
  int v220; // eax
  int v221; // eax
  __int64 v222; // rax
  void *v223; // rbx
  PVOID v224; // rcx
  _QWORD *v225; // rsi
  int v226; // ebx
  int v227; // ebx
  unsigned __int64 v228; // rax
  __int64 v229; // r8
  struct _KLOCK_ENTRIES *v230; // r9
  unsigned int v231; // r13d
  __int64 v232; // r8
  NTSTATUS v233; // eax
  __int64 v234; // r8
  struct _KLOCK_ENTRIES *v235; // r9
  int ULongFromUser; // eax
  _BOOL8 v237; // rbx
  struct _KTHREAD *v238; // rbx
  int v239; // eax
  unsigned __int16 v240; // bx
  volatile void *v241; // rax
  struct _KTHREAD *Pool2; // rax
  __int32 v243; // ebx
  __int32 v244; // ebx
  __int32 v245; // ebx
  __int32 v246; // ebx
  int v247; // ebx
  int v248; // ebx
  int v249; // ebx
  __int64 v250; // r8
  struct _KLOCK_ENTRIES *v251; // r9
  char v252; // bl
  unsigned __int64 ExtensionTable; // rax
  unsigned __int64 v254; // rbx
  __int64 v255; // r8
  struct _KLOCK_ENTRIES *v256; // r9
  char UCharFromUser; // bl
  int v258; // ebx
  unsigned __int64 v259; // rax
  __int64 v260; // r8
  struct _KLOCK_ENTRIES *v261; // r9
  int IsEnabledDeviceUsageNoInline; // eax
  char *v263; // rdx
  unsigned __int64 v264; // rax
  size_t v265; // r8
  unsigned __int64 v266; // rcx
  __int64 v267; // r9
  _DWORD *v268; // rcx
  __int64 v269; // rax
  _KPROCESS *Process; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  __int64 v272; // rbx
  __int64 *ReadyTime; // rax
  int v274; // edx
  int v275; // edx
  int v276; // eax
  int v277; // eax
  int v278; // eax
  __int64 v279; // r8
  struct _KLOCK_ENTRIES *v280; // r9
  char v281; // al
  unsigned int v282; // eax
  int v283; // r8d
  int v284; // edx
  int v285; // r8d
  unsigned int v286; // ecx
  unsigned int v287; // ecx
  __int64 v288; // r8
  struct _KLOCK_ENTRIES *v289; // r9
  __int32 v290; // ebx
  __int32 v291; // ebx
  __int32 v292; // ebx
  __int32 v293; // ebx
  int v294; // ebx
  int v295; // ebx
  int v296; // ebx
  __int64 v297; // rcx
  HANDLE v298; // rbx
  NTSTATUS v299; // r15d
  char v300; // r8
  char v301; // al
  _DWORD *v302; // rax
  _DWORD *v303; // rbx
  __int64 v304; // rbx
  _KPROCESS *v305; // rcx
  __int64 v306; // r8
  struct _KLOCK_ENTRIES *v307; // r9
  unsigned int v308; // r15d
  struct _KTHREAD *v309; // rax
  unsigned int v310; // r15d
  unsigned int v311; // r15d
  unsigned int v312; // r15d
  signed __int32 v313[8]; // [rsp+0h] [rbp-828h] BYREF
  char v314; // [rsp+40h] [rbp-7E8h]
  PVOID v315; // [rsp+48h] [rbp-7E0h] BYREF
  __int64 v316; // [rsp+50h] [rbp-7D8h] BYREF
  char v317; // [rsp+58h] [rbp-7D0h]
  HANDLE Handle; // [rsp+60h] [rbp-7C8h]
  unsigned int v319; // [rsp+68h] [rbp-7C0h]
  NTSTATUS v320; // [rsp+6Ch] [rbp-7BCh]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-7B8h]
  char v322; // [rsp+78h] [rbp-7B0h] BYREF
  char v323; // [rsp+79h] [rbp-7AFh] BYREF
  char v324; // [rsp+7Ah] [rbp-7AEh] BYREF
  unsigned __int16 v325; // [rsp+7Ch] [rbp-7ACh] BYREF
  _DWORD *p_LockNV; // [rsp+80h] [rbp-7A8h]
  int v327; // [rsp+88h] [rbp-7A0h]
  _OWORD *v328; // [rsp+90h] [rbp-798h]
  PVOID v329; // [rsp+98h] [rbp-790h]
  __int16 UShortFromUser; // [rsp+A0h] [rbp-788h] BYREF
  char v331[4]; // [rsp+A4h] [rbp-784h] BYREF
  int v332; // [rsp+A8h] [rbp-780h] BYREF
  ULONG v333; // [rsp+B0h] [rbp-778h]
  unsigned int v334; // [rsp+B8h] [rbp-770h] BYREF
  char v335; // [rsp+C0h] [rbp-768h]
  char v336; // [rsp+C1h] [rbp-767h]
  unsigned __int8 v337; // [rsp+C2h] [rbp-766h]
  char v338[5]; // [rsp+C3h] [rbp-765h] BYREF
  int v339; // [rsp+C8h] [rbp-760h] BYREF
  unsigned int v340; // [rsp+D0h] [rbp-758h] BYREF
  int v341; // [rsp+D8h] [rbp-750h] BYREF
  unsigned int v342; // [rsp+DCh] [rbp-74Ch] BYREF
  __int64 v343; // [rsp+E0h] [rbp-748h]
  __int64 v344; // [rsp+E8h] [rbp-740h] BYREF
  __int64 v345; // [rsp+F0h] [rbp-738h] BYREF
  HANDLE v346; // [rsp+F8h] [rbp-730h] BYREF
  unsigned int v347; // [rsp+100h] [rbp-728h] BYREF
  __int64 v348; // [rsp+108h] [rbp-720h]
  __int64 v349; // [rsp+110h] [rbp-718h] BYREF
  int v350; // [rsp+118h] [rbp-710h] BYREF
  int v351; // [rsp+120h] [rbp-708h] BYREF
  int v352; // [rsp+128h] [rbp-700h] BYREF
  __int64 v353; // [rsp+130h] [rbp-6F8h]
  unsigned int *v354; // [rsp+138h] [rbp-6F0h]
  void *Src[2]; // [rsp+140h] [rbp-6E8h] BYREF
  __int64 v356; // [rsp+150h] [rbp-6D8h]
  volatile void *Address[2]; // [rsp+158h] [rbp-6D0h] BYREF
  volatile void *v358[2]; // [rsp+168h] [rbp-6C0h] BYREF
  int v359; // [rsp+1A0h] [rbp-688h]
  int v360[4]; // [rsp+288h] [rbp-5A0h] BYREF
  __int64 ULong64FromUser; // [rsp+298h] [rbp-590h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+2A0h] [rbp-588h] BYREF
  PVOID v363; // [rsp+2A8h] [rbp-580h] BYREF
  PVOID v364; // [rsp+2B0h] [rbp-578h] BYREF
  PVOID v365; // [rsp+2B8h] [rbp-570h] BYREF
  __int128 v366; // [rsp+2D0h] [rbp-558h]
  void *v367[2]; // [rsp+2F0h] [rbp-538h] BYREF
  PVOID Object; // [rsp+300h] [rbp-528h] BYREF
  PVOID v369; // [rsp+308h] [rbp-520h] BYREF
  __int128 v370; // [rsp+310h] [rbp-518h] BYREF
  PVOID v371; // [rsp+320h] [rbp-508h]
  PVOID v372; // [rsp+328h] [rbp-500h] BYREF
  int v373; // [rsp+330h] [rbp-4F8h]
  int v374; // [rsp+334h] [rbp-4F4h]
  BOOL v375; // [rsp+338h] [rbp-4F0h]
  int v376; // [rsp+33Ch] [rbp-4ECh]
  int v377; // [rsp+340h] [rbp-4E8h]
  int v378; // [rsp+344h] [rbp-4E4h]
  unsigned int v379; // [rsp+348h] [rbp-4E0h]
  int v380; // [rsp+34Ch] [rbp-4DCh]
  void *v381; // [rsp+350h] [rbp-4D8h]
  __int64 v382; // [rsp+358h] [rbp-4D0h] BYREF
  LIST_ENTRY *p_WaitListHead; // [rsp+360h] [rbp-4C8h]
  LONG *p_SignalState; // [rsp+368h] [rbp-4C0h]
  int v385; // [rsp+370h] [rbp-4B8h]
  __int64 v386; // [rsp+378h] [rbp-4B0h] BYREF
  __int64 v387; // [rsp+380h] [rbp-4A8h] BYREF
  PVOID v388; // [rsp+388h] [rbp-4A0h]
  __int64 v389; // [rsp+390h] [rbp-498h] BYREF
  unsigned int v390; // [rsp+398h] [rbp-490h]
  int v391; // [rsp+39Ch] [rbp-48Ch]
  int v392; // [rsp+3A0h] [rbp-488h]
  __int128 v393; // [rsp+3A8h] [rbp-480h] BYREF
  __int128 v394; // [rsp+3B8h] [rbp-470h] BYREF
  __int64 v395; // [rsp+3C8h] [rbp-460h]
  __int128 v396; // [rsp+3D0h] [rbp-458h] BYREF
  __int128 v397; // [rsp+3E0h] [rbp-448h]
  _OWORD v398[2]; // [rsp+3F0h] [rbp-438h] BYREF
  __int128 v399; // [rsp+410h] [rbp-418h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+420h] [rbp-408h] BYREF
  void *v401; // [rsp+440h] [rbp-3E8h]
  __int64 v402; // [rsp+448h] [rbp-3E0h]
  void **v403; // [rsp+450h] [rbp-3D8h]
  struct _LIST_ENTRY *v404; // [rsp+458h] [rbp-3D0h]
  void *v405; // [rsp+460h] [rbp-3C8h]
  __int128 v406; // [rsp+468h] [rbp-3C0h] BYREF
  __int64 v407; // [rsp+478h] [rbp-3B0h] BYREF
  int v408; // [rsp+480h] [rbp-3A8h]
  __int128 v409; // [rsp+488h] [rbp-3A0h] BYREF
  __int128 v410; // [rsp+498h] [rbp-390h] BYREF
  __int128 v411; // [rsp+4A8h] [rbp-380h] BYREF
  int v412; // [rsp+4B8h] [rbp-370h]
  _OWORD v413[2]; // [rsp+4C0h] [rbp-368h] BYREF
  _OWORD v414[3]; // [rsp+4E0h] [rbp-348h] BYREF
  _OWORD P[2]; // [rsp+510h] [rbp-318h] BYREF
  __int64 v416; // [rsp+530h] [rbp-2F8h]
  _DWORD v417[36]; // [rsp+540h] [rbp-2E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v418; // [rsp+5D0h] [rbp-258h] BYREF
  char *v419; // [rsp+5F0h] [rbp-238h]
  int v420; // [rsp+5F8h] [rbp-230h]
  int v421; // [rsp+5FCh] [rbp-22Ch]
  __int64 *v422; // [rsp+600h] [rbp-228h]
  int v423; // [rsp+608h] [rbp-220h]
  int v424; // [rsp+60Ch] [rbp-21Ch]
  struct _EVENT_DATA_DESCRIPTOR v425; // [rsp+610h] [rbp-218h] BYREF
  char *v426; // [rsp+630h] [rbp-1F8h]
  int v427; // [rsp+638h] [rbp-1F0h]
  int v428; // [rsp+63Ch] [rbp-1ECh]
  __int64 *v429; // [rsp+640h] [rbp-1E8h]
  int v430; // [rsp+648h] [rbp-1E0h]
  int v431; // [rsp+64Ch] [rbp-1DCh]
  struct _EVENT_DATA_DESCRIPTOR v432; // [rsp+650h] [rbp-1D8h] BYREF
  char *v433; // [rsp+670h] [rbp-1B8h]
  int v434; // [rsp+678h] [rbp-1B0h]
  int v435; // [rsp+67Ch] [rbp-1ACh]
  __int64 *v436; // [rsp+680h] [rbp-1A8h]
  int v437; // [rsp+688h] [rbp-1A0h]
  int v438; // [rsp+68Ch] [rbp-19Ch]
  _BYTE v439[256]; // [rsp+690h] [rbp-198h] BYREF
  _BYTE v440[80]; // [rsp+790h] [rbp-98h] BYREF

  v4 = ProcessInformationLength;
  v5 = (__int128 *)ProcessInformation;
  v7 = ProcessHandle;
  Handle = ProcessHandle;
  v354 = (unsigned int *)ProcessInformation;
  v333 = ProcessInformationLength;
  v8 = 0;
  v315 = 0LL;
  v339 = 0;
  v409 = 0LL;
  v319 = 0;
  BugCheckParameter1 = 0LL;
  UShortFromUser = 0;
  v332 = 0;
  v331[0] = 0;
  v345 = 0LL;
  v363 = 0LL;
  v352 = 0;
  v360[0] = 0;
  v349 = 0LL;
  v340 = 0;
  v341 = 0;
  v410 = 0LL;
  v334 = 0;
  v325 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v314 = PreviousMode;
  if ( PreviousMode )
  {
    switch ( ProcessInformationClass )
    {
      case ProcessBasePriority:
LABEL_3:
        v10 = 4;
LABEL_41:
        v11 = 1;
        goto LABEL_42;
      case ProcessEnableAlignmentFaultFixup:
      case ProcessForegroundInformation:
      case ProcessPriorityClass:
        v11 = 1;
        v10 = 1;
LABEL_42:
        ProbeForRead(v5, ProcessInformationLength, v10);
        v7 = Handle;
        goto LABEL_44;
      case ProcessPriorityClassEx:
        v10 = 2;
        goto LABEL_41;
    }
    if ( ProcessInformationClass != ProcessAffinityMask )
    {
      if ( ProcessInformationClass == ProcessIoPriority || ProcessInformationClass == ProcessPagePriority )
        goto LABEL_3;
      if ( ProcessInformationClass != ProcessTlsInformation
        && ProcessInformationClass != ProcessExceptionPort
        && ProcessInformationClass != ProcessInstrumentationCallback
        && ProcessInformationClass != ProcessThreadStackAllocation
        && ProcessInformationClass != ProcessFiberShadowStackAllocation
        && ProcessInformationClass != ProcessFreeFiberShadowStackAllocation )
      {
        if ( ProcessInformationClass == ProcessAffinityUpdateMode
          || ProcessInformationClass == ProcessMemoryAllocationMode )
        {
          goto LABEL_3;
        }
        if ( ProcessInformationClass != ProcessConsoleHostProcess
          && ProcessInformationClass != ProcessDynamicFunctionTableInformation
          && ProcessInformationClass != ProcessRevokeFileHandles
          && ProcessInformationClass != ProcessMemoryExhaustion
          && ProcessInformationClass != ProcessCommitReleaseInformation )
        {
          if ( ProcessInformationClass == ProcessInPrivate
            || ProcessInformationClass == ProcessHighGraphicsPriorityInformation )
          {
            goto LABEL_34;
          }
          if ( ProcessInformationClass != ProcessManageWritesToExecutableMemory )
          {
            if ( ProcessInformationClass == ProcessDebugAuthInformation )
            {
LABEL_34:
              v11 = 1;
              v10 = 1;
              goto LABEL_42;
            }
            if ( ProcessInformationClass == ProcessSystemResourceManagement )
              goto LABEL_3;
            if ( ProcessInformationClass != ProcessCombineSecurityDomainsInformation )
            {
              if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging )
                goto LABEL_34;
              if ( ProcessInformationClass == ProcessAltSystemCallInformation )
                goto LABEL_3;
              if ( ProcessInformationClass != ProcessDynamicEHContinuationTargets
                && ProcessInformationClass != ProcessDynamicEnforcedCetCompatibleRanges
                && ProcessInformationClass != ProcessEnableOptionalXStateFeatures )
              {
                v10 = 4;
                if ( ProcessInformationClass == ProcessAssignCpuPartitions )
                  v10 = 8;
                goto LABEL_41;
              }
            }
          }
        }
      }
    }
    v10 = 8;
    goto LABEL_41;
  }
  v11 = 1;
LABEL_44:
  if ( ProcessInformationClass > ProcessHandleCheckingMode )
  {
    if ( ProcessInformationClass <= ProcessTelemetryCoverage )
    {
      if ( ProcessInformationClass == ProcessTelemetryCoverage )
      {
        if ( (_DWORD)v4 != 24 )
          return -1073741820;
        *(_OWORD *)Src = 0LL;
        v356 = 0LL;
        memset_0(v440, 0, 0x41uLL);
        if ( PreviousMode )
          RtlCopyFromUser(Src, v5, 0x18uLL);
        else
          RtlCopyVolatileMemory(Src, v5, 0x18uLL);
        IsEnabledDeviceUsageNoInline = Feature_579542328__private_IsEnabledDeviceUsageNoInline();
        v263 = (char *)Src[0];
        if ( IsEnabledDeviceUsageNoInline )
        {
          if ( PreviousMode )
          {
            v264 = RtlStringLengthFromUser((char *)Src[0]);
            v263 = (char *)Src[0];
          }
          else
          {
            v264 = -1LL;
            do
              ++v264;
            while ( *((_BYTE *)Src[0] + v264) );
          }
          if ( v264 > 0x40 )
            v264 = 64LL;
          v265 = v264;
        }
        else
        {
          if ( PreviousMode )
          {
            v266 = RtlStringLengthFromUser((char *)Src[0]);
            v263 = (char *)Src[0];
          }
          else
          {
            v266 = -1LL;
            do
              ++v266;
            while ( *((_BYTE *)Src[0] + v266) );
          }
          v267 = 64LL;
          if ( v266 <= 0x40 )
          {
            if ( PreviousMode )
            {
              v267 = RtlStringLengthFromUser(v263);
              v263 = (char *)Src[0];
            }
            else
            {
              v267 = -1LL;
              do
                ++v267;
              while ( v263[v267] );
            }
          }
          v265 = v267;
        }
        if ( PreviousMode )
          RtlCopyFromUser(v440, v263, v265);
        else
          RtlCopyVolatileMemory(v440, v263, v265);
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)Handle,
                   544,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &v315,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        Src[0] = v440;
        v440[64] = 0;
        v23 = EtwSetProcessTelemetryCoverage((_KPROCESS *)v315, (__int64)Src);
        ObfDereferenceObjectWithTag(v315, 0x79517350u);
        v268 = (_DWORD *)v5 + 3;
        if ( PreviousMode )
          RtlWriteULongToUser(v268, SHIDWORD(Src[1]));
        else
          *v268 = HIDWORD(Src[1]);
        if ( PreviousMode )
          RtlWriteULongToUser((_DWORD *)v5 + 4, v356);
        else
          *((_DWORD *)v5 + 4) = v356;
        return v23;
      }
      if ( ProcessInformationClass <= ProcessSubsystemProcess )
      {
        if ( ProcessInformationClass == ProcessSubsystemProcess )
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[4].IdealProcessorAssignmentBlock) & 8) != 0 )
          {
            v372 = 0LL;
            v23 = ObReferenceObjectByHandle(v7, 0x200u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v372, 0LL);
            v315 = v372;
            if ( v23 >= 0 )
            {
              _InterlockedOr((volatile signed __int32 *)v372 + 383, 0x40u);
              ObfDereferenceObject(v315);
            }
            return v23;
          }
          return -1073741727;
        }
        if ( ProcessInformationClass != ProcessRevokeFileHandles )
        {
          switch ( ProcessInformationClass )
          {
            case ProcessWorkingSetControl:
              return MmProcessWorkingSetControl((ULONG_PTR)v7, v5, v4, PreviousMode);
            case ProcessCheckStackExtentsMode:
              if ( (_DWORD)v4 != 4 )
                return -1073741820;
              result = ObpReferenceObjectByHandleWithTag(
                         (ULONG_PTR)v7,
                         512,
                         (__int64)PsProcessType,
                         PreviousMode,
                         0x79517350u,
                         &v315,
                         0LL,
                         0LL);
              if ( result < 0 )
                return result;
              if ( PreviousMode )
                ULongFromUser = RtlReadULongFromUser((unsigned int *)v5);
              else
                ULongFromUser = *(_DWORD *)v5;
              v237 = ULongFromUser != 0;
              v375 = ULongFromUser != 0;
              if ( KeGetCurrentThread()->ApcState.Process == v315 )
              {
                v28 = -1073741790;
              }
              else if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              {
                v28 = 0;
                KeSetCheckStackExtentsProcess((__int64)v315, v237);
                if ( !v237 && (*((_DWORD *)v315 + 124) & 0x20000) != 0 )
                  _InterlockedAnd((volatile signed __int32 *)v315 + 124, 0xFFFDFFFF);
              }
              else
              {
                v28 = -1073741727;
              }
              goto LABEL_120;
            case ProcessMemoryExhaustion:
              if ( (_DWORD)v4 != 16 )
                return -1073741820;
              if ( PreviousMode )
                RtlCopyFromUser(&v410, v5, 0x10uLL);
              else
                RtlCopyVolatileMemory(&v410, v5, 0x10uLL);
              if ( (_WORD)v410 == 1 && !DWORD1(v410) )
              {
                result = ObpReferenceObjectByHandleWithTag(
                           (ULONG_PTR)Handle,
                           512,
                           (__int64)PsProcessType,
                           PreviousMode,
                           0x79517350u,
                           &v315,
                           0LL,
                           0LL);
                if ( result >= 0 )
                {
                  if ( !DWORD1(v410) )
                  {
                    if ( *((_QWORD *)&v410 + 1) )
                      _InterlockedOr((volatile signed __int32 *)v315 + 125, 0x100u);
                    else
                      _InterlockedAnd((volatile signed __int32 *)v315 + 125, 0xFFFFFEFF);
                  }
                  goto LABEL_931;
                }
                return result;
              }
              return -1073741811;
            case ProcessFaultInformation:
              ULong64FromUser = 0LL;
              if ( (_DWORD)v4 != 8 )
                return -1073741820;
              result = ObpReferenceObjectByHandleWithTag(
                         (ULONG_PTR)v7,
                         512,
                         (__int64)PsProcessType,
                         PreviousMode,
                         0x79517350u,
                         &v315,
                         0LL,
                         0LL);
              if ( result < 0 )
                return result;
              if ( PreviousMode )
                ULong64FromUser = RtlReadULong64FromUser(v5);
              else
                RtlCopyVolatileMemory(&ULong64FromUser, v5, 8uLL);
              v22 = PsSetProcessFaultInformation((__int64)v315, &ULong64FromUser, v234, v235);
              goto LABEL_68;
          }
          if ( ProcessInformationClass != ProcessCommitReleaseInformation )
          {
            if ( (unsigned int)(ProcessInformationClass - 66) > 1 )
              return -1073741821;
            if ( (v4 & 7) != 0 || (unsigned int)v4 > 0x100 )
              return -1073741820;
            if ( PreviousMode )
              RtlCopyFromUser(v439, v5, v4);
            else
              RtlCopyVolatileMemory(v439, v5, v4);
            v231 = (unsigned int)v4 >> 3;
            if ( ProcessInformationClass == ProcessAllowedCpuSetsInformation )
            {
              result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
              if ( result < 0 )
                return result;
            }
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)Handle,
                       0x2000,
                       (__int64)PsProcessType,
                       PreviousMode,
                       0x79517350u,
                       &v315,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            v22 = KeSetCpuSetsProcess(
                    (__int64)v315,
                    v231,
                    (__int64)v439,
                    ProcessInformationClass == ProcessAllowedCpuSetsInformation,
                    ProcessInformationClass != ProcessAllowedCpuSetsInformation);
            goto LABEL_68;
          }
          memset(v413, 0, sizeof(v413));
          if ( (_DWORD)v4 != 32 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)v7,
                     8193,
                     (__int64)PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &v315,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          if ( PreviousMode )
            RtlCopyFromUser(v413, v5, (unsigned int)v4);
          else
            RtlCopyVolatileMemory(v413, v5, (unsigned int)v4);
          if ( LODWORD(v413[0]) != 3 )
          {
            v28 = -1073741735;
            goto LABEL_120;
          }
          if ( (DWORD1(v413[0]) & 0xFFFFFFF8) == 0
            && *(_OWORD *)((char *)v413 + 8) == 0LL
            && (((DWORD1(v413[0]) >> 1) & 1) == 0 && (BYTE4(v413[0]) & 4) == 0 || (BYTE4(v413[0]) & 1) != 0) )
          {
            if ( ((DWORD1(v413[0]) >> 1) & 1) != 0 || (BYTE4(v413[0]) & 4) != 0 )
              v233 = MmReleaseCommitForMemResetPages((__int64)v315, (DWORD1(v413[0]) >> 2) & 1);
            else
              v233 = MmSetCommitReleaseEligibility((__int64)v315, BYTE4(v413[0]) & 1, v232);
            v28 = v233;
            goto LABEL_120;
          }
          goto LABEL_99;
        }
        *(_OWORD *)v367 = 0LL;
        v238 = 0LL;
        v371 = 0LL;
        if ( PreviousMode )
        {
          DWORD1(v366) = 0;
          v239 = RtlReadULongFromUser((unsigned int *)v5);
          v240 = v239;
          LODWORD(v366) = v239;
          v241 = (volatile void *)RtlReadULong64FromUser((char *)v5 + 8);
          *((_QWORD *)&v366 + 1) = v241;
          *(_OWORD *)v367 = v366;
          if ( !v240 )
            return -1073741811;
          ProbeForRead(v241, v240, 2u);
          Pool2 = (struct _KTHREAD *)ExAllocatePool2(0x40uLL);
          v238 = Pool2;
          v371 = Pool2;
          if ( !Pool2 )
            return -1073741670;
          RtlCopyFromUser(Pool2, v367[1], LOWORD(v367[0]));
          v367[1] = v238;
          v5 = (__int128 *)v367;
          v403 = v367;
        }
        v28 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)Handle,
                0x2000,
                (__int64)PsProcessType,
                PreviousMode,
                0x79517350u,
                &v315,
                0LL,
                0LL);
        if ( v28 >= 0 )
        {
          v28 = IoRevokeHandlesForProcess((__int64)v5, v315);
          if ( v238 )
            ExFreePoolWithTag(v238, 0);
          goto LABEL_120;
        }
        goto LABEL_953;
      }
      v243 = ProcessInformationClass - 70;
      if ( !v243 )
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &v315,
                   0LL,
                   0LL);
        if ( result >= 0 )
        {
          EtwTraceProcessSetInPrivateMode((__int64)v315);
          _InterlockedOr((volatile signed __int32 *)v315 + 124, 0x80000000);
          goto LABEL_931;
        }
        return result;
      }
      v244 = v243 - 1;
      if ( !v244 )
      {
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        if ( PreviousMode )
          v258 = RtlReadULongFromUser((unsigned int *)v5);
        else
          v258 = *(_DWORD *)v5;
        v376 = v258;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)Handle,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &v315,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v259 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v315);
        if ( !v259 )
          goto LABEL_418;
        ExEnableRaiseUMExceptionOnInvalidHandleClose(v259, v258, v260, v261);
LABEL_876:
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v315 + 61);
        goto LABEL_136;
      }
      v245 = v244 - 1;
      if ( !v245 )
        return PsIumEnableOnDemandDebugWithResponse((ULONG_PTR)v7, (__int64)v5, v4);
      v246 = v245 - 2;
      if ( !v246 )
      {
        if ( (_DWORD)v4 != 1 )
          return -1073741820;
        if ( PreviousMode )
          UCharFromUser = RtlReadUCharFromUser(v5);
        else
          UCharFromUser = *(_BYTE *)v5;
        v336 = UCharFromUser;
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     0x2000,
                     (__int64)PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &v315,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            if ( UCharFromUser )
              _InterlockedOr((volatile signed __int32 *)v315 + 383, 0x200u);
            else
              _InterlockedAnd((volatile signed __int32 *)v315 + 383, 0xFFFFFDFF);
            goto LABEL_931;
          }
          return result;
        }
        return -1073741727;
      }
      v247 = v246 - 3;
      if ( !v247 )
      {
        v407 = 0LL;
        v408 = 0;
        if ( (_DWORD)v4 != 12 )
          return -1073741820;
        if ( PreviousMode )
          RtlCopyFromUser(&v407, v5, 0xCuLL);
        else
          RtlCopyVolatileMemory(&v407, v5, 0xCuLL);
        if ( (_DWORD)v407 != 1 || (v407 & 0xFFFFFFF800000000uLL) != 0 || (~HIDWORD(v407) & v408) != 0 )
          return -1073741811;
        ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
        v254 = ExtensionTable;
        if ( (v407 & 0xFFFFFFFE00000000uLL) == 0 || ExtensionTable )
        {
          v28 = ObpReferenceObjectByHandleWithTag(
                  (ULONG_PTR)Handle,
                  0x2000,
                  (__int64)PsProcessType,
                  PreviousMode,
                  0x79517350u,
                  &v315,
                  0LL,
                  0LL);
          if ( v28 >= 0 )
          {
            if ( v254 )
              v28 = guard_dispatch_icall_no_overrides((__int64)v315, (__int64)&v407);
            PsSetProcessPowerThrottlingState((unsigned __int64 *)v315, (__int64)&v407, v255, v256);
            ObfDereferenceObjectWithTag(v315, 0x79517350u);
          }
          if ( v254 )
            ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
          return v28;
        }
        return -1073741822;
      }
      v248 = v247 - 3;
      if ( !v248 )
      {
        result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
        if ( result < 0 )
          return result;
        if ( (_DWORD)v4 == 1 )
        {
          if ( PreviousMode )
            v252 = RtlReadUCharFromUser(v5);
          else
            v252 = *(_BYTE *)v5;
          v335 = v252;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     0x2000,
                     (__int64)PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &v315,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            if ( v252 )
              _InterlockedOr((volatile signed __int32 *)v315 + 124, 0x8000000u);
            else
              _InterlockedAnd((volatile signed __int32 *)v315 + 124, 0xF7FFFFFF);
            KeRecomputeCpuSetAffinityProcess((__int64)v315);
            goto LABEL_931;
          }
          return result;
        }
        return -1073741820;
      }
      v249 = v248 - 2;
      if ( !v249 )
      {
        if ( (unsigned int)v4 < 8 )
          return -1073741820;
        memset_0(v417, 0, sizeof(v417));
        if ( (unsigned int)v4 >= 0x90 )
          LODWORD(v4) = 144;
        if ( PreviousMode )
          RtlCopyFromUser(v417, v5, (unsigned int)v4);
        else
          RtlCopyVolatileMemory(v417, v5, (unsigned int)v4);
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)Handle,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &v315,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v23 = PoSetProcessEnergyTrackingState((__int64)v315, v417, v250, v251);
        if ( v23 < 0 )
          goto LABEL_851;
        goto LABEL_848;
      }
      if ( v249 != 1 )
        return -1073741821;
      return -1073741637;
    }
    if ( ProcessInformationClass <= ProcessAltSystemCallInformation )
    {
      if ( ProcessInformationClass == ProcessAltSystemCallInformation )
      {
        v411 = 0LL;
        v412 = 0;
        if ( (_DWORD)v4 != 20 )
          return -1073741820;
        if ( PreviousMode )
          RtlCopyFromUser(&v411, v5, 0x14uLL);
        else
          RtlCopyVolatileMemory(&v411, v5, 0x14uLL);
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)Handle,
                   32,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &v315,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v22 = PspSyscallProviderOptIn((__int64)v315, (__int64)&v411, v288, v289);
        goto LABEL_68;
      }
      if ( ProcessInformationClass != ProcessEnableReadWriteVmLogging )
      {
        switch ( ProcessInformationClass )
        {
          case ProcessDebugAuthInformation:
            return SeCodeIntegritySetInformationProcess((__int64)v7, 0x5Au, v5, v4);
          case ProcessSystemResourceManagement:
            if ( (_DWORD)v4 != 4 )
              return -1073741820;
            if ( PreviousMode )
            {
              v278 = RtlReadULongFromUser((unsigned int *)v5);
              v352 = v278;
            }
            else
            {
              RtlCopyVolatileMemory(&v352, v5, 4uLL);
              v278 = v352;
            }
            if ( (v278 & 0xFFFFFFFE) == 0 )
            {
              if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              {
                result = ObpReferenceObjectByHandleWithTag(
                           (ULONG_PTR)Handle,
                           0x2000,
                           (__int64)PsProcessType,
                           PreviousMode,
                           0x79517350u,
                           &v315,
                           0LL,
                           0LL);
                if ( result >= 0 )
                {
                  LOBYTE(v279) = 1;
                  PspSetProcessForegroundBackgroundRequest((__int64)v315, v352 & 1, v279, v280);
                  goto LABEL_931;
                }
                return result;
              }
              return -1073741727;
            }
            return -1073741811;
          case ProcessCombineSecurityDomainsInformation:
            if ( (_DWORD)v4 != 8 )
              return -1073741820;
            if ( PreviousMode )
              BugCheckParameter1 = RtlReadULong64FromUser(v5);
            else
              RtlCopyVolatileMemory(&BugCheckParameter1, v5, 8uLL);
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)Handle,
                       0x2000,
                       (__int64)PsProcessType,
                       PreviousMode,
                       0x79517350u,
                       &v315,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            v23 = ObpReferenceObjectByHandleWithTag(
                    BugCheckParameter1,
                    4096,
                    (__int64)PsProcessType,
                    PreviousMode,
                    0x79517350u,
                    &v363,
                    0LL,
                    0LL);
            v224 = v315;
            if ( v23 < 0 )
              goto LABEL_852;
            v23 = PspCombineSecurityDomains((PEPROCESS)v315, (__int64)v363);
            ObfDereferenceObjectWithTag(v363, 0x79517350u);
            goto LABEL_851;
        }
        if ( ProcessInformationClass != ProcessEnableLogging )
        {
          if ( ProcessInformationClass != ProcessLeapSecondInformation )
          {
            if ( ProcessInformationClass == ProcessFiberShadowStackAllocation )
            {
              v396 = 0LL;
              v397 = 0LL;
              if ( v7 != (HANDLE)-1LL )
                return -1073741811;
              if ( PreviousMode != 1 )
                return -1073741823;
              if ( (_DWORD)v4 != 32 )
                return -1073741820;
              if ( KeIsUserCetAllowed() && _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 0x14u) )
              {
                RtlCopyFromUser(&v396, v5, 0x20uLL);
                return PspSetupUserFiberShadowStack(v396, *((ULONG_PTR *)&v396 + 1), v397, (_QWORD *)v5 + 3);
              }
            }
            else
            {
              if ( ProcessInformationClass != ProcessFreeFiberShadowStackAllocation )
                return -1073741821;
              v388 = 0LL;
              if ( v7 != (HANDLE)-1LL )
                return -1073741811;
              if ( PreviousMode != 1 )
                return -1073741823;
              if ( (_DWORD)v4 != 8 )
                return -1073741820;
              if ( KeIsUserCetAllowed() && _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 0x14u) )
              {
                v388 = (PVOID)RtlReadULong64FromUser(v5);
                return PspFreeUserFiberShadowStack(v388);
              }
            }
            return -1073741637;
          }
          if ( (_DWORD)v4 != 8 )
            return -1073741820;
          if ( PreviousMode )
          {
            v269 = RtlReadULong64FromUser(v5);
            v345 = v269;
          }
          else
          {
            RtlCopyVolatileMemory(&v345, v5, 8uLL);
            LODWORD(v269) = v345;
          }
          if ( (v269 & 0xFFFFFFFE) != 0 || Handle != (HANDLE)-1LL )
            return -1073741811;
          Process = KeGetCurrentThread()->ApcState.Process;
          v315 = Process;
          Blink = Process[1].ProcessListEntry.Blink;
          if ( Blink )
          {
            v272 = 0LL;
            ReadyTime = (__int64 *)Process[1].ReadyTime;
            if ( ReadyTime )
              v272 = *ReadyTime;
            v274 = RtlReadULongFromUser((unsigned int *)&Blink[124]);
            v327 = v274;
            if ( (v345 & 1) != 0 )
              v275 = v274 | 1;
            else
              v275 = v274 & 0xFFFFFFFE;
            v327 = v275;
            RtlWriteULongToUser((_DWORD *)(*((_QWORD *)v315 + 92) + 1984LL), v275);
            if ( v272 )
            {
              v276 = RtlReadULongFromUser((unsigned int *)(v272 + 1140));
              v327 = v276;
              if ( (v345 & 1) != 0 )
                v277 = v276 | 1;
              else
                v277 = v276 & 0xFFFFFFFE;
              v327 = v277;
              RtlWriteULongToUser((_DWORD *)(v272 + 1140), v277);
            }
            return v8;
          }
          return -1073741790;
        }
      }
      if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging && !(_DWORD)v4
        || ProcessInformationClass == ProcessEnableLogging && (unsigned int)v4 < 4 )
      {
        return -1073741820;
      }
      result = EtwCheckSecurityLoggerAccess((PS_PROTECTION *)KeGetCurrentThread()->ApcState.Process, PreviousMode);
      if ( result < 0 )
        return result;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode)
        && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        return -1073741727;
      }
      v334 = 0;
      if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging )
      {
        v338[0] = 0;
        if ( PreviousMode )
        {
          v281 = RtlReadUCharFromUser(v5);
          v338[0] = v281;
        }
        else
        {
          RtlCopyVolatileMemory(v338, v5, 1uLL);
          v281 = v338[0];
        }
        v282 = (v334 & 0xFFFFFFFE | v281 & 1) ^ ((unsigned __int8)v281 ^ (v334 & 0xFE | v281 & 1)) & 2;
      }
      else
      {
        if ( !PreviousMode )
        {
          RtlCopyVolatileMemory(&v334, v5, 4uLL);
          v282 = v334;
LABEL_1128:
          if ( (v282 & 0xFFFFFF80) == 0 )
          {
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)Handle,
                       0x2000,
                       (__int64)PsProcessType,
                       PreviousMode,
                       0x79517350u,
                       &v315,
                       0LL,
                       0LL);
            if ( result >= 0 )
            {
              _InterlockedAnd((volatile signed __int32 *)v315 + 383, 0x4FE7FFFFu);
              v283 = (((v334 >> 2) & 1) << 19) | 0x100000;
              if ( (v334 & 8) == 0 )
                v283 = ((v334 >> 2) & 1) << 19;
              v284 = v283 | 0x20000000;
              if ( (v334 & 0x10) == 0 )
                v284 = v283;
              v285 = v284 | 0x10000000;
              if ( (v334 & 0x20) == 0 )
                v285 = v284;
              v286 = v285 | 0x80000000;
              if ( (v334 & 0x40) == 0 )
                v286 = v285;
              _InterlockedOr((volatile signed __int32 *)v315 + 383, v286);
              _InterlockedAnd((volatile signed __int32 *)v315 + 124, 0xFCFFFFFF);
              v287 = ((v334 & 1) << 24) | 0x2000000;
              if ( (v334 & 2) == 0 )
                v287 = (v334 & 1) << 24;
              _InterlockedOr((volatile signed __int32 *)v315 + 124, v287);
              goto LABEL_931;
            }
            return result;
          }
          return -1073741811;
        }
        v282 = RtlReadULongFromUser((unsigned int *)v5);
      }
      v334 = v282;
      goto LABEL_1128;
    }
    v290 = ProcessInformationClass - 101;
    if ( v290 )
    {
      v291 = v290 - 1;
      if ( v291 )
      {
        v292 = v291 - 3;
        if ( v292 )
        {
          v293 = v292 - 1;
          if ( !v293 )
            return PfSnSetAltPrefetchParam((ULONG_PTR)v7, v5, (unsigned int)v4, PreviousMode);
          v294 = v293 - 1;
          if ( !v294 )
          {
            if ( (unsigned int)v4 < 0x10 || (v4 & 7) != 0 )
              return -1073741820;
            v302 = (_DWORD *)ExAllocatePool2(0x101uLL);
            v303 = v302;
            *(_QWORD *)&v366 = v302;
            if ( v302 )
            {
              if ( PreviousMode )
                RtlCopyFromUser(v302, v5, v4);
              else
                RtlCopyVolatileMemory(v302, v5, v4);
              if ( (unsigned int)(v4 - 8) >> 3 < v303[1] || (*v303 & 0xFFFFFFFE) != 0 )
              {
                v28 = -1073741811;
              }
              else
              {
                v369 = 0LL;
                v28 = ObReferenceObjectByHandle(Handle, 0x200u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v369, 0LL);
                v315 = v369;
                if ( v28 >= 0 )
                  v28 = PspAssignCpuPartitionsToProcessByHandle(
                          (__int64)v369,
                          PreviousMode,
                          (__int64)(v303 + 2),
                          v303[1],
                          *(_BYTE *)v303 & 1);
              }
            }
            else
            {
              v28 = -1073741670;
            }
            if ( v303 )
              ExFreePoolWithTag(v303, 0);
            v29 = v315;
            if ( v315 )
              goto LABEL_91;
            return v28;
          }
          v295 = v294 - 1;
          if ( !v295 )
          {
            if ( (_DWORD)v4 != 4 )
              return -1073741820;
            if ( PreviousMode )
              v332 = RtlReadULongFromUser((unsigned int *)v5);
            else
              RtlCopyVolatileMemory(&v332, v5, 4uLL);
            if ( (_WORD)v332 && (v332 & 0xFFFC) == 0 )
            {
              v298 = Handle;
              result = ObpReferenceObjectByHandleWithTag(
                         (ULONG_PTR)Handle,
                         512,
                         (__int64)PsProcessType,
                         PreviousMode,
                         0x79517350u,
                         &v315,
                         0LL,
                         0LL);
              v299 = result;
              if ( result >= 0 )
              {
                v300 = v332;
                if ( (v332 & 1) != 0 && *(_DWORD *)&SshpBlockerCollections.SavedApcStateFill[40] > 5u )
                {
                  if ( ((__int64)SshpBlockerCollections.SchedulerApc.Thread & 0x400000000000LL) == 0
                    || (v301 = 1,
                        (struct _LIST_ENTRY *)((__int64)SshpBlockerCollections.SchedulerApc.ApcListEntry.Flink & 0x400000000000LL) != SshpBlockerCollections.SchedulerApc.ApcListEntry.Flink) )
                  {
                    v301 = 0;
                  }
                  if ( v301 )
                  {
                    v324 = HIBYTE(v332);
                    v433 = &v324;
                    v434 = 1;
                    v435 = 0;
                    v389 = 0x1000000LL;
                    v436 = &v389;
                    v437 = 8;
                    v438 = 0;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&SshpBlockerCollections.SavedApcStateFill[40],
                      (unsigned __int8 *)byte_1400538D5,
                      0LL,
                      0LL,
                      4u,
                      &v432);
                    v300 = v332;
                  }
                }
                if ( (v300 & 2) == 0
                  || (v299 = PspSetProcessPriorityClass((__int64)v315, BYTE2(v332), (__int64)v298, PreviousMode),
                      v299 >= 0) )
                {
                  if ( (unsigned int)Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline()
                    || (v332 & 1) == 0 )
                  {
                    PspSetProcessPriorityByClassIgnoreForegroundBoost(v315);
                  }
                  else
                  {
                    PsSetProcessPriorityByClass(v315, 1LL);
                  }
                }
                ObfDereferenceObjectWithTag(v315, 0x79517350u);
                return v299;
              }
              return result;
            }
            return -1073741811;
          }
          v296 = v295 - 4;
          if ( !v296 )
          {
            if ( (_DWORD)v4 != 8 )
              return -1073741820;
            v346 = 0LL;
            v23 = ObpReferenceObjectByHandleWithTag(
                    (ULONG_PTR)v7,
                    512,
                    (__int64)PsProcessType,
                    PreviousMode,
                    0x79517350u,
                    &v315,
                    0LL,
                    0LL);
            if ( v23 >= 0 )
            {
              v23 = PspSchedulerSharedDataRegionCreate((_KPROCESS *)v315, &v346);
              if ( v23 >= 0 )
              {
                if ( PreviousMode )
                  RtlWriteULong64ToUser(v5, (__int64)v346);
                else
                  *(_QWORD *)v5 = v346;
                v346 = 0LL;
                v23 = 0;
              }
            }
            if ( v346 )
              ObCloseHandle(v346, PreviousMode);
            v224 = v315;
            if ( v315 )
              goto LABEL_852;
            return v23;
          }
          if ( v296 != 1 )
            return -1073741821;
          if ( (_DWORD)v4 )
            return -1073741820;
          v297 = -1LL;
          if ( v7 == (HANDLE)-1LL )
          {
            LOBYTE(v297) = PreviousMode;
            KeChangeMemoryAttributes(v297);
            return 0;
          }
          return -1073741637;
        }
        if ( (_DWORD)v4 != 8 )
          return -1073741820;
        if ( PreviousMode )
          v304 = RtlReadULong64FromUser(v5);
        else
          v304 = *(_QWORD *)v5;
        v402 = v304;
        if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & v304) != 0 )
          return -1073741811;
        if ( PreviousMode == 1 )
        {
          if ( Handle != (HANDLE)-1LL )
          {
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)Handle,
                       512,
                       (__int64)PsProcessType,
                       1,
                       0x79517350u,
                       &v315,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            ObfDereferenceObjectWithTag(v315, 0x79517350u);
            if ( v315 != KeGetCurrentThread()->ApcState.Process )
              return -1073741811;
          }
          v305 = KeGetCurrentThread()->ApcState.Process;
          v315 = v305;
          if ( v305[1].ReadyTime )
            return -1073741811;
          if ( !PsIsSystemProcess((__int64)v305) )
            return PspEnableProcessOptionalXStateFeatures((__int64)v315, v304, v306, v307);
          return -1073741637;
        }
        return -1073741790;
      }
      v342 = 0;
      *(_OWORD *)Address = 0LL;
      v238 = 0LL;
      if ( (_DWORD)v4 != 16 )
        return -1073741820;
      if ( !PreviousMode )
        return -1073741790;
      RtlCopyFromUser(Address, v5, 0x10uLL);
      v308 = 24 * LOWORD(Address[0]);
      if ( !v308 )
        return -1073741811;
      if ( !Address[1] )
        return -1073741811;
      ProbeForWrite(Address[1], v308, 8u);
      if ( WORD1(Address[0]) || HIDWORD(Address[0]) )
        return -1073741811;
      v364 = 0LL;
      result = ObReferenceObjectByHandle(Handle, 0x200u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v364, 0LL);
      v315 = v364;
      if ( result < 0 )
        return result;
      if ( v364 != KeGetCurrentThread()->ApcState.Process || (*((_DWORD *)v364 + 469) & 0x40000000) == 0 )
      {
        if ( (*((_DWORD *)v364 + 469) & 0x4000) != 0 )
        {
          v309 = (struct _KTHREAD *)ExAllocatePool2(0x101uLL);
          v238 = v309;
          p_LockNV = &v309->Header.LockNV;
          if ( v309 )
          {
            RtlCopyFromUser(v309, (void *)Address[1], v308);
            v28 = PspProcessDynamicEnforcedAddressRanges(
                    (struct _EX_RUNDOWN_REF *)v315,
                    (unsigned __int64 *)v315 + 242,
                    (__int64)v238,
                    (unsigned __int16)Address[0],
                    &v342);
            v320 = v28;
            v310 = 0;
            v319 = 0;
            while ( v310 < v342 )
            {
              RtlWriteULongToUser(
                (_DWORD *)Address[1] + 6 * v310 + 4,
                *((_DWORD *)&v238->Header.WaitListHead.Blink + 6 * v310));
              v319 = ++v310;
            }
            goto LABEL_1254;
          }
          goto LABEL_1250;
        }
        goto LABEL_1248;
      }
    }
    else
    {
      v347 = 0;
      *(_OWORD *)v358 = 0LL;
      v238 = 0LL;
      if ( (_DWORD)v4 != 16 )
        return -1073741820;
      if ( !PreviousMode )
        return -1073741790;
      RtlCopyFromUser(v358, v5, 0x10uLL);
      v311 = 16 * LOWORD(v358[0]);
      if ( !v311 )
        return -1073741811;
      if ( !v358[1] )
        return -1073741811;
      ProbeForWrite(v358[1], v311, 8u);
      if ( WORD1(v358[0]) || HIDWORD(v358[0]) )
        return -1073741811;
      v365 = 0LL;
      result = ObReferenceObjectByHandle(Handle, 0x200u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v365, 0LL);
      v315 = v365;
      if ( result < 0 )
        return result;
      if ( v365 != KeGetCurrentThread()->ApcState.Process || (*((_DWORD *)v365 + 469) & 0x40000000) == 0 )
      {
        if ( (*((_DWORD *)v365 + 469) & 0x4000) != 0 )
        {
          v309 = (struct _KTHREAD *)ExAllocatePool2(0x101uLL);
          v238 = v309;
          p_LockNV = &v309->Header.LockNV;
          if ( v309 )
          {
            RtlCopyFromUser(v309, (void *)v358[1], v311);
            v28 = PspProcessDynamicEHContinuationTargets(
                    (struct _EX_RUNDOWN_REF *)v315,
                    (__int64)v238,
                    (unsigned __int16)v358[0],
                    &v347);
            v320 = v28;
            v312 = 0;
            v319 = 0;
            while ( v312 < v347 )
            {
              RtlWriteULong64ToUser(
                (_QWORD *)v358[1] + 2 * v312 + 1,
                (__int64)(&v238->Header.WaitListHead.Flink)[2 * v312]);
              v319 = ++v312;
            }
LABEL_1254:
            if ( v315 )
              ObfDereferenceObject(v315);
LABEL_953:
            if ( !v238 )
              return v28;
            v124 = v238;
            goto LABEL_317;
          }
LABEL_1250:
          v28 = -1073741801;
          v238 = v309;
          goto LABEL_1254;
        }
LABEL_1248:
        v28 = -1073741637;
        goto LABEL_1254;
      }
    }
    v28 = -1073741790;
    goto LABEL_1254;
  }
  if ( ProcessInformationClass == ProcessHandleCheckingMode )
  {
    if ( (_DWORD)v4 != 4 )
      return -1073741820;
    if ( PreviousMode )
      v227 = RtlReadULongFromUser((unsigned int *)v5);
    else
      v227 = *(_DWORD *)v5;
    v374 = v227;
    if ( (v227 & 0xFFFFFFFE) != 0 )
      return -1073741811;
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)Handle,
               512,
               (__int64)PsProcessType,
               PreviousMode,
               0x79517350u,
               &v315,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v228 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v315);
    if ( !v228 )
      goto LABEL_418;
    ExEnableHandleExceptions(v228, v227 & 1, v229, v230);
    goto LABEL_876;
  }
  if ( ProcessInformationClass <= ProcessSessionInformation )
  {
    if ( ProcessInformationClass == ProcessSessionInformation )
    {
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      if ( PreviousMode )
        v360[0] = RtlReadULongFromUser((unsigned int *)v5);
      else
        RtlCopyVolatileMemory(v360, v5, 4uLL);
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)Handle,
                   516,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &v315,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        SessionId = PsGetSessionId((__int64)v315);
        v23 = SessionId != v360[0] ? 0xC0000022 : 0;
        goto LABEL_851;
      }
      return -1073741727;
    }
    if ( ProcessInformationClass <= ProcessIoPortHandlers )
    {
      if ( ProcessInformationClass == ProcessIoPortHandlers )
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &v315,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
LABEL_67:
        v22 = xKdEnumerateDebuggingDevices();
LABEL_68:
        v23 = v22;
LABEL_851:
        v224 = v315;
LABEL_852:
        ObfDereferenceObjectWithTag(v224, 0x79517350u);
        return v23;
      }
      v12 = ProcessInformationClass - 1;
      if ( !v12 )
        return PspSetQuotaLimits((ULONG_PTR)v7, v5, v4, PreviousMode);
      v13 = v12 - 4;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 2;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( !v16 )
            {
              if ( (_DWORD)v4 == 16 )
              {
                if ( PreviousMode )
                  v24 = (void *)RtlReadULong64FromUser(v5);
                else
                  v24 = *(void **)v5;
                v401 = v24;
                return PspAssignPrimaryToken((__int64)CurrentThread, PreviousMode, (ULONG_PTR)Handle, v24);
              }
              return -1073741820;
            }
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                if ( v18 == 1 )
                {
                  if ( (_DWORD)v4 == 4 )
                  {
                    if ( PreviousMode )
                      v19 = RtlReadULongFromUser((unsigned int *)v5);
                    else
                      v19 = *(_DWORD *)v5;
                    v377 = v19;
                    result = ObpReferenceObjectByHandleWithTag(
                               (ULONG_PTR)Handle,
                               512,
                               (__int64)PsProcessType,
                               PreviousMode,
                               0x79517350u,
                               &v315,
                               0LL,
                               0LL);
                    if ( result >= 0 )
                    {
                      PspSetProcessDefaultHardErrorMode((__int64)v315, (__int64)CurrentThread, v19, v21);
LABEL_931:
                      ObfDereferenceObjectWithTag(v315, 0x79517350u);
                      return 0;
                    }
                    return result;
                  }
                  return -1073741820;
                }
                return -1073741821;
              }
              result = ObpReferenceObjectByHandleWithTag(
                         (ULONG_PTR)v7,
                         544,
                         (__int64)PsProcessType,
                         PreviousMode,
                         0x79517350u,
                         &v315,
                         0LL,
                         0LL);
              if ( result < 0 )
                return result;
            }
            else
            {
              result = ObpReferenceObjectByHandleWithTag(
                         (ULONG_PTR)v7,
                         544,
                         (__int64)PsProcessType,
                         PreviousMode,
                         0x79517350u,
                         &v315,
                         0LL,
                         0LL);
              if ( result < 0 )
                return result;
            }
            goto LABEL_67;
          }
          if ( (_DWORD)v4 == 8 )
          {
            v25 = 0;
            if ( PreviousMode )
              v26 = (void *)RtlReadULong64FromUser(v5);
            else
              v26 = *(void **)v5;
            v381 = v26;
            goto LABEL_87;
          }
          if ( (_DWORD)v4 != 16 )
            return -1073741820;
          if ( PreviousMode )
            v26 = (void *)RtlReadULong64FromUser(v5);
          else
            v26 = *(void **)v5;
          v381 = v26;
          if ( PreviousMode )
            v25 = RtlReadULongFromUser((unsigned int *)v5 + 2);
          else
            v25 = *((_DWORD *)v5 + 2);
          v379 = v25;
          if ( (v25 & 0xFFFFFFF8) == 0 )
          {
LABEL_87:
            if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            {
              Object = 0LL;
              result = ObReferenceObjectByHandle(v26, 0, LpcPortObjectType, PreviousMode, &Object, 0LL);
              v27 = (unsigned __int64)Object;
              v329 = Object;
              if ( result < 0 )
                return result;
              v28 = ObpReferenceObjectByHandleWithTag(
                      (ULONG_PTR)Handle,
                      2048,
                      (__int64)PsProcessType,
                      PreviousMode,
                      0x79517350u,
                      &v315,
                      0LL,
                      0LL);
              if ( v28 < 0 )
              {
                v29 = (PVOID)v27;
LABEL_91:
                ObfDereferenceObject(v29);
                return v28;
              }
              v328 = (_OWORD *)(v27 | v25);
              v30 = (signed __int64 *)((char *)v315 + 576);
              _m_prefetchw((char *)v315 + 576);
              v31 = *v30;
              v32 = (signed __int64)v328;
              do
              {
                p_LockNV = (_DWORD *)v31;
                if ( (_DWORD)v4 == 16 )
                {
                  v33 = (_DWORD *)v5 + 2;
                  if ( PreviousMode )
                    RtlWriteULongToUser(v33, v31 & 7);
                  else
                    *v33 = v31 & 7;
                  v32 = (signed __int64)v328;
                }
                else if ( (v31 & 7) != 0 )
                {
                  ObfDereferenceObject(v329);
                  goto LABEL_99;
                }
                v34 = _InterlockedCompareExchange64((volatile signed __int64 *)v315 + 72, v32, v31);
                v63 = v31 == v34;
                v31 = v34;
              }
              while ( !v63 );
              if ( v34 )
              {
                v35 = (void *)(v34 & 0xFFFFFFFFFFFFFFF8uLL);
                memset(v398, 0, sizeof(v398));
                v399 = 0LL;
                *(_DWORD *)((char *)v398 + 2) = 852016;
                LOWORD(v398[0]) = 8;
                *((_QWORD *)&v399 + 1) = *((_QWORD *)v315 + 58);
                while ( 1 )
                {
                  v36 = LpcRequestPort((__int64)v35, (__int64)v398);
                  if ( v36 != -1073741801 && v36 != -1073741670 )
                    break;
                  KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
                }
                PspLockUnlockProcessExclusive((__int64)v315, (__int64)CurrentThread);
                ObfDereferenceObject(v35);
              }
              v28 = 0;
              goto LABEL_120;
            }
            return -1073741727;
          }
          return -1073741811;
        }
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        if ( PreviousMode )
          v37 = RtlReadULongFromUser((unsigned int *)v5);
        else
          v37 = *(_DWORD *)v5;
        v380 = v37;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)Handle,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &v315,
                   0LL,
                   0LL);
        v28 = result;
        if ( result < 0 )
          return result;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v315 + 61) )
        {
          for ( i = 0LL; ; i = v44 )
          {
            NextProcessThread = (struct _KTHREAD *)PsGetNextProcessThread((__int64)v315, i, v38, v39);
            v44 = NextProcessThread;
            if ( !NextProcessThread )
              break;
            KeBoostPriorityThread(NextProcessThread, v37, v42, v43);
          }
          goto LABEL_118;
        }
LABEL_119:
        v28 = -1073741558;
        goto LABEL_120;
      }
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      if ( PreviousMode )
      {
        v46 = RtlReadULongFromUser((unsigned int *)v5);
        v339 = v46;
      }
      else
      {
        RtlCopyVolatileMemory(&v339, v5, 4uLL);
        v46 = v339;
      }
      v47 = v46 & 0x80000000;
      if ( v46 < 0 )
      {
        v46 &= ~0x80000000;
        v339 = v46;
      }
      v48 = v47 != 0 ? 2 : 0;
      if ( (unsigned int)(v46 - 1) > 0x1E )
        return -1073741811;
      v49 = (int)Handle;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)Handle,
                 512,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &v315,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v339 <= *((char *)v315 + 144)
        || SeCheckPrivilegedObject(*(_QWORD *)&SeIncreaseBasePriorityPrivilege, v49, 512, PreviousMode) )
      {
        KeSetPriorityAndQuantumProcess((__int64)v315, (unsigned int)v339, 0, 0, 0);
        MmSetMemoryPriorityProcess((__int64)v315, v48);
        if ( (unsigned int)Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline() )
          PspEnqueueProcessQosChangeNotification(v315);
        goto LABEL_136;
      }
      goto LABEL_133;
    }
    v50 = ProcessInformationClass - 15;
    if ( v50 )
    {
      v51 = v50 - 1;
      if ( v51 )
      {
        v52 = v51 - 1;
        if ( !v52 )
        {
          if ( (_DWORD)v4 == 1 )
          {
            if ( PreviousMode )
              v72 = RtlReadUCharFromUser(v5);
            else
              v72 = *(_BYTE *)v5;
            v337 = v72;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)Handle,
                       512,
                       (__int64)PsProcessType,
                       PreviousMode,
                       0x79517350u,
                       &v315,
                       0LL,
                       0LL);
            if ( result >= 0 )
            {
              v75 = (__int64)CurrentThread;
              PspLockProcessExclusive((__int64)v315, (__int64)CurrentThread, v73, v74);
              if ( v72 )
                *((_DWORD *)v315 + 226) |= 4u;
              else
                *((_DWORD *)v315 + 226) &= ~4u;
              if ( *((_QWORD *)v315 + 98) )
              {
                v76 = *((_WORD *)v315 + 886);
                if ( v76 == 332 || (v77 = 0, v76 == 452) )
                  v77 = 1;
                if ( v77 )
                  v72 = 1;
              }
              KeSetAutoAlignmentProcess((__int64)v315, v72);
              PspUnlockProcessExclusive((__int64)v315, v75);
              goto LABEL_931;
            }
            return result;
          }
          return -1073741820;
        }
        v53 = v52 - 1;
        if ( !v53 )
        {
          if ( (_DWORD)v4 != 2 )
            return -1073741820;
          if ( PreviousMode )
            UShortFromUser = RtlReadUShortFromUser((unsigned __int16 *)v5);
          else
            RtlCopyVolatileMemory(&UShortFromUser, v5, 2uLL);
          v70 = Handle;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     512,
                     (__int64)PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &v315,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v23 = PspSetProcessPriorityClass((__int64)v315, HIBYTE(UShortFromUser), (__int64)v70, PreviousMode);
          if ( v23 >= 0 )
          {
            if ( *(_DWORD *)&SshpBlockerCollections.SavedApcStateFill[40] > 5u )
            {
              if ( ((__int64)SshpBlockerCollections.SchedulerApc.Thread & 0x400000000000LL) == 0
                || (v71 = 1,
                    (struct _LIST_ENTRY *)((__int64)SshpBlockerCollections.SchedulerApc.ApcListEntry.Flink & 0x400000000000LL) != SshpBlockerCollections.SchedulerApc.ApcListEntry.Flink) )
              {
                v71 = 0;
              }
              if ( v71 )
              {
                v322 = UShortFromUser;
                v419 = &v322;
                v420 = 1;
                v421 = 0;
                v382 = 0x1000000LL;
                v422 = &v382;
                v423 = 8;
                v424 = 0;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&SshpBlockerCollections.SavedApcStateFill[40],
                  (unsigned __int8 *)word_140053932,
                  0LL,
                  0LL,
                  4u,
                  &v418);
              }
            }
            if ( (unsigned int)Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline() )
              PspSetProcessPriorityByClassIgnoreForegroundBoost(v315);
            else
              PsSetProcessPriorityByClass(v315, 1LL);
          }
          goto LABEL_851;
        }
        v54 = v53 - 1;
        if ( !v54 )
        {
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          if ( PreviousMode )
            v69 = RtlReadULongFromUser((unsigned int *)v5);
          else
            v69 = *(_DWORD *)v5;
          v392 = v69;
          if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            v28 = ObpReferenceObjectByHandleWithTag(
                    (ULONG_PTR)Handle,
                    512,
                    (__int64)PsProcessType,
                    PreviousMode,
                    0x79517350u,
                    &v315,
                    0LL,
                    0LL);
            if ( v28 < 0 )
              return v28;
            v45 = v315;
            if ( *((_QWORD *)v315 + 200) )
            {
              v28 = -1073741790;
              goto LABEL_121;
            }
            if ( v69 )
              _InterlockedOr((volatile signed __int32 *)v315 + 125, 0x1000000u);
            else
              _InterlockedAnd((volatile signed __int32 *)v315 + 125, 0xFEFFFFFF);
            goto LABEL_120;
          }
          return -1073741727;
        }
        v55 = v54 - 2;
        if ( v55 )
        {
          v56 = v55 - 1;
          if ( v56 )
          {
            if ( v56 != 1 )
              return -1073741821;
            if ( (_DWORD)v4 != 8 )
              return -1073741820;
            if ( PreviousMode )
              v57 = (void *)RtlReadULong64FromUser(v5);
            else
              v57 = *(void **)v5;
            v405 = v57;
            if ( !RtlIsSandboxedToken(0LL, PreviousMode) )
            {
              result = ObpReferenceObjectByHandleWithTag(
                         (ULONG_PTR)Handle,
                         512,
                         (__int64)PsProcessType,
                         PreviousMode,
                         0x79517350u,
                         &v315,
                         0LL,
                         0LL);
              if ( result < 0 )
                return result;
              v58 = v315;
              ProcessServerSilo = (void *)PsGetProcessServerSilo((__int64)v315);
              v22 = ObpSetDeviceMap(ProcessServerSilo, (__int64)v58, v57, PreviousMode, 2, 0LL);
              goto LABEL_68;
            }
            return -1073741790;
          }
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          if ( PreviousMode )
            v60 = RtlReadULongFromUser((unsigned int *)v5);
          else
            v60 = *(_DWORD *)v5;
          v385 = v60;
          v61 = v60 != 0;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     512,
                     (__int64)PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &v315,
                     0LL,
                     0LL);
          v28 = result;
          if ( result < 0 )
            return result;
          if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v315 + 61) )
            goto LABEL_119;
          KeSetDisableBoostProcess((__int64)v315, v61);
LABEL_118:
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v315 + 61);
          goto LABEL_120;
        }
        if ( (_DWORD)v4 == 8 )
        {
          if ( PreviousMode )
          {
            v62 = RtlReadULong64FromUser(v5);
            *(_QWORD *)&v409 = v62;
          }
          else
          {
            RtlCopyVolatileMemory(&v409, v5, 8uLL);
            v62 = v409;
          }
          v63 = v62 == 0;
        }
        else
        {
          if ( (_DWORD)v4 != 16 )
            return -1073741820;
          if ( PreviousMode )
            RtlCopyFromUser(&v409, v5, 0x10uLL);
          else
            RtlCopyVolatileMemory(&v409, v5, 0x10uLL);
          v63 = !KeVerifyGroupAffinity((__int64)&v409, 0);
        }
        if ( v63 )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)Handle,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &v315,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v45 = v315;
        if ( (*((_DWORD *)v315 + 34) & 0x1000) != 0 )
        {
          v28 = -1073741811;
          goto LABEL_121;
        }
        KeQueryPrimaryGroupProcess((__int64)v315, &v325);
        if ( (_DWORD)v4 != 8 )
        {
LABEL_180:
          v65 = (__int64)CurrentThread;
          --CurrentThread->KernelApcDisable;
          if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v315 + 61) )
          {
            PspLockProcessSharedUnsafe((__int64)v315, v66, v67, v68);
            v28 = PspSetProcessAffinitySafe((struct _KPROCESS *)v315, 0, 0LL, (__int64 *)&v409, &v341);
            PspUnlockProcessSharedUnsafe((__int64)v315);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v315 + 61);
            if ( v28 >= 0 )
            {
              if ( v341 )
                PspUpdatePebForAffinityChange(v65, (__int64)v315);
              _InterlockedOr((volatile signed __int32 *)v315 + 124, 0x200000u);
            }
          }
          else
          {
            v28 = -1073741558;
          }
          KiLeaveCriticalRegionUnsafe(v65, v66);
          goto LABEL_120;
        }
        v64 = v409 & *(_QWORD *)((char *)&stru_140FC11F0.116 + 8 * v325 + 4);
        if ( v64 == (_QWORD)v409 )
        {
          WORD4(v409) = v325;
          *(_QWORD *)&v409 = v64;
          goto LABEL_180;
        }
LABEL_99:
        v28 = -1073741811;
LABEL_120:
        v45 = v315;
LABEL_121:
        ObfDereferenceObjectWithTag(v45, 0x79517350u);
        return v28;
      }
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return -1073741727;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)Handle,
                 512,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &v315,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      ObfDereferenceObjectWithTag(v315, 0x79517350u);
      return -1073741822;
    }
    goto LABEL_843;
  }
  if ( ProcessInformationClass <= ProcessInstrumentationCallback )
  {
    if ( ProcessInformationClass != ProcessInstrumentationCallback )
    {
      v79 = ProcessInformationClass - 25;
      if ( !v79 )
      {
        if ( (_DWORD)v4 == 1 )
        {
          if ( PreviousMode )
            v331[0] = RtlReadUCharFromUser(v5);
          else
            RtlCopyVolatileMemory(v331, v5, 1uLL);
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     0x2000,
                     (__int64)PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &v315,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            if ( *(_DWORD *)&SshpBlockerCollections.SavedApcStateFill[40] > 5u )
            {
              if ( ((__int64)SshpBlockerCollections.SchedulerApc.Thread & 0x400000000000LL) == 0
                || (v141 = 1,
                    (struct _LIST_ENTRY *)((__int64)SshpBlockerCollections.SchedulerApc.ApcListEntry.Flink & 0x400000000000LL) != SshpBlockerCollections.SchedulerApc.ApcListEntry.Flink) )
              {
                v141 = 0;
              }
              if ( v141 )
              {
                v323 = v331[0];
                v426 = &v323;
                v427 = 1;
                v428 = 0;
                v386 = 0x1000000LL;
                v429 = &v386;
                v430 = 8;
                v431 = 0;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&SshpBlockerCollections.SavedApcStateFill[40],
                  (unsigned __int8 *)byte_14005398D,
                  0LL,
                  0LL,
                  4u,
                  &v425);
              }
            }
            if ( !(unsigned int)Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline() )
            {
              LOBYTE(v8) = v331[0] != 0;
              PsSetProcessPriorityByClass(v315, v8);
            }
            goto LABEL_931;
          }
          return result;
        }
        return -1073741820;
      }
      v80 = v79 - 4;
      if ( !v80 )
      {
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        if ( PreviousMode )
          v140 = RtlReadULongFromUser((unsigned int *)v5);
        else
          v140 = *(_DWORD *)v5;
        v378 = v140;
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        {
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     512,
                     (__int64)PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &v315,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            if ( v140 )
              _InterlockedOr((volatile signed __int32 *)v315 + 125, 0x2000u);
            else
              _InterlockedAnd((volatile signed __int32 *)v315 + 125, 0xFFFFDFFF);
            goto LABEL_931;
          }
          return result;
        }
        return -1073741727;
      }
      v81 = v80 - 2;
      if ( !v81 )
      {
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &v315,
                   0LL,
                   0LL);
        v28 = result;
        if ( result < 0 )
          return result;
        if ( PreviousMode )
          v139 = RtlReadULongFromUser((unsigned int *)v5);
        else
          v139 = *(_DWORD *)v5;
        v359 = v139;
        if ( v28 < 0 )
          goto LABEL_120;
        if ( (v139 & 0xFFFFFFFE) == 0 )
        {
          if ( (v139 & 1) != 0 )
            _InterlockedAnd((volatile signed __int32 *)v315 + 125, 0xFFFFFFFD);
          else
            _InterlockedOr((volatile signed __int32 *)v315 + 125, 2u);
          goto LABEL_120;
        }
        goto LABEL_99;
      }
      v82 = v81 - 1;
      if ( !v82 )
      {
        v344 = 0LL;
        if ( !(_DWORD)v4 )
          goto LABEL_363;
        if ( (((_DWORD)v4 - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        v136 = PreviousMode ? RtlReadULongFromUser((unsigned int *)v5) : *(_DWORD *)v5;
        LODWORD(v344) = v136;
        if ( (_DWORD)v4 == 8 )
        {
          v137 = PreviousMode ? RtlReadULongFromUser((unsigned int *)v5 + 1) : *((_DWORD *)v5 + 1);
          HIDWORD(v344) = v137;
          v136 = v344;
        }
        else
        {
          HIDWORD(v344) = 0;
        }
        if ( !v136 || (v136 & 0xFFFFFFF0) == 0 )
        {
LABEL_363:
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     512,
                     (__int64)PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &v315,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          if ( (_DWORD)v4 )
            v138 = &v344;
          else
            v138 = 0LL;
          v22 = PsSetProcessHandleTracingInformation((struct _EX_RUNDOWN_REF *)v315, (__int64)v138);
          goto LABEL_68;
        }
        return -1073741811;
      }
      v83 = v82 - 1;
      if ( !v83 )
      {
        if ( (((_DWORD)v4 - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        if ( (_DWORD)v4 == 4 )
        {
          if ( PreviousMode )
            v126 = RtlReadULongFromUser((unsigned int *)v5);
          else
            v126 = *(_DWORD *)v5;
          v390 = v126;
          v317 = 0;
        }
        else
        {
          if ( PreviousMode )
          {
            v127 = RtlReadULong64FromUser(v5);
            v126 = v127;
            v349 = v127;
          }
          else
          {
            RtlCopyVolatileMemory(&v349, v5, 8uLL);
            v126 = v349;
          }
          v317 = BYTE4(v349);
        }
        if ( v126 >= 4 )
          return -1073741811;
        if ( v126 >= 3
          && !SeCheckPrivilegedObject(*(_QWORD *)&SeIncreaseBasePriorityPrivilege, (int)Handle, 512, PreviousMode) )
        {
          return -1073741727;
        }
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)Handle,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &v315,
                   0LL,
                   0LL);
        v28 = result;
        if ( result < 0 )
          return result;
        if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v315 + 61) )
          goto LABEL_119;
        v88 = (__int64)CurrentThread;
        PspLockProcessExclusive((__int64)v315, (__int64)CurrentThread, v128, v129);
        v130 = (volatile signed __int32 *)v315;
        v131 = *((_DWORD *)v315 + 125);
        v132 = v126 << 27;
        do
        {
          v133 = v131;
          v131 = _InterlockedCompareExchange(v130 + 125, v132 | v131 & 0xC7FFFFFF, v131);
        }
        while ( v131 != v133 );
        v93 = v315;
        v134 = (_QWORD *)*((_QWORD *)v315 + 110);
        if ( v134 != (_QWORD *)((char *)v315 + 880) )
        {
          v135 = v317;
          do
          {
            if ( v135 == 1 && ((*((_DWORD *)v134 + 10) >> 9) & 7) < (int)v126 )
              IoBoostThreadIoPriority(v134 - 175, v126, 0);
            PsSetIoPriorityThread((LegacyAutoBoost *)(v134 - 175), v126, v132, (struct _SINGLE_LIST_ENTRY *)v130);
            v134 = (_QWORD *)*v134;
            v93 = v315;
          }
          while ( v134 != (_QWORD *)((char *)v315 + 880) );
        }
        goto LABEL_349;
      }
      v84 = v83 - 1;
      if ( !v84 )
      {
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        if ( v7 == (HANDLE)-1LL )
        {
          if ( PreviousMode )
            v125 = RtlReadULongFromUser((unsigned int *)v5);
          else
            v125 = *(_DWORD *)v5;
          v391 = v125;
          v28 = KeSetExecuteOptions((__int64)KeGetCurrentThread()->ApcState.Process, v125);
          if ( v28 >= 0 && (v125 & 3) == 1 )
            MmRemoveExecuteGrants();
          return v28;
        }
        return -1073741811;
      }
      v85 = v84 - 1;
      if ( v85 )
      {
        if ( v85 != 4 )
          return -1073741821;
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        if ( PreviousMode )
          v340 = RtlReadULongFromUser((unsigned int *)v5);
        else
          RtlCopyVolatileMemory(&v340, v5, 4uLL);
        if ( v340 > (unsigned int)MmGetDefaultPagePriority() || v340 < (unsigned int)MmGetMinWsPagePriority() )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)Handle,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &v315,
                   0LL,
                   0LL);
        v28 = result;
        if ( result < 0 )
          return result;
        if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v315 + 61) )
          goto LABEL_119;
        v88 = (__int64)CurrentThread;
        PspLockProcessExclusive((__int64)v315, (__int64)CurrentThread, v86, v87);
        v89 = v340 << 12;
        v90 = (volatile signed __int32 *)v315;
        v91 = *((_DWORD *)v315 + 124);
        do
        {
          v92 = v91;
          v91 = _InterlockedCompareExchange(v90 + 124, v89 | v91 & 0xFFFF8FFF, v91);
        }
        while ( v91 != v92 );
        v93 = v315;
        v94 = (char *)v315 + 880;
        v95 = (char *)*((_QWORD *)v315 + 110);
        while ( v95 != v94 )
        {
          PsSetPagePriorityThread((__int64)(v95 - 1400), v340);
          v95 = *(char **)v95;
          v93 = v315;
          v94 = (char *)v315 + 880;
        }
LABEL_349:
        PspUnlockProcessExclusive((__int64)v93, v88);
        goto LABEL_118;
      }
      memset(P, 0, sizeof(P));
      v416 = 0LL;
      v353 = 0LL;
      v343 = 0LL;
      if ( v7 != (HANDLE)-1LL )
        return -1073741811;
      if ( PreviousMode == 1 )
      {
        if ( (unsigned int)v4 < 0x28 )
          return -1073741820;
        v96 = (unsigned int)(v4 - 16) / 0x18uLL;
        if ( (_DWORD)v4 - 16 != 24 * v96 )
          return -1073741820;
        if ( (_DWORD)v4 == 40 )
        {
          v97 = (struct _KTHREAD *)P;
          CurrentThread = (struct _KTHREAD *)P;
        }
        else
        {
          v97 = (struct _KTHREAD *)ExAllocatePool2(0x101uLL);
          CurrentThread = v97;
          if ( !v97 )
            return -1073741670;
        }
        p_LockNV = &v97->Header.LockNV;
        v354 = (unsigned int *)v97;
        RtlCopyFromUser(v97, v5, v4);
        p_SignalState = &v97->Header.SignalState;
        if ( v97->Header.SignalState < 2u
          && (v97->Header.LockNV & 0xFFFFFFFE) == 0
          && (p_WaitListHead = &v97->Header.WaitListHead,
              Flink_low = LODWORD(v97->Header.WaitListHead.Flink),
              (_DWORD)Flink_low)
          && v96 == Flink_low )
        {
          v100 = 0;
          v319 = 0;
          p_Blink = &v97->Header.WaitListHead.Blink;
          do
          {
            if ( *(_DWORD *)p_Blink )
              goto LABEL_313;
            v319 = ++v100;
            p_Blink += 3;
          }
          while ( v100 < (unsigned int)Flink_low );
          v102 = KeGetCurrentThread()->ApcState.Process;
          v315 = v102;
          LODWORD(Handle) = 0;
          if ( (v97->Header.LockNV & 1) != 0 )
          {
            if ( !v102[1].ReadyTime )
              goto LABEL_313;
            v103 = WORD2(v102[3].PerProcessorCycleTimes);
            if ( v103 == 332 || (v104 = 0, v103 == 452) )
              v104 = 1;
            if ( !v104 )
            {
LABEL_313:
              v28 = -1073741811;
              goto LABEL_315;
            }
            LODWORD(Handle) = 1;
          }
          v105 = (unsigned int)Handle ^ 1;
          v333 = 4 * v105;
          *(_QWORD *)&v366 = 4 * v105 + 4;
          v328 = v5;
          v106 = 0;
          v319 = 0;
          v28 = 0;
          v320 = 0;
          v107 = 0LL;
          for ( j = v102; ; j = v315 )
          {
            v329 = PsGetNextProcessThread((__int64)j, v107, (__int64)v102, v98);
            v109 = v329;
            if ( !v329 || v106 >= LODWORD(p_WaitListHead->Flink) )
              break;
            if ( (*((_DWORD *)v329 + 29) & 0x400) == 0 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v329 + 177) )
            {
              v110 = v109[30];
              v348 = v110;
              if ( (_DWORD)Handle )
              {
                v111 = v110 + 8236;
                v343 = v110 + 8236;
                v112 = (unsigned int)RtlReadULongFromUser((unsigned int *)(v110 + 8236));
              }
              else
              {
                v111 = v110 + 88;
                v343 = v110 + 88;
                v112 = RtlReadULong64FromUser((volatile void *)(v110 + 88));
              }
              v353 = v112;
              if ( v112 )
              {
                if ( *p_SignalState == 1 )
                {
                  if ( v112 == v111 )
                  {
                    v112 = 0LL;
                    v353 = 0LL;
                  }
                  else
                  {
                    v113 = v366 * HIDWORD(v97->Header.WaitListHead.Flink);
                    if ( v113 )
                    {
                      if ( ((v333 + 3) & (__int64)*(&v97->SListFaultAddress + 3 * v106)) != 0 )
                        ExRaiseDatatypeMisalignment();
                      if ( ((v333 + 3) & (unsigned int)v112) != 0 )
                        ExRaiseDatatypeMisalignment();
                    }
                    RtlCopyToUserFromUser(*(&v97->SListFaultAddress + 3 * v106), (void *)v112, v113);
                    _InterlockedOr(v313, 0);
                  }
                  v114 = (unsigned int *)v328 + 6 * v106;
                  v115 = RtlReadULongFromUser(v114 + 4);
                  RtlWriteULongToUser(v114 + 4, v115 | 1);
                  if ( (_DWORD)Handle )
                    RtlWriteULongToUser((_DWORD *)(v348 + 8236), p_LockNV[6 * v106 + 6]);
                  else
                    RtlWriteULong64ToUser((_QWORD *)(v348 + 88), *(_QWORD *)&p_LockNV[6 * v106 + 6]);
                  v116 = v328;
                  RtlWriteULong64ToUser((_QWORD *)&v328[v106 + 2] + v106, *((_QWORD *)v329 + 162));
                  RtlWriteULong64ToUser((_QWORD *)v116 + 3 * v106 + 3, v112);
                  v117 = RtlReadULongFromUser((unsigned int *)&v116[v106 + 1] + 2 * v106);
                  RtlWriteULongToUser((_DWORD *)v116 + 6 * v106++ + 4, v117 ^ 3);
                  v319 = v106;
                }
                else
                {
                  v118 = (unsigned int *)v328 + 6 * v106;
                  v119 = RtlReadULongFromUser(v118 + 4);
                  RtlWriteULongToUser(v118 + 4, v119 | 1);
                  v348 = 3 * (v106 + 1LL);
                  v120 = v354;
                  v121 = v354[3];
                  if ( (_DWORD)Handle )
                  {
                    v343 = (unsigned int)RtlReadULongFromUser((unsigned int *)(v112 + 4 * v121));
                    RtlWriteULongToUser((_DWORD *)(v112 + 4LL * v354[3]), p_LockNV[2 * v348]);
                  }
                  else
                  {
                    v343 = RtlReadULong64FromUser((volatile void *)(v112 + 8 * v121));
                    RtlWriteULong64ToUser((_QWORD *)(v112 + 8LL * v120[3]), *(_QWORD *)&v120[2 * v348]);
                  }
                  v122 = (char *)v328 + 24 * v106;
                  RtlWriteULong64ToUser((_QWORD *)v122 + 3, v343);
                  v123 = RtlReadULongFromUser((unsigned int *)v122 + 4);
                  RtlWriteULongToUser((_DWORD *)v122 + 4, v123 ^ 3);
                  v319 = ++v106;
                }
              }
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v329 + 177);
            }
            v107 = v329;
          }
          if ( v329 )
            ObfDereferenceObjectWithTag(v329, 0x6E457350u);
        }
        else
        {
          v28 = -1073741820;
        }
LABEL_315:
        if ( v97 != (struct _KTHREAD *)P )
        {
          v124 = v97;
LABEL_317:
          ExFreePoolWithTag(v124, 0);
        }
        return v28;
      }
      return -1073741823;
    }
    memset(v414, 0, sizeof(v414));
    v406 = 0LL;
    if ( (((_DWORD)v4 - 8) & 0xFFFFFFF7) != 0 )
      return -1073741820;
    if ( (_DWORD)v4 == 8 )
    {
      *(_QWORD *)&v406 = 0LL;
      if ( PreviousMode )
        v142 = RtlReadULong64FromUser(v5);
      else
        v142 = *(_QWORD *)v5;
      *((_QWORD *)&v406 + 1) = v142;
    }
    else
    {
      if ( PreviousMode )
        RtlCopyFromUser(&v406, v5, 0x10uLL);
      else
        RtlCopyVolatileMemory(&v406, v5, 0x10uLL);
      v142 = *((_QWORD *)&v406 + 1);
    }
    if ( DWORD1(v406) )
      return -1073741811;
    if ( (_DWORD)v406 )
      return -1073741736;
    if ( v142 != v142 << 16 >> 16 )
      return -1073741811;
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)Handle,
               512,
               (__int64)PsProcessType,
               PreviousMode,
               0x79517350u,
               &v315,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v143 = KeGetCurrentThread()->ApcState.Process;
    if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) && v315 != v143 )
    {
LABEL_133:
      v8 = -1073741727;
LABEL_136:
      ObfDereferenceObjectWithTag(v315, 0x79517350u);
      return v8;
    }
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v315 + 61) )
    {
LABEL_418:
      v8 = -1073741558;
      goto LABEL_136;
    }
    if ( !*((_QWORD *)v315 + 98) )
      goto LABEL_425;
    v144 = *((_WORD *)v315 + 886);
    if ( v144 == 332 || (v63 = v144 == 452, v145 = 0, v63) )
      v145 = 1;
    if ( v145 )
      v146 = 1;
    else
LABEL_425:
      v146 = 0;
    v147 = v143[1].ReadyTime;
    if ( v146 )
    {
      if ( v147 )
      {
        v157 = WORD2(v143[3].PerProcessorCycleTimes);
        if ( v157 == 332 || (v158 = 0, v157 == 452) )
          v158 = 1;
        if ( v158 )
        {
          KiStackAttachProcess((_KPROCESS *)v315, 0, (__int64)v414);
          if ( *((_QWORD *)&v406 + 1) < (unsigned __int64)MmGetMaximumUserAddress() )
          {
            v159 = MmValidateUserCallTarget(*((unsigned __int64 *)&v406 + 1), 1);
            v150 = v159 == 0 ? 0xC000000D : 0;
            if ( v159 )
            {
              v160 = 0LL;
              v161 = (__int64 *)*((_QWORD *)v315 + 98);
              if ( v161 )
                v160 = *v161;
              v162 = (_DWORD *)(v160 + 1176);
              if ( PreviousMode )
                RtlWriteULongToUser(v162, SDWORD2(v406));
              else
                *v162 = DWORD2(v406);
            }
          }
          else
          {
            v150 = -1073741811;
          }
          KiUnstackDetachProcess((__int64)v414, 0);
          goto LABEL_455;
        }
      }
    }
    else
    {
      if ( !v147 )
        goto LABEL_432;
      v148 = WORD2(v143[3].PerProcessorCycleTimes);
      if ( v148 != 332 && v148 != 452 )
        v11 = 0;
      if ( !v11 )
      {
LABEL_432:
        KiStackAttachProcess((_KPROCESS *)v315, 0, (__int64)v414);
        v149 = MmValidateUserCallTarget(*((unsigned __int64 *)&v406 + 1), 0);
        v150 = v149 == 0 ? 0xC000000D : 0;
        KiUnstackDetachProcess((__int64)v414, 0);
        if ( v149 )
        {
          v153 = (__int64)CurrentThread;
          PspLockProcessExclusive((__int64)v315, (__int64)CurrentThread, v151, v152);
          *((_QWORD *)v315 + 45) = *((_QWORD *)&v406 + 1);
          v154 = v315;
          v155 = (volatile signed __int32 *)((char *)v315 + 880);
          v156 = (volatile signed __int32 *)*((_QWORD *)v315 + 110);
          while ( v156 != v155 )
          {
            if ( *((_QWORD *)&v406 + 1) )
              _interlockedbittestandset(v156 - 350, 0x19u);
            else
              _interlockedbittestandreset(v156 - 350, 0x19u);
            v156 = *(volatile signed __int32 **)v156;
            v154 = v315;
            v155 = (volatile signed __int32 *)((char *)v315 + 880);
          }
          PspUnlockProcessExclusive((__int64)v154, v153);
        }
        goto LABEL_455;
      }
    }
    v150 = -1073741637;
LABEL_455:
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v315 + 61);
    v8 = v150;
    goto LABEL_136;
  }
  v163 = ProcessInformationClass - 41;
  if ( !v163 )
  {
    v393 = 0LL;
    v394 = 0LL;
    v395 = 0LL;
    if ( v7 != (HANDLE)-1LL )
      return -1073741811;
    v225 = 0LL;
    if ( (_DWORD)v4 == 40 )
    {
      if ( PreviousMode )
      {
        RtlCopyFromUser(&v393, v5, 0x28uLL);
        v225 = v5 + 2;
        v5 = &v393;
      }
      v226 = *(_DWORD *)v5;
      if ( *(_DWORD *)v5 > 0x40u || *((_DWORD *)v5 + 1) | *((_DWORD *)v5 + 2) | *((_DWORD *)v5 + 3) )
        return -1073741811;
      ++v5;
    }
    else
    {
      if ( (_DWORD)v4 != 24 )
        return -1073741820;
      v226 = 0;
      if ( PreviousMode )
      {
        *(_QWORD *)&v394 = RtlReadULong64FromUser(v5);
        *((_QWORD *)&v394 + 1) = RtlReadULong64FromUser((char *)v5 + 8);
        v225 = v5 + 1;
        v5 = &v394;
      }
    }
    if ( !*(_QWORD *)v5 )
      return -1073741811;
    v387 = *(_QWORD *)v5;
    *((_QWORD *)v5 + 2) = 0LL;
    result = MmAllocateUserStack((__int64 *)v5 + 2, *((_QWORD *)v5 + 1), &v387, v226, 0);
    v23 = result;
    if ( result < 0 )
      return result;
    if ( PreviousMode )
      RtlWriteULong64ToUser(v225, *((_QWORD *)v5 + 2));
    return v23;
  }
  v164 = v163 - 1;
  if ( !v164 )
  {
LABEL_843:
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)v7,
               512,
               (__int64)PsProcessType,
               PreviousMode,
               0x79517350u,
               &v315,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v23 = PsChargeProcessNonPagedPoolQuota((__int64)v315, 0x6028uLL);
    if ( v23 < 0 )
      goto LABEL_851;
    v222 = ExAllocatePool2(0x40uLL);
    v223 = (void *)v222;
    if ( !v222 )
    {
      v23 = -1073741801;
LABEL_850:
      PsReturnProcessNonPagedPoolQuota((ULONG_PTR)v315, 0x6028uLL);
      goto LABEL_851;
    }
    LOBYTE(PsAltSystemCallRegistrationLock.Timer.DueTime.LowPart) = 1;
    *(_DWORD *)v222 = 0;
    *(_QWORD *)(v222 + 8) = 0LL;
    KeInitializeGate(v222 + 16, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v315 + 88, (signed __int64)v223, 0LL) )
    {
      ExFreePoolWithTag(v223, 0);
      v23 = -1073741752;
      goto LABEL_850;
    }
LABEL_848:
    v23 = 0;
    goto LABEL_851;
  }
  v165 = v164 - 3;
  if ( !v165 )
  {
    v351 = 0;
    if ( v7 == (HANDLE)-1LL )
    {
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      if ( PreviousMode )
      {
        v221 = RtlReadULongFromUser((unsigned int *)v5);
        v351 = v221;
      }
      else
      {
        RtlCopyVolatileMemory(&v351, v5, 4uLL);
        v221 = v351;
      }
      if ( (v221 & 0xFFFFFFFC) == 0 )
        return PspSetProcessAffinityUpdateMode((__int64)CurrentThread, &v351);
    }
    return -1073741811;
  }
  v166 = v165 - 1;
  if ( !v166 )
  {
    v350 = 0;
    if ( (_DWORD)v4 != 4 )
      return -1073741820;
    if ( PreviousMode )
    {
      v220 = RtlReadULongFromUser((unsigned int *)v5);
      v350 = v220;
    }
    else
    {
      RtlCopyVolatileMemory(&v350, v5, 4uLL);
      v220 = v350;
    }
    if ( (v220 & 0xFFFFFFFE) == 0 )
    {
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)Handle,
                 512,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &v315,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        if ( (v350 & 1) != 0 )
          _InterlockedOr((volatile signed __int32 *)v315 + 125, 0x200000u);
        else
          _InterlockedAnd((volatile signed __int32 *)v315 + 125, 0xFFDFFFFF);
        goto LABEL_931;
      }
      return result;
    }
    return -1073741811;
  }
  v167 = v166 - 2;
  if ( v167 )
  {
    v168 = v167 - 1;
    if ( !v168 )
    {
      if ( (_DWORD)v4 != 8 )
        return -1073741820;
      if ( v7 == (HANDLE)-1LL )
      {
        v215 = PreviousMode ? (struct _LIST_ENTRY *)RtlReadULong64FromUser(v5) : *(struct _LIST_ENTRY **)v5;
        v404 = v215;
        if ( ((unsigned __int8)v215 & 3) == 1 )
        {
          KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink = v215;
          return 0;
        }
      }
      return -1073741811;
    }
    v169 = v168 - 3;
    if ( v169 )
    {
      if ( v169 != 1 )
        return -1073741821;
      v370 = 0LL;
      if ( v7 == (HANDLE)-1LL )
      {
        if ( (_DWORD)v4 == 16 )
        {
          if ( PreviousMode )
            RtlCopyFromUser(&v370, v5, 0x10uLL);
          else
            RtlCopyVolatileMemory(&v370, v5, 0x10uLL);
          if ( BYTE8(v370) )
            return RtlRemoveDynamicUserFunctionTable(v370);
          else
            return RtlInsertDynamicUserFunctionTable(v370);
        }
        return -1073741820;
      }
      return -1073741811;
    }
    v316 = 0LL;
    v317 = 0;
    if ( (_DWORD)v4 != 8 )
      return -1073741820;
    if ( PreviousMode )
      v316 = RtlReadULong64FromUser(v5);
    else
      RtlCopyVolatileMemory(&v316, v5, 8uLL);
    v172 = Handle;
    if ( Handle != (HANDLE)-1LL && (_DWORD)v316 != 2 )
      return -1073741811;
    p_Lock = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
    v315 = (PVOID)p_Lock;
    v174 = (unsigned int)v316;
    if ( (int)v316 <= 8 )
    {
      if ( (_DWORD)v316 != 8 )
      {
        if ( (_DWORD)v316 != 1 )
        {
          if ( (_DWORD)v316 != 2 )
          {
            if ( (_DWORD)v316 == 3 )
            {
              if ( (v316 & 0xFFFFFFFC00000000uLL) != 0
                || ((HIDWORD(v316) >> 1) & 1) == 0 && (v316 & 0x100000000LL) != 0
                || ((HIDWORD(v316) >> 1) & 1) != 0 && (v316 & 0x100000000LL) == 0 )
              {
                goto LABEL_589;
              }
              v176 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v315);
              if ( v176 )
              {
                v28 = !ExEnableHandleExceptions(v176, BYTE4(v316) & 1, v177, v178) ? 0xC0000022 : 0;
                ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v315 + 61);
              }
              else
              {
                v28 = -1073741558;
              }
              goto LABEL_812;
            }
            if ( (_DWORD)v316 != 4 )
            {
              if ( (_DWORD)v316 != 6 )
              {
                if ( (_DWORD)v316 == 7 && (v316 & 0x800000000LL) == 0 && (v316 & 0x1000000000LL) == 0 )
                {
                  if ( (v316 & 0xFFFFFFE000000000uLL) == 0 )
                  {
                    if ( (p_Lock[468] & 1) != 0 && (v316 & 0x400000000LL) != 0 )
                    {
                      _InterlockedOr(p_Lock + 468, 4u);
LABEL_606:
                      v28 = 0;
                      goto LABEL_812;
                    }
                    goto LABEL_596;
                  }
LABEL_589:
                  v28 = -1073741811;
                  goto LABEL_812;
                }
                goto LABEL_663;
              }
              if ( (v316 & 0xFFFFFFFE00000000uLL) != 0 )
                goto LABEL_589;
              if ( (v316 & 0x100000000LL) == 0 && (*((_DWORD *)p_Lock + 468) & 0x80u) != 0 )
                goto LABEL_596;
              v28 = 0;
              if ( (v316 & 0x100000000LL) != 0 )
                _InterlockedOr((volatile signed __int32 *)v315 + 468, 0x80u);
LABEL_812:
              if ( v317 != 1 )
                return v28;
              goto LABEL_120;
            }
            v175 = HIDWORD(v316);
            if ( (v316 & 0xFFFFFFF000000000uLL) != 0 )
              goto LABEL_589;
            if ( (v316 & 0x100000000LL) != 0 && (v316 & 0x200000000LL) != 0 )
            {
              v175 = HIDWORD(v316) & 0xFFFFFFFD;
              HIDWORD(v316) &= ~2u;
            }
            if ( (v175 & 4) != 0 && (v175 & 8) != 0 )
            {
              v175 &= ~8u;
              HIDWORD(v316) = v175;
            }
            if ( (v175 & 1) == 0 && (*((_DWORD *)v315 + 468) & 0x1000) != 0
              || ((v175 >> 2) & 1) == 0 && (*((_DWORD *)v315 + 502) & 2) != 0
              || (v175 & 2) == 0 && (v175 & 1) == 0 && (*((_DWORD *)v315 + 468) & 0x2000) != 0
              || (v175 & 8) == 0 && ((v175 >> 2) & 1) == 0 && (*((_DWORD *)v315 + 502) & 4) != 0 )
            {
              goto LABEL_596;
            }
            if ( ((v175 & 1) != 0 || (v175 & 2) != 0) && (*((_DWORD *)&CurrentThread->0 + 1) & 0x80u) != 0 )
            {
              v28 = -1073741431;
              goto LABEL_812;
            }
            v28 = 0;
            if ( (v175 & 1) != 0 )
            {
              _InterlockedOr((volatile signed __int32 *)v315 + 468, 0x3000u);
            }
            else
            {
              if ( (v175 & 2) == 0 )
                goto LABEL_523;
              _InterlockedOr((volatile signed __int32 *)v315 + 468, 0x2000u);
            }
            LOBYTE(v175) = BYTE4(v316);
LABEL_523:
            if ( (v175 & 4) != 0 )
            {
              _InterlockedOr((volatile signed __int32 *)v315 + 502, 6u);
            }
            else if ( (v175 & 8) != 0 )
            {
              _InterlockedOr((volatile signed __int32 *)v315 + 502, 4u);
            }
            goto LABEL_812;
          }
          v179 = BYTE4(v316);
          if ( (v316 & 0xFFFFFFF000000000uLL) != 0 )
            goto LABEL_589;
          if ( (v316 & 0x100000000LL) == 0 )
            goto LABEL_541;
          if ( (v316 & 0x800000000LL) != 0 )
          {
            v179 = BYTE4(v316) & 0xF7;
            HIDWORD(v316) &= ~8u;
          }
          if ( (v179 & 1) == 0 )
          {
LABEL_541:
            if ( (v179 & 2) != 0 || (v179 & 4) != 0 )
              goto LABEL_589;
          }
          if ( !PsIsSystemWideMitigationOptionSet() )
          {
            if ( v172 == (HANDLE)-1LL )
            {
              v180 = v317;
            }
            else
            {
              v28 = ObpReferenceObjectByHandleWithTag(
                      (ULONG_PTR)v172,
                      512,
                      (__int64)PsProcessType,
                      PreviousMode,
                      0x79517350u,
                      &v315,
                      0LL,
                      0LL);
              if ( v28 < 0 )
                goto LABEL_812;
              v180 = 1;
              v317 = 1;
            }
            if ( !v180 || v315 == KeGetCurrentThread()->ApcState.Process )
            {
              if ( (v316 & 0x100000000LL) == 0 && (*((_DWORD *)v315 + 468) & 0x100) != 0 )
                goto LABEL_596;
              if ( (v316 & 0x800000000LL) == 0 && (v316 & 0x100000000LL) == 0 && (*((_DWORD *)v315 + 468) & 0x800) != 0 )
                goto LABEL_596;
              if ( (v316 & 0x200000000LL) != 0 && (*((_DWORD *)v315 + 468) & 0x300) == 0x100 )
                goto LABEL_596;
              v189 = (HIDWORD(v316) >> 2) & 1;
              if ( v189 )
              {
                if ( (*((_DWORD *)v315 + 468) & 0x500) == 0x100 )
                  goto LABEL_596;
              }
              if ( (v316 & 0x100000000LL) != 0 )
              {
                v190 = 2304;
              }
              else
              {
                v190 = 0;
                if ( (v316 & 0x800000000LL) != 0 )
                  v190 = 2048;
              }
              v183 = ((v316 & 0x200000000LL) == 0) << 9;
              v186 = v190 | 0x200;
              if ( ((HIDWORD(v316) >> 1) & 1) == 0 )
                v186 = v190;
              if ( v189 )
                v186 |= 0x400u;
              v185 = (volatile signed __int32 *)((char *)v315 + 1872);
              v187 = v183 | 0x400;
              v188 = v189 == 0;
            }
            else
            {
              v181 = 0;
              if ( _bittest((const signed __int32 *)v315 + 468, 8u) )
              {
                memset(&SubjectContext, 0, sizeof(SubjectContext));
                SeCaptureSubjectContextEx(0LL, (PEPROCESS)v315, &SubjectContext);
                IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, 1);
                SeReleaseSubjectContext(&SubjectContext);
                if ( (RtlIsSandboxedToken(0LL, PreviousMode)
                   || !IsSandboxedToken
                   || (*((_DWORD *)v315 + 468) & 0x400) == 0)
                  && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
                {
                  goto LABEL_596;
                }
                v181 = 1;
              }
              if ( !v181
                && (v316 & 0x800000000LL) == 0
                && (v316 & 0x100000000LL) == 0
                && (*((_DWORD *)v315 + 468) & 0x800) != 0 )
              {
LABEL_596:
                v28 = -1073741790;
                goto LABEL_812;
              }
              v183 = (v316 & 0x100000000LL) == 0 ? 0x900 : 0;
              v184 = ((v316 & 0x100000000LL) != 0 ? 0x100 : 0) | 0x800;
              if ( (v316 & 0x800000000LL) == 0 )
                v184 = (v316 & 0x100000000LL) != 0 ? 0x900 : 0;
              if ( (v316 & 0x200000000LL) != 0 )
                v184 |= 0x200u;
              else
                v183 |= 0x200u;
              v185 = (volatile signed __int32 *)((char *)v315 + 1872);
              v186 = v184 | 0x400;
              if ( ((HIDWORD(v316) >> 2) & 1) == 0 )
                v186 = v184;
              v187 = v183 | 0x400;
              v188 = ((HIDWORD(v316) >> 2) & 1) == 0;
            }
            if ( v188 )
              v183 = v187;
            goto LABEL_587;
          }
LABEL_663:
          v28 = -1073741637;
          goto LABEL_812;
        }
        v191 = BYTE4(v316);
        if ( (v316 & 0xFFFFFFF000000000uLL) != 0 )
          goto LABEL_589;
        if ( (v316 & 0x200000000LL) == 0 && (p_Lock[468] & 0x10) != 0
          || (v316 & 0x100000000LL) == 0 && (*((_DWORD *)v315 + 468) & 0x40) == 0
          || ((HIDWORD(v316) >> 3) & 1) == 0 && (*((_DWORD *)v315 + 468) & 8) != 0 )
        {
          goto LABEL_596;
        }
        if ( ((HIDWORD(v316) >> 3) & 1) != 0 )
        {
          if ( (v316 & 0x200000000LL) == 0 )
          {
            v28 = -1073741776;
            goto LABEL_812;
          }
        }
        else if ( (v316 & 0x200000000LL) == 0 )
        {
LABEL_602:
          if ( (v191 & 1) != 0 )
          {
            _InterlockedAnd((volatile signed __int32 *)v315 + 468, 0xFFFFFFBF);
            v191 = BYTE4(v316);
          }
          if ( (v191 & 8) != 0 )
            _InterlockedOr((volatile signed __int32 *)v315 + 468, 8u);
          goto LABEL_606;
        }
        _InterlockedOr((volatile signed __int32 *)v315 + 468, 0x10u);
        v191 = BYTE4(v316);
        goto LABEL_602;
      }
      if ( (v316 & 0xFFFFFFE000000000uLL) != 0 )
        goto LABEL_589;
      if ( (v316 & 0x100000000LL) != 0 && ((v316 & 0x800000000LL) != 0 || (v316 & 0x1000000000LL) != 0) )
        HIDWORD(v316) &= 0xFFFFFFE7;
      if ( (v316 & 0x200000000LL) != 0 && (v316 & 0x1000000000LL) != 0 )
        HIDWORD(v316) &= ~0x10u;
      if ( (v316 & 0x800000000LL) != 0 && (v316 & 0x1000000000LL) != 0 )
        goto LABEL_589;
      v192 = (BYTE4(v316) & 1) + ((HIDWORD(v316) >> 1) & 1);
      if ( (unsigned int)v192 > 1 )
        goto LABEL_589;
      if ( (v316 & 0x100000000LL) == 0 )
      {
        LOBYTE(v192) = *((_BYTE *)v315 + 1528);
        if ( (_BYTE)v192 == 8
          || !*(_QWORD *)&SepRmCapTableLock.ThreadTimerDelay
          || (LOBYTE(v174) = 8, !(unsigned int)guard_dispatch_icall_no_overrides(v174, v192)) )
        {
          LOBYTE(v192) = *((_BYTE *)v315 + 1529);
          if ( (_BYTE)v192 == 8 )
            goto LABEL_596;
          if ( !*(_QWORD *)&SepRmCapTableLock.ThreadTimerDelay )
            goto LABEL_596;
          LOBYTE(v174) = 8;
          if ( !(unsigned int)guard_dispatch_icall_no_overrides(v174, v192) )
            goto LABEL_596;
        }
      }
      v193 = HIDWORD(v316);
      if ( (v316 & 0x100000000LL) == 0 && (v316 & 0x200000000LL) == 0 )
      {
        if ( *(_QWORD *)&SepRmCapTableLock.ThreadTimerDelay )
        {
          LOBYTE(v193) = 6;
          LOBYTE(v174) = *((_BYTE *)v315 + 1528);
          if ( (unsigned int)guard_dispatch_icall_no_overrides(v174, v193) )
          {
            if ( *(_QWORD *)&SepRmCapTableLock.ThreadTimerDelay )
            {
              LOBYTE(v193) = 6;
              LOBYTE(v174) = *((_BYTE *)v315 + 1529);
              if ( (unsigned int)guard_dispatch_icall_no_overrides(v174, v193) )
                goto LABEL_596;
            }
          }
        }
      }
      if ( (*((_DWORD *)v315 + 468) & 0x3000000) != 0 )
      {
        v193 = HIDWORD(v316);
        if ( (v316 & 0x1000000000LL) == 0
          && (v316 & 0x200000000LL) == 0
          && (v316 & 0x800000000LL) == 0
          && (v316 & 0x100000000LL) == 0 )
        {
          goto LABEL_596;
        }
      }
      v28 = 0;
      if ( (v316 & 0x100000000LL) != 0 )
      {
        if ( *(_QWORD *)&SepRmCapTableLock.ThreadTimerDelay )
        {
          LOBYTE(v174) = 8;
          LOBYTE(v193) = *((_BYTE *)v315 + 1528);
          if ( (unsigned int)guard_dispatch_icall_no_overrides(v174, v193) )
            *((_BYTE *)v315 + 1528) = 8;
        }
        if ( *(_QWORD *)&SepRmCapTableLock.ThreadTimerDelay )
        {
          LOBYTE(v174) = 8;
          LOBYTE(v193) = *((_BYTE *)v315 + 1529);
          if ( (unsigned int)guard_dispatch_icall_no_overrides(v174, v193) )
            *((_BYTE *)v315 + 1529) = 8;
        }
      }
      else if ( (v316 & 0x200000000LL) != 0 )
      {
        if ( !*(_QWORD *)&SepRmCapTableLock.ThreadTimerDelay )
          goto LABEL_596;
        LOBYTE(v193) = 6;
        LOBYTE(v174) = *((_BYTE *)v315 + 1528);
        if ( !(unsigned int)guard_dispatch_icall_no_overrides(v174, v193) )
          goto LABEL_596;
        if ( *(_QWORD *)&SepRmCapTableLock.ThreadTimerDelay )
        {
          LOBYTE(v195) = 6;
          LOBYTE(v194) = *((_BYTE *)v315 + 1529);
          if ( (unsigned int)guard_dispatch_icall_no_overrides(v195, v194) )
            *((_BYTE *)v315 + 1529) = 6;
        }
      }
      v196 = 0;
      if ( HIDWORD(v316) )
        v196 = 0x800000;
      v197 = ((v316 & 0x800000000LL) == 0) << 24;
      v198 = v196 | 0x1000000;
      if ( ((HIDWORD(v316) >> 3) & 1) == 0 )
        v198 = v196;
      if ( ((HIDWORD(v316) >> 4) & 1) != 0 )
        v198 |= 0x2000000u;
      else
        v197 |= 0x2000000u;
      v199 = v198;
LABEL_811:
      RtlInterlockedSetClearBits((volatile signed __int32 *)v315 + 468, v199, v197);
      goto LABEL_812;
    }
    switch ( (_DWORD)v316 )
    {
      case 9:
        if ( (v316 & 0xFFFFFFFC00000000uLL) != 0 )
          goto LABEL_589;
        if ( (v316 & 0x100000000LL) == 0 && (p_Lock[468] & 0x10000) != 0
          || (v316 & 0x100000000LL) == 0 && (v316 & 0x200000000LL) == 0 && (*((_DWORD *)v315 + 468) & 0x20000) != 0 )
        {
          goto LABEL_596;
        }
        v28 = 0;
        if ( (v316 & 0x100000000LL) != 0 )
        {
          v199 = 0x10000;
          v197 = 0x20000;
        }
        else
        {
          if ( (v316 & 0x200000000LL) == 0 )
            goto LABEL_812;
          v199 = 0x20000;
          v197 = 0x10000;
        }
        goto LABEL_811;
      case 0xA:
        v212 = HIDWORD(v316);
        if ( (v316 & 0xFFFFFFE000000000uLL) != 0 )
          goto LABEL_589;
        if ( (v316 & 0x100000000LL) != 0 && (v316 & 0x800000000LL) != 0 )
        {
          v212 = HIDWORD(v316) & 0xFFFFFFF7;
          HIDWORD(v316) &= ~8u;
        }
        if ( (v212 & 2) != 0 && (v212 & 0x10) != 0 )
        {
          v212 &= ~0x10u;
          HIDWORD(v316) = v212;
        }
        v213 = 0x80000;
        if ( (v212 & 1) == 0 && (*((_DWORD *)v315 + 468) & 0x80000) != 0
          || (v212 & 2) == 0 && (*((_DWORD *)v315 + 468) & 0x200000) != 0
          || (v212 & 4) == 0 && (*((_DWORD *)v315 + 468) & 0x40000) != 0
          || (v212 & 8) == 0 && (v212 & 1) == 0 && (*((_DWORD *)v315 + 468) & 0x100000) != 0
          || (v212 & 0x10) == 0 && (v212 & 2) == 0 && (*((_DWORD *)v315 + 468) & 0x400000) != 0 )
        {
          goto LABEL_596;
        }
        v214 = 0;
        if ( (v212 & 1) != 0 )
        {
          v214 = 0x100000;
        }
        else
        {
          v213 = 0;
          if ( (v212 & 8) != 0 )
            v213 = 0x100000;
        }
        if ( (v212 & 2) != 0 )
        {
          v213 |= 0x200000u;
          v214 |= 0x400000u;
        }
        else if ( (v212 & 0x10) != 0 )
        {
          v213 |= 0x400000u;
        }
        v186 = v213 | 0x40000;
        if ( (v212 & 4) == 0 )
          v186 = v213;
        v185 = (volatile signed __int32 *)((char *)v315 + 1872);
        v183 = v214;
LABEL_587:
        RtlInterlockedSetClearBits(v185, v186, v183);
        goto LABEL_606;
      case 0xD:
        if ( (v316 & 0xFFFFFFF800000000uLL) == 0 && ((v316 & 0x100000000LL) != 0 || (v316 & 0x400000000LL) == 0) )
        {
          if ( (v316 & 0x100000000LL) != 0 && (v316 & 0x200000000LL) != 0 )
            HIDWORD(v316) &= ~2u;
          NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(
                                             (__int64)v315,
                                             v170,
                                             (__int64)p_Lock,
                                             v171);
          if ( ((v316 & 0x100000000LL) != 0 || NoChildProcessRestrictedPolicy - 1 > 1)
            && (((HIDWORD(v316) >> 2) & 1) == 0 || NoChildProcessRestrictedPolicy != 1)
            && (((HIDWORD(v316) >> 1) & 1) != 0 || (v316 & 0x100000000LL) != 0 || NoChildProcessRestrictedPolicy != 3) )
          {
            if ( (v316 & 0x100000000LL) != 0 )
            {
              v210 = v315;
              if ( ((HIDWORD(v316) >> 2) & 1) != 0 )
                v211 = 2;
              else
                v211 = 1;
            }
            else
            {
              if ( ((HIDWORD(v316) >> 1) & 1) == 0 )
                goto LABEL_606;
              v211 = 3;
              v210 = v315;
            }
            PspSetNoChildProcessRestrictedPolicy(
              (__int64)v210,
              v211,
              NoChildProcessRestrictedPolicy,
              (struct _KLOCK_ENTRIES *)(BYTE4(v316) & 1));
            goto LABEL_606;
          }
          goto LABEL_596;
        }
        goto LABEL_589;
      case 0xE:
        v206 = BYTE4(v316);
        if ( (v316 & 0xFFFFFFE000000000uLL) != 0 )
          goto LABEL_589;
        if ( (v316 & 0x100000000LL) == 0 && (p_Lock[468] & 0x40000000) != 0
          || (v316 & 0x200000000LL) == 0 && *((int *)v315 + 468) < 0
          || (v316 & 0x800000000LL) == 0 && (*((_DWORD *)v315 + 469) & 0x2000) != 0
          || (v316 & 0x400000000LL) == 0 && (*((_DWORD *)v315 + 469) & 0x1000) != 0
          || ((HIDWORD(v316) >> 4) & 1) == 0 && (*((_DWORD *)v315 + 502) & 1) != 0 )
        {
          goto LABEL_596;
        }
        if ( ((HIDWORD(v316) >> 4) & 1) != 0 )
        {
          if ( !KeIsCoreIsolationMitigationPolicyEnforceable() )
            goto LABEL_663;
          v206 = BYTE4(v316);
        }
        if ( (v206 & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v315 + 468, 0x40000000u);
          v206 = BYTE4(v316);
        }
        if ( (v206 & 2) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v315 + 468, 0x80000000);
          _InterlockedOr((volatile signed __int32 *)v315 + 383, 0x200000u);
          v207 = _InterlockedIncrement64(&PsNextSecurityDomain);
          v208 = v315;
          *((_QWORD *)v315 + 236) = v207;
          v208[237] = v207;
          KeSynchronizeSecurityDomain((_KPROCESS *)v315);
          PspSynchronizeThreadIsolationDomains((__int64)v315);
          v206 = BYTE4(v316);
        }
        if ( (v206 & 4) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v315 + 469, 0x1000u);
          v206 = BYTE4(v316);
        }
        if ( (v206 & 8) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v315 + 469, 0x2000u);
          v206 = BYTE4(v316);
        }
        if ( (v206 & 0x10) != 0 )
          PspApplyCoreIsolationPolicy((__int64)v315);
        goto LABEL_606;
    }
    if ( (_DWORD)v316 != 15 )
    {
      if ( (_DWORD)v316 != 16 )
        goto LABEL_663;
      if ( (v316 & 0xFFFFFFFC00000000uLL) != 0 )
        goto LABEL_589;
      if ( (v316 & 0x100000000LL) != 0 && (v316 & 0x200000000LL) != 0 )
        HIDWORD(v316) &= ~2u;
      RedirectionTrustPolicy = PspGetRedirectionTrustPolicy((__int64)v315, v170, (__int64)p_Lock, v171);
      if ( (v316 & 0x100000000LL) == 0 && RedirectionTrustPolicy == 1 )
        goto LABEL_596;
      v203 = (HIDWORD(v316) >> 1) & 1;
      if ( !v203 )
      {
        if ( (v316 & 0x100000000LL) != 0 )
          goto LABEL_674;
        if ( RedirectionTrustPolicy == 2 )
          goto LABEL_596;
      }
      if ( (v316 & 0x100000000LL) == 0 )
      {
        if ( !v203 )
          goto LABEL_606;
        v204 = 2;
LABEL_677:
        PspSetRedirectionTrustPolicy((__int64)v315, v204, v201, v202);
        goto LABEL_606;
      }
LABEL_674:
      v204 = 1;
      goto LABEL_677;
    }
    v205 = HIDWORD(v316);
    if ( (v316 & 0xFFFFFC0000000000uLL) != 0 )
      goto LABEL_589;
    if ( (v316 & 0x1000000000LL) != 0 )
    {
      v205 = HIDWORD(v316) | 1;
      HIDWORD(v316) |= 1u;
    }
    if ( (v205 & 0x200) != 0 )
    {
      v205 |= 4u;
      HIDWORD(v316) = v205;
    }
    if ( (v205 & 0x40) != 0 )
    {
      v205 |= 0x20u;
      HIDWORD(v316) = v205;
    }
    if ( (v205 & 0x10) == 0 && (*((_DWORD *)v315 + 469) & 0x100000) != 0
      || (v205 & 1) == 0 && (*((_DWORD *)v315 + 469) & 0x4000) != 0
      || (v205 & 1) != 0 && (*((_DWORD *)v315 + 469) & 0x4000) == 0
      || (v205 & 0x200) != 0 && *((int *)v315 + 469) >= 0
      || ((v205 >> 2) & 1) == 0 && (*((_DWORD *)v315 + 469) & 0x20000) != 0
      || ((v205 >> 2) & 1) != 0 && (*((_DWORD *)v315 + 469) & 0x20000) == 0
      || (v205 & 0x40) == 0 && (*((_DWORD *)v315 + 469) & 0x400000) != 0
      || (v205 & 0x20) == 0 && (*((_DWORD *)v315 + 469) & 0x200000) != 0
      || (v205 & 0x100) == 0 && (*((_DWORD *)v315 + 469) & 0x40000000) != 0
      || (v205 & 2) != 0 && (*((_DWORD *)v315 + 469) & 0x8000) == 0
      || ((v205 >> 3) & 1) == 0 && (*((_DWORD *)v315 + 469) & 0x40000) != 0
      || ((v205 >> 3) & 1) != 0 && (*((_DWORD *)v315 + 469) & 0x40000) == 0
      || ((v205 >> 7) & 1) == 0 && (*((_DWORD *)v315 + 469) & 0x800000) != 0
      || ((v205 >> 7) & 1) != 0 && (*((_DWORD *)v315 + 469) & 0x800000) == 0 )
    {
      goto LABEL_596;
    }
    if ( (v205 & 0x10) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)v315 + 469, 0x100000u);
      LOWORD(v205) = WORD2(v316);
    }
    if ( (v205 & 0x200) == 0 && (v205 & 4) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)v315 + 469, 0x7FFFFFFFu);
      LOWORD(v205) = WORD2(v316);
    }
    if ( (v205 & 0x40) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)v315 + 469, 0x200000u);
      _InterlockedOr((volatile signed __int32 *)v315 + 469, 0x400000u);
    }
    else
    {
      if ( (v205 & 0x20) == 0 )
      {
LABEL_723:
        if ( (v205 & 0x100) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v315 + 469, 0x40000000u);
          LOBYTE(v205) = BYTE4(v316);
        }
        if ( (v205 & 2) == 0 )
          _InterlockedAnd((volatile signed __int32 *)v315 + 469, 0xFFFF7FFF);
        goto LABEL_606;
      }
      _InterlockedOr((volatile signed __int32 *)v315 + 469, 0x200000u);
    }
    LOWORD(v205) = WORD2(v316);
    goto LABEL_723;
  }
  if ( (_DWORD)v4 != 4 )
    return -1073741820;
  if ( PreviousMode )
    v216 = RtlReadULongFromUser((unsigned int *)v5);
  else
    v216 = *(_DWORD *)v5;
  v373 = v216;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)Handle,
             512,
             (__int64)PsProcessType,
             PreviousMode,
             0x79517350u,
             &v315,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v219 = (void *)PsReferencePrimaryTokenWithTag((__int64)v315, 0x746C6644u, v217, v218);
    SeSetVirtualizationToken((__int64)v219, v216);
    ObfDereferenceObject(v219);
    goto LABEL_931;
  }
  return result;
}
