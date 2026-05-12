/*
 * XREFs of StorPortExtendedFunction @ 0x140001D50
 * Callers:
 *     NvmeDumpFreeDumpAdapterInfo @ 0x1401A2108 (NvmeDumpFreeDumpAdapterInfo.c)
 *     NvmeDumpPopulateMiniportDumpInfo @ 0x1401A2568 (NvmeDumpPopulateMiniportDumpInfo.c)
 * Callees:
 *     StorpAllocateContiguousMemorySpecifyCacheNode @ 0x140001008 (StorpAllocateContiguousMemorySpecifyCacheNode.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x140001080 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     StorpReleaseMSISpinLock @ 0x140001130 (StorpReleaseMSISpinLock.c)
 *     StorpGetProcessorIndexFromNumber @ 0x140001240 (StorpGetProcessorIndexFromNumber.c)
 *     StorpGetOriginalMdl @ 0x140001290 (StorpGetOriginalMdl.c)
 *     StorpAcquireMSISpinLock @ 0x140001320 (StorpAcquireMSISpinLock.c)
 *     StorpGetCurrentProcessorNumber @ 0x140001430 (StorpGetCurrentProcessorNumber.c)
 *     StorpGetLogicalProcessorRelationship @ 0x140001464 (StorpGetLogicalProcessorRelationship.c)
 *     RaidGetStartIoPerfParams @ 0x1400014C0 (RaidGetStartIoPerfParams.c)
 *     StorAcquireSpinLockEx @ 0x140001700 (StorAcquireSpinLockEx.c)
 *     StorpGetPfns @ 0x140001840 (StorpGetPfns.c)
 *     RaidNtStatusToStorStatus @ 0x1400018E8 (RaidNtStatusToStorStatus.c)
 *     StorpRequestTimer @ 0x140001980 (StorpRequestTimer.c)
 *     RaidAdapterIsRegisteredForIdleDetection @ 0x1400034A0 (RaidAdapterIsRegisteredForIdleDetection.c)
 *     StorpInitializeWorkItem @ 0x140009A30 (StorpInitializeWorkItem.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1400194CC (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1400196B8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     NvmeFreeContiguousMemorySpecifyCacheEx @ 0x14001EB54 (NvmeFreeContiguousMemorySpecifyCacheEx.c)
 *     StorpTelemetryMiniportEvent @ 0x140027DA8 (StorpTelemetryMiniportEvent.c)
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 *     RaidGetAssociatedXrb @ 0x14002A9F0 (RaidGetAssociatedXrb.c)
 *     RaidGetMessageNumberFromProcessorNumber @ 0x14002E320 (RaidGetMessageNumberFromProcessorNumber.c)
 *     StorDelayExecution @ 0x140032790 (StorDelayExecution.c)
 *     StorpGetRequestInfo @ 0x140032990 (StorpGetRequestInfo.c)
 *     StorpAllocatePool @ 0x140037660 (StorpAllocatePool.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNodeEx @ 0x1400378D0 (StorpAllocateContiguousMemorySpecifyCacheNodeEx.c)
 *     RaidAdapterPoFxActivateComponentFromMiniport @ 0x14003C0EC (RaidAdapterPoFxActivateComponentFromMiniport.c)
 *     StorpGetNodeAffinity @ 0x14003C264 (StorpGetNodeAffinity.c)
 *     StorpGetActiveGroupCount @ 0x14003C5CC (StorpGetActiveGroupCount.c)
 *     StorpFreePool @ 0x14003E3A8 (StorpFreePool.c)
 *     StorpFreeContiguousMemorySpecifyCacheEx @ 0x14003E480 (StorpFreeContiguousMemorySpecifyCacheEx.c)
 *     StorpGetHighestNodeNumber @ 0x14003F52C (StorpGetHighestNodeNumber.c)
 *     StorpGetMSIInfo @ 0x140041758 (StorpGetMSIInfo.c)
 *     RaValidateMiniportSystemThreadPriority @ 0x140041880 (RaValidateMiniportSystemThreadPriority.c)
 *     StorpGetProcessorCount @ 0x1400421CC (StorpGetProcessorCount.c)
 *     StorpGetCurrentProcessorIndex @ 0x1400429B4 (StorpGetCurrentProcessorIndex.c)
 *     NvmeAllocateContiguousMemorySpecifyCacheNodeEx @ 0x140045134 (NvmeAllocateContiguousMemorySpecifyCacheNodeEx.c)
 *     StorpGetDeviceObjects @ 0x140047F90 (StorpGetDeviceObjects.c)
 *     StorpGetSystemAddress @ 0x140049794 (StorpGetSystemAddress.c)
 *     StorpCompleteServiceIrp @ 0x140049FFC (StorpCompleteServiceIrp.c)
 *     StorpGetActiveNodeCount @ 0x14004CA7C (StorpGetActiveNodeCount.c)
 *     StorEtwRaidMiniportEventProxy @ 0x14004EB50 (StorEtwRaidMiniportEventProxy.c)
 *     StorEnableRegistryKeyNotification @ 0x140050904 (StorEnableRegistryKeyNotification.c)
 *     StorReset @ 0x140050A30 (StorReset.c)
 *     StorpAllocateHostMemoryBuffer @ 0x140051374 (StorpAllocateHostMemoryBuffer.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x140051AE8 (StorAdapterDeviceRegistryKeyProxy.c)
 *     RaidRegisterPerfStates @ 0x140051DCC (RaidRegisterPerfStates.c)
 *     RaidInitializePerfOpts @ 0x14005232C (RaidInitializePerfOpts.c)
 *     StorEtwMiniportLogError @ 0x140052C80 (StorEtwMiniportLogError.c)
 *     StorPortReadRegistryULongKey @ 0x140052F18 (StorPortReadRegistryULongKey.c)
 *     RaidCaptureLiveDump @ 0x1400536B8 (RaidCaptureLiveDump.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x14005399C (StorpLogRegisterAdapterPerfStates.c)
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x140053B4C (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     StorBuildScatterGatherListProxy @ 0x1400582B8 (StorBuildScatterGatherListProxy.c)
 *     StorpLogSystemEvent @ 0x140058584 (StorpLogSystemEvent.c)
 *     StorpFreeHostMemoryBuffer @ 0x140058A68 (StorpFreeHostMemoryBuffer.c)
 *     StorpFreeTimer @ 0x140059470 (StorpFreeTimer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x140059760 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     StorpFreeWorkItem @ 0x1400597F4 (StorpFreeWorkItem.c)
 *     NvmeInitializePerfOpts @ 0x140059A30 (NvmeInitializePerfOpts.c)
 *     StorpAllocateMdl @ 0x140059DA4 (StorpAllocateMdl.c)
 *     StorpPutScatterGatherList @ 0x140059F78 (StorpPutScatterGatherList.c)
 *     StorpInitializeTimer @ 0x14005A2AC (StorpInitializeTimer.c)
 *     StorpUnitInitializePoFxPower @ 0x14005A524 (StorpUnitInitializePoFxPower.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x14005B0A8 (StorPortpSetPowerSettingNotificationGuids.c)
 *     StorPortpInvokeAcpiMethod @ 0x14005B718 (StorPortpInvokeAcpiMethod.c)
 *     StorpGetDataInSgList @ 0x14005B91C (StorpGetDataInSgList.c)
 *     RaidMaskUnmaskPciMsixEntry @ 0x14005BA3C (RaidMaskUnmaskPciMsixEntry.c)
 *     StorpBuildMdlForNonPagedPool @ 0x14005BB68 (StorpBuildMdlForNonPagedPool.c)
 *     StorpFreeMdl @ 0x14005BC28 (StorpFreeMdl.c)
 *     RaidAdapterCacheOperationalPowerRange @ 0x14005BD18 (RaidAdapterCacheOperationalPowerRange.c)
 *     RaMiniportSaveFeatureList @ 0x14005BFD8 (RaMiniportSaveFeatureList.c)
 *     StorpGetGroupAffinity @ 0x14005C120 (StorpGetGroupAffinity.c)
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledPreCheck @ 0x14005C418 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledPreCheck.c)
 *     RaidGetD3ColdCapability @ 0x14005C47C (RaidGetD3ColdCapability.c)
 *     StorpSetUnitAttributes @ 0x14005C7AC (StorpSetUnitAttributes.c)
 *     RaidInitializeRpmb @ 0x14005C910 (RaidInitializeRpmb.c)
 *     ExtensionExtendedFuncReplace @ 0x14005CA68 (ExtensionExtendedFuncReplace.c)
 *     ExtensionExtendedFuncPre @ 0x14005CAC0 (ExtensionExtendedFuncPre.c)
 *     StorpFlushDataBufferMdl @ 0x14005CB8C (StorpFlushDataBufferMdl.c)
 *     RaidInitializeCryptoEngine @ 0x140071818 (RaidInitializeCryptoEngine.c)
 *     ExtensionExtendedFuncPost @ 0x140074DCC (ExtensionExtendedFuncPost.c)
 *     ExtensionSendMiniportData @ 0x140074E24 (ExtensionSendMiniportData.c)
 *     RaidNvmeIceConfigureExclusionRanges @ 0x140079E98 (RaidNvmeIceConfigureExclusionRanges.c)
 *     RaidNvmeIceEnableNvmeDevice @ 0x140079FBC (RaidNvmeIceEnableNvmeDevice.c)
 *     RaidNvmeIceIoComplete @ 0x14007A170 (RaidNvmeIceIoComplete.c)
 *     RaidNvmeIceIoStart @ 0x14007A278 (RaidNvmeIceIoStart.c)
 *     RaidNvmeIceQueryNvmeCapabilities @ 0x14007A518 (RaidNvmeIceQueryNvmeCapabilities.c)
 *     RaidNvmeIceQuerySupport @ 0x14007A58C (RaidNvmeIceQuerySupport.c)
 *     RtlULongLongAdd @ 0x14007A854 (RtlULongLongAdd.c)
 *     RtlULongLongMult @ 0x14007A878 (RtlULongLongMult.c)
 *     StorEtwNvmeMiniportEventProxy @ 0x14007A9D0 (StorEtwNvmeMiniportEventProxy.c)
 *     StorpAdapterInitializePoFxPower @ 0x14007C944 (StorpAdapterInitializePoFxPower.c)
 *     StorpGetDeviceBase2 @ 0x14007CD04 (StorpGetDeviceBase2.c)
 *     StorpGetNodeAffinity2 @ 0x14007CE90 (StorpGetNodeAffinity2.c)
 *     StorpQueueWorkItemInternal @ 0x14007D808 (StorpQueueWorkItemInternal.c)
 *     RaidGetD3ColdInterface @ 0x14007FA64 (RaidGetD3ColdInterface.c)
 *     NvmeGetMessageNumberFromProcessorNumber @ 0x14008FC2C (NvmeGetMessageNumberFromProcessorNumber.c)
 *     StorEtwMiniportLogByteStream @ 0x1400B1628 (StorEtwMiniportLogByteStream.c)
 *     NvmeAdapterStorMQAddController @ 0x1400DF1F4 (NvmeAdapterStorMQAddController.c)
 *     NvmeAdapterStorMQRemoveController @ 0x1400DF6F8 (NvmeAdapterStorMQRemoveController.c)
 *     StorPortpGetDriverProxyEndpointWrapperFromEndpoint @ 0x140118FA8 (StorPortpGetDriverProxyEndpointWrapperFromEndpoint.c)
 *     StorPortpIsDriverHotSwapEnabled @ 0x1401190CC (StorPortpIsDriverHotSwapEnabled.c)
 *     StorPortpRegisterDriverProxy @ 0x14011910C (StorPortpRegisterDriverProxy.c)
 *     StorPortpSwapDriverProxyEndpoints @ 0x140119140 (StorPortpSwapDriverProxyEndpoints.c)
 *     StorAddChildAdapter @ 0x14012EDD8 (StorAddChildAdapter.c)
 *     StorGetParentAdapterExtension @ 0x14012F670 (StorGetParentAdapterExtension.c)
 *     StorRemoveChildAdapter @ 0x14012F6CC (StorRemoveChildAdapter.c)
 *     PortSrbGetLbaFromCdb @ 0x14012FABC (PortSrbGetLbaFromCdb.c)
 *     memcmp @ 0x140138EA0 (memcmp.c)
 */

__int64 StorPortExtendedFunction(unsigned int a1, __int64 a2, ...)
{
  struct _PROCESSOR_NUMBER *v2; // r8
  int *v4; // r10
  __int64 v5; // rdi
  _DWORD *v6; // rbx
  __int64 v7; // r12
  unsigned int Pool; // r15d
  unsigned __int64 v9; // rdx
  PDEVICE_OBJECT v10; // rcx
  unsigned int StartIoPerfParams; // eax
  LARGE_INTEGER *v13; // rbx
  union _LARGE_INTEGER *v14; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  struct _PROCESSOR_NUMBER *v16; // rbx
  unsigned int v17; // edi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v18; // rsi
  _QWORD *v19; // rcx
  unsigned int v20; // edx
  struct _PROCESSOR_NUMBER *v21; // rbx
  struct _KDPC_WATCHDOG_INFORMATION *v22; // rdi
  NTSTATUS DpcWatchdogInformation; // edi
  struct _PROCESSOR_NUMBER *v24; // rbx
  struct _SLIST_ENTRY *v25; // rdi
  struct _PROCESSOR_NUMBER *v26; // rsi
  struct _SLIST_ENTRY *v27; // r13
  unsigned int v28; // edi
  unsigned __int8 v29; // bl
  struct _SLIST_ENTRY *v30; // rdi
  struct _PROCESSOR_NUMBER *v31; // rbx
  struct _SLIST_ENTRY *v32; // rdi
  __int64 v33; // rcx
  struct _SLIST_ENTRY *v34; // rbx
  struct _SLIST_ENTRY *v35; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v36; // rbx
  struct _SLIST_ENTRY *v37; // rbx
  struct _PROCESSOR_NUMBER *v38; // rbx
  struct _PROCESSOR_NUMBER *v39; // rax
  struct _PROCESSOR_NUMBER *v40; // rbx
  struct _SLIST_ENTRY *v41; // rdi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v42; // rsi
  int v43; // r13d
  struct _PROCESSOR_NUMBER *v44; // rsi
  struct _SLIST_ENTRY *v45; // rdi
  __int64 v46; // rax
  struct _PROCESSOR_NUMBER *v47; // rbx
  unsigned int v48; // edi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v49; // rsi
  struct _PROCESSOR_NUMBER *v50; // rbx
  struct _SLIST_ENTRY *v51; // rsi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v52; // r15
  ULONG *v53; // r13
  __int64 *v54; // rdi
  unsigned int v55; // ebx
  int v56; // edi
  int v57; // esi
  __int64 QuadPart; // rbx
  NTSTATUS D3ColdInterface; // eax
  struct _PROCESSOR_NUMBER *v60; // rdi
  struct _SLIST_ENTRY *v61; // rsi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v62; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v63; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v64; // rbx
  struct _SLIST_ENTRY *v65; // rbx
  struct _PROCESSOR_NUMBER *v66; // rbx
  struct _SLIST_ENTRY *v67; // rbx
  struct _PROCESSOR_NUMBER *v68; // rdi
  unsigned int Next; // eax
  unsigned int v70; // esi
  unsigned int v71; // eax
  int v72; // ebx
  int v73; // ebx
  int v74; // edi
  struct _PROCESSOR_NUMBER *v75; // rdi
  struct _SLIST_ENTRY *v76; // rsi
  unsigned int v77; // r13d
  ULONG *v78; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v79; // rbx
  __int64 Timer; // rax
  _BYTE *v81; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v82; // rbx
  char v83; // al
  _BYTE *v84; // rbx
  struct _SLIST_ENTRY *v85; // rbx
  struct _SLIST_ENTRY *v86; // rbx
  union _LARGE_INTEGER *Timeout; // rbx
  struct _PROCESSOR_NUMBER *v88; // rdi
  BOOLEAN v89; // si
  struct _KEVENT *v90; // rbx
  struct _SLIST_ENTRY *v91; // rdi
  unsigned int v92; // ebx
  unsigned int v93; // ebx
  unsigned __int8 v94; // di
  KSTART_ROUTINE *StartRoutine; // rbx
  struct _SLIST_ENTRY *StartContext; // r15
  KPRIORITY *v97; // rdi
  ULONG *v98; // rsi
  struct _PROCESSOR_NUMBER *v99; // rdi
  unsigned int v100; // ebx
  struct _GROUP_AFFINITY *v101; // rbx
  struct _GROUP_AFFINITY *v102; // rdi
  struct _GROUP_AFFINITY *v103; // rbx
  int v104; // eax
  struct _PROCESSOR_NUMBER *v105; // rbx
  struct _SLIST_ENTRY *v106; // rdi
  __int64 v107; // rsi
  ULONG *v108; // r13
  struct _SLIST_ENTRY *v109; // rbx
  int v110; // r13d
  int v111; // r15d
  ULONG *v112; // rbx
  __int64 v113; // rdi
  __int64 *v114; // rsi
  struct _PROCESSOR_NUMBER *v115; // rbx
  unsigned int v116; // ebx
  struct _SLIST_ENTRY *v117; // rdi
  struct _PROCESSOR_NUMBER *v118; // rbx
  struct _PROCESSOR_NUMBER *v119; // rbx
  unsigned int v120; // edi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v121; // rsi
  int *v122; // rcx
  struct _PROCESSOR_NUMBER *v123; // rbx
  int *v124; // rcx
  struct _PROCESSOR_NUMBER *v125; // rbx
  int *v126; // rcx
  KIRQL v127; // bl
  int v128; // eax
  __int64 v129; // rcx
  int v130; // eax
  _DWORD *AssociatedXrb; // rax
  KIRQL CurrentIrql; // r12
  __int64 Unit; // rax
  __int64 v134; // rdi
  unsigned int v135; // eax
  unsigned int v136; // eax
  __int64 v137; // r8
  __int64 v138; // rsi
  __int64 v139; // rax
  __int64 v140; // rbx
  _QWORD *v141; // rcx
  unsigned int v142; // edx
  _QWORD *v143; // rcx
  unsigned int v144; // edx
  __int64 v145; // rax
  int v146; // eax
  int v147; // eax
  __int64 v148; // r8
  __int64 v149; // rax
  unsigned int v150; // esi
  unsigned int v151; // ebx
  unsigned int v152; // edi
  unsigned int LowPart; // r13d
  KIRQL v154; // r8
  __int64 v155; // rdx
  unsigned int v156; // ecx
  struct _SLIST_ENTRY *v157; // rdi
  struct _PROCESSOR_NUMBER *v158; // rbx
  int *v159; // rax
  struct _DEVICE_OBJECT *v160; // rcx
  struct _SLIST_ENTRY *v161; // rdi
  unsigned int v162; // esi
  __int64 v163; // rbx
  __int64 v164; // rcx
  int v165; // eax
  struct _SLIST_ENTRY *v166; // rbx
  __int64 v167; // rax
  int *v168; // rcx
  __int64 v169; // r9
  __int64 *v170; // r8
  __int64 v171; // r9
  unsigned int v172; // eax
  unsigned int v173; // edx
  int v174; // r13d
  int v175; // ebx
  int v176; // edi
  ULONG *v177; // rsi
  bool v178; // cl
  int *v179; // rcx
  struct _SLIST_ENTRY *v180; // rsi
  struct _PROCESSOR_NUMBER *v181; // rbx
  int v182; // eax
  struct _PROCESSOR_NUMBER v183; // edx
  __int64 v184; // r8
  unsigned int v185; // r9d
  int v186; // r15d
  int v187; // r13d
  ULONG *v188; // rbx
  char v189; // r11
  int v190; // esi
  __int64 v191; // rdi
  int v192; // eax
  unsigned int v193; // eax
  NTSTATUS v194; // ebx
  void *v195; // rcx
  __int64 v196; // rax
  int v197; // r9d
  __int64 v198; // rax
  ULONG v199; // ebx
  struct _PROCESSOR_NUMBER *v200; // rbx
  PHYSICAL_ADDRESS v201; // rsi
  ULONGLONG v202; // r15
  unsigned int v203; // r12d
  ULONG *v204; // r13
  __int64 v205; // rax
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // rdi
  __int64 v209; // rsi
  bool v210; // zf
  struct _PROCESSOR_NUMBER *v211; // r8
  struct _PROCESSOR_NUMBER v212; // r11d
  int v213; // r9d
  __int64 v214; // rcx
  unsigned __int64 v215; // rdx
  __int64 v216; // r10
  int v217; // ecx
  int v218; // ecx
  struct _PROCESSOR_NUMBER *v219; // r8
  unsigned __int8 Number; // dl
  struct _PROCESSOR_NUMBER v221; // edi
  unsigned int v222; // r10d
  __int64 v223; // rcx
  unsigned __int64 v224; // r9
  __int64 v225; // r11
  int v226; // ecx
  int v227; // ecx
  ULONGLONG LbaFromCdb; // rdi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v229; // rbx
  int v230; // edi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v231; // rbx
  __int64 v232; // rax
  int v233; // edi
  __int64 v234; // rax
  _QWORD *v235; // rcx
  unsigned int v236; // edx
  int *v237; // [rsp+50h] [rbp-49h] BYREF
  int *v238; // [rsp+58h] [rbp-41h] BYREF
  int *v239; // [rsp+60h] [rbp-39h] BYREF
  PVOID Object; // [rsp+68h] [rbp-31h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber[2]; // [rsp+70h] [rbp-29h] BYREF
  PHYSICAL_ADDRESS v242; // [rsp+78h] [rbp-21h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-19h] BYREF
  struct _PROCESSOR_NUMBER *v245; // [rsp+110h] [rbp+77h] BYREF
  va_list va; // [rsp+110h] [rbp+77h]
  struct _SLIST_ENTRY *v247; // [rsp+118h] [rbp+7Fh]
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v248; // [rsp+120h] [rbp+87h]
  ULONG *v249; // [rsp+128h] [rbp+8Fh]
  PHYSICAL_ADDRESS v250; // [rsp+130h] [rbp+97h]
  PHYSICAL_ADDRESS v251; // [rsp+138h] [rbp+9Fh]
  __int64 *v252; // [rsp+140h] [rbp+A7h] BYREF
  va_list va1; // [rsp+140h] [rbp+A7h]
  __int64 v254; // [rsp+148h] [rbp+AFh]
  __int64 v255; // [rsp+150h] [rbp+B7h]
  va_list va2; // [rsp+158h] [rbp+BFh] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v245 = va_arg(va1, struct _PROCESSOR_NUMBER *);
  v2 = v245;
  v247 = va_arg(va1, struct _SLIST_ENTRY *);
  v248 = va_arg(va1, struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *);
  v249 = va_arg(va1, ULONG *);
  v250.QuadPart = va_arg(va1, _QWORD);
  v251.QuadPart = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v252 = va_arg(va2, __int64 *);
  v254 = va_arg(va2, _QWORD);
  v255 = va_arg(va2, _QWORD);
  Object = 0LL;
  v4 = 0LL;
  v237 = 0LL;
  v5 = 0LL;
  v238 = 0LL;
  v6 = 0LL;
  v7 = a2;
  Pool = -1056964606;
  v9 = 0x140000000uLL;
  switch ( a1 )
  {
    case 0x7Au:
    case 0x7Bu:
    case 0x7Cu:
    case 0x7Du:
    case 0x82u:
    case 0x83u:
      if ( !v7 )
        goto LABEL_3;
      return 3238002694LL;
    default:
      if ( v7 )
      {
LABEL_3:
        v10 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_d(WPP_GLOBAL_Control->AttachedDevice, 82LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids, a1);
          v4 = v238;
          v9 = 0x140000000uLL;
          v7 = a2;
        }
        if ( StorpControl )
        {
          if ( v7 )
          {
            RaidpPortGetAdapter(v7, &v237, &v238);
            v10 = (PDEVICE_OBJECT)v237;
            if ( v237 )
            {
              v128 = ExtensionExtendedFuncReplace(&dword_1401721E8, a1, v237, (struct _PROCESSOR_NUMBER **)va);
              Object = 0LL;
              if ( v128 != -1073741822 )
                return (unsigned int)RaidNtStatusToStorStatus(v128);
            }
            v7 = a2;
            v9 = 0x140000000uLL;
            v4 = v238;
          }
          if ( StorpControl )
          {
            v10 = (PDEVICE_OBJECT)v237;
            if ( v237 )
            {
              ExtensionExtendedFuncPre(&dword_1401721E8, a1, v237, (struct _PROCESSOR_NUMBER **)va);
              v7 = a2;
              v9 = 0x140000000uLL;
              Object = 0LL;
              v4 = v238;
            }
          }
        }
        if ( a1 == 47 )
        {
          v13 = (LARGE_INTEGER *)v247;
          v14 = (union _LARGE_INTEGER *)v245;
          if ( v247 )
          {
            if ( v245 )
              *(_QWORD *)&v245->Group = 1LL;
            if ( UseQPCTime )
              PerformanceCounter = KeQueryPerformanceCounter(v14);
            else
              PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
            *v13 = PerformanceCounter;
            Pool = 0;
            goto LABEL_12;
          }
          goto LABEL_33;
        }
        if ( a1 != 51 )
        {
          if ( a1 != 109 )
          {
            if ( a1 == 106 )
            {
              v22 = (struct _KDPC_WATCHDOG_INFORMATION *)v245;
              if ( v245 )
              {
                if ( KeGetCurrentIrql() < 2u )
                {
                  v127 = KfRaiseIrql(2u);
                  DpcWatchdogInformation = KeQueryDpcWatchdogInformation(v22);
                  KeLowerIrql(v127);
                }
                else
                {
                  DpcWatchdogInformation = KeQueryDpcWatchdogInformation(v22);
                }
LABEL_39:
                StartIoPerfParams = RaidNtStatusToStorStatus(DpcWatchdogInformation);
                goto LABEL_11;
              }
              goto LABEL_33;
            }
            switch ( a1 )
            {
              case 0u:
                Pool = StorpAllocatePool(v7, (unsigned int)v245, (unsigned int)v247, v248);
                goto LABEL_12;
              case 1u:
                Pool = StorpFreePool(v7, v245);
                goto LABEL_12;
              case 2u:
                Pool = StorpAllocateMdl(v7, v245, (unsigned int)v247, v248);
                goto LABEL_12;
              case 3u:
                Pool = StorpFreeMdl(v7, v245);
                goto LABEL_12;
              case 4u:
                Pool = StorpBuildMdlForNonPagedPool(v7, v245);
                goto LABEL_12;
              case 5u:
                Pool = StorpGetSystemAddress(v7, v245, 0LL, v247);
                goto LABEL_12;
              case 6u:
                Pool = StorpGetOriginalMdl(v7, (__int64)v245, 0, v247);
                goto LABEL_12;
              case 7u:
                Pool = StorpCompleteServiceIrp(v7, v245);
                goto LABEL_12;
              case 8u:
                Pool = StorpGetDeviceObjects(v7, v245, v247, v248);
                goto LABEL_12;
              case 9u:
                Pool = StorBuildScatterGatherListProxy(v7, (struct _PROCESSOR_NUMBER **)va);
                goto LABEL_12;
              case 0xAu:
                Pool = StorpPutScatterGatherList(v7, v245, (unsigned __int8)v247);
                goto LABEL_12;
              case 0xBu:
                Pool = StorpAcquireMSISpinLock(v7, (unsigned int)v245, v247);
                goto LABEL_12;
              case 0xCu:
                Pool = StorpReleaseMSISpinLock(v7, (unsigned int)v245, (KIRQL)v247);
                goto LABEL_12;
              case 0xDu:
                Pool = StorpGetMSIInfo(v7, (unsigned int)v245, v247);
                goto LABEL_12;
              case 0xEu:
                v29 = (unsigned __int8)v245;
                v30 = v247;
                if ( v237 )
                  goto LABEL_327;
                if ( v4 )
                  goto LABEL_326;
                RaidpPortGetAdapter(v7, &v237, &v238);
                if ( v237 )
                {
LABEL_327:
                  StartIoPerfParams = RaidInitializePerfOpts(v237, v29, v30);
                }
                else
                {
                  v4 = v238;
                  if ( !v238 )
                    goto LABEL_33;
LABEL_326:
                  StartIoPerfParams = NvmeInitializePerfOpts(v4, v29, v30);
                }
                goto LABEL_11;
              case 0xFu:
                v24 = v245;
                v25 = v247;
                if ( v237 )
                  goto LABEL_43;
                if ( v4 )
                  goto LABEL_56;
                RaidpPortGetAdapter(v7, &v237, &v238);
                if ( v237 )
                {
LABEL_43:
                  StartIoPerfParams = RaidGetStartIoPerfParams((__int64)v237, (__int64)v24, v25);
                  goto LABEL_11;
                }
                v4 = v238;
                if ( !v238 )
                  goto LABEL_33;
LABEL_56:
                StartIoPerfParams = RaidGetStartIoPerfParams((__int64)v4, (__int64)v24, v25);
                goto LABEL_11;
              case 0x10u:
                Pool = StorpLogSystemEvent(v7, v245, v247);
                goto LABEL_12;
              case 0x11u:
                Pool = StorpGetCurrentProcessorNumber(v7, v245);
                goto LABEL_12;
              case 0x12u:
                Pool = StorpGetActiveGroupCount(v7, v245);
                goto LABEL_12;
              case 0x13u:
                Pool = StorpGetGroupAffinity(v7, (unsigned __int16)v245, v247);
                goto LABEL_12;
              case 0x14u:
                Pool = StorpGetActiveNodeCount(v7, v245);
                goto LABEL_12;
              case 0x15u:
                Pool = StorpGetNodeAffinity(v7, (unsigned int)v245, v247);
                goto LABEL_12;
              case 0x16u:
                Pool = StorpGetHighestNodeNumber(v7, v245);
                goto LABEL_12;
              case 0x17u:
                Pool = StorpGetLogicalProcessorRelationship(v7, v245, (LOGICAL_PROCESSOR_RELATIONSHIP)v247, v248, v249);
                goto LABEL_12;
              case 0x18u:
                Pool = StorpAllocateContiguousMemorySpecifyCacheNode(
                         v7,
                         (__int64)v245,
                         (__int64)v247,
                         (__int64)v248,
                         (__int64)v249,
                         v250.LowPart,
                         v251.LowPart,
                         v252);
                goto LABEL_12;
              case 0x19u:
                MmFreeContiguousMemorySpecifyCache(v245, (SIZE_T)v247, (MEMORY_CACHING_TYPE)v248);
                Pool = 0;
                goto LABEL_12;
              case 0x1Au:
                Pool = StorPortpSetPowerSettingNotificationGuids(v7, (unsigned int)v245, v247);
                goto LABEL_12;
              case 0x1Bu:
                Pool = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD))StorPortpInvokeAcpiMethod)(
                         v7,
                         v245,
                         (unsigned int)v247,
                         v248,
                         (_DWORD)v249,
                         (PHYSICAL_ADDRESS)v250.QuadPart,
                         v251.LowPart,
                         v252);
                goto LABEL_12;
              case 0x1Cu:
                Pool = StorpGetRequestInfo(v7, v245, v247);
                goto LABEL_12;
              case 0x1Du:
                Pool = StorpInitializeWorkItem(v7, v245);
                goto LABEL_12;
              case 0x1Eu:
                v39 = 0LL;
                goto LABEL_121;
              case 0x1Fu:
                StartIoPerfParams = StorpFreeWorkItem(v7, v245);
                goto LABEL_11;
              case 0x20u:
                StartIoPerfParams = StorpInitializeTimer(v7, v245);
                goto LABEL_11;
              case 0x21u:
                StartIoPerfParams = StorpRequestTimer(
                                      v7,
                                      (__int64)v245,
                                      (signed __int64)v247,
                                      (__int64)v248,
                                      (__int64)v249,
                                      v250.QuadPart);
                goto LABEL_11;
              case 0x22u:
                StartIoPerfParams = StorpFreeTimer(v7, v245);
                goto LABEL_11;
              case 0x23u:
                InitializeSListHead((PSLIST_HEADER)v245);
                Pool = 0;
                goto LABEL_12;
              case 0x24u:
                v34 = v247;
                v34->Next = ExpInterlockedFlushSList((PSLIST_HEADER)v245);
                Pool = 0;
                goto LABEL_12;
              case 0x25u:
                v35 = v247;
                v35->Next = ExpInterlockedPopEntrySList((PSLIST_HEADER)v245);
                Pool = 0;
                goto LABEL_12;
              case 0x26u:
                v36 = v248;
                *(_QWORD *)&v36->Relationship = ExpInterlockedPushEntrySList((PSLIST_HEADER)v245, v247);
                Pool = 0;
                goto LABEL_12;
              case 0x27u:
                v37 = v247;
                LOWORD(v37->Next) = ExQueryDepthSList((PSLIST_HEADER)v245);
                Pool = 0;
                goto LABEL_12;
              case 0x28u:
                if ( !v245 || !v247 )
                  goto LABEL_33;
                if ( v245->Number == 40 )
                {
                  v33 = *(_QWORD *)&v245[20].Group;
                }
                else
                {
                  v129 = *(_QWORD *)&v245[12].Group;
                  if ( !v129 || *(_DWORD *)v129 != 523124044 )
                    goto LABEL_336;
                  v33 = *(_QWORD *)(v129 + 176);
                }
                if ( v33 )
                {
                  Pool = ((int)IoGetActivityIdIrp(v33, v247) >> 31) & 0xC1000001;
                  goto LABEL_12;
                }
LABEL_336:
                Pool = -1056964607;
                if ( EtwActivityIdControl(3u, (LPGUID)v247) >= 0 )
                  Pool = 0;
                goto LABEL_12;
              case 0x29u:
                v38 = v245;
                if ( v237 )
                  goto LABEL_339;
                if ( v4 )
                  goto LABEL_12;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
LABEL_339:
                if ( v4 )
                  goto LABEL_12;
                if ( !v237 )
                  goto LABEL_33;
                v130 = v237[14];
                if ( v130 == -1 )
                {
                  Pool = -1056964599;
                  goto LABEL_12;
                }
                if ( !v38 || v38->Group != 1 || *(_DWORD *)&v38[1] < 4u )
                  goto LABEL_33;
                *(_WORD *)&v38->Number = v130;
                Pool = 0;
                v38[2].Group = -1;
                v38[2].Number = -1;
                goto LABEL_12;
              case 0x2Au:
                StartIoPerfParams = StorpGetOriginalMdl(v7, (__int64)v245, 1, v247);
                goto LABEL_11;
              case 0x2Bu:
                LOBYTE(v2) = 1;
                StartIoPerfParams = StorpGetSystemAddress(v7, v245, v2, v247);
                goto LABEL_11;
              case 0x2Cu:
                StartIoPerfParams = StorpGetDataInSgList(v7, v245, v247);
                goto LABEL_11;
              case 0x2Eu:
                StartIoPerfParams = StorpSetUnitAttributes(v7, v245, (unsigned int)v247);
                goto LABEL_11;
              case 0x30u:
                v40 = v245;
                v41 = v247;
                v42 = v248;
                if ( KeGetCurrentIrql() )
                {
                  Pool = -1056964600;
                  goto LABEL_12;
                }
                if ( v40 )
                  StartIoPerfParams = StorpUnitInitializePoFxPower(a2, v40, v41, v42);
                else
                  StartIoPerfParams = StorpAdapterInitializePoFxPower(a2, v41, v42);
                goto LABEL_11;
              case 0x31u:
                Pool = 0;
                v43 = 0;
                v44 = v245;
                v45 = v247;
                ProcNumber[0] = (struct _PROCESSOR_NUMBER)v248;
                LODWORD(v239) = (_DWORD)v249;
                if ( v237 )
                  goto LABEL_350;
                if ( v4 )
                  goto LABEL_356;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
LABEL_350:
                if ( v4 )
                  goto LABEL_356;
                if ( !v45 )
                  goto LABEL_358;
                AssociatedXrb = (_DWORD *)RaidGetAssociatedXrb(v45, v9);
                v6 = AssociatedXrb;
                if ( !AssociatedXrb || *AssociatedXrb != 523124044 )
                  goto LABEL_33;
                if ( BYTE2(v45->Next) == 40 )
                  v43 = *((_DWORD *)&v45[1].Next + 2);
                else
                  v43 = *((_DWORD *)&v45->Next + 3);
LABEL_358:
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql > 2u )
                {
                  Pool = -1056964600;
                  goto LABEL_12;
                }
                if ( (_DWORD)v239 || !v237 )
                  goto LABEL_33;
                if ( v44 )
                {
                  if ( v44->Group != 1 )
                    goto LABEL_33;
                  if ( *(_DWORD *)&v44[1] < 4u )
                    goto LABEL_33;
                  LODWORD(v239) = 0;
                  LOWORD(v239) = v44[2].Group;
                  BYTE2(v239) = v44[2].Number;
                  Unit = RaidAdapterFindUnit(v237, (unsigned int)v239);
                  v134 = Unit;
                  if ( !Unit )
                    goto LABEL_33;
                  if ( RuntimePowerDisabled )
                    goto LABEL_12;
                  if ( (v43 & 0x100800) != 0 )
                  {
                    if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(Unit) )
                    {
                      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v134 + 1864));
                      goto LABEL_12;
                    }
                    if ( !(unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(*(_QWORD *)(v134 + 24)) )
                      goto LABEL_12;
                  }
                  if ( CurrentIrql == 2 || (*(_BYTE *)(v134 + 505) & 1) != 0 || *(char *)(v134 + 504) < 0 )
                    v135 = 2;
                  else
                    v135 = 0;
                  v136 = RaidUnitPoFxActivateComponentFromMiniport(v134, *(_DWORD *)ProcNumber, v135);
                  goto LABEL_379;
                }
                if ( RuntimePowerDisabled )
                  goto LABEL_12;
                if ( (unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(v237) && (v43 & 0x100800) == 0 )
                {
                  if ( CurrentIrql == 2 || (*((_BYTE *)v237 + 107) & 6) != 0 )
                    v137 = 2LL;
                  else
                    v137 = 0LL;
                  v136 = RaidAdapterPoFxActivateComponentFromMiniport(v237, *(_DWORD *)ProcNumber, v137);
LABEL_379:
                  Pool = v136;
                  if ( v6 )
                    *((_BYTE *)v6 + 16) |= 0x80u;
                  goto LABEL_12;
                }
                goto LABEL_249;
              case 0x32u:
                v26 = v245;
                v27 = v247;
                v28 = (unsigned int)v248;
                ProcNumber[0] = (struct _PROCESSOR_NUMBER)v249;
                if ( v237 )
                  goto LABEL_60;
                if ( v4 )
                  goto LABEL_12;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
LABEL_60:
                if ( v4 )
                  goto LABEL_12;
                Pool = 0;
                if ( !v27 )
                  goto LABEL_62;
                v46 = RaidGetAssociatedXrb(v27, v9);
                v6 = (_DWORD *)v46;
                if ( !v46 || *(_DWORD *)v46 != 523124044 )
                  goto LABEL_33;
                if ( *(char *)(v46 + 16) >= 0 )
                  goto LABEL_12;
LABEL_62:
                if ( KeGetCurrentIrql() > 2u && !v6 )
                {
                  Pool = -1056964600;
                  goto LABEL_12;
                }
                if ( *(_DWORD *)ProcNumber || !v237 )
                  goto LABEL_33;
                if ( v26 )
                {
                  if ( v26->Group != 1 )
                    goto LABEL_33;
                  if ( *(_DWORD *)&v26[1] < 4u )
                    goto LABEL_33;
                  LODWORD(v239) = 0;
                  LOWORD(v239) = v26[2].Group;
                  BYTE2(v239) = v26[2].Number;
                  v138 = RaidAdapterFindUnit(v237, (unsigned int)v239);
                  if ( !v138 )
                    goto LABEL_33;
                  if ( RuntimePowerDisabled )
                    goto LABEL_12;
                  if ( KeGetCurrentIrql() > 2u )
                  {
                    *((_BYTE *)v6 + 17) |= 2u;
                    Pool = -1056964596;
                    v6[187] = v28;
                    goto LABEL_12;
                  }
                  StartIoPerfParams = RaidUnitPoFxIdleComponentFromMiniport(v138, v28, 0LL);
                }
                else
                {
                  if ( RuntimePowerDisabled )
                    goto LABEL_12;
                  if ( !(unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(v237) )
                    goto LABEL_249;
                  if ( KeGetCurrentIrql() > 2u )
                  {
                    *((_BYTE *)v6 + 17) |= 1u;
                    Pool = -1056964596;
                    v6[187] = v28;
                    goto LABEL_12;
                  }
                  StartIoPerfParams = RaidAdapterPoFxIdleComponentFromMiniport((__int64)v237, v28);
                }
                goto LABEL_11;
              case 0x34u:
                v47 = v245;
                v48 = (unsigned int)v247;
                v49 = v248;
                if ( v237 )
                  goto LABEL_394;
                if ( v4 )
                  goto LABEL_12;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
LABEL_394:
                if ( v4 )
                  goto LABEL_12;
                if ( KeGetCurrentIrql() > 2u )
                {
                  Pool = -1056964600;
                  goto LABEL_12;
                }
                if ( !v237 )
                  goto LABEL_33;
                if ( v47 )
                {
                  if ( v47->Group != 1 )
                    goto LABEL_33;
                  if ( *(_DWORD *)&v47[1] < 4u )
                    goto LABEL_33;
                  Pool = 0;
                  LODWORD(v239) = LOBYTE(v47[2].Group);
                  *(_WORD *)((char *)&v239 + 1) = *(unsigned __int16 *)((char *)&v47[2].Group + 1);
                  v139 = RaidAdapterFindUnit(v237, (unsigned int)v239);
                  v140 = v139;
                  if ( !v139 )
                    goto LABEL_33;
                  if ( RuntimePowerDisabled )
                    goto LABEL_12;
                  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(v139) )
                  {
                    v141 = *(_QWORD **)(v140 + 1872);
                    v142 = *(_DWORD *)(v141[1] + 8LL);
                    if ( v48 + 1 >= v142 && v48 + 1 <= v142 )
                    {
                      PoFxSetComponentResidency(*v141, v48, v49);
                      goto LABEL_408;
                    }
                    goto LABEL_407;
                  }
                  goto LABEL_249;
                }
                if ( RuntimePowerDisabled )
                {
                  Pool = 0;
                  goto LABEL_12;
                }
                if ( !(unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(v237) )
                  goto LABEL_249;
                v143 = (_QWORD *)*((_QWORD *)v237 + 628);
                v144 = *(_DWORD *)(v143[1] + 8LL);
                if ( v48 + 1 >= v144 && v48 + 1 <= v144 )
                {
                  PoFxSetComponentResidency(*v143, v48, v49);
                  Pool = 0;
                  goto LABEL_12;
                }
                goto LABEL_33;
              case 0x35u:
                v50 = v245;
                v51 = v247;
                v52 = v248;
                v53 = v249;
                v54 = v252;
                *(PHYSICAL_ADDRESS *)&ProcNumber[0].Group = v250;
                Object = (PVOID)v251.QuadPart;
                if ( v237 )
                  goto LABEL_415;
                if ( v4 )
                  goto LABEL_356;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
LABEL_415:
                if ( v4 )
                {
                  Pool = -1056964606;
                  goto LABEL_12;
                }
                if ( KeGetCurrentIrql() > 2u )
                {
                  if ( v54 )
                    *v54 = 0LL;
                  Pool = -1056964600;
                  goto LABEL_12;
                }
                if ( !v237 )
                  goto LABEL_33;
                if ( v50 )
                {
                  if ( v50->Group != 1 )
                    goto LABEL_33;
                  if ( *(_DWORD *)&v50[1] < 4u )
                    goto LABEL_33;
                  LODWORD(v239) = 0;
                  LOWORD(v239) = v50[2].Group;
                  BYTE2(v239) = v50[2].Number;
                  v145 = RaidAdapterFindUnit(v237, (unsigned int)v239);
                  v140 = v145;
                  if ( !v145 )
                    goto LABEL_33;
                  if ( RuntimePowerDisabled )
                  {
                    Pool = 0;
                    goto LABEL_12;
                  }
                  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(v145) )
                  {
                    v146 = PoFxPowerControl(
                             **(_QWORD **)(v140 + 1872),
                             v51,
                             v52,
                             v53,
                             *(_QWORD *)&ProcNumber[0].Group,
                             Object,
                             v54);
                    Pool = RaidNtStatusToStorStatus(v146);
                    goto LABEL_408;
                  }
                }
                else
                {
                  if ( RuntimePowerDisabled )
                  {
                    Pool = 0;
                    goto LABEL_12;
                  }
                  if ( (unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(v237) )
                  {
                    v147 = PoFxPowerControl(
                             **((_QWORD **)v237 + 628),
                             v51,
                             v52,
                             v53,
                             *(_QWORD *)&ProcNumber[0].Group,
                             Object,
                             v54);
                    StartIoPerfParams = RaidNtStatusToStorStatus(v147);
                    goto LABEL_11;
                  }
                }
                goto LABEL_249;
              case 0x36u:
                StartIoPerfParams = StorpFlushDataBufferMdl(v7, v245);
                goto LABEL_11;
              case 0x37u:
                v60 = v245;
                v61 = v247;
                v62 = v248;
                if ( v237 )
                  goto LABEL_471;
                if ( v4 )
                  goto LABEL_12;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
LABEL_471:
                if ( v4 )
                  goto LABEL_12;
                if ( !v62 || !v237 )
                  goto LABEL_33;
                Pool = 0;
                v62->Relationship = RelationProcessorCore;
                if ( !v60 )
                  goto LABEL_479;
                if ( v60->Group != 1 || *(_DWORD *)&v60[1] < 4u )
                  goto LABEL_33;
                LODWORD(v239) = LOBYTE(v60[2].Group);
                *(_WORD *)((char *)&v239 + 1) = *(unsigned __int16 *)((char *)&v60[2].Group + 1);
                Pool = -1056964602;
                if ( !RaidAdapterFindUnit(v237, (unsigned int)v239) )
                  goto LABEL_12;
                Pool = 0;
LABEL_479:
                if ( !memcmp(v61, &unk_140156B08, 0x10uLL) )
                {
                  v62->Relationship = (unsigned __int8)g_InWinPE;
                  goto LABEL_12;
                }
                if ( !memcmp(v61, &unk_140156AD8, 0x10uLL) )
                {
                  v62->Relationship = RelationNumaNode;
                  goto LABEL_12;
                }
                if ( memcmp(v61, &unk_140156AE8, 0x10uLL) )
                  goto LABEL_496;
                v62->Relationship = (unsigned __int8)ExIsSoftBoot();
                goto LABEL_12;
              case 0x38u:
                Pool = StorpGetProcessorIndexFromNumber(v7, v245, (ULONG *)v247);
                goto LABEL_12;
              case 0x39u:
                v55 = (unsigned int)v247;
                if ( v245 )
                  goto LABEL_33;
                if ( v237 )
                  goto LABEL_434;
                if ( v4 )
                  goto LABEL_12;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
LABEL_434:
                if ( v4 )
                  goto LABEL_12;
                if ( !v237 )
                  goto LABEL_33;
                if ( RuntimePowerDisabled )
                {
                  Pool = 0;
                  goto LABEL_12;
                }
                if ( !(unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(v237) || *((char *)v237 + 107) < 0 )
                  goto LABEL_210;
                LOBYTE(v148) = 1;
                RaidAdapterPoFxSetDeviceIdleTimeout(v237, v55, v148, 0LL);
                if ( !StorEtwLoggingEnabled || (byte_140173442 & 0x10) == 0 )
                  goto LABEL_49;
                McTemplateK0pqqq_EtwWriteTransfer(
                  (unsigned int)&StorPortEventProvider_Context,
                  (unsigned int)&EventAdapterIdleTimeoutSet,
                  0,
                  **((_QWORD **)v237 + 628),
                  v237[14],
                  v55,
                  v237[1260]);
                Pool = 0;
                goto LABEL_12;
              case 0x3Au:
              case 0x3Bu:
              case 0x3Cu:
                goto LABEL_12;
              case 0x3Du:
                if ( !v245 )
                  goto LABEL_33;
                LOBYTE(v245->Group) = g_OSisUpgrade;
                Pool = 0;
                goto LABEL_12;
              case 0x3Eu:
                LOBYTE(v9) = 1;
                StartIoPerfParams = StorAdapterDeviceRegistryKeyProxy(v7, v9, (struct _PROCESSOR_NUMBER **)va);
                goto LABEL_11;
              case 0x3Fu:
                StartIoPerfParams = StorAdapterDeviceRegistryKeyProxy(v7, 0LL, (struct _PROCESSOR_NUMBER **)va);
                goto LABEL_11;
              case 0x40u:
                if ( !v237 && !v4 )
                {
                  RaidpPortGetAdapter(v7, &v237, &v238);
                  v4 = v238;
                }
                if ( (unsigned int)v245 >= 0x15 )
                  goto LABEL_33;
                if ( v4 )
                {
                  if ( (v4[104] & 2) == 0 )
                    goto LABEL_210;
                  Pool = 0;
                  *((_QWORD *)v4 + 18) = *((_QWORD *)v4 + 18) & 0xFFFFFFFFFFFFFFFEuLL | ((_DWORD)v245 == 20);
                  goto LABEL_12;
                }
                if ( !v237 )
                  goto LABEL_33;
                if ( (v237[156] & 2) != 0 )
                {
                  v237[1085] = (int)v245;
                  Pool = 0;
                  goto LABEL_12;
                }
                goto LABEL_210;
              case 0x41u:
                v56 = (int)v247;
                v57 = (int)v248;
                ProcNumber[0] = (struct _PROCESSOR_NUMBER)v249;
                QuadPart = v250.QuadPart;
                if ( v245 )
                  goto LABEL_33;
                if ( v237 )
                  goto LABEL_443;
                if ( v4 )
                  goto LABEL_12;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
LABEL_443:
                if ( v4 )
                  goto LABEL_12;
                if ( !v237 )
                  goto LABEL_33;
                if ( RuntimePowerDisabled )
                {
                  Pool = 0;
                  goto LABEL_12;
                }
                if ( !(unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(v237) )
                  goto LABEL_210;
                v149 = *((_QWORD *)v237 + 628);
                if ( *(_BYTE *)(v149 + 28) )
                  goto LABEL_210;
                Pool = 0;
                D3ColdInterface = RaidRegisterPerfStates(
                                    *((_QWORD *)v237 + 1),
                                    v56,
                                    v57,
                                    (unsigned int)ProcNumber,
                                    QuadPart,
                                    0LL,
                                    *(_QWORD *)v149);
                if ( D3ColdInterface < 0 )
                  goto LABEL_265;
                if ( (unsigned __int8)RaidAdapterCacheOperationalPowerRange(
                                        *((_QWORD *)v237 + 628),
                                        *(_DWORD *)ProcNumber,
                                        QuadPart) )
                {
                  *(_QWORD *)(*((_QWORD *)v237 + 628) + 48LL) = -1LL;
                  *(_QWORD *)(*((_QWORD *)v237 + 628) + 56LL) = -1LL;
                  *(_QWORD *)(*((_QWORD *)v237 + 628) + 64LL) = -1LL;
                }
                *(_BYTE *)(*((_QWORD *)v237 + 628) + 28LL) = ProcNumber[0].Group;
                StorpLogRegisterAdapterPerfStates(v237, QuadPart);
                goto LABEL_12;
              case 0x42u:
                v150 = (unsigned int)v247;
                v151 = (unsigned int)v248;
                v152 = (unsigned int)v249;
                LowPart = v250.LowPart;
                Object = (PVOID)v251.QuadPart;
                if ( v245 || (_DWORD)v248 )
                  goto LABEL_33;
                if ( v237 )
                  goto LABEL_458;
                if ( v4 )
                  goto LABEL_12;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
LABEL_458:
                if ( v4 || !v237 )
                  goto LABEL_12;
                if ( RuntimePowerDisabled )
                {
                  Pool = 0;
                  goto LABEL_12;
                }
                if ( !(unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(v237) )
                  goto LABEL_210;
                v154 = KeGetCurrentIrql();
                v155 = *((_QWORD *)v237 + 628);
                v156 = *(unsigned __int8 *)(v155 + 28);
                if ( !(_BYTE)v156 || v152 >= v156 )
                  goto LABEL_33;
                if ( _interlockedbittestandset((volatile signed __int32 *)(v155 + 120), 0) )
                {
                  Pool = -1056964599;
                }
                else
                {
                  *(_DWORD *)(*((_QWORD *)v237 + 628) + 128LL) = v152;
                  if ( v154 >= 2u )
                    v151 = 2;
                  *(_DWORD *)(*((_QWORD *)v237 + 628) + 136LL) = LowPart;
                  PoFxIssueComponentPerfStateChange(
                    **((_QWORD **)v237 + 628),
                    v151,
                    v150,
                    *((_QWORD *)v237 + 628) + 128LL,
                    Object);
                  Pool = 0;
                }
                goto LABEL_12;
              case 0x43u:
                if ( KeGetCurrentIrql() )
                {
                  Pool = -1056964600;
                  goto LABEL_12;
                }
                Pool = -1056964602;
                v157 = v247;
                v158 = v245;
                if ( !v247 )
                  goto LABEL_12;
                LOBYTE(v247->Next) = 0;
                if ( v237 )
                  goto LABEL_489;
                if ( v238 )
                  goto LABEL_496;
                RaidpPortGetAdapter(a2, &v237, &v238);
LABEL_489:
                if ( v238 )
                  goto LABEL_496;
                if ( !v237 )
                  goto LABEL_12;
                if ( v158 )
                {
                  if ( v158->Group != 1 )
                    goto LABEL_12;
                  if ( *(_DWORD *)&v158[1] < 4u )
                    goto LABEL_12;
                  LODWORD(v239) = 0;
                  LOWORD(v239) = v158[2].Group;
                  BYTE2(v239) = v158[2].Number;
                  v159 = (int *)RaidAdapterFindUnit(v237, (unsigned int)v239);
                  if ( !v159 )
                    goto LABEL_12;
                }
                else
                {
                  v159 = v237;
                }
                v160 = (struct _DEVICE_OBJECT *)*((_QWORD *)v159 + 1);
                if ( !v160 )
                  goto LABEL_12;
                Pool = 0;
                Object = 0LL;
                D3ColdInterface = RaidGetD3ColdInterface(v160);
                if ( D3ColdInterface >= 0 )
                {
                  LOBYTE(v157->Next) = RaidGetD3ColdCapability(Object);
                  goto LABEL_12;
                }
                goto LABEL_265;
              case 0x44u:
                v31 = v245;
                v32 = v247;
                if ( !v237 && !v4 )
                  RaidpPortGetAdapter(v7, &v237, &v238);
                if ( v31 || !v237 )
                  goto LABEL_249;
                StartIoPerfParams = RaidInitializeRpmb(v237, v32);
                goto LABEL_11;
              case 0x45u:
                StartIoPerfParams = StorpAllocateHostMemoryBuffer(
                                      v7,
                                      (int)v245,
                                      (int)v247,
                                      (int)v248,
                                      (int)v249,
                                      v250,
                                      v251,
                                      (__int64)v252,
                                      v254,
                                      v255);
                goto LABEL_11;
              case 0x46u:
                StartIoPerfParams = StorpFreeHostMemoryBuffer(v7, v245, (unsigned int)v247);
                goto LABEL_11;
              case 0x47u:
                if ( v237 )
                  goto LABEL_508;
                if ( v4 )
                  goto LABEL_12;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
LABEL_508:
                if ( v4 )
                  goto LABEL_12;
                if ( !v237 )
                  goto LABEL_33;
                if ( !*((_BYTE *)v237 + 580) )
                {
                  Pool = -1056964601;
                  goto LABEL_12;
                }
                v161 = v247;
                v162 = (unsigned int)v248;
                if ( !v245 || !v247 )
                  goto LABEL_33;
                if ( v245->Number == 40 )
                {
                  v163 = *(_QWORD *)&v245[20].Group;
                }
                else
                {
                  v164 = *(_QWORD *)&v245[12].Group;
                  if ( !v164 || *(_DWORD *)v164 != 523124044 )
                    goto LABEL_33;
                  v163 = *(_QWORD *)(v164 + 176);
                }
                if ( !v163 )
                  goto LABEL_33;
                if ( KeGetCurrentIrql() > 2u )
                {
                  Pool = -1056964600;
                  goto LABEL_12;
                }
                if ( !v162 )
                {
                  Pool = 0;
                  goto LABEL_12;
                }
                v165 = IoPropagateIrpExtension(v163, v161, v162);
                StartIoPerfParams = RaidNtStatusToStorStatus(v165);
                goto LABEL_11;
              case 0x48u:
                v63 = v248;
                *(_QWORD *)&v63->Relationship = ExInterlockedInsertHeadList(
                                                  (PLIST_ENTRY)v245,
                                                  (PLIST_ENTRY)v247,
                                                  (PKSPIN_LOCK)v249);
                Pool = 0;
                goto LABEL_12;
              case 0x49u:
                v64 = v248;
                *(_QWORD *)&v64->Relationship = ExInterlockedInsertTailList(
                                                  (PLIST_ENTRY)v245,
                                                  (PLIST_ENTRY)v247,
                                                  (PKSPIN_LOCK)v249);
                Pool = 0;
                goto LABEL_12;
              case 0x4Au:
                v65 = v247;
                v65->Next = (_SLIST_ENTRY *)ExInterlockedRemoveHeadList((PLIST_ENTRY)v245, (PKSPIN_LOCK)v248);
                Pool = 0;
                goto LABEL_12;
              case 0x4Bu:
                KeInitializeSpinLock((PKSPIN_LOCK)&v245->Group);
                Pool = 0;
                goto LABEL_12;
              case 0x4Cu:
                StartIoPerfParams = StorpGetPfns(v7, (__int64)v245, v247, v248, v249, (PHYSICAL_ADDRESS)v250.QuadPart);
                goto LABEL_11;
              case 0x4Du:
                v66 = v245;
                if ( !v245 )
                  goto LABEL_33;
                if ( v237 )
                  goto LABEL_525;
                if ( v4 )
                  goto LABEL_12;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
LABEL_525:
                if ( v4 )
                  goto LABEL_12;
                if ( !v237 )
                  goto LABEL_33;
                StartIoPerfParams = RaidInitializeCryptoEngine(v237, v66);
                goto LABEL_11;
              case 0x4Eu:
                v166 = v247;
                if ( !v245 || !v247 )
                  goto LABEL_33;
                v167 = RaidGetAssociatedXrb(v245, 0x140000000uLL);
                Pool = 0;
                LODWORD(v166->Next) = **(_DWORD **)(v167 + 792);
                HIDWORD(v166->Next) = *(_DWORD *)(*(_QWORD *)(v167 + 792) + 4LL);
                *((_DWORD *)&v166->Next + 2) = *(_DWORD *)(*(_QWORD *)(v167 + 792) + 8LL);
                v166[1].Next = *(_SLIST_ENTRY **)(*(_QWORD *)(v167 + 792) + 16LL);
                goto LABEL_12;
              case 0x4Fu:
                v67 = v247;
                v68 = v245;
                if ( !v247 )
                  goto LABEL_33;
                Next = (unsigned int)v247[3].Next;
                if ( Next > 0x1000 )
                {
                  Pool = -1056964598;
                  goto LABEL_12;
                }
                if ( Next )
                {
                  if ( !*((_QWORD *)&v247[3].Next + 1) )
                    goto LABEL_33;
                }
                else if ( *((_QWORD *)&v247[3].Next + 1) )
                {
                  goto LABEL_33;
                }
                if ( v237 )
                  goto LABEL_538;
                if ( v4 )
                  goto LABEL_12;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
LABEL_538:
                if ( v4 )
                  goto LABEL_12;
                v168 = v237;
                if ( !v237 )
                  goto LABEL_49;
                v169 = 0LL;
                goto LABEL_541;
              case 0x50u:
                v72 = (int)v245;
                if ( v237 )
                  goto LABEL_552;
                if ( v4 )
                  goto LABEL_12;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
LABEL_552:
                if ( v4 )
                  goto LABEL_12;
                if ( !v237 )
                  goto LABEL_33;
                if ( (v237[26] & 0x10) != 0 )
                {
                  Pool = 0;
                  v237[147] = v72;
                }
                else
                {
                  Pool = -1056964601;
                }
                goto LABEL_12;
              case 0x51u:
                if ( (_DWORD)v245 )
                  StorDelayExecution((ULONG)v245);
                goto LABEL_49;
              case 0x52u:
                v170 = v252;
                v171 = v254;
                v172 = v250.LowPart;
                v173 = v251.LowPart;
                v174 = (int)v245;
                v175 = (int)v247;
                v176 = (int)v248;
                v177 = v249;
                Object = v252;
                v242.QuadPart = v254;
                ProcNumber[0] = (struct _PROCESSOR_NUMBER)v250.LowPart;
                LODWORD(v239) = v251.LowPart;
                if ( v237 )
                  goto LABEL_565;
                if ( v4 )
                  goto LABEL_568;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
                v172 = (unsigned int)ProcNumber[0];
                v173 = (unsigned int)v239;
                v170 = (__int64 *)Object;
                v171 = v242.QuadPart;
LABEL_565:
                if ( v4 )
                {
LABEL_568:
                  StartIoPerfParams = NvmeAllocateContiguousMemorySpecifyCacheNodeEx(
                                        (_DWORD)v4,
                                        v174,
                                        v175,
                                        v176,
                                        (__int64)v177,
                                        v172,
                                        v173,
                                        (__int64)v170,
                                        v171);
                }
                else
                {
                  if ( !v237 )
                    goto LABEL_12;
                  StartIoPerfParams = StorpAllocateContiguousMemorySpecifyCacheNodeEx(
                                        (_DWORD)v237,
                                        v174,
                                        v175,
                                        v176,
                                        (__int64)v177,
                                        v172,
                                        v173,
                                        (__int64)v170,
                                        v171);
                }
                goto LABEL_11;
              case 0x53u:
                v75 = v245;
                v76 = v247;
                v77 = (unsigned int)v248;
                v78 = v249;
                if ( v237 )
                  goto LABEL_569;
                if ( v4 )
                  goto LABEL_572;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
LABEL_569:
                if ( v4 )
                {
LABEL_572:
                  StartIoPerfParams = NvmeFreeContiguousMemorySpecifyCacheEx(
                                        (_DWORD)v4,
                                        (_DWORD)v75,
                                        (_DWORD)v76,
                                        v77,
                                        (__int64)v78);
                }
                else
                {
                  if ( !v237 )
                    goto LABEL_12;
                  StartIoPerfParams = StorpFreeContiguousMemorySpecifyCacheEx(v237, v75, v76, v77, v78);
                }
                goto LABEL_11;
              case 0x54u:
                v73 = (int)v245;
                v74 = (int)v247;
                if ( v237 )
                  goto LABEL_557;
                if ( v4 )
                  goto LABEL_12;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
LABEL_557:
                if ( v4 )
                  goto LABEL_12;
                if ( !v237 )
                  goto LABEL_33;
                if ( (v237[26] & 0x10) != 0 )
                {
                  Pool = 0;
                  v237[147] = v73;
                  v237[148] = v74;
                }
                else
                {
                  Pool = -1056964601;
                }
                goto LABEL_12;
              case 0x55u:
              case 0x56u:
              case 0x57u:
                if ( !v237 )
                {
                  if ( v4 )
                    goto LABEL_33;
                  RaidpPortGetAdapter(v7, &v237, &v238);
                  if ( !v237 )
                    goto LABEL_33;
                }
                StartIoPerfParams = StorEtwRaidMiniportEventProxy(v237, a1, (struct _PROCESSOR_NUMBER **)va);
                goto LABEL_11;
              case 0x58u:
                v79 = v248;
                Timer = ExAllocateTimer(v245, v247, 4LL);
                *(_QWORD *)&v79->Relationship = Timer;
                Pool = -1056964607;
                if ( Timer )
                  Pool = 0;
                goto LABEL_12;
              case 0x59u:
                v81 = (_BYTE *)v250.QuadPart;
                if ( !v250.QuadPart )
                  goto LABEL_33;
                Pool = 0;
                *v81 = ExSetTimer(v245, v247, v248, v249);
                goto LABEL_12;
              case 0x5Au:
                v82 = v248;
                if ( !v248 )
                  goto LABEL_33;
                Pool = 0;
                v83 = ExCancelTimer(v245, v247);
                LOBYTE(v82->Relationship) = v83;
                if ( !v83 )
                  goto LABEL_210;
                goto LABEL_12;
              case 0x5Bu:
                v84 = (_BYTE *)v250.QuadPart;
                if ( !v250.QuadPart )
                  goto LABEL_33;
                Pool = 0;
                *v84 = ExDeleteTimer(v245, (unsigned __int8)v247, (unsigned __int8)v248, v249);
                goto LABEL_12;
              case 0x5Cu:
                Pool = StorpGetCurrentProcessorIndex(v7, v245);
                goto LABEL_12;
              case 0x5Du:
                StartIoPerfParams = StorAcquireSpinLockEx(v7, (int)v245, (__int64)v247, (__int64)v248);
                goto LABEL_11;
              case 0x5Eu:
                Pool = StorpGetProcessorCount(v7, v245);
                goto LABEL_12;
              case 0x5Fu:
                v85 = v247;
                if ( !v245 || !v247 )
                  goto LABEL_33;
                Pool = 0;
                LOBYTE(v85->Next) = KeRemoveQueueDpc((PRKDPC)v245);
                goto LABEL_12;
              case 0x60u:
                v67 = v247;
                v68 = v245;
                v70 = (unsigned int)v248;
                if ( !v247 )
                  goto LABEL_33;
                v71 = (unsigned int)v247[3].Next;
                if ( v71 > 0x1000 )
                {
                  Pool = -1056964598;
                  goto LABEL_12;
                }
                if ( v71 )
                {
                  if ( !*((_QWORD *)&v247[3].Next + 1) )
                    goto LABEL_33;
                }
                else if ( *((_QWORD *)&v247[3].Next + 1) )
                {
                  goto LABEL_33;
                }
                if ( v237 )
                  goto LABEL_549;
                if ( v4 )
                  goto LABEL_12;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
LABEL_549:
                if ( v4 )
                  goto LABEL_12;
                v168 = v237;
                if ( !v237 )
                  goto LABEL_49;
                v169 = v70;
LABEL_541:
                StorpTelemetryMiniportEvent(v168, v68, v67, v169);
                Pool = 0;
                goto LABEL_12;
              case 0x61u:
                v86 = v247;
                if ( (unsigned int)v245 >= 2 || !v247 )
                {
                  Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledPreCheck(v10, 0x140000000uLL);
                  Pool = -1056964602;
                  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline()
                    && v86 )
                  {
                    Pool = -1056964606;
                  }
                  goto LABEL_12;
                }
                if ( (_DWORD)v245 )
                {
                  if ( (_DWORD)v245 != 1 )
                    goto LABEL_12;
                  if ( !v237 )
                  {
                    if ( v4 )
                      goto LABEL_12;
                    RaidpPortGetAdapter(v7, &v237, &v238);
                    v4 = v238;
                  }
                  if ( v4 )
                    goto LABEL_12;
                  if ( !v237 )
                    goto LABEL_33;
                  Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledPreCheck(v10, v9);
                  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
                    v178 = NvmeIceList != &NvmeIceList;
                  else
                    v178 = (v237[28] & 0x10) != 0;
                  LOBYTE(v86->Next) = v178;
                }
                else
                {
                  if ( !v237 )
                  {
                    if ( v4 )
                      goto LABEL_12;
                    RaidpPortGetAdapter(v7, &v237, &v238);
                    v4 = v238;
                  }
                  if ( v4 )
                    goto LABEL_12;
                  if ( !v237 )
                    goto LABEL_33;
                  LOBYTE(v86->Next) = (v237[28] & 0x40) != 0;
                }
                goto LABEL_49;
              case 0x62u:
                if ( !v248 || !v250.QuadPart || !(_DWORD)v249 )
                  goto LABEL_33;
                StartIoPerfParams = StorEtwMiniportLogError(
                                      v7,
                                      (_DWORD)v245,
                                      (_DWORD)v247,
                                      (_DWORD)v248,
                                      (_DWORD)v249,
                                      v250.QuadPart);
                goto LABEL_11;
              case 0x63u:
                if ( !v245 )
                  goto LABEL_33;
                KeInitializeEvent((PRKEVENT)v245, (EVENT_TYPE)v247, (BOOLEAN)v248);
                goto LABEL_49;
              case 0x64u:
                Timeout = (union _LARGE_INTEGER *)v248;
                v88 = v245;
                v89 = (unsigned __int8)v247;
                if ( !v248 || *(_QWORD *)&v248->Relationship )
                  goto LABEL_591;
                if ( KeGetCurrentIrql() > 2u )
                  goto LABEL_592;
                if ( !Timeout->QuadPart )
                  goto LABEL_593;
LABEL_591:
                if ( KeGetCurrentIrql() > 1u )
                {
LABEL_592:
                  Pool = -1056964600;
                  goto LABEL_12;
                }
LABEL_593:
                if ( !v88 )
                  goto LABEL_33;
                Pool = KeWaitForSingleObject(v88, Executive, 0, v89, Timeout) != 0 ? 0xC1000001 : 0;
                goto LABEL_12;
              case 0x65u:
                v90 = (struct _KEVENT *)v245;
                if ( KeGetCurrentIrql() > 2u )
                {
                  Pool = -1056964600;
                  goto LABEL_12;
                }
                if ( !v90 )
                  goto LABEL_33;
                KeSetEvent(v90, 0, 0);
                goto LABEL_49;
              case 0x66u:
                goto LABEL_259;
              case 0x67u:
                v91 = v247;
                v92 = (unsigned int)v245;
                if ( !v247 || (unsigned int)((_DWORD)v245 - 1) > 0xF )
                  goto LABEL_33;
                if ( v237 )
                  goto LABEL_597;
                if ( v4 )
                  goto LABEL_600;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
LABEL_597:
                if ( v4 )
                {
LABEL_600:
                  v179 = v4 + 42;
                }
                else
                {
                  if ( !v237 )
                    goto LABEL_33;
                  v179 = v237 + 94;
                }
                Pool = ((int)RaMiniportSaveFeatureList(v179, v92, v91) >> 31) & 0xC1000001;
                goto LABEL_12;
              case 0x68u:
                if ( KeGetCurrentIrql() )
                {
                  Pool = -1056964600;
                  goto LABEL_12;
                }
                v180 = v247;
                v181 = v245;
                if ( !v247 )
                  goto LABEL_33;
                if ( v237 )
                  goto LABEL_606;
                if ( v238 )
                  goto LABEL_12;
                RaidpPortGetAdapter(a2, &v237, &v238);
LABEL_606:
                if ( v238 )
                  goto LABEL_12;
                if ( !v237 )
                  goto LABEL_33;
                if ( v181 && v181->Group == 1 && *(_DWORD *)&v181[1] >= 4u )
                {
                  LODWORD(v239) = 0;
                  LOWORD(v239) = v181[2].Group;
                  BYTE2(v239) = v181[2].Number;
                  v5 = RaidAdapterFindUnit(v237, (unsigned int)v239);
                }
                v182 = RaidCaptureLiveDump(v237, v5, v180);
                StartIoPerfParams = RaidNtStatusToStorStatus(v182);
                goto LABEL_11;
              case 0x69u:
                v183 = (struct _PROCESSOR_NUMBER)v248;
                v184 = v250.QuadPart;
                v185 = v251.LowPart;
                v186 = (int)v245;
                v187 = (int)v247;
                v188 = v249;
                v189 = (char)v252;
                v190 = (unsigned __int16)v254;
                v191 = v255;
                v242 = v250;
                LODWORD(Object) = (_DWORD)v252;
                ProcNumber[0] = (struct _PROCESSOR_NUMBER)v248;
                LODWORD(v239) = v251.LowPart;
                if ( v237 )
                  goto LABEL_616;
                if ( v4 )
                  goto LABEL_356;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
                v183 = ProcNumber[0];
                v184 = v242.QuadPart;
                v185 = (unsigned int)v239;
                v189 = (char)Object;
LABEL_616:
                if ( v4 )
                {
                  Pool = -1056964606;
                  goto LABEL_12;
                }
                if ( !v237 || !v188 || !v191 || (unsigned __int16)(v190 - 1) > 0x3FFu )
                  goto LABEL_33;
                StartIoPerfParams = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, _DWORD, char, _DWORD, __int64))StorEtwMiniportLogByteStream)(
                                      (_DWORD)v237,
                                      v186,
                                      v187,
                                      v183,
                                      (__int64)v188,
                                      v184,
                                      v185,
                                      v189,
                                      v190,
                                      v191);
                goto LABEL_11;
              case 0x6Bu:
                if ( !v245 )
                  goto LABEL_33;
                *v245 = (struct _PROCESSOR_NUMBER)StorMinimumTimeInterval;
                goto LABEL_49;
              case 0x6Cu:
                v93 = (unsigned int)v245;
                v94 = (unsigned __int8)v247;
                if ( v237 )
                  goto LABEL_623;
                if ( v4 )
                  goto LABEL_12;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
LABEL_623:
                if ( v4 )
                  goto LABEL_12;
                if ( !v237 )
                  goto LABEL_33;
                v192 = RaidMaskUnmaskPciMsixEntry(v237, v93, v94);
                StartIoPerfParams = RaidNtStatusToStorStatus(v192);
                goto LABEL_11;
              case 0x6Eu:
                StartRoutine = (KSTART_ROUTINE *)v245;
                StartContext = v247;
                v97 = (KPRIORITY *)v248;
                v98 = v249;
                if ( KeGetCurrentIrql() )
                {
                  Pool = -1056964600;
                  goto LABEL_12;
                }
                if ( !StartRoutine
                  || v97 && !(unsigned __int8)RaValidateMiniportSystemThreadPriority((unsigned int)*v97) )
                {
                  goto LABEL_33;
                }
                if ( v237 )
                  goto LABEL_632;
                if ( v238 )
                {
LABEL_496:
                  Pool = -1056964606;
                  goto LABEL_12;
                }
                RaidpPortGetAdapter(a2, &v237, &v238);
LABEL_632:
                if ( v238 )
                {
                  Pool = -1056964606;
                  goto LABEL_12;
                }
                if ( !v237 )
                  goto LABEL_33;
                *(_QWORD *)&ProcNumber[0].Group = 0LL;
                *(&ObjectAttributes.Length + 1) = 0;
                *(&ObjectAttributes.Attributes + 1) = 0;
                v193 = v237[1519];
                if ( _InterlockedExchangeAdd(v237 + 1520, 1u) >= v193 )
                {
                  _InterlockedDecrement(v237 + 1520);
                  goto LABEL_249;
                }
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = 0LL;
                ObjectAttributes.Attributes = 512;
                ObjectAttributes.ObjectName = 0LL;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                v194 = PsCreateSystemThread(
                         (PHANDLE)ProcNumber,
                         0,
                         &ObjectAttributes,
                         0LL,
                         0LL,
                         StartRoutine,
                         StartContext);
                if ( v194 < 0 )
                {
                  _InterlockedDecrement(v237 + 1520);
                }
                else
                {
                  v195 = *(void **)&ProcNumber[0].Group;
                  if ( v98 )
                    *(_QWORD *)v98 = *(_QWORD *)&ProcNumber[0].Group;
                  if ( v97 )
                  {
                    Object = 0LL;
                    v194 = ObReferenceObjectByHandle(v195, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
                    if ( v194 < 0 )
                    {
                      v194 = 0;
                    }
                    else
                    {
                      KeSetPriorityThread((PKTHREAD)Object, *v97);
                      ObfDereferenceObject(Object);
                    }
                  }
                }
                StartIoPerfParams = RaidNtStatusToStorStatus(v194);
                goto LABEL_11;
              case 0x6Fu:
                v99 = v245;
                v100 = (unsigned int)v247;
                Object = 0LL;
                if ( KeGetCurrentIrql() )
                {
                  Pool = -1056964600;
                  goto LABEL_12;
                }
                if ( !(unsigned __int8)RaValidateMiniportSystemThreadPriority(v100) || !v99 )
                  goto LABEL_33;
                DpcWatchdogInformation = ObReferenceObjectByHandle(v99, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
                if ( DpcWatchdogInformation >= 0 )
                {
                  KeSetPriorityThread((PKTHREAD)Object, v100);
                  ObfDereferenceObject(Object);
                }
                goto LABEL_39;
              case 0x70u:
                v101 = (struct _GROUP_AFFINITY *)v247;
                v102 = (struct _GROUP_AFFINITY *)v248;
                if ( !v247 )
                  goto LABEL_33;
                if ( KeGetCurrentIrql() <= 2u )
                {
                  KeSetSystemGroupAffinityThread(v101, v102);
                  Pool = 0;
                }
                else
                {
                  Pool = -1056964600;
                }
                goto LABEL_12;
              case 0x71u:
                v103 = (struct _GROUP_AFFINITY *)v247;
                if ( !v247 )
                  goto LABEL_33;
                if ( KeGetCurrentIrql() <= 2u )
                {
                  KeRevertToUserGroupAffinityThread(v103);
                  Pool = 0;
                }
                else
                {
                  Pool = -1056964600;
                }
                goto LABEL_12;
              case 0x72u:
                if ( ((unsigned __int8)v247 & 1) != 0 )
                  goto LABEL_33;
LABEL_259:
                v104 = StorReset(v7, (unsigned int)v245, 1LL);
                StartIoPerfParams = RaidNtStatusToStorStatus(v104);
                goto LABEL_11;
              case 0x73u:
                v105 = v245;
                v106 = v247;
                v107 = (unsigned int)v248;
                v108 = v249;
                if ( v237 )
                  goto LABEL_653;
                if ( v4 )
                  goto LABEL_12;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
LABEL_653:
                if ( v4 )
                  goto LABEL_12;
                if ( !v237 || !v106 || !(_DWORD)v107 || !v108 )
                  goto LABEL_33;
                if ( v105 )
                {
                  if ( v105->Group != 1 || *(_DWORD *)&v105[1] < 4u )
                    goto LABEL_33;
                  LODWORD(v239) = 0;
                  LOWORD(v239) = v105[2].Group;
                  BYTE2(v239) = v105[2].Number;
                  v196 = RaidAdapterFindUnit(v237, (unsigned int)v239);
                  Pool = -1056964601;
                  v197 = v196;
                  if ( !v196 )
                    goto LABEL_12;
                }
                else
                {
                  v197 = (int)v237;
                }
                Pool = -1056964607;
                if ( (int)ExtensionSendMiniportData(
                            (_DWORD)v106,
                            2 - (unsigned int)(v105 != 0LL),
                            (unsigned int)&dword_1401721B0,
                            v197,
                            v107,
                            (__int64)v108) >= 0 )
                  Pool = 0;
                goto LABEL_12;
              case 0x74u:
                v109 = v247;
                Object = 0LL;
                v239 = 0LL;
                ProcNumber[0] = 0;
                if ( (_DWORD)v245 == -1 )
                  goto LABEL_33;
                D3ColdInterface = KeGetProcessorNumberFromIndex((ULONG)v245, ProcNumber);
                if ( D3ColdInterface < 0 )
                  goto LABEL_265;
                RaidpPortGetAdapter(v7, (int **)&Object, &v239);
                if ( Object )
                {
                  StartIoPerfParams = RaidGetMessageNumberFromProcessorNumber(Object, ProcNumber, v109);
                  goto LABEL_11;
                }
                if ( !v239 )
                  goto LABEL_33;
                StartIoPerfParams = NvmeGetMessageNumberFromProcessorNumber(v239, ProcNumber, v109);
                goto LABEL_11;
              case 0x75u:
                StartIoPerfParams = StorpGetNodeAffinity2(
                                      v7,
                                      (_DWORD)v245,
                                      (_DWORD)v247,
                                      (unsigned __int16)v248,
                                      (__int64)v249);
                goto LABEL_11;
              case 0x76u:
                if ( !EnableRegistryWatch )
                  goto LABEL_12;
                StartIoPerfParams = StorEnableRegistryKeyNotification(v7, v245);
                goto LABEL_11;
              case 0x77u:
                v110 = (int)v247;
                v111 = (int)v248;
                v112 = v249;
                v113 = v250.QuadPart;
                v114 = (__int64 *)v251.QuadPart;
                if ( v245 )
                  goto LABEL_33;
                if ( v237 )
                  goto LABEL_671;
                if ( v4 )
                  goto LABEL_356;
                RaidpPortGetAdapter(v7, &v237, &v238);
                v4 = v238;
LABEL_671:
                if ( v4 )
                {
                  Pool = -1056964606;
                  goto LABEL_12;
                }
                if ( !v237 )
                  goto LABEL_33;
                if ( RuntimePowerDisabled )
                {
                  Pool = 0;
                  goto LABEL_12;
                }
                if ( !(unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(v237)
                  || (v198 = *((_QWORD *)v237 + 628), *(_BYTE *)(v198 + 28)) )
                {
LABEL_210:
                  Pool = -1056964607;
                  goto LABEL_12;
                }
                D3ColdInterface = RaidRegisterPerfStates(
                                    *((_QWORD *)v237 + 1),
                                    v110,
                                    v111,
                                    (_DWORD)v112,
                                    v113,
                                    (__int64)v114,
                                    *(_QWORD *)v198);
                if ( D3ColdInterface < 0 )
                {
LABEL_265:
                  StartIoPerfParams = RaidNtStatusToStorStatus(D3ColdInterface);
                  goto LABEL_11;
                }
                if ( v112 )
                  v199 = *v112;
                else
                  v199 = 0;
                if ( (v111 & 0x1000) != 0 )
                  v113 = *v114;
                if ( (unsigned __int8)RaidAdapterCacheOperationalPowerRange(*((_QWORD *)v237 + 628), v199, v113) )
                {
                  *(_QWORD *)(*((_QWORD *)v237 + 628) + 48LL) = -1LL;
                  *(_QWORD *)(*((_QWORD *)v237 + 628) + 56LL) = -1LL;
                  *(_QWORD *)(*((_QWORD *)v237 + 628) + 64LL) = -1LL;
                }
                *(_BYTE *)(*((_QWORD *)v237 + 628) + 28LL) = v199;
                StorpLogRegisterAdapterPerfStates(v237, v113);
                goto LABEL_49;
              case 0x78u:
                if ( (_DWORD)v248 != 4 )
                  goto LABEL_33;
                D3ColdInterface = StorPortReadRegistryULongKey(v245, v247, v249, 0LL);
                goto LABEL_265;
              case 0x79u:
                if ( !v7 || !v248 || !(_DWORD)v249 || !v252 )
                  goto LABEL_33;
                StartIoPerfParams = StorpGetDeviceBase2(
                                      v7,
                                      (_DWORD)v245,
                                      (_DWORD)v247,
                                      (_DWORD)v248,
                                      (_DWORD)v249,
                                      v250.QuadPart,
                                      v251.LowPart,
                                      (__int64)v252);
                goto LABEL_11;
              case 0x7Au:
                StartIoPerfParams = StorPortpIsDriverHotSwapEnabled(v245, 0x140000000uLL);
                goto LABEL_11;
              case 0x7Bu:
                StartIoPerfParams = StorPortpRegisterDriverProxy(v245, v247);
                goto LABEL_11;
              case 0x7Cu:
                goto LABEL_210;
              case 0x7Du:
                Pool = -1056964607;
                *(_QWORD *)&v248->Relationship = 0LL;
                goto LABEL_12;
              case 0x7Eu:
                v200 = v245;
                v201 = v250;
                v202 = (unsigned int)v247;
                v203 = (unsigned int)v248;
                v204 = v249;
                va_copy((va_list)Object, va1);
                *(PHYSICAL_ADDRESS *)&ProcNumber[0].Group = v251;
                v242 = v250;
                v205 = RaidGetAssociatedXrb(v245, 0x140000000uLL);
                v208 = v205;
                if ( !v205 )
                  goto LABEL_33;
                if ( *(_DWORD *)(v205 + 800) == -1 )
                {
                  Pool = 0;
                  goto LABEL_12;
                }
                if ( !v200 || !(_DWORD)v202 || !v203 || !v204 && !v201.QuadPart && !*(_QWORD *)&ProcNumber[0].Group )
                  goto LABEL_33;
                if ( !v237 )
                {
                  if ( v238 )
                  {
LABEL_356:
                    Pool = -1056964606;
                    goto LABEL_12;
                  }
                  RaidpPortGetAdapter(a2, &v237, &v238);
                }
                if ( v238 )
                {
                  Pool = -1056964606;
                  goto LABEL_12;
                }
                if ( !v237 )
                  goto LABEL_33;
                v209 = *(_QWORD *)(v208 + 224);
                if ( !v209 )
                {
                  Pool = -1056964601;
                  goto LABEL_12;
                }
                Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledPreCheck(v207, v206);
                if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
                  goto LABEL_749;
                v210 = v200->Number == 40;
                Object = 0LL;
                if ( !v210 )
                {
                  Number = v200[2].Number;
                  v211 = v200 + 18;
                  goto LABEL_745;
                }
                v211 = 0LL;
                if ( v200[5] )
                  goto LABEL_725;
                v212 = v200[14];
                v213 = 0;
                if ( !*(_DWORD *)&v212 )
                  goto LABEL_725;
                while ( 2 )
                {
                  v214 = (unsigned int)v200[v213 + 30];
                  if ( (unsigned int)v214 < 0x80 )
                    goto LABEL_737;
                  v215 = (unsigned int)v200[4];
                  if ( (unsigned int)v214 >= (unsigned int)v215 )
                    goto LABEL_737;
                  v216 = (unsigned int)v214;
                  v217 = *(int *)((char *)v200 + v214);
                  if ( v217 == 64 )
                  {
                    if ( v216 + 40 > v215 )
                      goto LABEL_737;
                    if ( !*(&v200[2].Number + v216) )
                      goto LABEL_725;
                  }
                  else
                  {
                    v218 = v217 - 65;
                    if ( v218 )
                    {
                      if ( v218 == 1 && v216 + 40 <= v215 )
                      {
                        if ( *(struct _PROCESSOR_NUMBER *)((char *)&v200[3] + v216) )
                        {
                          v219 = v200 + 8;
LABEL_724:
                          v211 = (struct _PROCESSOR_NUMBER *)((char *)v219 + v216);
                        }
LABEL_725:
                        Number = 0;
                        if ( !*(_DWORD *)&v200[5] )
                        {
                          v221 = v200[14];
                          v222 = 0;
                          if ( v221 )
                          {
                            do
                            {
                              v223 = (unsigned int)v200[v222 + 30];
                              if ( (unsigned int)v223 >= 0x80 )
                              {
                                v224 = (unsigned int)v200[4];
                                if ( (unsigned int)v223 < (unsigned int)v224 )
                                {
                                  v225 = (unsigned int)v223;
                                  v226 = *(int *)((char *)v200 + v223);
                                  if ( v226 == 64 )
                                  {
                                    if ( v225 + 40 <= v224 )
                                    {
LABEL_740:
                                      Number = *(&v200[2].Number + v225);
                                      break;
                                    }
                                  }
                                  else
                                  {
                                    v227 = v226 - 65;
                                    if ( v227 )
                                    {
                                      if ( v227 == 1 && v225 + 40 <= v224 )
                                        break;
                                    }
                                    else if ( v225 + 56 <= v224 )
                                    {
                                      goto LABEL_740;
                                    }
                                  }
                                }
                              }
                              ++v222;
                            }
                            while ( v222 < *(_DWORD *)&v221 );
                          }
                        }
LABEL_745:
                        LbaFromCdb = PortSrbGetLbaFromCdb(v211, Number);
                        if ( LbaFromCdb
                          && !RtlULongLongMult(v202, *(unsigned int *)(v209 + 932), (ULONGLONG *)&Object)
                          && !RtlULongLongAdd(LbaFromCdb, (ULONGLONG)Object, (ULONGLONG *)&Object)
                          && (unsigned __int64)Object <= *(_QWORD *)(v209 + 3464) )
                        {
LABEL_749:
                          StartIoPerfParams = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RaidNvmeIceIoStart)(
                                                v200,
                                                0LL,
                                                (unsigned int)v202,
                                                v203,
                                                v204,
                                                (PHYSICAL_ADDRESS)v242.QuadPart,
                                                *(_QWORD *)&ProcNumber[0].Group);
LABEL_11:
                          Pool = StartIoPerfParams;
                          goto LABEL_12;
                        }
                        goto LABEL_33;
                      }
LABEL_737:
                      if ( ++v213 >= *(unsigned int *)&v212 )
                        goto LABEL_725;
                      continue;
                    }
                    if ( v216 + 56 > v215 )
                      goto LABEL_737;
                    if ( !*(&v200[2].Number + v216) )
                      goto LABEL_725;
                  }
                  break;
                }
                v219 = v200 + 6;
                goto LABEL_724;
              case 0x7Fu:
                v115 = v245;
                if ( !v245 || !RaidGetAssociatedXrb(v245, 0x140000000uLL) )
                  goto LABEL_33;
                StartIoPerfParams = RaidNvmeIceIoComplete(v115);
                goto LABEL_11;
              case 0x80u:
                if ( v237 )
                  goto LABEL_766;
                if ( !v4 )
                {
                  RaidpPortGetAdapter(v7, &v237, &v238);
                  v4 = v238;
LABEL_766:
                  if ( !v4 )
                    goto LABEL_33;
                }
                StartIoPerfParams = StorEtwNvmeMiniportEventProxy(v4, (struct _PROCESSOR_NUMBER **)va);
                goto LABEL_11;
              case 0x81u:
                if ( v237 )
                  goto LABEL_768;
                if ( !v4 )
                {
                  RaidpPortGetAdapter(v7, &v237, &v238);
                  v4 = v238;
LABEL_768:
                  if ( !v4 )
                    goto LABEL_33;
                }
                goto LABEL_12;
              case 0x82u:
                StartIoPerfParams = StorPortpGetDriverProxyEndpointWrapperFromEndpoint(v245, v247, v248);
                goto LABEL_11;
              case 0x83u:
                StartIoPerfParams = StorPortpSwapDriverProxyEndpoints(v245, v247, v248);
                goto LABEL_11;
              case 0x84u:
                v116 = (unsigned int)v245;
                v117 = v247;
                if ( !v4 )
                {
                  RaidpPortGetAdapter(v7, &v237, &v238);
                  v4 = v238;
                  if ( !v238 )
                    goto LABEL_33;
                }
                StartIoPerfParams = NvmeAdapterStorMQAddController(v4, v116, v117);
                goto LABEL_11;
              case 0x85u:
                v118 = v245;
                if ( !v4 )
                {
                  RaidpPortGetAdapter(v7, &v237, &v238);
                  v4 = v238;
                  if ( !v238 )
                    goto LABEL_33;
                }
                StartIoPerfParams = NvmeAdapterStorMQRemoveController(v4, v118);
                goto LABEL_11;
              case 0x86u:
                Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledPreCheck(v10, 0x140000000uLL);
                if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
                  goto LABEL_308;
                StartIoPerfParams = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RaidNvmeIceIoStart)(
                                      v245,
                                      v247,
                                      (unsigned int)v248,
                                      (unsigned int)v249,
                                      (PHYSICAL_ADDRESS)v250.QuadPart,
                                      (PHYSICAL_ADDRESS)v251.QuadPart,
                                      v252);
                goto LABEL_11;
              case 0x87u:
                Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledPreCheck(v10, 0x140000000uLL);
                if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
                  goto LABEL_308;
                v229 = v248;
                if ( (unsigned int)v245 >= 0x1000000 || (unsigned int)v247 >= 0x100 )
                  goto LABEL_33;
                LODWORD(Object) = ((unsigned __int8)v247 >> 5) | (8
                                                                * ((32 * (_DWORD)v245) | (unsigned __int8)v247 & 0x1F));
                *(_QWORD *)&v229->Relationship = RaidNvmeIceQuerySupport(&Object);
                Pool = 0;
                goto LABEL_12;
              case 0x88u:
                ProcNumber[0] = (struct _PROCESSOR_NUMBER)v249;
                v39 = ProcNumber;
LABEL_121:
                StartIoPerfParams = StorpQueueWorkItemInternal(v7, v245, v247, v248, v39);
                goto LABEL_11;
              case 0x89u:
                v119 = v245;
                v120 = (unsigned int)v247;
                v121 = v248;
                RaidpPortGetAdapter(v7, &v237, &v238);
                if ( v237 )
                {
                  v122 = v237;
                }
                else
                {
                  v122 = v238;
                  if ( !v238 )
                    goto LABEL_33;
                }
                StartIoPerfParams = StorAddChildAdapter(v122, v119, v120, v121);
                goto LABEL_11;
              case 0x8Au:
                v123 = v245;
                RaidpPortGetAdapter(v7, &v237, &v238);
                if ( v237 )
                {
                  v124 = v237;
                }
                else
                {
                  v124 = v238;
                  if ( !v238 )
                    goto LABEL_33;
                }
                StartIoPerfParams = StorRemoveChildAdapter(v124, v123);
                goto LABEL_11;
              case 0x8Bu:
                v125 = v245;
                if ( !v245 )
                  goto LABEL_33;
                RaidpPortGetAdapter(v7, &v237, &v238);
                if ( v237 )
                {
                  v126 = v237;
                }
                else
                {
                  v126 = v238;
                  if ( !v238 )
                    goto LABEL_33;
                }
                StartIoPerfParams = StorGetParentAdapterExtension(v126, v125);
                goto LABEL_11;
              case 0x8Cu:
                if ( (unsigned int)v245 >= 0x1000000 || (unsigned int)v247 >= 0x100 )
                  goto LABEL_33;
                LODWORD(Object) = ((unsigned __int8)v247 >> 5) | (8
                                                                * ((32 * (_DWORD)v245) | (unsigned __int8)v247 & 0x1F));
                StartIoPerfParams = RaidNvmeIceQueryNvmeCapabilities(&Object, v248, (unsigned int)v249);
                goto LABEL_11;
              case 0x8Du:
                if ( (unsigned int)v245 >= 0x1000000 || (unsigned int)v247 >= 0x100 )
                  goto LABEL_33;
                LODWORD(Object) = ((unsigned __int8)v247 >> 5) | (8
                                                                * ((32 * (_DWORD)v245) | (unsigned __int8)v247 & 0x1F));
                StartIoPerfParams = RaidNvmeIceConfigureExclusionRanges(
                                      v7,
                                      (unsigned int)&Object,
                                      (_DWORD)v248,
                                      (_DWORD)v249,
                                      v250.QuadPart);
                goto LABEL_11;
              case 0x8Eu:
                if ( (unsigned int)v245 >= 0x1000000 || (unsigned int)v247 >= 0x100 )
                  goto LABEL_33;
                LODWORD(Object) = ((unsigned __int8)v247 >> 5) | (8
                                                                * ((32 * (_DWORD)v245) | (unsigned __int8)v247 & 0x1F));
                StartIoPerfParams = RaidNvmeIceEnableNvmeDevice(v7, &Object, v248, v249);
                goto LABEL_11;
              case 0x8Fu:
                v230 = (int)v247;
                v231 = v248;
                if ( !v245 || !v248 )
                  goto LABEL_33;
                v232 = RaidGetAssociatedXrb(v245, 0x140000000uLL);
                v233 = v230 - 1;
                if ( v233 )
                {
                  if ( v233 == 1 )
                  {
                    v231->Relationship = *(unsigned __int16 *)(v232 + 808);
                    v231->Size = *(unsigned __int16 *)(v232 + 810);
                    v231->NumaNode.NodeNumber = *(_DWORD *)(v232 + 880);
                    *(_QWORD *)v231->SharedComputeUnit.Reserved = *(_QWORD *)(v232 + 832);
LABEL_49:
                    Pool = 0;
                  }
                }
                else
                {
                  Pool = 0;
                  v231->Relationship = **(_DWORD **)(v232 + 792);
                  v231->Size = *(_DWORD *)(*(_QWORD *)(v232 + 792) + 4LL);
                  v231->NumaNode.NodeNumber = *(_DWORD *)(*(_QWORD *)(v232 + 792) + 8LL);
                  *(_QWORD *)v231->SharedComputeUnit.Reserved = *(_QWORD *)(*(_QWORD *)(v232 + 792) + 16LL);
                }
                goto LABEL_12;
              default:
LABEL_308:
                if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
                {
                  WPP_SF_d(
                    WPP_GLOBAL_Control->AttachedDevice,
                    83LL,
                    &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids,
                    a1);
                }
                goto LABEL_12;
            }
          }
          v21 = v245;
          if ( v245 )
          {
            LOBYTE(v21->Group) = KeGetCurrentIrql();
            Pool = 0;
            goto LABEL_12;
          }
LABEL_33:
          Pool = -1056964602;
          goto LABEL_12;
        }
        v16 = v245;
        v17 = (unsigned int)v247;
        v18 = v248;
        if ( !v237 )
        {
          if ( v4 )
            goto LABEL_12;
          RaidpPortGetAdapter(v7, &v237, &v238);
          v4 = v238;
        }
        if ( v4 )
          goto LABEL_12;
        if ( KeGetCurrentIrql() > 2u )
        {
          Pool = -1056964600;
          goto LABEL_12;
        }
        if ( !v237 )
          goto LABEL_33;
        if ( v16 )
        {
          if ( v16->Group != 1 )
            goto LABEL_33;
          if ( *(_DWORD *)&v16[1] < 4u )
            goto LABEL_33;
          Pool = 0;
          LODWORD(v239) = LOBYTE(v16[2].Group);
          *(_WORD *)((char *)&v239 + 1) = *(unsigned __int16 *)((char *)&v16[2].Group + 1);
          v234 = RaidAdapterFindUnit(v237, (unsigned int)v239);
          v140 = v234;
          if ( !v234 )
            goto LABEL_33;
          if ( RuntimePowerDisabled )
            goto LABEL_12;
          if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(v234) )
          {
            v235 = *(_QWORD **)(v140 + 1872);
            v236 = *(_DWORD *)(v235[1] + 8LL);
            if ( v17 + 1 < v236 || v17 + 1 > v236 )
LABEL_407:
              Pool = -1056964602;
            else
              PoFxSetComponentLatency(*v235, v17, v18);
LABEL_408:
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v140 + 1864));
            goto LABEL_12;
          }
        }
        else
        {
          if ( RuntimePowerDisabled )
          {
            Pool = 0;
            goto LABEL_12;
          }
          if ( (unsigned __int8)RaidAdapterIsRegisteredForIdleDetection(v237) )
          {
            v19 = (_QWORD *)*((_QWORD *)v237 + 628);
            v20 = *(_DWORD *)(v19[1] + 8LL);
            if ( v17 + 1 < v20 || v17 + 1 > v20 )
              goto LABEL_33;
            PoFxSetComponentLatency(*v19, v17, v18);
            Pool = 0;
LABEL_12:
            if ( StorpControl )
              ExtensionExtendedFuncPost(&dword_1401721E8, a1, v237, (struct _PROCESSOR_NUMBER **)va);
            return Pool;
          }
        }
LABEL_249:
        Pool = -1056964601;
        goto LABEL_12;
      }
      return 3238002694LL;
  }
}
