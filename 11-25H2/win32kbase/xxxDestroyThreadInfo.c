/*
 * XREFs of xxxDestroyThreadInfo @ 0x140164194
 * Callers:
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 *     UserThreadCallout @ 0x14016AE90 (UserThreadCallout.c)
 * Callees:
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x140010398 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     HMAssignmentUnlock @ 0x1400379C0 (HMAssignmentUnlock.c)
 *     DestroyThreadsObjects @ 0x140038840 (DestroyThreadsObjects.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x140038CEC (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140039670 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?CleanUpDelayZonesOnThreadExit@DelayZonePalmRejection@@QEAAXQEAUtagTHREADINFO@@@Z @ 0x140039B24 (-CleanUpDelayZonesOnThreadExit@DelayZonePalmRejection@@QEAAXQEAUtagTHREADINFO@@@Z.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140039BA4 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x14003FE10 (McTemplateK0_EtwWriteTransfer.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x140048E08 (ApiSetEditionGetProcessWindowStation.c)
 *     FreeHwndList @ 0x140064E94 (FreeHwndList.c)
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x14006504C (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14007B6DC (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400A038C (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     EtwTraceThreadExit @ 0x1400A50EC (EtwTraceThreadExit.c)
 *     MarkThreadsObjects @ 0x1400AE490 (MarkThreadsObjects.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400AE8D0 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1400AEF0C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400BAD54 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     IsKSTThread @ 0x1400BD2E0 (IsKSTThread.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CD3B0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400DD9EC (-UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ProtectHandle @ 0x1400DDACC (ProtectHandle.c)
 *     LockObjectAssignment @ 0x1400EBD60 (LockObjectAssignment.c)
 *     ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400EEB48 (-ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400F7E74 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     FreeMessageList @ 0x140100A30 (FreeMessageList.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x140106F84 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     ?IsAnyPriorityFloorSet@tagTHREADINFO@@QEAA_NXZ @ 0x14010B510 (-IsAnyPriorityFloorSet@tagTHREADINFO@@QEAA_NXZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EDF8 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x1401100D0 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     ?OnDestroyed@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x140110FC8 (-OnDestroyed@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@@Z.c)
 *     ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x14012200C (-AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x140124D70 (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 *     ?ScrubShellHandwritingDelegateThread@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1401415A8 (-ScrubShellHandwritingDelegateThread@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxWindowEvent @ 0x1401455A4 (xxxWindowEvent.c)
 *     UserDeactivateMITInputProcessing @ 0x14014FA4C (UserDeactivateMITInputProcessing.c)
 *     zzzDestroyQueue @ 0x1401667F0 (zzzDestroyQueue.c)
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 *     EtwTraceInputProcessDelay @ 0x14016D040 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x14016D900 (EtwTraceMessageCheckDelay.c)
 *     DisableDelegation @ 0x14018C880 (DisableDelegation.c)
 *     ApiSetEditionSystemGenerateMove @ 0x140196BF8 (ApiSetEditionSystemGenerateMove.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1401A1960 (--0-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1401A218C (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1401A5DA0 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1401A60EC (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1401A614C (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1401A6318 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1401A641C (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1401A6994 (NullifyLookasideRef.c)
 *     CleanupRimDevObjInUserModeCallback @ 0x1401A7048 (CleanupRimDevObjInUserModeCallback.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CleanUpRoutingInfoForThread@CoreMessagingKPort@@QEAAXQEAUtagTHREADINFO@@@Z @ 0x1401AAB2C (-CleanUpRoutingInfoForThread@CoreMessagingKPort@@QEAAXQEAUtagTHREADINFO@@@Z.c)
 *     CleanupResources @ 0x1401B9768 (CleanupResources.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1401D6A24 (RIMIDEProcessRemoveInjectionDevices.c)
 *     ?zzzCleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1401F89B4 (-zzzCleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ?RevokeThreadAsKST@KST@InputTraceLogging@@SAXXZ @ 0x140215BF8 (-RevokeThreadAsKST@KST@InputTraceLogging@@SAXXZ.c)
 *     DeactivateKSTInputProcessingHelper @ 0x140218FA0 (DeactivateKSTInputProcessingHelper.c)
 *     ?RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ @ 0x1402238FC (-RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ.c)
 *     CleanupIAMAccess @ 0x14023E70C (CleanupIAMAccess.c)
 *     IsCleanupIAMAccessSupported @ 0x14023EE78 (IsCleanupIAMAccessSupported.c)
 *     Is_PostMessageSupported @ 0x14023F038 (Is_PostMessageSupported.c)
 *     IsxxxMNEndMenuStateSupported @ 0x14023F0A8 (IsxxxMNEndMenuStateSupported.c)
 *     MagContextThreadCallout @ 0x14023F0E0 (MagContextThreadCallout.c)
 *     _PostMessage @ 0x14023F3C8 (_PostMessage.c)
 *     xxxMNEndMenuState @ 0x14023F468 (xxxMNEndMenuState.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void xxxDestroyThreadInfo()
{
  struct tagTHREADINFO *v0; // rbx
  ULONG_PTR v1; // rsi
  __int64 v2; // r13
  struct _NT_TIB *Self; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 (*v19)(void); // rax
  int v20; // eax
  int v21; // r12d
  void (__fastcall *v22)(struct tagTHREADINFO *); // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  DelayZonePalmRejection *Instance; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 (*v30)(void); // rax
  int v31; // eax
  void (__fastcall *v32)(struct tagTHREADINFO *); // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 (*v35)(void); // rax
  int v36; // eax
  void (*v37)(void); // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 (*v40)(void); // rax
  int v41; // eax
  void (*v42)(void); // rax
  _QWORD *v43; // rcx
  __int64 (*v44)(void); // rax
  int v45; // eax
  void (*v46)(void); // rax
  __int64 UserSessionState; // rbx
  __int64 v48; // rcx
  __int64 i; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 (*v52)(void); // rax
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rdx
  char *v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 (*v59)(void); // rax
  int v60; // eax
  void (__fastcall *v61)(ULONG_PTR); // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 (*v64)(void); // rax
  int v65; // eax
  void (__fastcall *v66)(ULONG_PTR); // rax
  void (__fastcall *v67)(ULONG_PTR); // rax
  _QWORD *ProcessWindowStation; // rax
  __int64 v69; // rdx
  _QWORD *v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 (*v75)(void); // rax
  int v76; // eax
  void (__fastcall *v77)(_QWORD *); // rax
  __int64 *v78; // r14
  __int64 v79; // rbx
  struct tagTHREADINFO *v80; // rax
  __int64 v81; // rdx
  struct tagTHREADINFO *v82; // rcx
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 (*v86)(void); // rax
  int v87; // eax
  __int64 v88; // rbx
  void (__fastcall *v89)(__int64 *, __int64); // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 (*v92)(void); // rax
  int v93; // eax
  __int64 v94; // rbx
  void (__fastcall *v95)(__int64, __int64 *); // rax
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 (*v99)(void); // rax
  int v100; // eax
  __int64 v101; // rbx
  void (__fastcall *v102)(__int64); // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 (*v105)(void); // rax
  int v106; // eax
  __int64 v107; // rbx
  void (__fastcall *v108)(__int64); // rax
  __int64 v109; // rbx
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rbx
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 (*v123)(void); // rax
  int v124; // eax
  void (__fastcall *v125)(ULONG_PTR, __int64 *); // rax
  ULONG_PTR *v126; // r14
  __int64 *v127; // rcx
  ULONG_PTR v128; // rbx
  __int64 v129; // rdx
  __int64 v130; // rcx
  struct tagPROCESSINFO *v131; // rax
  __int64 (*v132)(void); // rax
  int v133; // eax
  __int64 v134; // rbx
  void (__fastcall *v135)(ULONG_PTR, __int64); // rax
  __int64 v136; // rbx
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 (*v141)(void); // rax
  int v142; // eax
  void (__fastcall *v143)(__int64); // rax
  __int64 (*v144)(void); // rax
  int v145; // eax
  void (__fastcall *v146)(ULONG_PTR); // rax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 (*v149)(void); // rax
  int v150; // eax
  void (__fastcall *v151)(ULONG_PTR); // rax
  const signed __int64 *v152; // r15
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // rdx
  __int64 v158; // rcx
  LONG v159; // ebx
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rcx
  void *v165; // rcx
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // rax
  __int64 v176; // r8
  __int64 v177; // rbx
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // rax
  __int64 v181; // rdx
  void *v182; // rcx
  int v183; // r15d
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // rbx
  __int64 v187; // rax
  __int64 v188; // rdx
  struct tagPROCESSINFO *v189; // rcx
  struct tagPROCESSINFO **v190; // r13
  __int64 v191; // rdx
  __int64 v192; // rcx
  __int64 v193; // rdx
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // rdx
  _QWORD *v199; // rcx
  __int64 (*v200)(void); // rax
  int v201; // eax
  void (__fastcall *v202)(ULONG_PTR); // rax
  void (*v203)(void); // rax
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 (*v206)(void); // rax
  int v207; // eax
  void (*v208)(void); // rax
  __int64 v209; // rdx
  __int64 v210; // rcx
  _QWORD *v211; // rbx
  _QWORD *v212; // r14
  __int64 (*v213)(void); // rax
  int v214; // eax
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 (*v217)(void); // rax
  int v218; // eax
  void (*v219)(void); // rax
  __int64 v220; // rax
  __int64 v221; // rdx
  __int64 v222; // rcx
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 (*v225)(void); // rax
  int v226; // eax
  void (__fastcall *v227)(ULONG_PTR); // rax
  __int64 v228; // rdx
  __int64 v229; // rcx
  __int64 v230; // rdx
  __int64 v231; // rcx
  __int64 v232; // rbx
  __int64 v233; // rdx
  __int64 v234; // rcx
  __int64 (*v235)(void); // rax
  int v236; // eax
  struct tagPROCESSINFO *v237; // rbx
  void (__fastcall *v238)(struct tagPROCESSINFO *); // rax
  __int64 v239; // rdx
  __int64 v240; // rcx
  __int64 v241; // rdx
  __int64 v242; // rcx
  __int64 (*v243)(void); // rax
  int v244; // eax
  void (__fastcall *v245)(ULONG_PTR); // rax
  __int64 v246; // rdx
  int v247; // eax
  void **v248; // r14
  void *v249; // rbx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *v251; // r8
  __int64 v252; // rax
  __int64 v253; // rdx
  __int64 v254; // rcx
  __int64 v255; // rax
  __int64 v256; // rdx
  __int64 v257; // rcx
  __int64 v258; // rdx
  __int64 v259; // rcx
  __int64 (*v260)(void); // rax
  int v261; // eax
  void (__fastcall *v262)(ULONG_PTR); // rax
  __int64 v263; // rdx
  void *v264; // rcx
  void *v265; // rcx
  __int64 v266; // rdx
  __int64 v267; // rcx
  __int64 v268; // rax
  __int64 v269; // rdx
  __int64 v270; // rcx
  __int64 (*v271)(void); // rax
  int v272; // eax
  _QWORD *v273; // rbx
  __int64 v274; // rdx
  __int64 v275; // rcx
  __int64 v276; // rax
  __int64 v277; // rdx
  __int64 v278; // rcx
  void (*v279)(void); // rax
  unsigned __int64 v280; // rax
  __int64 v281; // rdx
  __int64 v282; // rcx
  __int64 v283; // rax
  struct tagTHREADINFO *v284; // rdx
  __int64 v285; // r14
  const signed __int64 *v286; // r13
  __int64 v287; // rcx
  __int64 v288; // rdx
  __int64 v289; // rcx
  __int64 (*v290)(void); // rax
  __int64 v291; // rbx
  void (__fastcall *v292)(__int64, ULONG_PTR); // rax
  struct tagTHREADINFO *v293; // rax
  struct tagTHREADINFO **v294; // rcx
  __int64 v295; // rdx
  __int64 v296; // rcx
  __int64 v297; // rdx
  char *v298; // rbx
  char *v299; // rcx
  __int64 v300; // rdx
  __int64 v301; // rcx
  __int64 v302; // rdx
  __int64 v303; // rcx
  __int64 v304; // rdx
  __int64 v305; // rcx
  __int64 v306; // rdx
  __int64 v307; // rcx
  __int64 v308; // rdx
  __int64 v309; // rcx
  tagQ *v310; // rcx
  __int64 v311; // rcx
  __int64 v312; // rdx
  __int64 v313; // rcx
  __int64 v314; // rdx
  __int64 v315; // rcx
  __int64 v316; // rcx
  void *v317; // rcx
  void *v318; // r8
  __int64 v319; // rdx
  __int64 v320; // rcx
  __int64 v321; // rax
  __int64 v322; // rdx
  __int64 v323; // rcx
  __int64 v324; // rax
  __int64 v325; // rdx
  __int64 v326; // rcx
  int v327; // ebx
  __int64 v328; // rdx
  __int64 v329; // rcx
  __int64 v330; // rax
  _QWORD *v331; // rbx
  char *v332; // rbx
  __int64 v333; // rax
  __int64 v334; // rax
  signed __int32 v335[8]; // [rsp+0h] [rbp-168h] BYREF
  int v336; // [rsp+28h] [rbp-140h]
  _QWORD v337[2]; // [rsp+60h] [rbp-108h] BYREF
  void **v338; // [rsp+70h] [rbp-F8h]
  void *v339[2]; // [rsp+78h] [rbp-F0h] BYREF
  const signed __int64 *v340; // [rsp+88h] [rbp-E0h]
  __int64 v341; // [rsp+90h] [rbp-D8h]
  ULONG_PTR v342; // [rsp+A8h] [rbp-C0h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v343; // [rsp+B0h] [rbp-B8h]
  _QWORD *v344; // [rsp+B8h] [rbp-B0h]
  _QWORD *v345; // [rsp+C0h] [rbp-A8h]
  volatile signed __int32 *v346; // [rsp+C8h] [rbp-A0h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v347[2]; // [rsp+D0h] [rbp-98h] BYREF
  char v348[8]; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v349; // [rsp+E8h] [rbp-80h]
  _BYTE v350[16]; // [rsp+108h] [rbp-60h] BYREF
  _QWORD v351[10]; // [rsp+118h] [rbp-50h] BYREF
  _DWORD *Address; // [rsp+170h] [rbp+8h]
  int v353; // [rsp+178h] [rbp+10h] BYREF
  __int64 *v354; // [rsp+180h] [rbp+18h] BYREF
  struct tagPROCESSINFO **v355; // [rsp+188h] [rbp+20h]

  LOBYTE(v347[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v347, 0LL, 0x14u, 0);
  v343 = v347[1];
  v0 = PtiCurrent();
  v1 = (ULONG_PTR)v0;
  v339[1] = v0;
  v355 = (struct tagPROCESSINFO **)((char *)v0 + 464);
  v2 = *((_QWORD *)v0 + 58);
  v341 = v2;
  Self = KeGetPcr()->NtTib.Self;
  if ( v0 == *(struct tagTHREADINFO **)(W32GetUserSessionState(v5, v4) + 68456) )
  {
    *(_QWORD *)(W32GetUserSessionState(v7, v6) + 68456) = 0LL;
    W32GetUserSessionState(v9, v8);
  }
  if ( Self )
    Self[2].StackBase = 0LL;
  v10 = (char *)v0 + 1680;
  v344 = (_QWORD *)((char *)v0 + 1680);
  v11 = *((_QWORD *)v0 + 210);
  if ( v11 )
  {
    *(_QWORD *)(v11 + 1680) = 0LL;
    v6 = -134217729LL;
    *(_QWORD *)(*(_QWORD *)v10 + 1360LL) &= ~0x8000000uLL;
    *(_QWORD *)v10 = 0LL;
    *((_QWORD *)v0 + 170) &= ~0x8000000uLL;
  }
  v12 = (_QWORD *)((char *)v0 + 496);
  v338 = (void **)((char *)v0 + 496);
  v13 = *((_QWORD *)v0 + 62);
  if ( v13 && *(struct tagTHREADINFO **)(v13 + 288) == v0 && (int)IsCleanupIAMAccessSupported() >= 0 )
    CleanupIAMAccess(*v12);
  if ( *(struct tagTHREADINFO **)(W32GetUserSessionState(v10, v6) + 18944) == v0 )
    *(_QWORD *)(W32GetUserSessionState(v15, v14) + 18944) = 0LL;
  v16 = (volatile signed __int32 *)((char *)v0 + 528);
  v346 = (volatile signed __int32 *)((char *)v0 + 528);
  _InterlockedOr((volatile signed __int32 *)v0 + 132, 0x41u);
  v18 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v15, v14) + 48);
  v19 = *(__int64 (**)(void))(v18 + 4720);
  if ( v19 )
  {
    v20 = v19();
    v21 = -1073741637;
  }
  else
  {
    v21 = -1073741637;
    v20 = -1073741637;
  }
  if ( v20 >= 0 )
  {
    v18 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v18, v17) + 48);
    v22 = *(void (__fastcall **)(struct tagTHREADINFO *))(v18 + 4728);
    if ( v22 )
      v22(v0);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v18, v17) + 3256) )
  {
    W32GetUserSessionState(v24, v23);
    Instance = DelayZonePalmRejection::GetInstance(v26, v25);
    if ( Instance )
      DelayZonePalmRejection::CleanUpDelayZonesOnThreadExit(Instance, v0);
  }
  v29 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v24, v23) + 48);
  v30 = *(__int64 (**)(void))(v29 + 1424);
  if ( v30 )
    v31 = v30();
  else
    v31 = -1073741637;
  if ( v31 >= 0 )
  {
    v29 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v29, v28) + 48);
    v32 = *(void (__fastcall **)(struct tagTHREADINFO *))(v29 + 1432);
    if ( v32 )
      v32(v0);
  }
  v34 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v29, v28) + 48);
  v35 = *(__int64 (**)(void))(v34 + 1440);
  if ( v35 )
    v36 = v35();
  else
    v36 = -1073741637;
  if ( v36 >= 0 )
  {
    v34 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v34, v33) + 48);
    v37 = *(void (**)(void))(v34 + 1448);
    if ( v37 )
      v37();
  }
  v39 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v34, v33) + 48);
  v40 = *(__int64 (**)(void))(v39 + 1456);
  if ( v40 )
    v41 = v40();
  else
    v41 = -1073741637;
  if ( v41 >= 0 )
  {
    v39 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v39, v38) + 48);
    v42 = *(void (**)(void))(v39 + 1464);
    if ( v42 )
      v42();
  }
  if ( *v12 )
  {
    v43 = *(_QWORD **)(*v12 + 224LL);
    if ( v43 && (struct tagTHREADINFO *)v43[4] == v0 )
    {
      v43 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v43, v38) + 48);
      v44 = (__int64 (*)(void))v43[186];
      v45 = v44 ? v44() : -1073741637;
      if ( v45 >= 0 )
      {
        v43 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v43, v38) + 48);
        v46 = (void (*)(void))v43[187];
        if ( v46 )
          v46();
      }
    }
    UserSessionState = W32GetUserSessionState(v43, v38);
    W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 66064), 0);
    v48 = *v12;
    if ( *(struct tagPROCESSINFO **)(*v12 + 256LL) == *v355 )
    {
      for ( i = *((_QWORD *)*v355 + 40); i && (i == v1 || *(_QWORD *)(i + 496) != v48); i = *(_QWORD *)(i + 704) )
        ;
      if ( !i )
        *(_QWORD *)(v48 + 256) = 0LL;
    }
    W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 66064), 0LL);
  }
  v340 = (const signed __int64 *)(v1 + 1360);
  if ( (*(_BYTE *)(v1 + 1360) & 8) != 0 )
  {
    v51 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v39, v38) + 48);
    v52 = *(__int64 (**)(void))(v51 + 1504);
    v53 = v52 ? v52() : -1073741637;
    if ( v53 >= 0 )
    {
      v54 = W32GetUserSessionState(v51, v50);
      MagContextThreadCallout(v54 + 66040, v1);
    }
  }
  EtwTraceThreadExit((PETHREAD *)v1);
  if ( (_InterlockedCompareExchange(v16, 0, 0) & 0x1000000) != 0 )
  {
    EtwTraceMessageCheckDelay((struct tagTHREADINFO *)v1);
    EtwTraceInputProcessDelay((struct tagTHREADINFO *)v1);
  }
  v56 = *(char **)(v1 + 1512);
  if ( v56 )
  {
    GreDeleteFastMutex(v56);
    *(_QWORD *)(v1 + 1512) = 0LL;
  }
  v58 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v56, v55) + 48);
  v59 = *(__int64 (**)(void))(v58 + 1520);
  if ( v59 )
    v60 = v59();
  else
    v60 = -1073741637;
  if ( v60 >= 0 )
  {
    v58 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v58, v57) + 48);
    v61 = *(void (__fastcall **)(ULONG_PTR))(v58 + 1528);
    if ( v61 )
      v61(v1);
  }
  v345 = (_QWORD *)(v1 + 712);
  if ( *(_QWORD *)(v1 + 712) )
  {
    v63 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v58, v57) + 48);
    v64 = *(__int64 (**)(void))(v63 + 1536);
    if ( v64 )
      v65 = v64();
    else
      v65 = -1073741637;
    if ( v65 >= 0 )
    {
      v63 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v63, v62) + 48);
      v66 = *(void (__fastcall **)(ULONG_PTR))(v63 + 1544);
      if ( v66 )
        v66(v1);
    }
    if ( *(_QWORD *)(v1 + 712) )
    {
      v67 = *(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v63, v62) + 48) + 5040LL);
      if ( v67 )
        v67(v1);
    }
  }
  ProcessWindowStation = (_QWORD *)ApiSetEditionGetProcessWindowStation();
  v70 = ProcessWindowStation;
  if ( ProcessWindowStation )
  {
    Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v351, ProcessWindowStation);
    if ( v70[10] == v1 )
    {
      v74 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v72, v71) + 48);
      v75 = *(__int64 (**)(void))(v74 + 1552);
      v76 = v75 ? v75() : -1073741637;
      if ( v76 >= 0 )
      {
        v77 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v74, v73) + 48) + 1560LL);
        if ( v77 )
          v77(v70);
      }
    }
    if ( v70[11] == v1 )
      v70[11] = 0LL;
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v351);
  }
  while ( *(_QWORD *)(v1 + 648) )
  {
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v337);
    v78 = *(__int64 **)(v1 + 648);
    v79 = *v78;
    if ( *v78 != *(_QWORD *)v337[0] )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(v337);
      if ( v79 )
      {
        v337[0] = *(_QWORD *)(v79 + 88);
        ++*(_DWORD *)(v337[0] + 8LL);
      }
      else
      {
        v337[0] = &gSmartObjNullRef;
      }
    }
    v354 = v78;
    v80 = PtiCurrent();
    v82 = (struct tagTHREADINFO *)v78[4];
    if ( v80 == v82 )
      ++*((_DWORD *)v78 + 10);
    else
      v354 = 0LL;
    if ( (struct tagTHREADINFO *)v1 != v82 )
    {
      MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v354);
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v337);
      break;
    }
    v83 = *((_DWORD *)v78 + 2);
    if ( (v83 & 0x100) != 0 )
    {
      v85 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v82, v81) + 48);
      v86 = *(__int64 (**)(void))(v85 + 1584);
      if ( v86 )
        v87 = v86();
      else
        v87 = -1073741637;
      if ( v87 >= 0 )
      {
        v88 = *(_QWORD *)v337[0];
        v89 = *(void (__fastcall **)(__int64 *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v85, v84) + 48)
                                                        + 1592LL);
        if ( v89 )
          v89(v78, v88);
      }
LABEL_110:
      if ( v354 )
      {
        *((_DWORD *)v354 + 10) = 0;
        v354 = 0LL;
      }
      if ( (int)IsxxxMNEndMenuStateSupported() >= 0 )
        xxxMNEndMenuState(v78);
      goto LABEL_114;
    }
    *((_DWORD *)v78 + 2) = v83 & 0xFFFFFFFB;
    *(_DWORD *)(*(_QWORD *)(v1 + 472) + 412LL) &= ~0x100000u;
    v91 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v82, v81) + 48);
    v92 = *(__int64 (**)(void))(v91 + 1632);
    if ( v92 )
      v93 = v92();
    else
      v93 = -1073741637;
    if ( v93 >= 0 )
    {
      v94 = *(_QWORD *)v337[0];
      v95 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v91, v90) + 48) + 1640LL);
      if ( v95 )
        v95(v94, v78);
    }
    if ( (**(_DWORD **)v337[0] & 1) != 0 )
      goto LABEL_110;
    v96 = *(_QWORD *)v337[0];
    if ( (**(_DWORD **)v337[0] & 0x8000) != 0 )
      goto LABEL_110;
    if ( v354 )
    {
      *((_DWORD *)v354 + 10) = 0;
      v354 = 0LL;
    }
    v98 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v96, v90) + 48);
    v99 = *(__int64 (**)(void))(v98 + 1648);
    if ( v99 )
      v100 = v99();
    else
      v100 = -1073741637;
    if ( v100 >= 0 )
    {
      v101 = *(_QWORD *)v337[0];
      v98 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v98, v97) + 48);
      v102 = *(void (__fastcall **)(__int64))(v98 + 1656);
      if ( v102 )
        v102(v101);
    }
    v104 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v98, v97) + 48);
    v105 = *(__int64 (**)(void))(v104 + 1664);
    if ( v105 )
      v106 = v105();
    else
      v106 = -1073741637;
    if ( v106 >= 0 )
    {
      v107 = *(_QWORD *)v337[0];
      v108 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v104, v103) + 48) + 1672LL);
      if ( v108 )
        v108(v107);
    }
    if ( (**(_DWORD **)v337[0] & 0x40000000) != 0 )
    {
      v116 = *(_QWORD *)v337[0];
      **(_DWORD **)v337[0] &= ~0x20000000u;
    }
    else
    {
      v109 = *(_QWORD *)v337[0];
      if ( v109 == W32GetUserSessionState(*(_QWORD *)v337[0], v103) + 65792 )
      {
        v112 = W32GetUserSessionState(v111, v110);
        *(_DWORD *)(v112 + 66800) &= ~0x800000u;
        v115 = W32GetUserSessionState(v114, v113);
        NullifyLookasideRef(*(void **)(v115 + 65880));
      }
      else
      {
        v117 = *(_QWORD *)v337[0];
        NullifyLookasideRef(*(void **)(*(_QWORD *)v337[0] + 88LL));
        v120 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v119, v118) + 19800) + 32LL);
        if ( v120 )
          NSInstrumentation::CTypeIsolation<24576,96>::Free(v120, v117);
        if ( *(_QWORD *)v337[0] != *v78 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2969LL);
        v116 = *(_QWORD *)v337[0];
        if ( *(_QWORD *)v337[0] == *v78 )
          *v78 = 0LL;
      }
    }
    v122 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v116, v103) + 48);
    v123 = *(__int64 (**)(void))(v122 + 1616);
    if ( v123 )
      v124 = v123();
    else
      v124 = -1073741637;
    if ( v124 >= 0 )
    {
      v125 = *(void (__fastcall **)(ULONG_PTR, __int64 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v122, v121) + 48)
                                                         + 1624LL);
      if ( v125 )
        v125(v1, v78);
    }
LABEL_114:
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v354);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v337);
  }
  v126 = (ULONG_PTR *)(v1 + 752);
  v342 = v1 + 752;
  v127 = *(__int64 **)(v1 + 752);
  if ( v127 )
  {
    HMAssignmentUnlock(v127 + 2);
    HMAssignmentUnlock((__int64 *)(*v126 + 24));
    HMAssignmentUnlock((__int64 *)(*v126 + 8));
    v128 = *v126;
    v127 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(v130, v129) + 19800) + 40LL);
    if ( v127 )
      NSInstrumentation::CTypeIsolation<28672,112>::Free(v127, v128);
    *v126 = 0LL;
  }
  v131 = *v355;
  if ( *v355 && *((_QWORD *)v131 + 41) == v1 )
    *((_QWORD *)v131 + 41) = 0LL;
  while ( *(_QWORD *)(v1 + 664) )
  {
    v127 = *(__int64 **)(W32GetWin32kBaseApiSetTable(v127, v69) + 48);
    v132 = (__int64 (*)(void))v127[210];
    if ( v132 )
      v133 = v132();
    else
      v133 = -1073741637;
    if ( v133 >= 0 )
    {
      v134 = *(_QWORD *)(v1 + 664);
      v127 = *(__int64 **)(W32GetWin32kBaseApiSetTable(v127, v69) + 48);
      v135 = (void (__fastcall *)(ULONG_PTR, __int64))v127[211];
      if ( v135 )
        v135(v1, v134);
    }
  }
  if ( (_InterlockedCompareExchange(v16, 0, 0) & 0x800) != 0 )
  {
    v127 = (__int64 *)*((_QWORD *)*v338 + 1);
    v136 = v127[3];
    if ( v136 )
    {
      Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v350, v1, v127[3]);
      v140 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v138, v137) + 48);
      v141 = *(__int64 (**)(void))(v140 + 1696);
      if ( v141 )
        v142 = v141();
      else
        v142 = -1073741637;
      if ( v142 >= 0 )
      {
        v143 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v140, v139) + 48) + 1704LL);
        if ( v143 )
          v143(v136);
      }
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v350);
    }
  }
  if ( *v355 && *((_QWORD *)*v355 + 103) )
  {
    v127 = *(__int64 **)(W32GetWin32kBaseApiSetTable(v127, v69) + 48);
    v144 = (__int64 (*)(void))v127[214];
    v145 = v144 ? v144() : -1073741637;
    if ( v145 >= 0 )
    {
      v127 = *(__int64 **)(W32GetWin32kBaseApiSetTable(v127, v69) + 48);
      v146 = (void (__fastcall *)(ULONG_PTR))v127[215];
      if ( v146 )
        v146(v1);
    }
  }
  v148 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v127, v69) + 48);
  v149 = *(__int64 (**)(void))(v148 + 1728);
  if ( v149 )
    v150 = v149();
  else
    v150 = -1073741637;
  if ( v150 >= 0 )
  {
    v148 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v148, v147) + 48);
    v151 = *(void (__fastcall **)(ULONG_PTR))(v148 + 1736);
    if ( v151 )
      v151(v1);
  }
  v152 = v340;
  if ( (*v340 & 0x400000) != 0 )
  {
    *v340 &= ~0x400000uLL;
    if ( *(_BYTE *)(W32GetUserSessionState(v148, v147) + 19232) != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3070LL);
    *(_BYTE *)(W32GetUserSessionState(v154, v153) + 19232) = 0;
    if ( *(_DWORD *)(W32GetUserSessionState(v156, v155) + 19248) )
    {
      v159 = *(_DWORD *)(W32GetUserSessionState(v158, v157) + 19248);
      v162 = W32GetUserSessionState(v161, v160);
      KeReleaseSemaphore(*(PRKSEMAPHORE *)(v162 + 19240), 0, v159, 0);
      *(_DWORD *)(W32GetUserSessionState(v164, v163) + 19248) = 0;
    }
  }
  v165 = *(void **)(v1 + 1536);
  if ( v165 )
  {
    CleanupRimDevObjInUserModeCallback(v165);
    *(_QWORD *)(v1 + 1536) = 0LL;
  }
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( IsInputThread(v167, v166) )
      UserDeactivateMITInputProcessing(v169, v168);
  }
  else if ( IsInputThread(v167, v166) )
  {
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      KeEnterCriticalRegion();
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
      v175 = W32GetUserSessionState(v174, v173);
      LOBYTE(v176) = 1;
      ExAcquireFastResourceExclusive(*(_QWORD *)(v175 + 16), CurrentThreadWin32Thread + 176, v176);
    }
    UserDeactivateMITInputProcessing(v171, v170);
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      v177 = PsGetCurrentThreadWin32Thread();
      v180 = W32GetUserSessionState(v179, v178);
      ExReleaseFastResource(*(_QWORD *)(v180 + 16), v177 + 176);
      KeLeaveCriticalRegion();
    }
  }
  if ( IsKSTThread(v169, v168) )
    DeactivateKSTInputProcessingHelper();
  if ( _bittest64(v152, 0x28u) )
  {
    if ( v2 )
    {
      CoreMessagingKPort::CleanUpRoutingInfoForThread(
        *(CoreMessagingKPort **)(*(_QWORD *)(v2 + 1184) + 72184LL),
        (struct tagTHREADINFO *const)v1);
      goto LABEL_213;
    }
LABEL_216:
    v183 = 0;
  }
  else
  {
LABEL_213:
    if ( !v2 )
      goto LABEL_216;
    if ( *(_QWORD *)(v2 + 320) != v1 )
      goto LABEL_216;
    v183 = 1;
    if ( *(_QWORD *)(v1 + 704) )
      goto LABEL_216;
  }
  if ( v2 )
  {
    if ( *(_WORD *)(*(_QWORD *)(v1 + 520) + 154LL) )
    {
      v182 = (void *)*(unsigned __int16 *)(*(_QWORD *)(v1 + 520) + 154LL);
      v181 = (unsigned int)(0xFFFF - (_DWORD)v182);
      if ( *(unsigned __int16 *)(v2 + 800) >= (int)v181 )
      {
        *(_WORD *)(v2 + 800) = -1;
      }
      else
      {
        v182 = (void *)*(unsigned __int16 *)(*(_QWORD *)(v1 + 520) + 154LL);
        *(_WORD *)(v2 + 800) += (_WORD)v182;
      }
    }
    if ( v183
      && *(_WORD *)(v2 + 800)
      && (unsigned int)dword_14029EF38 > 5
      && tlgKeywordOn((__int64)&dword_14029EF38, 0x200000000000LL) )
    {
      v353 = v184;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (__int64)&dword_14029EF38,
        byte_140277D11,
        v184,
        v185,
        (__int64)&v353);
    }
  }
  if ( v183 )
  {
    if ( v2 )
    {
      if ( (*(_DWORD *)(v2 + 808) & 0x200000LL) != 0 )
      {
        RIMIDEProcessRemoveInjectionDevices(v2);
        v186 = *(_QWORD *)(v2 + 880);
        if ( v186 )
        {
          *(_QWORD *)(v186 + 96) = 0LL;
          v182 = *(void **)(v186 + 88);
          if ( v182 )
          {
            ZwClose(v182);
            *(_QWORD *)(v186 + 88) = 0LL;
          }
        }
      }
      if ( (*(_DWORD *)(v2 + 808) & 0x2000000) != 0 )
      {
        v187 = W32GetUserSessionState(v182, v181);
        CInputConfig::zzzCleanupInputSpaces(*(CInputConfig **)(v187 + 18632), (const struct tagPROCESSINFO *)v2);
      }
    }
    v189 = *(struct tagPROCESSINFO **)(W32GetUserSessionState(v182, v181) + 43240);
    v190 = v355;
    if ( v189 == *v355 && !*(_DWORD *)(W32GetUserSessionState(v189, v188) + 43276) )
    {
      LOBYTE(v336) = 0;
      xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 4LL, 0LL, v336, 0LL, 0LL, 0LL, v343, 0LL);
      W32GetUserSessionState(v192, v191);
    }
    if ( *v190 && (unsigned int)IsCurrentProcessDwm() )
      xxxDwmProcessShutdown(1LL, v193);
  }
  else
  {
    v190 = v355;
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v348);
  if ( *v344 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3270LL);
  if ( *(_QWORD *)(W32GetUserSessionState(v195, v194) + 18944) == v1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3271LL);
  if ( *v345 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3272LL);
  if ( *v126 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3273LL);
  v199 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v197, v196) + 48);
  v200 = (__int64 (*)(void))v199[218];
  if ( v200 )
    v201 = v200();
  else
    v201 = -1073741637;
  if ( v201 >= 0 )
  {
    v199 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v199, v198) + 48);
    v202 = (void (__fastcall *)(ULONG_PTR))v199[219];
    if ( v202 )
      v202(v1);
  }
  if ( (int)IsFreeDelayedHooksSupported >= 0 )
  {
    v199 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v199, v198) + 48);
    v203 = (void (*)(void))v199[355];
    if ( v203 )
      v203();
  }
  v205 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v199, v198) + 48);
  v206 = *(__int64 (**)(void))(v205 + 1760);
  if ( v206 )
    v207 = v206();
  else
    v207 = -1073741637;
  if ( v207 >= 0 )
  {
    v205 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v205, v204) + 48);
    v208 = *(void (**)(void))(v205 + 1768);
    if ( v208 )
      v208();
  }
  v211 = *(_QWORD **)(W32GetUserSessionState(v205, v204) + 63248);
  if ( v211 )
  {
    do
    {
      v212 = (_QWORD *)*v211;
      if ( v211[3] == v1 )
      {
        v210 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v210, v209) + 48);
        v213 = *(__int64 (**)(void))(v210 + 1776);
        v214 = v213 ? v213() : -1073741637;
        if ( v214 >= 0 )
          FreeHwndList((__int64)v211);
      }
      v211 = v212;
    }
    while ( v212 );
  }
  v216 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v210, v209) + 48);
  v217 = *(__int64 (**)(void))(v216 + 1792);
  if ( v217 )
    v218 = v217();
  else
    v218 = -1073741637;
  if ( v218 >= 0 )
  {
    v216 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v216, v215) + 48);
    v219 = *(void (**)(void))(v216 + 1800);
    if ( v219 )
      v219();
  }
  v220 = W32GetUserSessionState(v216, v215);
  CActivationObjectManager::OnThreadTermination(*(CActivationObjectManager **)(v220 + 18864));
  DestroyThreadsObjects();
  v224 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v222, v221) + 48);
  v225 = *(__int64 (**)(void))(v224 + 1808);
  if ( v225 )
    v226 = v225();
  else
    v226 = -1073741637;
  if ( v226 >= 0 )
  {
    v227 = *(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v224, v223) + 48) + 1816LL);
    if ( v227 )
      v227(v1);
  }
  HMAssignmentUnlock((__int64 *)(v1 + 480));
  if ( *(_DWORD *)(W32GetUserSessionState(v229, v228) + 36400) == 1 )
  {
    *(_DWORD *)(W32GetUserSessionState(v231, v230) + 2728) = 0;
    _InterlockedOr(v335, 0);
    CleanupResources();
  }
  if ( v183 )
  {
    if ( (*((_DWORD *)*v190 + 3) & 0x1000000) != 0 )
    {
      v232 = *(_QWORD *)(v1 + 504);
      if ( v232 )
      {
        if ( *(_QWORD *)(v232 + 168) && (int)Is_PostMessageSupported() >= 0 )
          PostMessage(*(_QWORD *)(v232 + 168), 1114LL);
      }
    }
    v234 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v231, v230) + 48);
    v235 = *(__int64 (**)(void))(v234 + 1840);
    if ( v235 )
      v236 = v235();
    else
      v236 = -1073741637;
    if ( v236 >= 0 )
    {
      v237 = *v190;
      v238 = *(void (__fastcall **)(struct tagPROCESSINFO *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v234, v233) + 48)
                                                            + 1848LL);
      if ( v238 )
        v238(v237);
    }
    *((_DWORD *)*v190 + 3) &= ~0x2000u;
    *((_DWORD *)*v190 + 3) &= ~0x10000000u;
    Address = *(_DWORD **)(*(_QWORD *)(v1 + 520) + 208LL);
    if ( Address )
    {
      ProbeForWrite(Address, 4uLL, 4u);
      *Address = 0;
    }
    DestroyProcessesObjects(*v190);
  }
  HMAssignmentUnlock((__int64 *)(v1 + 832));
  v240 = *(_QWORD *)(v1 + 1576);
  if ( v240 )
  {
    GreDeleteFastMutex((char *)v240);
    *(_QWORD *)(v1 + 1576) = 0LL;
  }
  if ( !*(_QWORD *)(v1 + 472) )
    goto LABEL_317;
  v242 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v240, v239) + 48);
  v243 = *(__int64 (**)(void))(v242 + 3440);
  if ( v243 )
    v244 = v243();
  else
    v244 = -1073741637;
  if ( v244 >= 0 )
  {
    v245 = *(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v242, v241) + 48) + 3448LL);
    if ( v245 )
      v245(v1);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v1 + 472) + 408LL) -= *(_DWORD *)(v1 + 792),
        v246 = *(_QWORD *)(v1 + 472),
        v247 = 0,
        (v240 = *(_QWORD *)(v246 + 504)) != 0)
    && (v247 = 1, *(_QWORD *)(v240 + 1688))
    || (v240 = *(_QWORD *)(v246 + 512)) != 0 && ((unsigned int)(v247 + 1) > 1 || *(_QWORD *)(v240 + 1696)) )
  {
    v248 = v338;
    v249 = *v338;
    *(_QWORD *)(W32GetUserSessionState(v240, v246) + 16912) = v249;
    ApiSetEditionSystemGenerateMove(0LL);
  }
  else
  {
LABEL_317:
    v248 = v338;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v240);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v251 = (_QWORD *)(CurrentProcessWin32Process + 320);
  v252 = *(_QWORD *)(CurrentProcessWin32Process + 320);
  if ( v252 )
  {
    if ( v252 == v1 )
      goto LABEL_326;
    v253 = v252;
    do
    {
      v254 = *(_QWORD *)(v253 + 704);
      v255 = v253;
      if ( !v254 )
        break;
      v251 = (_QWORD *)(v253 + 704);
      v253 = *(_QWORD *)(v253 + 704);
      v255 = v254;
    }
    while ( v254 != v1 );
    if ( v255 == v1 )
    {
LABEL_326:
      *v251 = *(_QWORD *)(v1 + 704);
      *(_QWORD *)(v1 + 704) = 0LL;
    }
  }
  v339[0] = 0LL;
  LockObjectAssignment(v339, *v248);
  v259 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v257, v256) + 48);
  v260 = *(__int64 (**)(void))(v259 + 1856);
  if ( v260 )
    v261 = v260();
  else
    v261 = -1073741637;
  if ( v261 >= 0 )
  {
    v262 = *(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v259, v258) + 48) + 1864LL);
    if ( v262 )
      v262(v1);
  }
  if ( *(_DWORD *)(v1 + 1704) )
  {
    KeSetKernelStackSwapEnable(1u);
    *(_DWORD *)(v1 + 1704) = 0;
  }
  if ( *v190 )
    --*((_DWORD *)*v190 + 92);
  UninitializeThreadInfoIocp((struct tagTHREADINFO *)v1, v258);
  v264 = *(void **)(v1 + 1632);
  if ( v264 )
  {
    ObCloseHandle(v264, 0);
    *(_QWORD *)(v1 + 1632) = 0LL;
  }
  v265 = *(void **)(v1 + 760);
  if ( v265 )
  {
    if ( (int)ProtectHandle(v265, v263, (struct _OBJECT_TYPE *)ExEventObjectType, 0) >= 0
      && (*(_DWORD *)v340 & 0x1000000) == 0 )
    {
      ObCloseHandle(*(HANDLE *)(v1 + 760), 1);
    }
    *(_QWORD *)(v1 + 760) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v265, v263) + 16264) )
  {
    v267 = *(_QWORD *)(W32GetUserSessionState(v267, v266) + 16264);
    if ( *(_QWORD *)(v267 + 16) == v1 )
    {
      v268 = W32GetUserSessionState(v267, v266);
      HMAssignmentUnlock((__int64 *)(v268 + 16264));
    }
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v267, v266) + 18904) == v1 )
  {
    v271 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v270, v269) + 48) + 1352LL);
    if ( v271 )
      v272 = v271();
    else
      v272 = -1073741637;
    if ( v272 >= 0 )
    {
      xxxWindowEvent(32773LL, 0LL, 0xFFFFFFFC, 0, 4);
      xxxWindowEvent(3LL, 0LL, 0, 0, 4);
    }
    v273 = v339[0];
    if ( *(_QWORD *)(*((_QWORD *)v339[0] + 1) + 192LL) && (int)Is_PostMessageSupported() >= 0 )
    {
      v276 = W32GetUserSessionState(v275, v274);
      PostMessage(*(_QWORD *)(v273[1] + 192LL), *(unsigned int *)(v276 + 63304));
    }
    DisableDelegation();
    v270 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v278, v277) + 48);
    v279 = *(void (**)(void))(v270 + 1872);
    if ( v279 )
      v279();
  }
  v280 = (unsigned __int64)*v190;
  if ( !*v190 )
  {
    v280 = PsGetCurrentProcessWin32Process(v270);
    if ( v280 )
      v280 &= -(__int64)(*(_QWORD *)v280 != 0LL);
  }
  CLastWokenThread::OnDestroyed(
    *(CLastWokenThread **)(*(_QWORD *)(v280 + 1184) + 3048LL),
    (const struct tagTHREADINFO *)v1);
  v283 = W32GetUserSessionState(v282, v281);
  v285 = v283;
  if ( *(_QWORD *)(v283 + 19080) == v1 )
    *(_QWORD *)(v283 + 19080) = 0LL;
  v286 = v340;
  v287 = *(unsigned int *)v340;
  if ( (v287 & 0x2000) != 0 )
    DelegationAPI::ScrubDelegateThreadWindows((DelegationAPI *)v1, v284);
  if ( (*v286 & 0x2000000000LL) != 0 )
    DelegationAPI::ScrubShellHandwritingDelegateThread((DelegationAPI *)v1, v284);
  if ( *(_QWORD *)(v1 + 472) )
  {
    v289 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v287, v284) + 48);
    v290 = *(__int64 (**)(void))(v289 + 1216);
    if ( v290 )
      v21 = v290();
    if ( v21 >= 0 )
    {
      v291 = *(_QWORD *)(v1 + 472);
      v292 = *(void (__fastcall **)(__int64, ULONG_PTR))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v289, v288) + 48)
                                                       + 1224LL);
      if ( v292 )
        v292(v291, v1);
    }
    ++*(_DWORD *)(*(_QWORD *)(v1 + 472) + 416LL);
    zzzDestroyQueue(*(tagQ **)(v1 + 472), (tagTHREADINFO *)v1);
  }
  if ( *(_QWORD *)(v1 + 696) )
    tagTHREADINFO::AssignQueueWorker(v1, 0LL, 512LL, 1696LL, 696);
  if ( *v338 )
  {
    v293 = (struct tagTHREADINFO *)(v1 + 776);
    v284 = *(struct tagTHREADINFO **)(v1 + 776);
    v294 = *(struct tagTHREADINFO ***)(v1 + 784);
    if ( *((_QWORD *)v284 + 1) != v1 + 776 || *v294 != v293 )
      __fastfail(3u);
    *v294 = v284;
    *((_QWORD *)v284 + 1) = v294;
    *(_QWORD *)(v1 + 784) = v1 + 776;
    *(_QWORD *)v293 = v293;
  }
  FreeMessageList(v1 + 848, (__int64)v284);
  v298 = (char *)(W32GetUserSessionState(v296, v295) + 16904);
  while ( 1 )
  {
    v299 = *(char **)v298;
    if ( !*(_QWORD *)v298 )
      break;
    if ( *((_QWORD *)v299 + 1) == v1 || *((_QWORD *)v299 + 2) == v1 )
    {
      *(_QWORD *)v298 = *(_QWORD *)v299;
      GreDeleteFastMutex(v299);
    }
    else
    {
      v298 = *(char **)v298;
    }
  }
  MarkThreadsObjects(v1, v297);
  if ( *(_QWORD *)(W32GetUserSessionState(v301, v300) + 69040) == v1 )
  {
    *(_QWORD *)(W32GetUserSessionState(v303, v302) + 69040) = 0LL;
    W32GetUserSessionState(v305, v304);
  }
  if ( *(_QWORD *)(v285 + 19080) == v1 )
    *(_QWORD *)(v285 + 19080) = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v303, v302) + 63240) == v1 )
    *(_QWORD *)(W32GetUserSessionState(v307, v306) + 63240) = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v307, v306) + 18944) == v1 )
    *(_QWORD *)(W32GetUserSessionState(v309, v308) + 18944) = 0LL;
  v310 = *(tagQ **)(v1 + 472);
  if ( v310 && !tagQ::IsAnyThreadAttached(v310) )
  {
    v313 = *(_QWORD *)(W32GetUserSessionState(v311, v308) + 18888);
    if ( v313 == *(_QWORD *)(v1 + 472) )
      *(_QWORD *)(W32GetUserSessionState(v313, v312) + 18888) = 0LL;
    v315 = *(_QWORD *)(W32GetUserSessionState(v313, v312) + 18896);
    if ( v315 == *(_QWORD *)(v1 + 472) )
      *(_QWORD *)(W32GetUserSessionState(v315, v314) + 18896) = 0LL;
    v316 = *(_QWORD *)(W32GetUserSessionState(v315, v314) + 19176);
    if ( v316 == *(_QWORD *)(v1 + 472) )
      *(_QWORD *)(W32GetUserSessionState(v316, v308) + 19176) = 0LL;
  }
  v317 = v339[0];
  if ( v339[0] )
  {
    v318 = *(void **)(v1 + 488);
    if ( v318 )
    {
      if ( v318 != (void *)(v1 + 1096) )
      {
        RtlFreeHeap(*((PVOID *)v339[0] + 17), 0, v318);
        *(_QWORD *)(v1 + 488) = v1 + 1096;
      }
    }
  }
  if ( IsInputThread((__int64)v317, v308) )
  {
    v321 = W32GetUserSessionState(v320, v319);
    CInputThreadBase::RevokeThreadAsInput(*(CInputThreadBase **)(v321 + 18752));
  }
  if ( IsKSTThread(v320, v319) )
  {
    InputTraceLogging::KST::RevokeThreadAsKST();
    v324 = W32GetUserSessionState(v323, v322);
    CInputThreadBase::RevokeThreadAsInput(*(CInputThreadBase **)(v324 + 3104));
  }
  if ( (_InterlockedCompareExchange(v346, 0, 0) & 4) != 0 && *(_QWORD *)(v1 + 520) )
  {
    GreDeleteFastMutex(*(char **)(v1 + 520));
    *(_QWORD *)(v1 + 520) = 0LL;
  }
  DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD **)v339);
  v327 = *(_DWORD *)(W32GetUserSessionState(v326, v325) + 63456);
  if ( v327 == (unsigned int)PsGetCurrentThreadId() )
  {
    v330 = W32GetUserSessionState(v329, v328);
    DeferrableUnlockObjectAssignment<tagWINDOWSTATION>((_QWORD **)(v330 + 63512));
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(v329, (const EVENT_DESCRIPTOR *)"W", &W32kControlGuid);
  while ( 1 )
  {
    v331 = *(_QWORD **)(v1 + 1672);
    if ( !v331 )
      break;
    *(_QWORD *)(v1 + 1672) = *v331;
    if ( (_UNKNOWN *)*(v331 - 1) != &gSmartObjNullRef && !--*(_DWORD *)(*(v331 - 1) + 8LL) )
    {
      if ( *(_BYTE *)(*(v331 - 1) + 12LL) )
      {
        v332 = (char *)*(v331 - 1);
        v333 = W32GetUserSessionState(v329, v328);
        Win32FreeToPagedLookasideListImpl(*(char **)(v333 + 42584), v332);
      }
    }
  }
  v334 = W32GetUserSessionState(v329, v328);
  --*(_DWORD *)(v334 + 36400);
  *v286 |= 0x80uLL;
  if ( tagTHREADINFO::IsAnyPriorityFloorSet((tagTHREADINFO *)v1) )
    KeBugCheckEx(0x164u, 0x41uLL, 0LL, 0LL, 0LL);
  if ( v348[0] )
    --*(_DWORD *)(v349 + 28);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v347);
}
