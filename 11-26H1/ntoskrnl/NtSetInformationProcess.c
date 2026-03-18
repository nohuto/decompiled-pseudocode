/*
 * XREFs of NtSetInformationProcess @ 0x140B72B10
 * Callers:
 *     DifNtSetInformationProcessWrapper @ 0x14068C2B0 (DifNtSetInformationProcessWrapper.c)
 * Callees:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetExecuteOptions @ 0x140202B0C (KeSetExecuteOptions.c)
 *     IoBoostThreadIoPriority @ 0x140205ACC (IoBoostThreadIoPriority.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     PsSetIoPriorityThread @ 0x140238294 (PsSetIoPriorityThread.c)
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     PsSetPagePriorityThread @ 0x140383060 (PsSetPagePriorityThread.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403BCE40 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403BD130 (PsReturnProcessNonPagedPoolQuota.c)
 *     KeChangeMemoryAttributes @ 0x1403EF1E8 (KeChangeMemoryAttributes.c)
 *     PsGetSessionId @ 0x140447280 (PsGetSessionId.c)
 *     PspLockUnlockProcessExclusive @ 0x140449A80 (PspLockUnlockProcessExclusive.c)
 *     KeQueryPrimaryGroupProcess @ 0x140462F48 (KeQueryPrimaryGroupProcess.c)
 *     PsIsSystemProcess @ 0x14046F160 (PsIsSystemProcess.c)
 *     MmGetMaximumUserAddress @ 0x140472910 (MmGetMaximumUserAddress.c)
 *     PsGetProcessServerSilo @ 0x140476BF0 (PsGetProcessServerSilo.c)
 *     KeVerifyGroupAffinity @ 0x140483914 (KeVerifyGroupAffinity.c)
 *     PspLockProcessExclusive @ 0x140487FB8 (PspLockProcessExclusive.c)
 *     RtlInsertDynamicUserFunctionTable @ 0x140489604 (RtlInsertDynamicUserFunctionTable.c)
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     PspUnlockProcessExclusive @ 0x14048FE44 (PspUnlockProcessExclusive.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     RtlRemoveDynamicUserFunctionTable @ 0x1404A0730 (RtlRemoveDynamicUserFunctionTable.c)
 *     KeSetDisableBoostProcess @ 0x1404A3C18 (KeSetDisableBoostProcess.c)
 *     MmGetMinWsPagePriority @ 0x1404B1660 (MmGetMinWsPagePriority.c)
 *     MmGetDefaultPagePriority @ 0x1404B6960 (MmGetDefaultPagePriority.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x1404C6128 (PspSynchronizeThreadIsolationDomains.c)
 *     PspEnqueueProcessQosChangeNotification @ 0x1404C6FF8 (PspEnqueueProcessQosChangeNotification.c)
 *     RtlInterlockedSetClearBits @ 0x1404CB7BC (RtlInterlockedSetClearBits.c)
 *     PspLockProcessSharedUnsafe @ 0x1404D6B10 (PspLockProcessSharedUnsafe.c)
 *     KeIsUserCetAllowed @ 0x1404D6B7C (KeIsUserCetAllowed.c)
 *     KeInitializeGate @ 0x1404D6C58 (KeInitializeGate.c)
 *     MmSetMemoryPriorityProcess @ 0x1404D726C (MmSetMemoryPriorityProcess.c)
 *     KeIsCoreIsolationMitigationPolicyEnforceable @ 0x1404DA3F8 (KeIsCoreIsolationMitigationPolicyEnforceable.c)
 *     MmRemoveExecuteGrants @ 0x1404DBD5C (MmRemoveExecuteGrants.c)
 *     KeSynchronizeSecurityDomain @ 0x1404DD448 (KeSynchronizeSecurityDomain.c)
 *     PspUnlockProcessSharedUnsafe @ 0x1404DD69C (PspUnlockProcessSharedUnsafe.c)
 *     Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline @ 0x1404E5110 (Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404E7FA4 (ExCpuSetResourceManagerAccessCheck.c)
 *     EtwTraceProcessSetInPrivateMode @ 0x140524DF0 (EtwTraceProcessSetInPrivateMode.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140525C20 (KeRecomputeCpuSetAffinityProcess.c)
 *     IoRevokeHandlesForProcess @ 0x14052B668 (IoRevokeHandlesForProcess.c)
 *     KeBoostPriorityThread @ 0x14052C560 (KeBoostPriorityThread.c)
 *     KeSetCpuSetsProcess @ 0x14052D934 (KeSetCpuSetsProcess.c)
 *     xKdEnumerateDebuggingDevices @ 0x1405306C0 (xKdEnumerateDebuggingDevices.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline @ 0x1405F9394 (Feature_ProcessDefaultQosDynamic__private_IsEnabledDeviceUsageNoInline.c)
 *     PsSetProcessPowerThrottlingState @ 0x14061502C (PsSetProcessPowerThrottlingState.c)
 *     MmReleaseCommitForMemResetPages @ 0x1406E54FC (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x1406E56EC (MmSetCommitReleaseEligibility.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PspAssignPrimaryToken @ 0x140773B18 (PspAssignPrimaryToken.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x140776964 (PsIumEnableOnDemandDebugWithResponse.c)
 *     PspApplyCoreIsolationPolicy @ 0x140776AFC (PspApplyCoreIsolationPolicy.c)
 *     SeCodeIntegritySetInformationProcess @ 0x140777F78 (SeCodeIntegritySetInformationProcess.c)
 *     PsSetProcessHandleTracingInformation @ 0x14077B370 (PsSetProcessHandleTracingInformation.c)
 *     RtlCopyToUserFromUser @ 0x14077F2E8 (RtlCopyToUserFromUser.c)
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x14077F5CC (RtlReadUShortFromUser.c)
 *     RtlStringLengthFromUser @ 0x14077F668 (RtlStringLengthFromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     PspSyscallProviderOptIn @ 0x1407EDA50 (PspSyscallProviderOptIn.c)
 *     PspSetQuotaLimits @ 0x1407F0F9C (PspSetQuotaLimits.c)
 *     ExSystemExceptionFilter @ 0x140836A60 (ExSystemExceptionFilter.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     RtlIsSandboxedToken @ 0x1408F4B90 (RtlIsSandboxedToken.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     SeCaptureSubjectContextEx @ 0x140920670 (SeCaptureSubjectContextEx.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     PsGetNextProcessThread @ 0x1409573A0 (PsGetNextProcessThread.c)
 *     PspFreeUserFiberShadowStack @ 0x14095ED2C (PspFreeUserFiberShadowStack.c)
 *     ObReferenceProcessHandleTable @ 0x1409717D0 (ObReferenceProcessHandleTable.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x1409B7374 (PspSchedulerSharedDataRegionCreate.c)
 *     LpcRequestPort @ 0x1409BCEB0 (LpcRequestPort.c)
 *     MmAllocateUserStack @ 0x1409F2008 (MmAllocateUserStack.c)
 *     PspCombineSecurityDomains @ 0x140A0021C (PspCombineSecurityDomains.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     ObpSetDeviceMap @ 0x140A18D3C (ObpSetDeviceMap.c)
 *     SeCheckPrivilegedObject @ 0x140A7A93C (SeCheckPrivilegedObject.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x140A7E80C (PspSetProcessDefaultHardErrorMode.c)
 *     EtwCheckSecurityLoggerAccess @ 0x140A7FB2C (EtwCheckSecurityLoggerAccess.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140A8F474 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspUpdatePebForAffinityChange @ 0x140A9AA04 (PspUpdatePebForAffinityChange.c)
 *     KeSetAutoAlignmentProcess @ 0x140AB0CB0 (KeSetAutoAlignmentProcess.c)
 *     PsSetProcessPriorityByClass @ 0x140ABAD60 (PsSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140ABAD8C (PspSetProcessForegroundBackgroundRequest.c)
 *     PsSetProcessFaultInformation @ 0x140ABDE90 (PsSetProcessFaultInformation.c)
 *     MmProcessWorkingSetControl @ 0x140AE9A8C (MmProcessWorkingSetControl.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x140AEA4E8 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     ExEnableHandleExceptions @ 0x140AFA4A8 (ExEnableHandleExceptions.c)
 *     PoSetProcessEnergyTrackingState @ 0x140AFC0C0 (PoSetProcessEnergyTrackingState.c)
 *     PspSetProcessAffinitySafe @ 0x140AFC7BC (PspSetProcessAffinitySafe.c)
 *     PspGetRedirectionTrustPolicy @ 0x140AFE274 (PspGetRedirectionTrustPolicy.c)
 *     KeSetCheckStackExtentsProcess @ 0x140B0121C (KeSetCheckStackExtentsProcess.c)
 *     PspSetRedirectionTrustPolicy @ 0x140B023AC (PspSetRedirectionTrustPolicy.c)
 *     EtwSetProcessTelemetryCoverage @ 0x140B0E008 (EtwSetProcessTelemetryCoverage.c)
 *     PspSetProcessPriorityClass @ 0x140B10240 (PspSetProcessPriorityClass.c)
 *     PspSetupUserFiberShadowStack @ 0x140B31688 (PspSetupUserFiberShadowStack.c)
 *     SeSetVirtualizationToken @ 0x140B31C8C (SeSetVirtualizationToken.c)
 *     PsIsSystemWideMitigationOptionSet @ 0x140B3DCE4 (PsIsSystemWideMitigationOptionSet.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x140B3EDE8 (PspSetNoChildProcessRestrictedPolicy.c)
 *     MmValidateUserCallTarget @ 0x140B46C78 (MmValidateUserCallTarget.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140B6131C (PspEnableProcessOptionalXStateFeatures.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x140B65804 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140B66514 (PspProcessDynamicEHContinuationTargets.c)
 *     PfSnSetAltPrefetchParam @ 0x140B6B900 (PfSnSetAltPrefetchParam.c)
 *     PspAssignCpuPartitionsToProcessByHandle @ 0x140B6E144 (PspAssignCpuPartitionsToProcessByHandle.c)
 *     PspSetProcessAffinityUpdateMode @ 0x140B6E5E8 (PspSetProcessAffinityUpdateMode.c)
 *     PspSetProcessPriorityByClassIgnoreForegroundBoost @ 0x140B77F8C (PspSetProcessPriorityByClassIgnoreForegroundBoost.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall NtSetInformationProcess(void *a1, __int64 a2, void **a3, unsigned int a4)
{
  size_t v4; // r13
  void **v5; // r15
  int v6; // ebx
  HANDLE v7; // r10
  unsigned int v8; // edi
  char PreviousMode; // r12
  ULONG v10; // r8d
  char v11; // r14
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  NTSTATUS result; // eax
  struct _KLOCK_ENTRIES *v21; // r9
  signed int v22; // eax
  signed int v23; // ebx
  void *v24; // rax
  unsigned int v25; // r14d
  void *v26; // rbx
  unsigned __int64 v27; // rbx
  signed int v28; // esi
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
  __int64 v50; // rdx
  __int64 v51; // r8
  struct _KLOCK_ENTRIES *v52; // r9
  int v53; // ebx
  int v54; // ebx
  int v55; // ebx
  int v56; // ebx
  int v57; // ebx
  int v58; // ebx
  int v59; // ebx
  void *v60; // rsi
  PVOID v61; // rbx
  void *ProcessServerSilo; // rax
  int v63; // eax
  BOOL v64; // ebx
  __int64 v65; // rax
  bool v66; // zf
  __int64 v67; // rcx
  __int64 v68; // r13
  __int64 v69; // rdx
  __int64 v70; // r8
  struct _KLOCK_ENTRIES *v71; // r9
  int v72; // ebx
  HANDLE v73; // rbx
  char v74; // al
  unsigned __int8 v75; // bl
  __int64 v76; // r8
  struct _KLOCK_ENTRIES *v77; // r9
  __int64 v78; // r13
  __int16 v79; // dx
  char v80; // al
  int SessionId; // eax
  int v82; // ebx
  int v83; // ebx
  int v84; // ebx
  int v85; // ebx
  int v86; // ebx
  int v87; // ebx
  int v88; // ebx
  __int64 v89; // r8
  struct _KLOCK_ENTRIES *v90; // r9
  __int64 v91; // r13
  int v92; // r8d
  volatile signed __int32 *v93; // r9
  signed __int32 v94; // eax
  signed __int32 v95; // edx
  PVOID v96; // rcx
  char *v97; // rax
  char *v98; // rbx
  unsigned __int64 v99; // rbx
  struct _KTHREAD *v100; // r12
  struct _KLOCK_ENTRIES *v101; // r9
  __int64 Flink_low; // rdx
  unsigned int v103; // ecx
  struct _LIST_ENTRY **p_Blink; // r8
  _KPROCESS *v105; // r8
  __int16 v106; // dx
  char v107; // al
  __int64 v108; // rdx
  unsigned int v109; // r15d
  _QWORD *v110; // rdx
  PVOID j; // rcx
  _QWORD *v112; // rbx
  __int64 v113; // rax
  __int64 v114; // rbx
  __int64 v115; // r13
  size_t v116; // r8
  signed __int64 v117; // rbx
  int v118; // eax
  signed __int64 v119; // rbx
  int v120; // eax
  signed __int64 v121; // rbx
  int v122; // eax
  struct _KTHREAD *v123; // rbx
  __int64 Flink_high; // rax
  signed __int64 v125; // rbx
  int v126; // eax
  struct _KTHREAD *v127; // rcx
  int v128; // ebx
  unsigned int v129; // ebx
  __int64 v130; // rax
  __int64 v131; // r8
  struct _KLOCK_ENTRIES *v132; // r9
  volatile signed __int32 *v133; // r9
  signed __int32 v134; // eax
  __int64 v135; // r8
  signed __int32 v136; // edx
  _QWORD *v137; // rdi
  char v138; // r12
  int v139; // eax
  int v140; // eax
  __int64 *v141; // rdx
  int v142; // eax
  int v143; // ebx
  char v144; // al
  __int64 v145; // rcx
  _KPROCESS *v146; // rbx
  __int16 v147; // dx
  char v148; // dl
  char v149; // r8
  unsigned __int64 v150; // rdx
  __int16 v151; // dx
  int v152; // ebx
  unsigned int v153; // r15d
  __int64 v154; // r8
  struct _KLOCK_ENTRIES *v155; // r9
  __int64 v156; // r13
  PVOID v157; // r8
  volatile signed __int32 *v158; // rax
  volatile signed __int32 *v159; // rcx
  __int16 v160; // dx
  char v161; // al
  int v162; // eax
  __int64 v163; // rcx
  __int64 *v164; // rdx
  _DWORD *v165; // rcx
  int v166; // ebx
  int v167; // ebx
  int v168; // ebx
  int v169; // ebx
  int v170; // ebx
  int v171; // ebx
  int v172; // ebx
  __int64 v173; // rdx
  struct _KLOCK_ENTRIES *v174; // r9
  HANDLE v175; // rbx
  volatile signed __int32 *p_Lock; // r8
  __int64 v177; // rcx
  unsigned int v178; // edx
  unsigned __int64 v179; // rax
  __int64 v180; // r8
  struct _KLOCK_ENTRIES *v181; // r9
  char v182; // al
  char v183; // al
  char v184; // cl
  bool IsSandboxedToken; // bl
  int v186; // r8d
  int v187; // r10d
  volatile signed __int32 *v188; // rcx
  int v189; // edx
  int v190; // eax
  bool v191; // zf
  int v192; // r10d
  int v193; // eax
  char v194; // dl
  __int64 v195; // rdx
  __int64 v196; // rdx
  __int64 v197; // rdx
  __int64 v198; // rcx
  int v199; // ecx
  int v200; // r8d
  int v201; // r9d
  int v202; // edx
  int RedirectionTrustPolicy; // eax
  __int64 v204; // r8
  struct _KLOCK_ENTRIES *v205; // r9
  int v206; // ecx
  int v207; // edx
  unsigned int v208; // edx
  char v209; // dl
  signed __int64 v210; // rcx
  _QWORD *v211; // rax
  unsigned int NoChildProcessRestrictedPolicy; // eax
  PVOID v213; // rcx
  int v214; // edx
  unsigned int v215; // r8d
  int v216; // r9d
  int v217; // eax
  struct _LIST_ENTRY *v218; // rdx
  int v219; // esi
  __int64 v220; // r8
  struct _KLOCK_ENTRIES *v221; // r9
  void *v222; // rbx
  int v223; // eax
  int v224; // eax
  __int64 v225; // rax
  void *v226; // rbx
  PVOID v227; // rcx
  _QWORD *v228; // rsi
  int v229; // ebx
  int v230; // ebx
  unsigned __int64 v231; // rax
  __int64 v232; // r8
  struct _KLOCK_ENTRIES *v233; // r9
  unsigned int v234; // r13d
  __int64 v235; // r8
  signed int v236; // eax
  __int64 v237; // r8
  struct _KLOCK_ENTRIES *v238; // r9
  int ULongFromUser; // eax
  BOOL v240; // ebx
  struct _KTHREAD *v241; // rbx
  int v242; // eax
  unsigned __int16 v243; // bx
  volatile void *v244; // rax
  struct _KTHREAD *Pool2; // rax
  int v246; // ebx
  int v247; // ebx
  int v248; // ebx
  int v249; // ebx
  int v250; // ebx
  int v251; // ebx
  int v252; // ebx
  __int64 v253; // r8
  struct _KLOCK_ENTRIES *v254; // r9
  char v255; // bl
  unsigned __int64 ExtensionTable; // rax
  unsigned __int64 v257; // rbx
  __int64 v258; // r8
  struct _KLOCK_ENTRIES *v259; // r9
  char UCharFromUser; // bl
  int v261; // ebx
  unsigned __int64 v262; // rax
  __int64 v263; // r8
  struct _KLOCK_ENTRIES *v264; // r9
  char *v265; // rdx
  unsigned __int64 v266; // rcx
  size_t v267; // r9
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
  int v290; // ebx
  int v291; // ebx
  int v292; // ebx
  int v293; // ebx
  int v294; // ebx
  int v295; // ebx
  int v296; // ebx
  __int64 v297; // rcx
  HANDLE v298; // rbx
  int v299; // r15d
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
  signed int v320; // [rsp+6Ch] [rbp-7BCh]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-7B8h]
  char v322; // [rsp+78h] [rbp-7B0h] BYREF
  char v323; // [rsp+79h] [rbp-7AFh] BYREF
  char v324; // [rsp+7Ah] [rbp-7AEh] BYREF
  unsigned __int16 v325; // [rsp+7Ch] [rbp-7ACh] BYREF
  _DWORD *p_LockNV; // [rsp+80h] [rbp-7A8h]
  int v327; // [rsp+88h] [rbp-7A0h]
  signed __int64 v328; // [rsp+90h] [rbp-798h]
  PVOID v329; // [rsp+98h] [rbp-790h]
  __int16 UShortFromUser; // [rsp+A0h] [rbp-788h] BYREF
  char v331[4]; // [rsp+A4h] [rbp-784h] BYREF
  int v332; // [rsp+A8h] [rbp-780h] BYREF
  unsigned int v333; // [rsp+B0h] [rbp-778h]
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
  struct _KTHREAD *v354; // [rsp+138h] [rbp-6F0h]
  volatile void *Address[2]; // [rsp+140h] [rbp-6E8h] BYREF
  volatile void *v356[2]; // [rsp+150h] [rbp-6D8h] BYREF
  void *Src[2]; // [rsp+160h] [rbp-6C8h] BYREF
  __int64 v358; // [rsp+170h] [rbp-6B8h]
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
  void *v387; // [rsp+380h] [rbp-4A8h] BYREF
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

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  Handle = a1;
  v354 = (struct _KTHREAD *)a3;
  v333 = a4;
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
    switch ( (_DWORD)a2 )
    {
      case 5:
LABEL_3:
        v10 = 4;
LABEL_41:
        v11 = 1;
        goto LABEL_42;
      case 0x11:
      case 0x19:
      case 0x12:
        v11 = 1;
        v10 = 1;
LABEL_42:
        ProbeForRead(v5, a4, v10);
        v7 = Handle;
        goto LABEL_44;
      case 0x6C:
        v10 = 2;
        goto LABEL_41;
    }
    if ( (_DWORD)a2 != 21 )
    {
      if ( (_DWORD)a2 == 33 || (_DWORD)a2 == 39 )
        goto LABEL_3;
      if ( (_DWORD)a2 != 35
        && (_DWORD)a2 != 8
        && (_DWORD)a2 != 40
        && (_DWORD)a2 != 41
        && (_DWORD)a2 != 98
        && (_DWORD)a2 != 99 )
      {
        if ( (_DWORD)a2 == 45 || (_DWORD)a2 == 46 )
          goto LABEL_3;
        if ( (_DWORD)a2 != 49 && (_DWORD)a2 != 53 && (_DWORD)a2 != 56 && (_DWORD)a2 != 62 && (_DWORD)a2 != 65 )
        {
          if ( (_DWORD)a2 == 70 || (_DWORD)a2 == 74 )
            goto LABEL_34;
          if ( (_DWORD)a2 != 83 )
          {
            if ( (_DWORD)a2 == 90 )
            {
LABEL_34:
              v11 = 1;
              v10 = 1;
              goto LABEL_42;
            }
            if ( (_DWORD)a2 == 91 )
              goto LABEL_3;
            if ( (_DWORD)a2 != 95 )
            {
              if ( (_DWORD)a2 == 87 )
                goto LABEL_34;
              if ( (_DWORD)a2 == 100 )
                goto LABEL_3;
              if ( (_DWORD)a2 != 101 && (_DWORD)a2 != 102 && (_DWORD)a2 != 105 )
              {
                v10 = 4;
                if ( (_DWORD)a2 == 107 )
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
  if ( v6 > 54 )
  {
    if ( v6 <= 85 )
    {
      if ( v6 == 85 )
      {
        if ( (_DWORD)v4 != 24 )
          return -1073741820;
        *(_OWORD *)Src = 0LL;
        v358 = 0LL;
        memset_0(v440, 0, 0x41uLL);
        if ( PreviousMode )
          RtlCopyFromUser(Src, v5, 0x18uLL);
        else
          RtlCopyVolatileMemory(Src, v5, 0x18uLL);
        v265 = (char *)Src[0];
        if ( PreviousMode )
        {
          v266 = RtlStringLengthFromUser((char *)Src[0]);
          v265 = (char *)Src[0];
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
            v267 = RtlStringLengthFromUser(v265);
            v265 = (char *)Src[0];
          }
          else
          {
            v267 = -1LL;
            do
              ++v267;
            while ( v265[v267] );
          }
        }
        if ( PreviousMode )
          RtlCopyFromUser(v440, v265, v267);
        else
          RtlCopyVolatileMemory(v440, v265, v267);
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)Handle,
                   544LL,
                   PsProcessType,
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
          RtlWriteULongToUser((_DWORD *)v5 + 4, v358);
        else
          *((_DWORD *)v5 + 4) = v358;
        return v23;
      }
      if ( v6 <= 68 )
      {
        if ( v6 == 68 )
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
        if ( v6 != 56 )
        {
          switch ( v6 )
          {
            case '9':
              return MmProcessWorkingSetControl((ULONG_PTR)v7, v5, v4, PreviousMode);
            case ';':
              if ( (_DWORD)v4 != 4 )
                return -1073741820;
              result = ObpReferenceObjectByHandleWithTag(
                         (ULONG_PTR)v7,
                         512LL,
                         PsProcessType,
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
              v240 = ULongFromUser != 0;
              v375 = v240;
              if ( KeGetCurrentThread()->ApcState.Process == v315 )
              {
                v28 = -1073741790;
              }
              else if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              {
                v28 = 0;
                KeSetCheckStackExtentsProcess((__int64)v315, v240);
                if ( !v240 && (*((_DWORD *)v315 + 124) & 0x20000) != 0 )
                  _InterlockedAnd((volatile signed __int32 *)v315 + 124, 0xFFFDFFFF);
              }
              else
              {
                v28 = -1073741727;
              }
              goto LABEL_120;
            case '>':
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
                           512LL,
                           PsProcessType,
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
            case '?':
              ULong64FromUser = 0LL;
              if ( (_DWORD)v4 != 8 )
                return -1073741820;
              result = ObpReferenceObjectByHandleWithTag(
                         (ULONG_PTR)v7,
                         512LL,
                         PsProcessType,
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
              v22 = PsSetProcessFaultInformation((__int64)v315, &ULong64FromUser, v237, v238);
              goto LABEL_68;
          }
          if ( v6 != 65 )
          {
            if ( (unsigned int)(v6 - 66) > 1 )
              return -1073741821;
            if ( (v4 & 7) != 0 || (unsigned int)v4 > 0x100 )
              return -1073741820;
            if ( PreviousMode )
              RtlCopyFromUser(v439, v5, v4);
            else
              RtlCopyVolatileMemory(v439, v5, v4);
            v234 = (unsigned int)v4 >> 3;
            if ( v6 == 67 )
            {
              result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
              if ( result < 0 )
                return result;
            }
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)Handle,
                       0x2000LL,
                       PsProcessType,
                       PreviousMode,
                       0x79517350u,
                       &v315,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            v22 = KeSetCpuSetsProcess((__int64)v315, v234, (__int64)v439, v6 == 67, v6 != 67);
            goto LABEL_68;
          }
          memset(v413, 0, sizeof(v413));
          if ( (_DWORD)v4 != 32 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)v7,
                     8193LL,
                     PsProcessType,
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
              v236 = MmReleaseCommitForMemResetPages((__int64)v315, (DWORD1(v413[0]) >> 2) & 1);
            else
              v236 = MmSetCommitReleaseEligibility((__int64)v315, BYTE4(v413[0]) & 1, v235);
            v28 = v236;
            goto LABEL_120;
          }
          goto LABEL_99;
        }
        *(_OWORD *)v367 = 0LL;
        v241 = 0LL;
        v371 = 0LL;
        if ( PreviousMode )
        {
          DWORD1(v366) = 0;
          v242 = RtlReadULongFromUser((unsigned int *)v5);
          v243 = v242;
          LODWORD(v366) = v242;
          v244 = (volatile void *)RtlReadULong64FromUser(v5 + 1);
          *((_QWORD *)&v366 + 1) = v244;
          *(_OWORD *)v367 = v366;
          if ( !v243 )
            return -1073741811;
          ProbeForRead(v244, v243, 2u);
          Pool2 = (struct _KTHREAD *)ExAllocatePool2(0x40uLL);
          v241 = Pool2;
          v371 = Pool2;
          if ( !Pool2 )
            return -1073741670;
          RtlCopyFromUser(Pool2, v367[1], LOWORD(v367[0]));
          v367[1] = v241;
          v5 = v367;
          v403 = v367;
        }
        v28 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)Handle,
                0x2000LL,
                PsProcessType,
                PreviousMode,
                0x79517350u,
                &v315,
                0LL,
                0LL);
        if ( v28 >= 0 )
        {
          v28 = IoRevokeHandlesForProcess((__int64)v5, v315);
          if ( v241 )
            ExFreePoolWithTag(v241, 0);
          goto LABEL_120;
        }
        goto LABEL_953;
      }
      v246 = v6 - 70;
      if ( !v246 )
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   512LL,
                   PsProcessType,
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
      v247 = v246 - 1;
      if ( !v247 )
      {
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        if ( PreviousMode )
          v261 = RtlReadULongFromUser((unsigned int *)v5);
        else
          v261 = *(_DWORD *)v5;
        v376 = v261;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)Handle,
                   512LL,
                   PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &v315,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v262 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v315);
        if ( !v262 )
          goto LABEL_418;
        ExEnableRaiseUMExceptionOnInvalidHandleClose(v262, v261, v263, v264);
LABEL_876:
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v315 + 61);
        goto LABEL_136;
      }
      v248 = v247 - 1;
      if ( !v248 )
        return PsIumEnableOnDemandDebugWithResponse((ULONG_PTR)v7, (__int64)v5, v4);
      v249 = v248 - 2;
      if ( !v249 )
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
                     0x2000LL,
                     PsProcessType,
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
      v250 = v249 - 3;
      if ( !v250 )
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
        v257 = ExtensionTable;
        if ( (v407 & 0xFFFFFFFE00000000uLL) == 0 || ExtensionTable )
        {
          v28 = ObpReferenceObjectByHandleWithTag(
                  (ULONG_PTR)Handle,
                  0x2000LL,
                  PsProcessType,
                  PreviousMode,
                  0x79517350u,
                  &v315,
                  0LL,
                  0LL);
          if ( v28 >= 0 )
          {
            if ( v257 )
              v28 = guard_dispatch_icall_no_overrides((__int64)v315, (__int64)&v407);
            PsSetProcessPowerThrottlingState(v315, (__int64)&v407, v258, v259);
            ObfDereferenceObjectWithTag(v315, 0x79517350u);
          }
          if ( v257 )
            ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
          return v28;
        }
        return -1073741822;
      }
      v251 = v250 - 3;
      if ( !v251 )
      {
        result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
        if ( result < 0 )
          return result;
        if ( (_DWORD)v4 == 1 )
        {
          if ( PreviousMode )
            v255 = RtlReadUCharFromUser(v5);
          else
            v255 = *(_BYTE *)v5;
          v335 = v255;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     0x2000LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &v315,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            if ( v255 )
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
      v252 = v251 - 2;
      if ( !v252 )
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
                   512LL,
                   PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &v315,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v23 = PoSetProcessEnergyTrackingState((__int64)v315, v417, v253, v254);
        if ( v23 < 0 )
          goto LABEL_851;
        goto LABEL_848;
      }
      if ( v252 != 1 )
        return -1073741821;
      return -1073741637;
    }
    if ( v6 <= 100 )
    {
      if ( v6 == 100 )
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
                   32LL,
                   PsProcessType,
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
      if ( v6 != 87 )
      {
        switch ( v6 )
        {
          case 'Z':
            return SeCodeIntegritySetInformationProcess((__int64)v7, 0x5Au, v5, v4);
          case '[':
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
                           0x2000LL,
                           PsProcessType,
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
          case '_':
            if ( (_DWORD)v4 != 8 )
              return -1073741820;
            if ( PreviousMode )
              BugCheckParameter1 = RtlReadULong64FromUser(v5);
            else
              RtlCopyVolatileMemory(&BugCheckParameter1, v5, 8uLL);
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)Handle,
                       0x2000LL,
                       PsProcessType,
                       PreviousMode,
                       0x79517350u,
                       &v315,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            v23 = ObpReferenceObjectByHandleWithTag(
                    BugCheckParameter1,
                    4096LL,
                    PsProcessType,
                    PreviousMode,
                    0x79517350u,
                    &v363,
                    0LL,
                    0LL);
            v227 = v315;
            if ( v23 < 0 )
              goto LABEL_852;
            v23 = PspCombineSecurityDomains((PEPROCESS)v315, (__int64)v363);
            ObfDereferenceObjectWithTag(v363, 0x79517350u);
            goto LABEL_851;
        }
        if ( v6 != 96 )
        {
          if ( v6 != 97 )
          {
            if ( v6 == 98 )
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
                return PspSetupUserFiberShadowStack(v396, *((ULONG_PTR *)&v396 + 1), v397, v5 + 3);
              }
            }
            else
            {
              if ( v6 != 99 )
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
      if ( v6 == 87 && !(_DWORD)v4 || v6 == 96 && (unsigned int)v4 < 4 )
        return -1073741820;
      LOBYTE(a2) = PreviousMode;
      result = EtwCheckSecurityLoggerAccess((__int64)KeGetCurrentThread()->ApcState.Process, a2);
      if ( result < 0 )
        return result;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode)
        && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        return -1073741727;
      }
      v334 = 0;
      if ( v6 == 87 )
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
LABEL_1119:
          if ( (v282 & 0xFFFFFF80) == 0 )
          {
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)Handle,
                       0x2000LL,
                       PsProcessType,
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
      goto LABEL_1119;
    }
    v290 = v6 - 101;
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
                         512LL,
                         PsProcessType,
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
                      (unsigned __int8 *)byte_140052945,
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
                    PsSetProcessPriorityByClass((__int64)v315, 1LL);
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
                    512LL,
                    PsProcessType,
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
                  *v5 = v346;
                v346 = 0LL;
                v23 = 0;
              }
            }
            if ( v346 )
              ObCloseHandle(v346, PreviousMode);
            v227 = v315;
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
          v304 = (__int64)*v5;
        v402 = v304;
        if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & v304) != 0 )
          return -1073741811;
        if ( PreviousMode == 1 )
        {
          if ( Handle != (HANDLE)-1LL )
          {
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)Handle,
                       512LL,
                       PsProcessType,
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
      v241 = 0LL;
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
          v241 = v309;
          p_LockNV = &v309->Header.LockNV;
          if ( v309 )
          {
            RtlCopyFromUser(v309, (void *)Address[1], v308);
            v28 = PspProcessDynamicEnforcedAddressRanges(
                    (struct _EX_RUNDOWN_REF *)v315,
                    (unsigned __int64 *)v315 + 242,
                    (__int64)v241,
                    (unsigned __int16)Address[0],
                    &v342);
            v320 = v28;
            v310 = 0;
            v319 = 0;
            while ( v310 < v342 )
            {
              RtlWriteULongToUser(
                (_DWORD *)Address[1] + 6 * v310 + 4,
                *((_DWORD *)&v241->Header.WaitListHead.Blink + 6 * v310));
              v319 = ++v310;
            }
            goto LABEL_1245;
          }
          goto LABEL_1241;
        }
        goto LABEL_1239;
      }
    }
    else
    {
      v347 = 0;
      *(_OWORD *)v356 = 0LL;
      v241 = 0LL;
      if ( (_DWORD)v4 != 16 )
        return -1073741820;
      if ( !PreviousMode )
        return -1073741790;
      RtlCopyFromUser(v356, v5, 0x10uLL);
      v311 = 16 * LOWORD(v356[0]);
      if ( !v311 )
        return -1073741811;
      if ( !v356[1] )
        return -1073741811;
      ProbeForWrite(v356[1], v311, 8u);
      if ( WORD1(v356[0]) || HIDWORD(v356[0]) )
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
          v241 = v309;
          p_LockNV = &v309->Header.LockNV;
          if ( v309 )
          {
            RtlCopyFromUser(v309, (void *)v356[1], v311);
            v28 = PspProcessDynamicEHContinuationTargets(
                    (struct _EX_RUNDOWN_REF *)v315,
                    (__int64)v241,
                    (unsigned __int16)v356[0],
                    &v347);
            v320 = v28;
            v312 = 0;
            v319 = 0;
            while ( v312 < v347 )
            {
              RtlWriteULong64ToUser(
                (_QWORD *)v356[1] + 2 * v312 + 1,
                (__int64)(&v241->Header.WaitListHead.Flink)[2 * v312]);
              v319 = ++v312;
            }
LABEL_1245:
            if ( v315 )
              ObfDereferenceObject(v315);
LABEL_953:
            if ( !v241 )
              return v28;
            v127 = v241;
            goto LABEL_317;
          }
LABEL_1241:
          v28 = -1073741801;
          v241 = v309;
          goto LABEL_1245;
        }
LABEL_1239:
        v28 = -1073741637;
        goto LABEL_1245;
      }
    }
    v28 = -1073741790;
    goto LABEL_1245;
  }
  if ( v6 == 54 )
  {
    if ( (_DWORD)v4 != 4 )
      return -1073741820;
    if ( PreviousMode )
      v230 = RtlReadULongFromUser((unsigned int *)v5);
    else
      v230 = *(_DWORD *)v5;
    v374 = v230;
    if ( (v230 & 0xFFFFFFFE) != 0 )
      return -1073741811;
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)Handle,
               512LL,
               PsProcessType,
               PreviousMode,
               0x79517350u,
               &v315,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v231 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v315);
    if ( !v231 )
      goto LABEL_418;
    ExEnableHandleExceptions(v231, v230 & 1, v232, v233);
    goto LABEL_876;
  }
  if ( v6 <= 24 )
  {
    if ( v6 == 24 )
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
                   516LL,
                   PsProcessType,
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
    if ( v6 <= 13 )
    {
      if ( v6 == 13 )
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   512LL,
                   PsProcessType,
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
        v227 = v315;
LABEL_852:
        ObfDereferenceObjectWithTag(v227, 0x79517350u);
        return v23;
      }
      v12 = v6 - 1;
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
                  v24 = *v5;
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
                               512LL,
                               PsProcessType,
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
                         544LL,
                         PsProcessType,
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
                         544LL,
                         PsProcessType,
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
              v26 = *v5;
            v381 = v26;
            goto LABEL_87;
          }
          if ( (_DWORD)v4 != 16 )
            return -1073741820;
          if ( PreviousMode )
            v26 = (void *)RtlReadULong64FromUser(v5);
          else
            v26 = *v5;
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
                      2048LL,
                      PsProcessType,
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
              v328 = v27 | v25;
              v30 = (signed __int64 *)((char *)v315 + 576);
              _m_prefetchw((char *)v315 + 576);
              v31 = *v30;
              v32 = v328;
              do
              {
                p_LockNV = (_DWORD *)v31;
                if ( (_DWORD)v4 == 16 )
                {
                  v33 = v5 + 1;
                  if ( PreviousMode )
                    RtlWriteULongToUser(v33, v31 & 7);
                  else
                    *v33 = v31 & 7;
                  v32 = v328;
                }
                else if ( (v31 & 7) != 0 )
                {
                  ObfDereferenceObject(v329);
                  goto LABEL_99;
                }
                v34 = _InterlockedCompareExchange64((volatile signed __int64 *)v315 + 72, v32, v31);
                v66 = v31 == v34;
                v31 = v34;
              }
              while ( !v66 );
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
                   512LL,
                   PsProcessType,
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
                 512LL,
                 PsProcessType,
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
          PspEnqueueProcessQosChangeNotification((__int64)v315, v50, v51, v52);
        goto LABEL_136;
      }
      goto LABEL_133;
    }
    v53 = v6 - 15;
    if ( v53 )
    {
      v54 = v53 - 1;
      if ( v54 )
      {
        v55 = v54 - 1;
        if ( !v55 )
        {
          if ( (_DWORD)v4 == 1 )
          {
            if ( PreviousMode )
              v75 = RtlReadUCharFromUser(v5);
            else
              v75 = *(_BYTE *)v5;
            v337 = v75;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)Handle,
                       512LL,
                       PsProcessType,
                       PreviousMode,
                       0x79517350u,
                       &v315,
                       0LL,
                       0LL);
            if ( result >= 0 )
            {
              v78 = (__int64)CurrentThread;
              PspLockProcessExclusive((__int64)v315, (__int64)CurrentThread, v76, v77);
              if ( v75 )
                *((_DWORD *)v315 + 226) |= 4u;
              else
                *((_DWORD *)v315 + 226) &= ~4u;
              if ( *((_QWORD *)v315 + 98) )
              {
                v79 = *((_WORD *)v315 + 886);
                if ( v79 == 332 || (v80 = 0, v79 == 452) )
                  v80 = 1;
                if ( v80 )
                  v75 = 1;
              }
              KeSetAutoAlignmentProcess((__int64)v315, v75);
              PspUnlockProcessExclusive((__int64)v315, v78);
              goto LABEL_931;
            }
            return result;
          }
          return -1073741820;
        }
        v56 = v55 - 1;
        if ( !v56 )
        {
          if ( (_DWORD)v4 != 2 )
            return -1073741820;
          if ( PreviousMode )
            UShortFromUser = RtlReadUShortFromUser((unsigned __int16 *)v5);
          else
            RtlCopyVolatileMemory(&UShortFromUser, v5, 2uLL);
          v73 = Handle;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     512LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &v315,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v23 = PspSetProcessPriorityClass((__int64)v315, HIBYTE(UShortFromUser), (__int64)v73, PreviousMode);
          if ( v23 >= 0 )
          {
            if ( *(_DWORD *)&SshpBlockerCollections.SavedApcStateFill[40] > 5u )
            {
              if ( ((__int64)SshpBlockerCollections.SchedulerApc.Thread & 0x400000000000LL) == 0
                || (v74 = 1,
                    (struct _LIST_ENTRY *)((__int64)SshpBlockerCollections.SchedulerApc.ApcListEntry.Flink & 0x400000000000LL) != SshpBlockerCollections.SchedulerApc.ApcListEntry.Flink) )
              {
                v74 = 0;
              }
              if ( v74 )
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
                  (unsigned __int8 *)word_1400529A2,
                  0LL,
                  0LL,
                  4u,
                  &v418);
              }
            }
            if ( (unsigned int)Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline() )
              PspSetProcessPriorityByClassIgnoreForegroundBoost(v315);
            else
              PsSetProcessPriorityByClass((__int64)v315, 1LL);
          }
          goto LABEL_851;
        }
        v57 = v56 - 1;
        if ( !v57 )
        {
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          if ( PreviousMode )
            v72 = RtlReadULongFromUser((unsigned int *)v5);
          else
            v72 = *(_DWORD *)v5;
          v392 = v72;
          if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            v28 = ObpReferenceObjectByHandleWithTag(
                    (ULONG_PTR)Handle,
                    512LL,
                    PsProcessType,
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
            if ( v72 )
              _InterlockedOr((volatile signed __int32 *)v315 + 125, 0x1000000u);
            else
              _InterlockedAnd((volatile signed __int32 *)v315 + 125, 0xFEFFFFFF);
            goto LABEL_120;
          }
          return -1073741727;
        }
        v58 = v57 - 2;
        if ( v58 )
        {
          v59 = v58 - 1;
          if ( v59 )
          {
            if ( v59 != 1 )
              return -1073741821;
            if ( (_DWORD)v4 != 8 )
              return -1073741820;
            if ( PreviousMode )
              v60 = (void *)RtlReadULong64FromUser(v5);
            else
              v60 = *v5;
            v405 = v60;
            if ( !RtlIsSandboxedToken(0LL, PreviousMode) )
            {
              result = ObpReferenceObjectByHandleWithTag(
                         (ULONG_PTR)Handle,
                         512LL,
                         PsProcessType,
                         PreviousMode,
                         0x79517350u,
                         &v315,
                         0LL,
                         0LL);
              if ( result < 0 )
                return result;
              v61 = v315;
              ProcessServerSilo = (void *)PsGetProcessServerSilo((__int64)v315);
              v22 = ObpSetDeviceMap(ProcessServerSilo, (__int64)v61, v60, PreviousMode, 2, 0LL);
              goto LABEL_68;
            }
            return -1073741790;
          }
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          if ( PreviousMode )
            v63 = RtlReadULongFromUser((unsigned int *)v5);
          else
            v63 = *(_DWORD *)v5;
          v385 = v63;
          v64 = v63 != 0;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     512LL,
                     PsProcessType,
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
          KeSetDisableBoostProcess((__int64)v315, v64);
LABEL_118:
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v315 + 61);
          goto LABEL_120;
        }
        if ( (_DWORD)v4 == 8 )
        {
          if ( PreviousMode )
          {
            v65 = RtlReadULong64FromUser(v5);
            *(_QWORD *)&v409 = v65;
          }
          else
          {
            RtlCopyVolatileMemory(&v409, v5, 8uLL);
            v65 = v409;
          }
          v66 = v65 == 0;
        }
        else
        {
          if ( (_DWORD)v4 != 16 )
            return -1073741820;
          if ( PreviousMode )
            RtlCopyFromUser(&v409, v5, 0x10uLL);
          else
            RtlCopyVolatileMemory(&v409, v5, 0x10uLL);
          v66 = !KeVerifyGroupAffinity((__int64)&v409, 0);
        }
        if ( v66 )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)Handle,
                   512LL,
                   PsProcessType,
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
          v68 = (__int64)CurrentThread;
          --CurrentThread->KernelApcDisable;
          if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v315 + 61) )
          {
            PspLockProcessSharedUnsafe((__int64)v315, v69, v70, v71);
            v28 = PspSetProcessAffinitySafe((struct _KPROCESS *)v315, 0, 0LL, (__int64 *)&v409, &v341);
            PspUnlockProcessSharedUnsafe((__int64)v315);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v315 + 61);
            if ( v28 >= 0 )
            {
              if ( v341 )
                PspUpdatePebForAffinityChange(v68, (__int64)v315);
              _InterlockedOr((volatile signed __int32 *)v315 + 124, 0x200000u);
            }
          }
          else
          {
            v28 = -1073741558;
          }
          KiLeaveCriticalRegionUnsafe(v68, v69);
          goto LABEL_120;
        }
        v67 = v409 & *(_QWORD *)((char *)&stru_140FC01F0.116 + 8 * v325 + 4);
        if ( v67 == (_QWORD)v409 )
        {
          WORD4(v409) = v325;
          *(_QWORD *)&v409 = v67;
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
                 512LL,
                 PsProcessType,
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
  if ( v6 <= 40 )
  {
    if ( v6 != 40 )
    {
      v82 = v6 - 25;
      if ( !v82 )
      {
        if ( (_DWORD)v4 == 1 )
        {
          if ( PreviousMode )
            v331[0] = RtlReadUCharFromUser(v5);
          else
            RtlCopyVolatileMemory(v331, v5, 1uLL);
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     0x2000LL,
                     PsProcessType,
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
                || (v144 = 1,
                    (struct _LIST_ENTRY *)((__int64)SshpBlockerCollections.SchedulerApc.ApcListEntry.Flink & 0x400000000000LL) != SshpBlockerCollections.SchedulerApc.ApcListEntry.Flink) )
              {
                v144 = 0;
              }
              if ( v144 )
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
                  (unsigned __int8 *)word_1400528E2,
                  0LL,
                  0LL,
                  4u,
                  &v425);
              }
            }
            if ( !(unsigned int)Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline() )
            {
              LOBYTE(v8) = v331[0] != 0;
              PsSetProcessPriorityByClass((__int64)v315, v8);
            }
            goto LABEL_931;
          }
          return result;
        }
        return -1073741820;
      }
      v83 = v82 - 4;
      if ( !v83 )
      {
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        if ( PreviousMode )
          v143 = RtlReadULongFromUser((unsigned int *)v5);
        else
          v143 = *(_DWORD *)v5;
        v378 = v143;
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        {
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     512LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &v315,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            if ( v143 )
              _InterlockedOr((volatile signed __int32 *)v315 + 125, 0x2000u);
            else
              _InterlockedAnd((volatile signed __int32 *)v315 + 125, 0xFFFFDFFF);
            goto LABEL_931;
          }
          return result;
        }
        return -1073741727;
      }
      v84 = v83 - 2;
      if ( !v84 )
      {
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   512LL,
                   PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &v315,
                   0LL,
                   0LL);
        v28 = result;
        if ( result < 0 )
          return result;
        if ( PreviousMode )
          v142 = RtlReadULongFromUser((unsigned int *)v5);
        else
          v142 = *(_DWORD *)v5;
        v359 = v142;
        if ( v28 < 0 )
          goto LABEL_120;
        if ( (v142 & 0xFFFFFFFE) == 0 )
        {
          if ( (v142 & 1) != 0 )
            _InterlockedAnd((volatile signed __int32 *)v315 + 125, 0xFFFFFFFD);
          else
            _InterlockedOr((volatile signed __int32 *)v315 + 125, 2u);
          goto LABEL_120;
        }
        goto LABEL_99;
      }
      v85 = v84 - 1;
      if ( !v85 )
      {
        v344 = 0LL;
        if ( !(_DWORD)v4 )
          goto LABEL_363;
        if ( (((_DWORD)v4 - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        v139 = PreviousMode ? RtlReadULongFromUser((unsigned int *)v5) : *(_DWORD *)v5;
        LODWORD(v344) = v139;
        if ( (_DWORD)v4 == 8 )
        {
          v140 = PreviousMode ? RtlReadULongFromUser((unsigned int *)v5 + 1) : *((_DWORD *)v5 + 1);
          HIDWORD(v344) = v140;
          v139 = v344;
        }
        else
        {
          HIDWORD(v344) = 0;
        }
        if ( !v139 || (v139 & 0xFFFFFFF0) == 0 )
        {
LABEL_363:
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)Handle,
                     512LL,
                     PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &v315,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          if ( (_DWORD)v4 )
            v141 = &v344;
          else
            v141 = 0LL;
          v22 = PsSetProcessHandleTracingInformation((struct _EX_RUNDOWN_REF *)v315, (__int64)v141);
          goto LABEL_68;
        }
        return -1073741811;
      }
      v86 = v85 - 1;
      if ( !v86 )
      {
        if ( (((_DWORD)v4 - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        if ( (_DWORD)v4 == 4 )
        {
          if ( PreviousMode )
            v129 = RtlReadULongFromUser((unsigned int *)v5);
          else
            v129 = *(_DWORD *)v5;
          v390 = v129;
          v317 = 0;
        }
        else
        {
          if ( PreviousMode )
          {
            v130 = RtlReadULong64FromUser(v5);
            v129 = v130;
            v349 = v130;
          }
          else
          {
            RtlCopyVolatileMemory(&v349, v5, 8uLL);
            v129 = v349;
          }
          v317 = BYTE4(v349);
        }
        if ( v129 >= 4 )
          return -1073741811;
        if ( v129 >= 3
          && !SeCheckPrivilegedObject(*(_QWORD *)&SeIncreaseBasePriorityPrivilege, (int)Handle, 512, PreviousMode) )
        {
          return -1073741727;
        }
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)Handle,
                   512LL,
                   PsProcessType,
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
        v91 = (__int64)CurrentThread;
        PspLockProcessExclusive((__int64)v315, (__int64)CurrentThread, v131, v132);
        v133 = (volatile signed __int32 *)v315;
        v134 = *((_DWORD *)v315 + 125);
        v135 = v129 << 27;
        do
        {
          v136 = v134;
          v134 = _InterlockedCompareExchange(v133 + 125, v135 | v134 & 0xC7FFFFFF, v134);
        }
        while ( v134 != v136 );
        v96 = v315;
        v137 = (_QWORD *)*((_QWORD *)v315 + 110);
        if ( v137 != (_QWORD *)((char *)v315 + 880) )
        {
          v138 = v317;
          do
          {
            if ( v138 == 1 && ((*((_DWORD *)v137 + 10) >> 9) & 7) < (int)v129 )
              IoBoostThreadIoPriority(v137 - 175, v129, 0);
            PsSetIoPriorityThread((LegacyAutoBoost *)(v137 - 175), v129, v135, (struct _SINGLE_LIST_ENTRY *)v133);
            v137 = (_QWORD *)*v137;
            v96 = v315;
          }
          while ( v137 != (_QWORD *)((char *)v315 + 880) );
        }
        goto LABEL_349;
      }
      v87 = v86 - 1;
      if ( !v87 )
      {
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        if ( v7 == (HANDLE)-1LL )
        {
          if ( PreviousMode )
            v128 = RtlReadULongFromUser((unsigned int *)v5);
          else
            v128 = *(_DWORD *)v5;
          v391 = v128;
          v28 = KeSetExecuteOptions((__int64)KeGetCurrentThread()->ApcState.Process, v128);
          if ( v28 >= 0 && (v128 & 3) == 1 )
            MmRemoveExecuteGrants();
          return v28;
        }
        return -1073741811;
      }
      v88 = v87 - 1;
      if ( v88 )
      {
        if ( v88 != 4 )
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
                   512LL,
                   PsProcessType,
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
        v91 = (__int64)CurrentThread;
        PspLockProcessExclusive((__int64)v315, (__int64)CurrentThread, v89, v90);
        v92 = v340 << 12;
        v93 = (volatile signed __int32 *)v315;
        v94 = *((_DWORD *)v315 + 124);
        do
        {
          v95 = v94;
          v94 = _InterlockedCompareExchange(v93 + 124, v92 | v94 & 0xFFFF8FFF, v94);
        }
        while ( v94 != v95 );
        v96 = v315;
        v97 = (char *)v315 + 880;
        v98 = (char *)*((_QWORD *)v315 + 110);
        while ( v98 != v97 )
        {
          PsSetPagePriorityThread((__int64)(v98 - 1400), v340);
          v98 = *(char **)v98;
          v96 = v315;
          v97 = (char *)v315 + 880;
        }
LABEL_349:
        PspUnlockProcessExclusive((__int64)v96, v91);
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
        v99 = (unsigned int)(v4 - 16) / 0x18uLL;
        if ( (_DWORD)v4 - 16 != 24 * v99 )
          return -1073741820;
        if ( (_DWORD)v4 == 40 )
        {
          v100 = (struct _KTHREAD *)P;
          CurrentThread = (struct _KTHREAD *)P;
        }
        else
        {
          v100 = (struct _KTHREAD *)ExAllocatePool2(0x101uLL);
          CurrentThread = v100;
          if ( !v100 )
            return -1073741670;
        }
        p_LockNV = &v100->Header.LockNV;
        v354 = v100;
        RtlCopyFromUser(v100, v5, v4);
        p_SignalState = &v100->Header.SignalState;
        if ( v100->Header.SignalState < 2u
          && (v100->Header.LockNV & 0xFFFFFFFE) == 0
          && (p_WaitListHead = &v100->Header.WaitListHead,
              Flink_low = LODWORD(v100->Header.WaitListHead.Flink),
              (_DWORD)Flink_low)
          && v99 == Flink_low )
        {
          v103 = 0;
          v319 = 0;
          p_Blink = &v100->Header.WaitListHead.Blink;
          do
          {
            if ( *(_DWORD *)p_Blink )
              goto LABEL_313;
            v319 = ++v103;
            p_Blink += 3;
          }
          while ( v103 < (unsigned int)Flink_low );
          v105 = KeGetCurrentThread()->ApcState.Process;
          v315 = v105;
          LODWORD(Handle) = 0;
          if ( (v100->Header.LockNV & 1) != 0 )
          {
            if ( !v105[1].ReadyTime )
              goto LABEL_313;
            v106 = WORD2(v105[3].PerProcessorCycleTimes);
            if ( v106 == 332 || (v107 = 0, v106 == 452) )
              v107 = 1;
            if ( !v107 )
            {
LABEL_313:
              v28 = -1073741811;
              goto LABEL_315;
            }
            LODWORD(Handle) = 1;
          }
          v108 = (unsigned int)Handle ^ 1;
          v333 = 4 * v108;
          *(_QWORD *)&v366 = 4 * v108 + 4;
          v328 = (signed __int64)v5;
          v109 = 0;
          v319 = 0;
          v28 = 0;
          v320 = 0;
          v110 = 0LL;
          for ( j = v105; ; j = v315 )
          {
            v329 = PsGetNextProcessThread((__int64)j, v110, (__int64)v105, v101);
            v112 = v329;
            if ( !v329 || v109 >= LODWORD(p_WaitListHead->Flink) )
              break;
            if ( (*((_DWORD *)v329 + 29) & 0x400) == 0 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v329 + 177) )
            {
              v113 = v112[30];
              v348 = v113;
              if ( (_DWORD)Handle )
              {
                v114 = v113 + 8236;
                v343 = v113 + 8236;
                v115 = (unsigned int)RtlReadULongFromUser((unsigned int *)(v113 + 8236));
              }
              else
              {
                v114 = v113 + 88;
                v343 = v113 + 88;
                v115 = RtlReadULong64FromUser((volatile void *)(v113 + 88));
              }
              v353 = v115;
              if ( v115 )
              {
                if ( *p_SignalState == 1 )
                {
                  if ( v115 == v114 )
                  {
                    v115 = 0LL;
                    v353 = 0LL;
                  }
                  else
                  {
                    v116 = v366 * HIDWORD(v100->Header.WaitListHead.Flink);
                    if ( v116 )
                    {
                      if ( ((v333 + 3) & (__int64)*(&v100->SListFaultAddress + 3 * v109)) != 0 )
                        ExRaiseDatatypeMisalignment();
                      if ( ((v333 + 3) & (unsigned int)v115) != 0 )
                        ExRaiseDatatypeMisalignment();
                    }
                    RtlCopyToUserFromUser(*(&v100->SListFaultAddress + 3 * v109), (void *)v115, v116);
                    _InterlockedOr(v313, 0);
                  }
                  v117 = v328 + 24LL * v109;
                  v118 = RtlReadULongFromUser((unsigned int *)(v117 + 16));
                  RtlWriteULongToUser((_DWORD *)(v117 + 16), v118 | 1);
                  if ( (_DWORD)Handle )
                    RtlWriteULongToUser((_DWORD *)(v348 + 8236), p_LockNV[6 * v109 + 6]);
                  else
                    RtlWriteULong64ToUser((_QWORD *)(v348 + 88), *(_QWORD *)&p_LockNV[6 * v109 + 6]);
                  v119 = v328;
                  RtlWriteULong64ToUser((_QWORD *)(v328 + 8 * (v109 + 2 * (v109 + 2LL))), *((_QWORD *)v329 + 162));
                  RtlWriteULong64ToUser((_QWORD *)(v119 + 24 * (v109 + 1LL)), v115);
                  v120 = RtlReadULongFromUser((unsigned int *)(v119 + 8 * (v109 + 2 * (v109 + 1LL))));
                  RtlWriteULongToUser((_DWORD *)(v119 + 8 * (3LL * v109++ + 2)), v120 ^ 3);
                  v319 = v109;
                }
                else
                {
                  v121 = v328 + 24LL * v109;
                  v122 = RtlReadULongFromUser((unsigned int *)(v121 + 16));
                  RtlWriteULongToUser((_DWORD *)(v121 + 16), v122 | 1);
                  v348 = 3 * (v109 + 1LL);
                  v123 = v354;
                  Flink_high = HIDWORD(v354->Header.WaitListHead.Flink);
                  if ( (_DWORD)Handle )
                  {
                    v343 = (unsigned int)RtlReadULongFromUser((unsigned int *)(v115 + 4 * Flink_high));
                    RtlWriteULongToUser(
                      (_DWORD *)(v115 + 4LL * HIDWORD(v354->Header.WaitListHead.Flink)),
                      p_LockNV[2 * v348]);
                  }
                  else
                  {
                    v343 = RtlReadULong64FromUser((volatile void *)(v115 + 8 * Flink_high));
                    RtlWriteULong64ToUser(
                      (_QWORD *)(v115 + 8LL * HIDWORD(v123->Header.WaitListHead.Flink)),
                      *((_QWORD *)&v123->Header.Lock + v348));
                  }
                  v125 = v328 + 24LL * v109;
                  RtlWriteULong64ToUser((_QWORD *)(v125 + 24), v343);
                  v126 = RtlReadULongFromUser((unsigned int *)(v125 + 16));
                  RtlWriteULongToUser((_DWORD *)(v125 + 16), v126 ^ 3);
                  v319 = ++v109;
                }
              }
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v329 + 177);
            }
            v110 = v329;
          }
          if ( v329 )
            ObfDereferenceObjectWithTag(v329, 0x6E457350u);
        }
        else
        {
          v28 = -1073741820;
        }
LABEL_315:
        if ( v100 != (struct _KTHREAD *)P )
        {
          v127 = v100;
LABEL_317:
          ExFreePoolWithTag(v127, 0);
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
        v145 = RtlReadULong64FromUser(v5);
      else
        v145 = (__int64)*v5;
      *((_QWORD *)&v406 + 1) = v145;
    }
    else
    {
      if ( PreviousMode )
        RtlCopyFromUser(&v406, v5, 0x10uLL);
      else
        RtlCopyVolatileMemory(&v406, v5, 0x10uLL);
      v145 = *((_QWORD *)&v406 + 1);
    }
    if ( DWORD1(v406) )
      return -1073741811;
    if ( (_DWORD)v406 )
      return -1073741736;
    if ( v145 != v145 << 16 >> 16 )
      return -1073741811;
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)Handle,
               512LL,
               PsProcessType,
               PreviousMode,
               0x79517350u,
               &v315,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v146 = KeGetCurrentThread()->ApcState.Process;
    if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) && v315 != v146 )
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
    v147 = *((_WORD *)v315 + 886);
    if ( v147 == 332 || (v66 = v147 == 452, v148 = 0, v66) )
      v148 = 1;
    if ( v148 )
      v149 = 1;
    else
LABEL_425:
      v149 = 0;
    v150 = v146[1].ReadyTime;
    if ( v149 )
    {
      if ( v150 )
      {
        v160 = WORD2(v146[3].PerProcessorCycleTimes);
        if ( v160 == 332 || (v161 = 0, v160 == 452) )
          v161 = 1;
        if ( v161 )
        {
          KiStackAttachProcess((_KPROCESS *)v315, 0, (__int64)v414);
          if ( *((_QWORD *)&v406 + 1) < (unsigned __int64)MmGetMaximumUserAddress() )
          {
            v162 = MmValidateUserCallTarget(*((unsigned __int64 *)&v406 + 1), 1);
            v153 = v162 == 0 ? 0xC000000D : 0;
            if ( v162 )
            {
              v163 = 0LL;
              v164 = (__int64 *)*((_QWORD *)v315 + 98);
              if ( v164 )
                v163 = *v164;
              v165 = (_DWORD *)(v163 + 1168);
              if ( PreviousMode )
                RtlWriteULongToUser(v165, SDWORD2(v406));
              else
                *v165 = DWORD2(v406);
            }
          }
          else
          {
            v153 = -1073741811;
          }
          KiUnstackDetachProcess((__int64)v414, 0);
          goto LABEL_455;
        }
      }
    }
    else
    {
      if ( !v150 )
        goto LABEL_432;
      v151 = WORD2(v146[3].PerProcessorCycleTimes);
      if ( v151 != 332 && v151 != 452 )
        v11 = 0;
      if ( !v11 )
      {
LABEL_432:
        KiStackAttachProcess((_KPROCESS *)v315, 0, (__int64)v414);
        v152 = MmValidateUserCallTarget(*((unsigned __int64 *)&v406 + 1), 0);
        v153 = v152 == 0 ? 0xC000000D : 0;
        KiUnstackDetachProcess((__int64)v414, 0);
        if ( v152 )
        {
          v156 = (__int64)CurrentThread;
          PspLockProcessExclusive((__int64)v315, (__int64)CurrentThread, v154, v155);
          *((_QWORD *)v315 + 45) = *((_QWORD *)&v406 + 1);
          v157 = v315;
          v158 = (volatile signed __int32 *)((char *)v315 + 880);
          v159 = (volatile signed __int32 *)*((_QWORD *)v315 + 110);
          while ( v159 != v158 )
          {
            if ( *((_QWORD *)&v406 + 1) )
              _interlockedbittestandset(v159 - 350, 0x19u);
            else
              _interlockedbittestandreset(v159 - 350, 0x19u);
            v159 = *(volatile signed __int32 **)v159;
            v157 = v315;
            v158 = (volatile signed __int32 *)((char *)v315 + 880);
          }
          PspUnlockProcessExclusive((__int64)v157, v156);
        }
        goto LABEL_455;
      }
    }
    v153 = -1073741637;
LABEL_455:
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v315 + 61);
    v8 = v153;
    goto LABEL_136;
  }
  v166 = v6 - 41;
  if ( !v166 )
  {
    v393 = 0LL;
    v394 = 0LL;
    v395 = 0LL;
    if ( v7 != (HANDLE)-1LL )
      return -1073741811;
    v228 = 0LL;
    if ( (_DWORD)v4 == 40 )
    {
      if ( PreviousMode )
      {
        RtlCopyFromUser(&v393, v5, 0x28uLL);
        v228 = v5 + 4;
        v5 = (void **)&v393;
      }
      v229 = *(_DWORD *)v5;
      if ( *(_DWORD *)v5 > 0x40u || *((_DWORD *)v5 + 1) | *((_DWORD *)v5 + 2) | *((_DWORD *)v5 + 3) )
        return -1073741811;
      v5 += 2;
    }
    else
    {
      if ( (_DWORD)v4 != 24 )
        return -1073741820;
      v229 = 0;
      if ( PreviousMode )
      {
        *(_QWORD *)&v394 = RtlReadULong64FromUser(v5);
        *((_QWORD *)&v394 + 1) = RtlReadULong64FromUser(v5 + 1);
        v228 = v5 + 2;
        v5 = (void **)&v394;
      }
    }
    if ( !*v5 )
      return -1073741811;
    v387 = *v5;
    v5[2] = 0LL;
    result = MmAllocateUserStack((__int64 *)v5 + 2, (int)v5[1], (__int64 *)&v387, v229, 0);
    v23 = result;
    if ( result < 0 )
      return result;
    if ( PreviousMode )
      RtlWriteULong64ToUser(v228, (__int64)v5[2]);
    return v23;
  }
  v167 = v166 - 1;
  if ( !v167 )
  {
LABEL_843:
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)v7,
               512LL,
               PsProcessType,
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
    v225 = ExAllocatePool2(0x40uLL);
    v226 = (void *)v225;
    if ( !v225 )
    {
      v23 = -1073741801;
LABEL_850:
      PsReturnProcessNonPagedPoolQuota((ULONG_PTR)v315, 0x6028uLL);
      goto LABEL_851;
    }
    BYTE1(PsAltSystemCallRegistrationLock.TrapFrame) = 1;
    *(_DWORD *)v225 = 0;
    *(_QWORD *)(v225 + 8) = 0LL;
    KeInitializeGate(v225 + 16, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v315 + 88, (signed __int64)v226, 0LL) )
    {
      ExFreePoolWithTag(v226, 0);
      v23 = -1073741752;
      goto LABEL_850;
    }
LABEL_848:
    v23 = 0;
    goto LABEL_851;
  }
  v168 = v167 - 3;
  if ( !v168 )
  {
    v351 = 0;
    if ( v7 == (HANDLE)-1LL )
    {
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      if ( PreviousMode )
      {
        v224 = RtlReadULongFromUser((unsigned int *)v5);
        v351 = v224;
      }
      else
      {
        RtlCopyVolatileMemory(&v351, v5, 4uLL);
        v224 = v351;
      }
      if ( (v224 & 0xFFFFFFFC) == 0 )
        return PspSetProcessAffinityUpdateMode((__int64)CurrentThread, &v351);
    }
    return -1073741811;
  }
  v169 = v168 - 1;
  if ( !v169 )
  {
    v350 = 0;
    if ( (_DWORD)v4 != 4 )
      return -1073741820;
    if ( PreviousMode )
    {
      v223 = RtlReadULongFromUser((unsigned int *)v5);
      v350 = v223;
    }
    else
    {
      RtlCopyVolatileMemory(&v350, v5, 4uLL);
      v223 = v350;
    }
    if ( (v223 & 0xFFFFFFFE) == 0 )
    {
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)Handle,
                 512LL,
                 PsProcessType,
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
  v170 = v169 - 2;
  if ( v170 )
  {
    v171 = v170 - 1;
    if ( !v171 )
    {
      if ( (_DWORD)v4 != 8 )
        return -1073741820;
      if ( v7 == (HANDLE)-1LL )
      {
        v218 = PreviousMode ? (struct _LIST_ENTRY *)RtlReadULong64FromUser(v5) : (struct _LIST_ENTRY *)*v5;
        v404 = v218;
        if ( ((unsigned __int8)v218 & 3) == 1 )
        {
          KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink = v218;
          return 0;
        }
      }
      return -1073741811;
    }
    v172 = v171 - 3;
    if ( v172 )
    {
      if ( v172 != 1 )
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
    v175 = Handle;
    if ( Handle != (HANDLE)-1LL && (_DWORD)v316 != 2 )
      return -1073741811;
    p_Lock = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
    v315 = (PVOID)p_Lock;
    v177 = (unsigned int)v316;
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
              v179 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v315);
              if ( v179 )
              {
                v28 = !ExEnableHandleExceptions(v179, BYTE4(v316) & 1, v180, v181) ? 0xC0000022 : 0;
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
            v178 = HIDWORD(v316);
            if ( (v316 & 0xFFFFFFF000000000uLL) != 0 )
              goto LABEL_589;
            if ( (v316 & 0x100000000LL) != 0 && (v316 & 0x200000000LL) != 0 )
            {
              v178 = HIDWORD(v316) & 0xFFFFFFFD;
              HIDWORD(v316) &= ~2u;
            }
            if ( (v178 & 4) != 0 && (v178 & 8) != 0 )
            {
              v178 &= ~8u;
              HIDWORD(v316) = v178;
            }
            if ( (v178 & 1) == 0 && (*((_DWORD *)v315 + 468) & 0x1000) != 0
              || ((v178 >> 2) & 1) == 0 && (*((_DWORD *)v315 + 502) & 2) != 0
              || (v178 & 2) == 0 && (v178 & 1) == 0 && (*((_DWORD *)v315 + 468) & 0x2000) != 0
              || (v178 & 8) == 0 && ((v178 >> 2) & 1) == 0 && (*((_DWORD *)v315 + 502) & 4) != 0 )
            {
              goto LABEL_596;
            }
            if ( ((v178 & 1) != 0 || (v178 & 2) != 0) && (*((_DWORD *)&CurrentThread->0 + 1) & 0x80u) != 0 )
            {
              v28 = -1073741431;
              goto LABEL_812;
            }
            v28 = 0;
            if ( (v178 & 1) != 0 )
            {
              _InterlockedOr((volatile signed __int32 *)v315 + 468, 0x3000u);
            }
            else
            {
              if ( (v178 & 2) == 0 )
                goto LABEL_523;
              _InterlockedOr((volatile signed __int32 *)v315 + 468, 0x2000u);
            }
            LOBYTE(v178) = BYTE4(v316);
LABEL_523:
            if ( (v178 & 4) != 0 )
            {
              _InterlockedOr((volatile signed __int32 *)v315 + 502, 6u);
            }
            else if ( (v178 & 8) != 0 )
            {
              _InterlockedOr((volatile signed __int32 *)v315 + 502, 4u);
            }
            goto LABEL_812;
          }
          v182 = BYTE4(v316);
          if ( (v316 & 0xFFFFFFF000000000uLL) != 0 )
            goto LABEL_589;
          if ( (v316 & 0x100000000LL) == 0 )
            goto LABEL_541;
          if ( (v316 & 0x800000000LL) != 0 )
          {
            v182 = BYTE4(v316) & 0xF7;
            HIDWORD(v316) &= ~8u;
          }
          if ( (v182 & 1) == 0 )
          {
LABEL_541:
            if ( (v182 & 2) != 0 || (v182 & 4) != 0 )
              goto LABEL_589;
          }
          if ( !PsIsSystemWideMitigationOptionSet() )
          {
            if ( v175 == (HANDLE)-1LL )
            {
              v183 = v317;
            }
            else
            {
              v28 = ObpReferenceObjectByHandleWithTag(
                      (ULONG_PTR)v175,
                      512LL,
                      PsProcessType,
                      PreviousMode,
                      0x79517350u,
                      &v315,
                      0LL,
                      0LL);
              if ( v28 < 0 )
                goto LABEL_812;
              v183 = 1;
              v317 = 1;
            }
            if ( !v183 || v315 == KeGetCurrentThread()->ApcState.Process )
            {
              if ( (v316 & 0x100000000LL) == 0 && (*((_DWORD *)v315 + 468) & 0x100) != 0 )
                goto LABEL_596;
              if ( (v316 & 0x800000000LL) == 0 && (v316 & 0x100000000LL) == 0 && (*((_DWORD *)v315 + 468) & 0x800) != 0 )
                goto LABEL_596;
              if ( (v316 & 0x200000000LL) != 0 && (*((_DWORD *)v315 + 468) & 0x300) == 0x100 )
                goto LABEL_596;
              v192 = (HIDWORD(v316) >> 2) & 1;
              if ( v192 )
              {
                if ( (*((_DWORD *)v315 + 468) & 0x500) == 0x100 )
                  goto LABEL_596;
              }
              if ( (v316 & 0x100000000LL) != 0 )
              {
                v193 = 2304;
              }
              else
              {
                v193 = 0;
                if ( (v316 & 0x800000000LL) != 0 )
                  v193 = 2048;
              }
              v186 = ((v316 & 0x200000000LL) == 0) << 9;
              v189 = v193 | 0x200;
              if ( ((HIDWORD(v316) >> 1) & 1) == 0 )
                v189 = v193;
              if ( v192 )
                v189 |= 0x400u;
              v188 = (volatile signed __int32 *)((char *)v315 + 1872);
              v190 = v186 | 0x400;
              v191 = v192 == 0;
            }
            else
            {
              v184 = 0;
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
                v184 = 1;
              }
              if ( !v184
                && (v316 & 0x800000000LL) == 0
                && (v316 & 0x100000000LL) == 0
                && (*((_DWORD *)v315 + 468) & 0x800) != 0 )
              {
LABEL_596:
                v28 = -1073741790;
                goto LABEL_812;
              }
              v186 = (v316 & 0x100000000LL) == 0 ? 0x900 : 0;
              v187 = ((v316 & 0x100000000LL) != 0 ? 0x100 : 0) | 0x800;
              if ( (v316 & 0x800000000LL) == 0 )
                v187 = (v316 & 0x100000000LL) != 0 ? 0x900 : 0;
              if ( (v316 & 0x200000000LL) != 0 )
                v187 |= 0x200u;
              else
                v186 |= 0x200u;
              v188 = (volatile signed __int32 *)((char *)v315 + 1872);
              v189 = v187 | 0x400;
              if ( ((HIDWORD(v316) >> 2) & 1) == 0 )
                v189 = v187;
              v190 = v186 | 0x400;
              v191 = ((HIDWORD(v316) >> 2) & 1) == 0;
            }
            if ( v191 )
              v186 = v190;
            goto LABEL_587;
          }
LABEL_663:
          v28 = -1073741637;
          goto LABEL_812;
        }
        v194 = BYTE4(v316);
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
          if ( (v194 & 1) != 0 )
          {
            _InterlockedAnd((volatile signed __int32 *)v315 + 468, 0xFFFFFFBF);
            v194 = BYTE4(v316);
          }
          if ( (v194 & 8) != 0 )
            _InterlockedOr((volatile signed __int32 *)v315 + 468, 8u);
          goto LABEL_606;
        }
        _InterlockedOr((volatile signed __int32 *)v315 + 468, 0x10u);
        v194 = BYTE4(v316);
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
      v195 = (BYTE4(v316) & 1) + ((HIDWORD(v316) >> 1) & 1);
      if ( (unsigned int)v195 > 1 )
        goto LABEL_589;
      if ( (v316 & 0x100000000LL) == 0 )
      {
        LOBYTE(v195) = *((_BYTE *)v315 + 1528);
        if ( (_BYTE)v195 == 8
          || !SepRmCapTableLock.ReadTransferCount
          || (LOBYTE(v177) = 8, !(unsigned int)guard_dispatch_icall_no_overrides(v177, v195)) )
        {
          LOBYTE(v195) = *((_BYTE *)v315 + 1529);
          if ( (_BYTE)v195 == 8 )
            goto LABEL_596;
          if ( !SepRmCapTableLock.ReadTransferCount )
            goto LABEL_596;
          LOBYTE(v177) = 8;
          if ( !(unsigned int)guard_dispatch_icall_no_overrides(v177, v195) )
            goto LABEL_596;
        }
      }
      v196 = HIDWORD(v316);
      if ( (v316 & 0x100000000LL) == 0 && (v316 & 0x200000000LL) == 0 )
      {
        if ( SepRmCapTableLock.ReadTransferCount )
        {
          LOBYTE(v196) = 6;
          LOBYTE(v177) = *((_BYTE *)v315 + 1528);
          if ( (unsigned int)guard_dispatch_icall_no_overrides(v177, v196) )
          {
            if ( SepRmCapTableLock.ReadTransferCount )
            {
              LOBYTE(v196) = 6;
              LOBYTE(v177) = *((_BYTE *)v315 + 1529);
              if ( (unsigned int)guard_dispatch_icall_no_overrides(v177, v196) )
                goto LABEL_596;
            }
          }
        }
      }
      if ( (*((_DWORD *)v315 + 468) & 0x3000000) != 0 )
      {
        v196 = HIDWORD(v316);
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
        if ( SepRmCapTableLock.ReadTransferCount )
        {
          LOBYTE(v177) = 8;
          LOBYTE(v196) = *((_BYTE *)v315 + 1528);
          if ( (unsigned int)guard_dispatch_icall_no_overrides(v177, v196) )
            *((_BYTE *)v315 + 1528) = 8;
        }
        if ( SepRmCapTableLock.ReadTransferCount )
        {
          LOBYTE(v177) = 8;
          LOBYTE(v196) = *((_BYTE *)v315 + 1529);
          if ( (unsigned int)guard_dispatch_icall_no_overrides(v177, v196) )
            *((_BYTE *)v315 + 1529) = 8;
        }
      }
      else if ( (v316 & 0x200000000LL) != 0 )
      {
        if ( !SepRmCapTableLock.ReadTransferCount )
          goto LABEL_596;
        LOBYTE(v196) = 6;
        LOBYTE(v177) = *((_BYTE *)v315 + 1528);
        if ( !(unsigned int)guard_dispatch_icall_no_overrides(v177, v196) )
          goto LABEL_596;
        if ( SepRmCapTableLock.ReadTransferCount )
        {
          LOBYTE(v198) = 6;
          LOBYTE(v197) = *((_BYTE *)v315 + 1529);
          if ( (unsigned int)guard_dispatch_icall_no_overrides(v198, v197) )
            *((_BYTE *)v315 + 1529) = 6;
        }
      }
      v199 = 0;
      if ( HIDWORD(v316) )
        v199 = 0x800000;
      v200 = ((v316 & 0x800000000LL) == 0) << 24;
      v201 = v199 | 0x1000000;
      if ( ((HIDWORD(v316) >> 3) & 1) == 0 )
        v201 = v199;
      if ( ((HIDWORD(v316) >> 4) & 1) != 0 )
        v201 |= 0x2000000u;
      else
        v200 |= 0x2000000u;
      v202 = v201;
LABEL_811:
      RtlInterlockedSetClearBits((volatile signed __int32 *)v315 + 468, v202, v200);
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
          v202 = 0x10000;
          v200 = 0x20000;
        }
        else
        {
          if ( (v316 & 0x200000000LL) == 0 )
            goto LABEL_812;
          v202 = 0x20000;
          v200 = 0x10000;
        }
        goto LABEL_811;
      case 0xA:
        v215 = HIDWORD(v316);
        if ( (v316 & 0xFFFFFFE000000000uLL) != 0 )
          goto LABEL_589;
        if ( (v316 & 0x100000000LL) != 0 && (v316 & 0x800000000LL) != 0 )
        {
          v215 = HIDWORD(v316) & 0xFFFFFFF7;
          HIDWORD(v316) &= ~8u;
        }
        if ( (v215 & 2) != 0 && (v215 & 0x10) != 0 )
        {
          v215 &= ~0x10u;
          HIDWORD(v316) = v215;
        }
        v216 = 0x80000;
        if ( (v215 & 1) == 0 && (*((_DWORD *)v315 + 468) & 0x80000) != 0
          || (v215 & 2) == 0 && (*((_DWORD *)v315 + 468) & 0x200000) != 0
          || (v215 & 4) == 0 && (*((_DWORD *)v315 + 468) & 0x40000) != 0
          || (v215 & 8) == 0 && (v215 & 1) == 0 && (*((_DWORD *)v315 + 468) & 0x100000) != 0
          || (v215 & 0x10) == 0 && (v215 & 2) == 0 && (*((_DWORD *)v315 + 468) & 0x400000) != 0 )
        {
          goto LABEL_596;
        }
        v217 = 0;
        if ( (v215 & 1) != 0 )
        {
          v217 = 0x100000;
        }
        else
        {
          v216 = 0;
          if ( (v215 & 8) != 0 )
            v216 = 0x100000;
        }
        if ( (v215 & 2) != 0 )
        {
          v216 |= 0x200000u;
          v217 |= 0x400000u;
        }
        else if ( (v215 & 0x10) != 0 )
        {
          v216 |= 0x400000u;
        }
        v189 = v216 | 0x40000;
        if ( (v215 & 4) == 0 )
          v189 = v216;
        v188 = (volatile signed __int32 *)((char *)v315 + 1872);
        v186 = v217;
LABEL_587:
        RtlInterlockedSetClearBits(v188, v189, v186);
        goto LABEL_606;
      case 0xD:
        if ( (v316 & 0xFFFFFFF800000000uLL) == 0 && ((v316 & 0x100000000LL) != 0 || (v316 & 0x400000000LL) == 0) )
        {
          if ( (v316 & 0x100000000LL) != 0 && (v316 & 0x200000000LL) != 0 )
            HIDWORD(v316) &= ~2u;
          NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(
                                             (__int64)v315,
                                             v173,
                                             (__int64)p_Lock,
                                             v174);
          if ( ((v316 & 0x100000000LL) != 0 || NoChildProcessRestrictedPolicy - 1 > 1)
            && (((HIDWORD(v316) >> 2) & 1) == 0 || NoChildProcessRestrictedPolicy != 1)
            && (((HIDWORD(v316) >> 1) & 1) != 0 || (v316 & 0x100000000LL) != 0 || NoChildProcessRestrictedPolicy != 3) )
          {
            if ( (v316 & 0x100000000LL) != 0 )
            {
              v213 = v315;
              if ( ((HIDWORD(v316) >> 2) & 1) != 0 )
                v214 = 2;
              else
                v214 = 1;
            }
            else
            {
              if ( ((HIDWORD(v316) >> 1) & 1) == 0 )
                goto LABEL_606;
              v214 = 3;
              v213 = v315;
            }
            PspSetNoChildProcessRestrictedPolicy(
              (__int64)v213,
              v214,
              NoChildProcessRestrictedPolicy,
              (struct _KLOCK_ENTRIES *)(BYTE4(v316) & 1));
            goto LABEL_606;
          }
          goto LABEL_596;
        }
        goto LABEL_589;
      case 0xE:
        v209 = BYTE4(v316);
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
          v209 = BYTE4(v316);
        }
        if ( (v209 & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v315 + 468, 0x40000000u);
          v209 = BYTE4(v316);
        }
        if ( (v209 & 2) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v315 + 468, 0x80000000);
          _InterlockedOr((volatile signed __int32 *)v315 + 383, 0x200000u);
          v210 = _InterlockedIncrement64(&PsNextSecurityDomain);
          v211 = v315;
          *((_QWORD *)v315 + 236) = v210;
          v211[237] = v210;
          KeSynchronizeSecurityDomain((_KPROCESS *)v315);
          PspSynchronizeThreadIsolationDomains((__int64)v315);
          v209 = BYTE4(v316);
        }
        if ( (v209 & 4) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v315 + 469, 0x1000u);
          v209 = BYTE4(v316);
        }
        if ( (v209 & 8) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v315 + 469, 0x2000u);
          v209 = BYTE4(v316);
        }
        if ( (v209 & 0x10) != 0 )
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
      RedirectionTrustPolicy = PspGetRedirectionTrustPolicy((__int64)v315, v173, (__int64)p_Lock, v174);
      if ( (v316 & 0x100000000LL) == 0 && RedirectionTrustPolicy == 1 )
        goto LABEL_596;
      v206 = (HIDWORD(v316) >> 1) & 1;
      if ( !v206 )
      {
        if ( (v316 & 0x100000000LL) != 0 )
          goto LABEL_674;
        if ( RedirectionTrustPolicy == 2 )
          goto LABEL_596;
      }
      if ( (v316 & 0x100000000LL) == 0 )
      {
        if ( !v206 )
          goto LABEL_606;
        v207 = 2;
LABEL_677:
        PspSetRedirectionTrustPolicy((__int64)v315, v207, v204, v205);
        goto LABEL_606;
      }
LABEL_674:
      v207 = 1;
      goto LABEL_677;
    }
    v208 = HIDWORD(v316);
    if ( (v316 & 0xFFFFFC0000000000uLL) != 0 )
      goto LABEL_589;
    if ( (v316 & 0x1000000000LL) != 0 )
    {
      v208 = HIDWORD(v316) | 1;
      HIDWORD(v316) |= 1u;
    }
    if ( (v208 & 0x200) != 0 )
    {
      v208 |= 4u;
      HIDWORD(v316) = v208;
    }
    if ( (v208 & 0x40) != 0 )
    {
      v208 |= 0x20u;
      HIDWORD(v316) = v208;
    }
    if ( (v208 & 0x10) == 0 && (*((_DWORD *)v315 + 469) & 0x100000) != 0
      || (v208 & 1) == 0 && (*((_DWORD *)v315 + 469) & 0x4000) != 0
      || (v208 & 1) != 0 && (*((_DWORD *)v315 + 469) & 0x4000) == 0
      || (v208 & 0x200) != 0 && *((int *)v315 + 469) >= 0
      || ((v208 >> 2) & 1) == 0 && (*((_DWORD *)v315 + 469) & 0x20000) != 0
      || ((v208 >> 2) & 1) != 0 && (*((_DWORD *)v315 + 469) & 0x20000) == 0
      || (v208 & 0x40) == 0 && (*((_DWORD *)v315 + 469) & 0x400000) != 0
      || (v208 & 0x20) == 0 && (*((_DWORD *)v315 + 469) & 0x200000) != 0
      || (v208 & 0x100) == 0 && (*((_DWORD *)v315 + 469) & 0x40000000) != 0
      || (v208 & 2) != 0 && (*((_DWORD *)v315 + 469) & 0x8000) == 0
      || ((v208 >> 3) & 1) == 0 && (*((_DWORD *)v315 + 469) & 0x40000) != 0
      || ((v208 >> 3) & 1) != 0 && (*((_DWORD *)v315 + 469) & 0x40000) == 0
      || ((v208 >> 7) & 1) == 0 && (*((_DWORD *)v315 + 469) & 0x800000) != 0
      || ((v208 >> 7) & 1) != 0 && (*((_DWORD *)v315 + 469) & 0x800000) == 0 )
    {
      goto LABEL_596;
    }
    if ( (v208 & 0x10) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)v315 + 469, 0x100000u);
      LOWORD(v208) = WORD2(v316);
    }
    if ( (v208 & 0x200) == 0 && (v208 & 4) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)v315 + 469, 0x7FFFFFFFu);
      LOWORD(v208) = WORD2(v316);
    }
    if ( (v208 & 0x40) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)v315 + 469, 0x200000u);
      _InterlockedOr((volatile signed __int32 *)v315 + 469, 0x400000u);
    }
    else
    {
      if ( (v208 & 0x20) == 0 )
      {
LABEL_723:
        if ( (v208 & 0x100) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v315 + 469, 0x40000000u);
          LOBYTE(v208) = BYTE4(v316);
        }
        if ( (v208 & 2) == 0 )
          _InterlockedAnd((volatile signed __int32 *)v315 + 469, 0xFFFF7FFF);
        goto LABEL_606;
      }
      _InterlockedOr((volatile signed __int32 *)v315 + 469, 0x200000u);
    }
    LOWORD(v208) = WORD2(v316);
    goto LABEL_723;
  }
  if ( (_DWORD)v4 != 4 )
    return -1073741820;
  if ( PreviousMode )
    v219 = RtlReadULongFromUser((unsigned int *)v5);
  else
    v219 = *(_DWORD *)v5;
  v373 = v219;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)Handle,
             512LL,
             PsProcessType,
             PreviousMode,
             0x79517350u,
             &v315,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v222 = (void *)PsReferencePrimaryTokenWithTag((__int64)v315, 0x746C6644u, v220, v221);
    SeSetVirtualizationToken((__int64)v222, v219);
    ObfDereferenceObject(v222);
    goto LABEL_931;
  }
  return result;
}
