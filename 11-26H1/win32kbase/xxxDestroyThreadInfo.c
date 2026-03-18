/*
 * XREFs of xxxDestroyThreadInfo @ 0x1400BA274
 * Callers:
 *     UserThreadCallout @ 0x140139A60 (UserThreadCallout.c)
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 * Callees:
 *     ApiSetEditionGetProcessWindowStation @ 0x14003B90C (ApiSetEditionGetProcessWindowStation.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x140049048 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400491B4 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140064480 (McTemplateK0_EtwWriteTransfer.c)
 *     IsKSTThread @ 0x1400659B0 (IsKSTThread.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     MarkThreadsObjects @ 0x1400949D0 (MarkThreadsObjects.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x1400B80E4 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 *     ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400B8D3C (-ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     zzzDestroyQueue @ 0x1400B8EC0 (zzzDestroyQueue.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1400B9344 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     FreeMessageList @ 0x1400B94F0 (FreeMessageList.c)
 *     ?UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400BBE90 (-UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?IsAnyPriorityFloorSet@tagTHREADINFO@@QEAA_NXZ @ 0x1400BC000 (-IsAnyPriorityFloorSet@tagTHREADINFO@@QEAA_NXZ.c)
 *     LockObjectAssignment @ 0x1400BC070 (LockObjectAssignment.c)
 *     ?OnDestroyed@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x1400CFD9C (-OnDestroyed@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@@Z.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1400D02B8 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400D0658 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     DestroyThreadsObjects @ 0x1400D0690 (DestroyThreadsObjects.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1400D0B3C (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400D7D60 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     EtwTraceInputProcessDelay @ 0x1400DB7E0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceThreadExit @ 0x1400DC6AC (EtwTraceThreadExit.c)
 *     EtwTraceMessageCheckDelay @ 0x1400DCB00 (EtwTraceMessageCheckDelay.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400E6B20 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1400F3420 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     FreeHwndList @ 0x1400FE0B0 (FreeHwndList.c)
 *     xxxWindowEvent @ 0x14011CB00 (xxxWindowEvent.c)
 *     ProtectHandle @ 0x140133808 (ProtectHandle.c)
 *     ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x140140A0C (-AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14014C2AC (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x14015DE38 (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 *     ?ScrubShellHandwritingDelegateThread@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x140172BC8 (-ScrubShellHandwritingDelegateThread@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     UserDeactivateMITInputProcessing @ 0x140179858 (UserDeactivateMITInputProcessing.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CleanUpDelayZonesOnThreadExit@DelayZonePalmRejection@@QEAAXQEAUtagTHREADINFO@@@Z @ 0x1401B8334 (-CleanUpDelayZonesOnThreadExit@DelayZonePalmRejection@@QEAAXQEAUtagTHREADINFO@@@Z.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1401C1B74 (ApiSetEditionSystemGenerateMove.c)
 *     ??0?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1401C57DC (--0-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1401C62C4 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1401C97E0 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1401C9850 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1401C98B0 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1401C9A7C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     ?DetachPrepareForDestroy@MenuStateOwnerLockxxxUnlock@@QEAAXXZ @ 0x1401C9AD4 (-DetachPrepareForDestroy@MenuStateOwnerLockxxxUnlock@@QEAAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1401C9BA0 (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1401C9D24 (NullifyLookasideRef.c)
 *     CleanupRimDevObjInUserModeCallback @ 0x1401CA264 (CleanupRimDevObjInUserModeCallback.c)
 *     ?CleanUpRoutingInfoForThread@CoreMessagingKPort@@QEAAXQEAUtagTHREADINFO@@@Z @ 0x1401CD8D8 (-CleanUpRoutingInfoForThread@CoreMessagingKPort@@QEAAXQEAUtagTHREADINFO@@@Z.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 *     CleanupResources @ 0x1401DFE50 (CleanupResources.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1401FBD50 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1401FDF14 (RIMIDEProcessRemoveInjectionDevices.c)
 *     ?zzzCleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x140212244 (-zzzCleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ?RevokeThreadAsKST@KST@InputTraceLogging@@SAXXZ @ 0x14021B180 (-RevokeThreadAsKST@KST@InputTraceLogging@@SAXXZ.c)
 *     DisableDelegation @ 0x14021B3F0 (DisableDelegation.c)
 *     DeactivateKSTInputProcessingHelper @ 0x14021DE70 (DeactivateKSTInputProcessingHelper.c)
 *     ?RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ @ 0x1402255F8 (-RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ.c)
 *     CleanupIAMAccess @ 0x140248DA8 (CleanupIAMAccess.c)
 *     IsCleanupIAMAccessSupported @ 0x1402491D0 (IsCleanupIAMAccessSupported.c)
 *     Is_PostMessageSupported @ 0x1402492F0 (Is_PostMessageSupported.c)
 *     IsxxxMNEndMenuStateSupported @ 0x140249360 (IsxxxMNEndMenuStateSupported.c)
 *     MagContextThreadCallout @ 0x140249398 (MagContextThreadCallout.c)
 *     _PostMessage @ 0x14024950C (_PostMessage.c)
 *     xxxMNEndMenuState @ 0x1402495AC (xxxMNEndMenuState.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void xxxDestroyThreadInfo()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  struct tagTHREADINFO *v2; // rsi
  char *v3; // r14
  __int64 v4; // r13
  struct _NT_TIB *Self; // rbx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  char *v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rcx
  int v21; // r8d
  volatile signed __int32 *v22; // r15
  int v23; // edx
  __int64 v24; // rcx
  int v25; // r8d
  __int64 (*v26)(void); // rax
  int v27; // eax
  int v28; // r12d
  void (__fastcall *v29)(struct tagTHREADINFO *); // rax
  int v30; // edx
  __int64 v31; // rcx
  int v32; // r8d
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  DelayZonePalmRejection *Instance; // rax
  __int64 v37; // rcx
  __int64 (*v38)(void); // rax
  int v39; // eax
  void (__fastcall *v40)(struct tagTHREADINFO *); // rax
  __int64 v41; // rcx
  __int64 (*v42)(void); // rax
  int v43; // eax
  void (*v44)(void); // rax
  int v45; // edx
  __int64 v46; // rcx
  int v47; // r8d
  __int64 (*v48)(void); // rax
  int v49; // eax
  void (*v50)(void); // rax
  _QWORD *v51; // rcx
  __int64 (*v52)(void); // rax
  int v53; // eax
  void (*v54)(void); // rax
  struct W32_PUSH_LOCK *v55; // rbx
  __int64 v56; // rcx
  struct tagTHREADINFO *i; // rax
  int v58; // edx
  __int64 v59; // rcx
  int v60; // r8d
  __int64 (*v61)(void); // rax
  int v62; // eax
  __int64 UserSessionState; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  char *v67; // rcx
  _QWORD *v68; // rcx
  __int64 (*v69)(void); // rax
  int v70; // eax
  void (__fastcall *v71)(struct tagTHREADINFO *); // rax
  __int64 (*v72)(void); // rax
  int v73; // eax
  void (__fastcall *v74)(struct tagTHREADINFO *); // rax
  void (__fastcall *v75)(struct tagTHREADINFO *); // rax
  __int64 ProcessWindowStation; // rax
  __int64 v77; // rbx
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 (*v80)(void); // rax
  int v81; // eax
  void (__fastcall *v82)(__int64); // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 *v85; // r14
  __int64 v86; // rbx
  int v87; // eax
  __int64 v88; // rcx
  __int64 (*v89)(void); // rax
  int v90; // eax
  __int64 v91; // rbx
  void (__fastcall *v92)(__int64 *, __int64); // rax
  __int64 v93; // rcx
  __int64 (*v94)(void); // rax
  int v95; // eax
  __int64 v96; // rbx
  void (__fastcall *v97)(__int64, __int64 *); // rax
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 (*v100)(void); // rax
  int v101; // eax
  __int64 v102; // rbx
  void (__fastcall *v103)(__int64); // rax
  int v104; // edx
  __int64 v105; // rcx
  int v106; // r8d
  __int64 (*v107)(void); // rax
  int v108; // eax
  __int64 v109; // rbx
  void (__fastcall *v110)(__int64); // rax
  __int64 v111; // rbx
  int v112; // edx
  int v113; // ecx
  int v114; // r8d
  __int64 v115; // rax
  int v116; // edx
  int v117; // ecx
  int v118; // r8d
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rbx
  int v122; // edx
  int v123; // ecx
  int v124; // r8d
  __int64 v125; // rcx
  __int64 v126; // rcx
  __int64 (*v127)(void); // rax
  int v128; // eax
  void (__fastcall *v129)(struct tagTHREADINFO *, __int64 *); // rax
  char *v130; // r14
  __int64 *v131; // rcx
  __int64 v132; // rbx
  int v133; // edx
  int v134; // ecx
  int v135; // r8d
  __int64 v136; // rax
  __int64 (*v137)(void); // rax
  int v138; // eax
  __int64 v139; // rbx
  void (__fastcall *v140)(struct tagTHREADINFO *, __int64); // rax
  __int64 v141; // rbx
  __int64 v142; // rcx
  __int64 v143; // rcx
  __int64 (*v144)(void); // rax
  int v145; // eax
  void (__fastcall *v146)(__int64); // rax
  __int64 (*v147)(void); // rax
  int v148; // eax
  void (__fastcall *v149)(struct tagTHREADINFO *); // rax
  int v150; // edx
  __int64 v151; // rcx
  int v152; // r8d
  __int64 (*v153)(void); // rax
  int v154; // eax
  void (__fastcall *v155)(struct tagTHREADINFO *); // rax
  const signed __int64 *v156; // r15
  int v157; // edx
  int v158; // ecx
  int v159; // r8d
  int v160; // edx
  int v161; // ecx
  int v162; // r8d
  int v163; // edx
  int v164; // ecx
  int v165; // r8d
  LONG v166; // ebx
  int v167; // edx
  int v168; // ecx
  int v169; // r8d
  __int64 v170; // rax
  int v171; // edx
  int v172; // ecx
  int v173; // r8d
  void *v174; // rcx
  int v175; // edx
  int v176; // ecx
  int v177; // r8d
  __int64 v178; // rdx
  __int64 v179; // rcx
  int v180; // r8d
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  int v184; // edx
  int v185; // ecx
  int v186; // r8d
  __int64 v187; // rax
  __int64 v188; // r8
  __int64 v189; // rbx
  int v190; // edx
  int v191; // ecx
  int v192; // r8d
  __int64 v193; // rax
  int v194; // edx
  void *v195; // rcx
  int v196; // r8d
  int v197; // r15d
  int v198; // r9d
  __int64 v199; // rbx
  __int64 v200; // rax
  int v201; // edx
  __int64 v202; // rcx
  int v203; // r8d
  struct tagPROCESSINFO **v204; // r13
  int v205; // edx
  int v206; // ecx
  int v207; // r8d
  int v208; // edx
  int v209; // ecx
  int v210; // r8d
  __int64 v211; // rcx
  _QWORD *v212; // rcx
  __int64 (*v213)(void); // rax
  int v214; // eax
  void (__fastcall *v215)(struct tagTHREADINFO *); // rax
  void (*v216)(void); // rax
  int v217; // edx
  __int64 v218; // rcx
  int v219; // r8d
  __int64 (*v220)(void); // rax
  int v221; // eax
  void (*v222)(void); // rax
  __int64 v223; // rcx
  _QWORD *v224; // rbx
  _QWORD *v225; // r14
  __int64 (*v226)(void); // rax
  int v227; // eax
  __int64 v228; // rcx
  __int64 (*v229)(void); // rax
  int v230; // eax
  void (*v231)(void); // rax
  __int64 v232; // rcx
  __int64 v233; // rcx
  __int64 (*v234)(void); // rax
  int v235; // eax
  void (__fastcall *v236)(struct tagTHREADINFO *); // rax
  int v237; // edx
  int v238; // ecx
  int v239; // r8d
  int v240; // edx
  __int64 v241; // rcx
  int v242; // r8d
  __int64 v243; // rbx
  __int64 v244; // rcx
  __int64 (*v245)(void); // rax
  int v246; // eax
  struct tagPROCESSINFO *v247; // rbx
  void (__fastcall *v248)(struct tagPROCESSINFO *); // rax
  __int64 v249; // rdx
  __int64 v250; // r8
  __int64 v251; // r9
  __int64 v252; // rcx
  __int64 v253; // rcx
  int v254; // r8d
  __int64 (*v255)(void); // rax
  int v256; // eax
  void (__fastcall *v257)(struct tagTHREADINFO *); // rax
  __int64 v258; // rdx
  int v259; // eax
  _QWORD *v260; // r14
  __int64 v261; // rbx
  __int64 CurrentProcessWin32Process; // rax
  struct tagTHREADINFO **v263; // rcx
  struct tagTHREADINFO *v264; // rax
  struct tagTHREADINFO **v265; // rdx
  __int64 v266; // rcx
  __int64 v267; // rcx
  __int64 (*v268)(void); // rax
  int v269; // eax
  void (__fastcall *v270)(struct tagTHREADINFO *); // rax
  __int64 v271; // rdx
  int v272; // r8d
  void *v273; // rcx
  __int64 v274; // rcx
  int v275; // edx
  __int64 v276; // rcx
  int v277; // r8d
  __int64 v278; // rax
  __int64 v279; // rcx
  __int64 (*v280)(void); // rax
  int v281; // eax
  char *v282; // rbx
  int v283; // edx
  int v284; // ecx
  int v285; // r8d
  __int64 v286; // rax
  __int64 v287; // rcx
  void (*v288)(void); // rax
  unsigned __int64 v289; // rax
  int v290; // edx
  int v291; // ecx
  int v292; // r8d
  __int64 v293; // rax
  struct tagTHREADINFO *v294; // rdx
  int v295; // r8d
  __int64 v296; // r14
  const signed __int64 *v297; // rbx
  __int64 v298; // rcx
  __int64 v299; // rcx
  __int64 (*v300)(void); // rax
  __int64 v301; // rbx
  void (__fastcall *v302)(__int64, struct tagTHREADINFO *); // rax
  _QWORD *v303; // rax
  __int64 v304; // rdx
  _QWORD *v305; // rcx
  int v306; // edx
  int v307; // ecx
  int v308; // r8d
  __int64 v309; // rdx
  char *v310; // rbx
  __int64 v311; // r8
  __int64 v312; // r9
  char *v313; // rcx
  int v314; // edx
  int v315; // ecx
  int v316; // r8d
  int v317; // edx
  int v318; // ecx
  int v319; // r8d
  int v320; // edx
  int v321; // ecx
  int v322; // r8d
  int v323; // edx
  int v324; // ecx
  char *v325; // r8
  tagQ *v326; // rcx
  int v327; // ecx
  int v328; // edx
  __int64 v329; // rcx
  int v330; // r8d
  int v331; // edx
  __int64 v332; // rcx
  int v333; // r8d
  __int64 v334; // rcx
  const signed __int64 *v335; // r14
  __int64 v336; // rcx
  int v337; // ecx
  int v338; // edx
  int v339; // ecx
  int v340; // r8d
  __int64 v341; // rax
  __int64 v342; // rdx
  __int64 v343; // r8
  __int64 v344; // r9
  int v345; // edx
  int v346; // ecx
  int v347; // r8d
  __int64 v348; // rax
  int v349; // edx
  int v350; // ecx
  int v351; // r8d
  int v352; // ebx
  int v353; // edx
  __int64 v354; // rcx
  int v355; // r8d
  __int64 v356; // rax
  _QWORD *v357; // rbx
  char *v358; // rbx
  __int64 v359; // rax
  int v360; // r8d
  __int64 v361; // rax
  signed __int32 v362[8]; // [rsp+0h] [rbp-138h] BYREF
  int v363; // [rsp+28h] [rbp-110h]
  int v364; // [rsp+60h] [rbp-D8h]
  char *v365; // [rsp+68h] [rbp-D0h] BYREF
  _QWORD *v366; // [rsp+70h] [rbp-C8h]
  _QWORD v367[3]; // [rsp+78h] [rbp-C0h] BYREF
  volatile void *Address[2]; // [rsp+90h] [rbp-A8h] BYREF
  const signed __int64 *v369; // [rsp+A0h] [rbp-98h]
  struct tagTHREADINFO *v370; // [rsp+A8h] [rbp-90h]
  __int64 v371; // [rsp+B0h] [rbp-88h]
  unsigned __int8 v372[8]; // [rsp+B8h] [rbp-80h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v373; // [rsp+C0h] [rbp-78h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v374; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v375; // [rsp+D0h] [rbp-68h]
  _QWORD *v376; // [rsp+D8h] [rbp-60h]
  _QWORD *v377; // [rsp+E0h] [rbp-58h]
  GUID v378; // [rsp+100h] [rbp-38h] BYREF

  v372[0] = 0;
  v378 = 0LL;
  EtwActivityIdControl(3u, &v378);
  DisplayScenarioContextEnsureAndAssociate(&v378, 0x14u, 0, &v373, v372);
  v374 = v373;
  v2 = PtiCurrent(v1, v0);
  v370 = v2;
  v3 = (char *)v2 + 456;
  v365 = (char *)v2 + 456;
  v4 = *((_QWORD *)v2 + 57);
  v371 = v4;
  Self = KeGetPcr()->NtTib.Self;
  if ( v2 == *(struct tagTHREADINFO **)(W32GetUserSessionState(v7, v6, v8) + 68448) )
  {
    *(_QWORD *)(W32GetUserSessionState(v10, v9, v11) + 68448) = 0LL;
    W32GetUserSessionState(v13, v12, v14);
  }
  if ( Self )
    Self[2].StackBase = 0LL;
  v15 = (char *)v2 + 1680;
  v376 = (_QWORD *)((char *)v2 + 1680);
  v16 = *((_QWORD *)v2 + 210);
  if ( v16 )
  {
    *(_QWORD *)(v16 + 1680) = 0LL;
    v9 = -134217729;
    *(_QWORD *)(*(_QWORD *)v15 + 1360LL) &= ~0x8000000uLL;
    *(_QWORD *)v15 = 0LL;
    *((_QWORD *)v2 + 170) &= ~0x8000000uLL;
  }
  v17 = (_QWORD *)((char *)v2 + 488);
  v366 = (_QWORD *)((char *)v2 + 488);
  v18 = *((_QWORD *)v2 + 61);
  if ( v18 && *(struct tagTHREADINFO **)(v18 + 288) == v2 && (int)IsCleanupIAMAccessSupported() >= 0 )
    CleanupIAMAccess(*v17);
  if ( *(struct tagTHREADINFO **)(W32GetUserSessionState((_DWORD)v15, v9, v11) + 18984) == v2 )
    *(_QWORD *)(W32GetUserSessionState(v20, v19, v21) + 18984) = 0LL;
  v22 = (volatile signed __int32 *)((char *)v2 + 520);
  *(_QWORD *)&v378.Data1 = (char *)v2 + 520;
  _InterlockedOr((volatile signed __int32 *)v2 + 130, 0x41u);
  v24 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v20) + 48);
  v26 = *(__int64 (**)(void))(v24 + 4272);
  if ( v26 )
  {
    v27 = v26();
    v28 = -1073741637;
  }
  else
  {
    v28 = -1073741637;
    v27 = -1073741637;
  }
  if ( v27 >= 0 )
  {
    v24 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v24) + 48);
    v29 = *(void (__fastcall **)(struct tagTHREADINFO *))(v24 + 4280);
    if ( v29 )
      v29(v2);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v24, v23, v25) + 3256) )
  {
    W32GetUserSessionState(v31, v30, v32);
    Instance = DelayZonePalmRejection::GetInstance(v34, v33, v35);
    if ( Instance )
      DelayZonePalmRejection::CleanUpDelayZonesOnThreadExit(Instance, v2);
  }
  v37 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v31) + 48);
  v38 = *(__int64 (**)(void))(v37 + 1200);
  if ( v38 )
    v39 = v38();
  else
    v39 = -1073741637;
  if ( v39 >= 0 )
  {
    v37 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v37) + 48);
    v40 = *(void (__fastcall **)(struct tagTHREADINFO *))(v37 + 1208);
    if ( v40 )
      v40(v2);
  }
  v41 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v37) + 48);
  v42 = *(__int64 (**)(void))(v41 + 1216);
  if ( v42 )
    v43 = v42();
  else
    v43 = -1073741637;
  if ( v43 >= 0 )
  {
    v41 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v41) + 48);
    v44 = *(void (**)(void))(v41 + 1224);
    if ( v44 )
      v44();
  }
  v46 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v41) + 48);
  v48 = *(__int64 (**)(void))(v46 + 1232);
  if ( v48 )
    v49 = v48();
  else
    v49 = -1073741637;
  if ( v49 >= 0 )
  {
    v46 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v46) + 48);
    v50 = *(void (**)(void))(v46 + 1240);
    if ( v50 )
      v50();
  }
  if ( *v17 )
  {
    v51 = *(_QWORD **)(*v17 + 224LL);
    if ( v51 && (struct tagTHREADINFO *)v51[4] == v2 )
    {
      v51 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v51) + 48);
      v52 = (__int64 (*)(void))v51[158];
      v53 = v52 ? v52() : -1073741637;
      if ( v53 >= 0 )
      {
        v51 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v51) + 48);
        v54 = (void (*)(void))v51[159];
        if ( v54 )
          v54();
      }
    }
    v55 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState((_DWORD)v51, v45, v47) + 66056);
    W32AcquirePushLockExclusiveEx(v55);
    v56 = *v366;
    if ( *(_QWORD *)(*v366 + 256LL) == *(_QWORD *)v3 )
    {
      for ( i = *(struct tagTHREADINFO **)(*(_QWORD *)v3 + 328LL);
            i && (i == v2 || *((_QWORD *)i + 61) != v56);
            i = (struct tagTHREADINFO *)*((_QWORD *)i + 87) )
      {
        ;
      }
      if ( !i )
        *(_QWORD *)(v56 + 256) = 0LL;
    }
    W32ReleasePushLockExclusiveEx(v55);
  }
  v369 = (const signed __int64 *)((char *)v2 + 1360);
  if ( (*((_BYTE *)v2 + 1360) & 8) != 0 )
  {
    v59 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v46) + 48);
    v61 = *(__int64 (**)(void))(v59 + 1280);
    v62 = v61 ? v61() : -1073741637;
    if ( v62 >= 0 )
    {
      UserSessionState = W32GetUserSessionState(v59, v58, v60);
      MagContextThreadCallout(UserSessionState + 66032, v2);
    }
  }
  EtwTraceThreadExit(v2);
  if ( (_InterlockedCompareExchange(v22, 0, 0) & 0x1000000) != 0 )
  {
    EtwTraceMessageCheckDelay(v2);
    EtwTraceInputProcessDelay(v2);
  }
  v67 = (char *)*((_QWORD *)v2 + 189);
  if ( v67 )
  {
    GreDeleteFastMutex(v67, v64, v65, v66);
    *((_QWORD *)v2 + 189) = 0LL;
  }
  v68 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v67) + 48);
  v69 = (__int64 (*)(void))v68[162];
  if ( v69 )
    v70 = v69();
  else
    v70 = -1073741637;
  if ( v70 >= 0 )
  {
    v68 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v68) + 48);
    v71 = (void (__fastcall *)(struct tagTHREADINFO *))v68[163];
    if ( v71 )
      v71(v2);
  }
  v377 = (_QWORD *)((char *)v2 + 704);
  if ( *((_QWORD *)v2 + 88) )
  {
    v68 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v68) + 48);
    v72 = (__int64 (*)(void))v68[164];
    if ( v72 )
      v73 = v72();
    else
      v73 = -1073741637;
    if ( v73 >= 0 )
    {
      v68 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v68) + 48);
      v74 = (void (__fastcall *)(struct tagTHREADINFO *))v68[165];
      if ( v74 )
        v74(v2);
    }
    if ( *((_QWORD *)v2 + 88) )
    {
      v68 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v68) + 48);
      v75 = (void (__fastcall *)(struct tagTHREADINFO *))v68[574];
      if ( v75 )
        v75(v2);
    }
  }
  ProcessWindowStation = ApiSetEditionGetProcessWindowStation((__int64)v68);
  v77 = ProcessWindowStation;
  if ( ProcessWindowStation )
  {
    Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v367, ProcessWindowStation);
    if ( *(struct tagTHREADINFO **)(v77 + 48) == v2 )
    {
      v79 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v78) + 48);
      v80 = *(__int64 (**)(void))(v79 + 1328);
      v81 = v80 ? v80() : -1073741637;
      if ( v81 >= 0 )
      {
        v82 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v79) + 48) + 1336LL);
        if ( v82 )
          v82(v77);
      }
    }
    if ( *(struct tagTHREADINFO **)(v77 + 56) == v2 )
      *(_QWORD *)(v77 + 56) = 0LL;
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>(v367);
  }
  while ( *((_QWORD *)v2 + 80) )
  {
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v367);
    v85 = (__int64 *)*((_QWORD *)v2 + 80);
    v86 = *v85;
    if ( *v85 != *(_QWORD *)v367[0] )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(v367);
      if ( v86 )
      {
        v367[0] = *(_QWORD *)(v86 + 88);
        ++*(_DWORD *)(v367[0] + 8LL);
      }
      else
      {
        v367[0] = &gSmartObjNullRef;
      }
    }
    Address[0] = v85;
    if ( v85 )
    {
      if ( PtiCurrent(v84, v83) == (struct tagTHREADINFO *)v85[4] )
        ++*((_DWORD *)v85 + 10);
      else
        Address[0] = 0LL;
    }
    if ( v2 != (struct tagTHREADINFO *)v85[4] )
    {
      MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)Address);
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v367);
      break;
    }
    v87 = *((_DWORD *)v85 + 2);
    if ( (v87 & 0x100) != 0 )
    {
      v88 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v84) + 48);
      v89 = *(__int64 (**)(void))(v88 + 1360);
      if ( v89 )
        v90 = v89();
      else
        v90 = -1073741637;
      if ( v90 >= 0 )
      {
        v91 = *(_QWORD *)v367[0];
        v92 = *(void (__fastcall **)(__int64 *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v88) + 48) + 1368LL);
        if ( v92 )
          v92(v85, v91);
      }
LABEL_112:
      MenuStateOwnerLockxxxUnlock::DetachPrepareForDestroy((MenuStateOwnerLockxxxUnlock *)Address);
      if ( (int)IsxxxMNEndMenuStateSupported() >= 0 )
        xxxMNEndMenuState(v85);
      goto LABEL_114;
    }
    *((_DWORD *)v85 + 2) = v87 & 0xFFFFFFFB;
    *(_DWORD *)(*((_QWORD *)v2 + 58) + 436LL) &= ~0x100000u;
    v93 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v84) + 48);
    v94 = *(__int64 (**)(void))(v93 + 1408);
    if ( v94 )
      v95 = v94();
    else
      v95 = -1073741637;
    if ( v95 >= 0 )
    {
      v96 = *(_QWORD *)v367[0];
      v97 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v93) + 48) + 1416LL);
      if ( v97 )
        v97(v96, v85);
    }
    if ( (**(_DWORD **)v367[0] & 1) != 0 || (**(_DWORD **)v367[0] & 0x8000) != 0 )
      goto LABEL_112;
    MenuStateOwnerLockxxxUnlock::DetachPrepareForDestroy((MenuStateOwnerLockxxxUnlock *)Address);
    v99 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v98) + 48);
    v100 = *(__int64 (**)(void))(v99 + 1424);
    if ( v100 )
      v101 = v100();
    else
      v101 = -1073741637;
    if ( v101 >= 0 )
    {
      v102 = *(_QWORD *)v367[0];
      v99 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v99) + 48);
      v103 = *(void (__fastcall **)(__int64))(v99 + 1432);
      if ( v103 )
        v103(v102);
    }
    v105 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v99) + 48);
    v107 = *(__int64 (**)(void))(v105 + 1440);
    if ( v107 )
      v108 = v107();
    else
      v108 = -1073741637;
    if ( v108 >= 0 )
    {
      v109 = *(_QWORD *)v367[0];
      v110 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v105) + 48) + 1448LL);
      if ( v110 )
        v110(v109);
    }
    if ( (**(_DWORD **)v367[0] & 0x40000000) != 0 )
    {
      v120 = *(_QWORD *)v367[0];
      **(_DWORD **)v367[0] &= ~0x20000000u;
    }
    else
    {
      v111 = *(_QWORD *)v367[0];
      if ( v111 == W32GetUserSessionState(*(_QWORD *)v367[0], v104, v106) + 65784 )
      {
        v115 = W32GetUserSessionState(v113, v112, v114);
        *(_DWORD *)(v115 + 66792) &= ~0x800000u;
        v119 = W32GetUserSessionState(v117, v116, v118);
        NullifyLookasideRef(*(void **)(v119 + 65872));
      }
      else
      {
        v121 = *(_QWORD *)v367[0];
        NullifyLookasideRef(*(void **)(*(_QWORD *)v367[0] + 88LL));
        v125 = **(_QWORD **)(W32GetUserSessionState(v123, v122, v124) + 19832);
        if ( v125 )
          NSInstrumentation::CTypeIsolation<24576,96>::Free(v125, v121);
        if ( *(_QWORD *)v367[0] != *v85 )
        {
          v364 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2929LL);
        }
        v120 = *(_QWORD *)v367[0];
        if ( *(_QWORD *)v367[0] == *v85 )
          *v85 = 0LL;
      }
    }
    v126 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v120) + 48);
    v127 = *(__int64 (**)(void))(v126 + 1392);
    if ( v127 )
      v128 = v127();
    else
      v128 = -1073741637;
    if ( v128 >= 0 )
    {
      v129 = *(void (__fastcall **)(struct tagTHREADINFO *, __int64 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v126)
                                                                                  + 48)
                                                                      + 1400LL);
      if ( v129 )
        v129(v2, v85);
    }
LABEL_114:
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)Address);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v367);
  }
  v130 = (char *)v2 + 744;
  v367[0] = (char *)v2 + 744;
  v131 = (__int64 *)*((_QWORD *)v2 + 93);
  if ( v131 )
  {
    HMAssignmentUnlock(v131 + 2);
    HMAssignmentUnlock((__int64 *)(*(_QWORD *)v130 + 24LL));
    HMAssignmentUnlock((__int64 *)(*(_QWORD *)v130 + 8LL));
    v132 = *(_QWORD *)v130;
    v131 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(v134, v133, v135) + 19832) + 32LL);
    if ( v131 )
      NSInstrumentation::CTypeIsolation<28672,112>::Free(v131, v132);
    *(_QWORD *)v130 = 0LL;
  }
  v136 = *(_QWORD *)v365;
  if ( *(_QWORD *)v365 && *(struct tagTHREADINFO **)(v136 + 336) == v2 )
    *(_QWORD *)(v136 + 336) = 0LL;
  while ( *((_QWORD *)v2 + 82) )
  {
    v131 = *(__int64 **)(W32GetWin32kBaseApiSetTable(v131) + 48);
    v137 = (__int64 (*)(void))v131[182];
    if ( v137 )
      v138 = v137();
    else
      v138 = -1073741637;
    if ( v138 >= 0 )
    {
      v139 = *((_QWORD *)v2 + 82);
      v131 = *(__int64 **)(W32GetWin32kBaseApiSetTable(v131) + 48);
      v140 = (void (__fastcall *)(struct tagTHREADINFO *, __int64))v131[183];
      if ( v140 )
        v140(v2, v139);
    }
  }
  if ( (_InterlockedCompareExchange(v22, 0, 0) & 0x800) != 0 )
  {
    v131 = *(__int64 **)(*v366 + 8LL);
    v141 = v131[3];
    if ( v141 )
    {
      Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(Address, v2, v131[3]);
      v143 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v142) + 48);
      v144 = *(__int64 (**)(void))(v143 + 1472);
      if ( v144 )
        v145 = v144();
      else
        v145 = -1073741637;
      if ( v145 >= 0 )
      {
        v146 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v143) + 48) + 1480LL);
        if ( v146 )
          v146(v141);
      }
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(Address);
    }
  }
  if ( *(_QWORD *)v365 && *(_QWORD *)(*(_QWORD *)v365 + 824LL) )
  {
    v131 = *(__int64 **)(W32GetWin32kBaseApiSetTable(v131) + 48);
    v147 = (__int64 (*)(void))v131[186];
    v148 = v147 ? v147() : -1073741637;
    if ( v148 >= 0 )
    {
      v131 = *(__int64 **)(W32GetWin32kBaseApiSetTable(v131) + 48);
      v149 = (void (__fastcall *)(struct tagTHREADINFO *))v131[187];
      if ( v149 )
        v149(v2);
    }
  }
  v151 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v131) + 48);
  v153 = *(__int64 (**)(void))(v151 + 1504);
  if ( v153 )
    v154 = v153();
  else
    v154 = -1073741637;
  if ( v154 >= 0 )
  {
    v151 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v151) + 48);
    v155 = *(void (__fastcall **)(struct tagTHREADINFO *))(v151 + 1512);
    if ( v155 )
      v155(v2);
  }
  v156 = v369;
  if ( (*v369 & 0x400000) != 0 )
  {
    *v369 &= ~0x400000uLL;
    if ( *(_BYTE *)(W32GetUserSessionState(v151, v150, v152) + 19264) != 1 )
    {
      v364 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3030LL);
    }
    *(_BYTE *)(W32GetUserSessionState(v158, v157, v159) + 19264) = 0;
    if ( *(_DWORD *)(W32GetUserSessionState(v161, v160, v162) + 19280) )
    {
      v166 = *(_DWORD *)(W32GetUserSessionState(v164, v163, v165) + 19280);
      v170 = W32GetUserSessionState(v168, v167, v169);
      KeReleaseSemaphore(*(PRKSEMAPHORE *)(v170 + 19272), 0, v166, 0);
      *(_DWORD *)(W32GetUserSessionState(v172, v171, v173) + 19280) = 0;
    }
  }
  v174 = (void *)*((_QWORD *)v2 + 192);
  if ( v174 )
  {
    CleanupRimDevObjInUserModeCallback(v174);
    *((_QWORD *)v2 + 192) = 0LL;
  }
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( IsInputThread(v176, v175, v177) )
      UserDeactivateMITInputProcessing();
  }
  else if ( IsInputThread(v176, v175, v177) )
  {
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      KeEnterCriticalRegion();
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v182, v181);
      v187 = W32GetUserSessionState(v185, v184, v186);
      LOBYTE(v188) = 1;
      ExAcquireFastResourceExclusive(*(_QWORD *)(v187 + 16), CurrentThreadWin32Thread + 176, v188);
    }
    UserDeactivateMITInputProcessing();
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      v189 = PsGetCurrentThreadWin32Thread(v179, v178);
      v193 = W32GetUserSessionState(v191, v190, v192);
      ExReleaseFastResource(*(_QWORD *)(v193 + 16), v189 + 176);
      KeLeaveCriticalRegion();
    }
  }
  if ( IsKSTThread(v179, v178, v180) )
    DeactivateKSTInputProcessingHelper();
  if ( _bittest64(v156, 0x28u) )
  {
    if ( v4 )
    {
      CoreMessagingKPort::CleanUpRoutingInfoForThread(*(CoreMessagingKPort **)(*(_QWORD *)(v4 + 1208) + 72168LL), v2);
      goto LABEL_209;
    }
LABEL_212:
    v197 = 0;
  }
  else
  {
LABEL_209:
    if ( !v4 )
      goto LABEL_212;
    if ( *(struct tagTHREADINFO **)(v4 + 328) != v2 )
      goto LABEL_212;
    v197 = 1;
    if ( *((_QWORD *)v2 + 87) )
      goto LABEL_212;
  }
  v364 = v197;
  if ( v4 )
  {
    if ( *(_WORD *)(*((_QWORD *)v2 + 64) + 154LL) )
    {
      v194 = 0xFFFF;
      LODWORD(v195) = *(unsigned __int16 *)(v4 + 800);
      if ( (int)v195 >= 0xFFFF - *(unsigned __int16 *)(*((_QWORD *)v2 + 64) + 154LL) )
      {
        *(_WORD *)(v4 + 800) = -1;
      }
      else
      {
        LOWORD(v195) = *(_WORD *)(*((_QWORD *)v2 + 64) + 154LL) + (_WORD)v195;
        *(_WORD *)(v4 + 800) = (_WORD)v195;
      }
    }
    if ( v197 )
    {
      v196 = *(unsigned __int16 *)(v4 + 800);
      if ( (_WORD)v196 )
      {
        if ( (unsigned int)dword_1402A9F58 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1402A9F58, 0x200000000000LL) )
        {
          LODWORD(Address[0]) = v196;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1402A9F58,
            (unsigned int)&unk_140281E91,
            v196,
            v198,
            (__int64)Address);
        }
      }
    }
  }
  if ( v197 )
  {
    if ( v4 )
    {
      if ( (*(_DWORD *)(v4 + 808) & 0x200000LL) != 0 )
      {
        RIMIDEProcessRemoveInjectionDevices(v4);
        v199 = *(_QWORD *)(v4 + 880);
        if ( v199 )
        {
          *(_QWORD *)(v199 + 96) = 0LL;
          v195 = *(void **)(v199 + 88);
          if ( v195 )
          {
            ZwClose(v195);
            *(_QWORD *)(v199 + 88) = 0LL;
          }
        }
      }
      if ( (*(_DWORD *)(v4 + 808) & 0x2000000) != 0 )
      {
        v200 = W32GetUserSessionState((_DWORD)v195, v194, v196);
        CInputConfig::zzzCleanupInputSpaces(*(CInputConfig **)(v200 + 18680), (const struct tagPROCESSINFO *)v4);
      }
    }
    v202 = *(_QWORD *)(W32GetUserSessionState((_DWORD)v195, v194, v196) + 43240);
    v204 = (struct tagPROCESSINFO **)v365;
    if ( v202 == *(_QWORD *)v365 && !*(_DWORD *)(W32GetUserSessionState(v202, v201, v203) + 43276) )
    {
      LOBYTE(v363) = 0;
      xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 4LL, 0LL, v363, 0LL, 0LL, 0LL, v374, 0LL);
      W32GetUserSessionState(v206, v205, v207);
    }
    if ( *(_QWORD *)v365 && (unsigned int)IsCurrentProcessDwm() )
      xxxDwmProcessShutdown(1);
  }
  else
  {
    v204 = (struct tagPROCESSINFO **)v365;
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v374);
  if ( *v376 )
  {
    v364 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3230LL);
  }
  if ( *(struct tagTHREADINFO **)(W32GetUserSessionState(v209, v208, v210) + 18984) == v2 )
  {
    v364 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3231LL);
  }
  if ( *v377 )
  {
    v364 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3232LL);
  }
  if ( *(_QWORD *)v130 )
  {
    v364 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3233LL);
  }
  v212 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v211) + 48);
  v213 = (__int64 (*)(void))v212[190];
  if ( v213 )
    v214 = v213();
  else
    v214 = -1073741637;
  if ( v214 >= 0 )
  {
    v212 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v212) + 48);
    v215 = (void (__fastcall *)(struct tagTHREADINFO *))v212[191];
    if ( v215 )
      v215(v2);
  }
  if ( (int)IsFreeDelayedHooksSupported >= 0 )
  {
    v212 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v212) + 48);
    v216 = (void (*)(void))v212[308];
    if ( v216 )
      v216();
  }
  v218 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v212) + 48);
  v220 = *(__int64 (**)(void))(v218 + 1536);
  if ( v220 )
    v221 = v220();
  else
    v221 = -1073741637;
  if ( v221 >= 0 )
  {
    v218 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v218) + 48);
    v222 = *(void (**)(void))(v218 + 1544);
    if ( v222 )
      v222();
  }
  v224 = *(_QWORD **)(W32GetUserSessionState(v218, v217, v219) + 63232);
  if ( v224 )
  {
    do
    {
      v225 = (_QWORD *)*v224;
      if ( (struct tagTHREADINFO *)v224[3] == v2 )
      {
        v223 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v223) + 48);
        v226 = *(__int64 (**)(void))(v223 + 1552);
        v227 = v226 ? v226() : -1073741637;
        if ( v227 >= 0 )
          FreeHwndList(v224);
      }
      v224 = v225;
    }
    while ( v225 );
  }
  v228 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v223) + 48);
  v229 = *(__int64 (**)(void))(v228 + 1568);
  if ( v229 )
    v230 = v229();
  else
    v230 = -1073741637;
  if ( v230 >= 0 )
  {
    v231 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v228) + 48) + 1576LL);
    if ( v231 )
      v231();
  }
  DestroyThreadsObjects();
  v233 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v232) + 48);
  v234 = *(__int64 (**)(void))(v233 + 1584);
  if ( v234 )
    v235 = v234();
  else
    v235 = -1073741637;
  if ( v235 >= 0 )
  {
    v236 = *(void (__fastcall **)(struct tagTHREADINFO *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v233) + 48) + 1592LL);
    if ( v236 )
      v236(v2);
  }
  HMAssignmentUnlock((__int64 *)v2 + 59);
  if ( *(_DWORD *)(W32GetUserSessionState(v238, v237, v239) + 36440) == 1 )
  {
    *(_DWORD *)(W32GetUserSessionState(v241, v240, v242) + 2728) = 0;
    _InterlockedOr(v362, 0);
    CleanupResources();
  }
  if ( v197 )
  {
    if ( (*((_DWORD *)*v204 + 3) & 0x1000000) != 0 )
    {
      v243 = *((_QWORD *)v2 + 62);
      if ( v243 )
      {
        if ( *(_QWORD *)(v243 + 168) && (int)Is_PostMessageSupported() >= 0 )
          PostMessage(*(_QWORD *)(v243 + 168), 1114LL);
      }
    }
    v244 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v241) + 48);
    v245 = *(__int64 (**)(void))(v244 + 1616);
    if ( v245 )
      v246 = v245();
    else
      v246 = -1073741637;
    if ( v246 >= 0 )
    {
      v247 = *v204;
      v248 = *(void (__fastcall **)(struct tagPROCESSINFO *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v244) + 48)
                                                            + 1624LL);
      if ( v248 )
        v248(v247);
    }
    *((_DWORD *)*v204 + 3) &= ~0x2000u;
    *((_DWORD *)*v204 + 3) &= ~0x10000000u;
    Address[0] = *(volatile void **)(*((_QWORD *)v2 + 64) + 208LL);
    if ( Address[0] )
    {
      ProbeForWrite(Address[0], 4uLL, 4u);
      *(_DWORD *)Address[0] = 0;
    }
    DestroyProcessesObjects(*v204);
  }
  HMAssignmentUnlock((__int64 *)v2 + 103);
  v252 = *((_QWORD *)v2 + 197);
  if ( v252 )
  {
    GreDeleteFastMutex((char *)v252, v249, v250, v251);
    *((_QWORD *)v2 + 197) = 0LL;
  }
  if ( !*((_QWORD *)v2 + 58) )
    goto LABEL_313;
  v253 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v252) + 48);
  v255 = *(__int64 (**)(void))(v253 + 3040);
  if ( v255 )
    v256 = v255();
  else
    v256 = -1073741637;
  if ( v256 >= 0 )
  {
    v257 = *(void (__fastcall **)(struct tagTHREADINFO *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v253) + 48) + 3048LL);
    if ( v257 )
      v257(v2);
  }
  if ( (*(_DWORD *)(*((_QWORD *)v2 + 58) + 432LL) -= *((_DWORD *)v2 + 196),
        v258 = *((_QWORD *)v2 + 58),
        v259 = 0,
        (v252 = *(_QWORD *)(v258 + 528)) != 0)
    && (v259 = 1, *(_QWORD *)(v252 + 1688))
    || (v252 = *(_QWORD *)(v258 + 536)) != 0 && ((unsigned int)(v259 + 1) > 1 || *(_QWORD *)(v252 + 1696)) )
  {
    v260 = v366;
    v261 = *v366;
    *(_QWORD *)(W32GetUserSessionState(v252, v258, v254) + 16904) = v261;
    ApiSetEditionSystemGenerateMove(0LL);
  }
  else
  {
LABEL_313:
    v260 = v366;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v252);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v263 = (struct tagTHREADINFO **)(CurrentProcessWin32Process + 328);
  v264 = *(struct tagTHREADINFO **)(CurrentProcessWin32Process + 328);
  if ( v264 )
  {
    while ( v264 != v2 )
    {
      v265 = (struct tagTHREADINFO **)((char *)v264 + 696);
      v264 = (struct tagTHREADINFO *)*((_QWORD *)v264 + 87);
      if ( !v264 )
        break;
      v263 = v265;
    }
    if ( *v263 == v2 )
    {
      *v263 = (struct tagTHREADINFO *)*((_QWORD *)v2 + 87);
      *((_QWORD *)v2 + 87) = 0LL;
    }
  }
  v365 = 0LL;
  LockObjectAssignment(&v365, *v260);
  v267 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v266) + 48);
  v268 = *(__int64 (**)(void))(v267 + 1632);
  if ( v268 )
    v269 = v268();
  else
    v269 = -1073741637;
  if ( v269 >= 0 )
  {
    v270 = *(void (__fastcall **)(struct tagTHREADINFO *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v267) + 48) + 1640LL);
    if ( v270 )
      v270(v2);
  }
  if ( *((_DWORD *)v2 + 426) )
  {
    KeSetKernelStackSwapEnable(1u);
    *((_DWORD *)v2 + 426) = 0;
  }
  if ( *v204 )
    --*((_DWORD *)*v204 + 94);
  UninitializeThreadInfoIocp(v2);
  v273 = (void *)*((_QWORD *)v2 + 204);
  if ( v273 )
  {
    ObCloseHandle(v273, 0);
    *((_QWORD *)v2 + 204) = 0LL;
  }
  v274 = *((_QWORD *)v2 + 94);
  if ( v274 )
  {
    if ( (int)ProtectHandle(v274, v271, ExEventObjectType, 0LL) >= 0 && (*(_DWORD *)v369 & 0x1000000) == 0 )
      ObCloseHandle(*((HANDLE *)v2 + 94), 1);
    *((_QWORD *)v2 + 94) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v274, v271, v272) + 16256) )
  {
    v276 = *(_QWORD *)(W32GetUserSessionState(v276, v275, v277) + 16256);
    if ( *(struct tagTHREADINFO **)(v276 + 16) == v2 )
    {
      v278 = W32GetUserSessionState(v276, v275, v277);
      HMAssignmentUnlock((__int64 *)(v278 + 16256));
    }
  }
  if ( *(struct tagTHREADINFO **)(W32GetUserSessionState(v276, v275, v277) + 18944) == v2 )
  {
    v280 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v279) + 48) + 1128LL);
    if ( v280 )
      v281 = v280();
    else
      v281 = -1073741637;
    if ( v281 >= 0 )
    {
      xxxWindowEvent(32773, 0, -4, 0, 4);
      xxxWindowEvent(3, 0, 0, 0, 4);
    }
    v282 = v365;
    if ( *(_QWORD *)(*((_QWORD *)v365 + 1) + 192LL) && (int)Is_PostMessageSupported() >= 0 )
    {
      v286 = W32GetUserSessionState(v284, v283, v285);
      PostMessage(*(_QWORD *)(*((_QWORD *)v282 + 1) + 192LL), *(unsigned int *)(v286 + 63288));
    }
    DisableDelegation();
    v279 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v287) + 48);
    v288 = *(void (**)(void))(v279 + 1648);
    if ( v288 )
      v288();
  }
  v289 = (unsigned __int64)*v204;
  if ( !*v204 )
  {
    v289 = PsGetCurrentProcessWin32Process(v279);
    if ( v289 )
      v289 &= -(__int64)(*(_QWORD *)v289 != 0LL);
  }
  CLastWokenThread::OnDestroyed(*(CLastWokenThread **)(*(_QWORD *)(v289 + 1208) + 3048LL), v2);
  v293 = W32GetUserSessionState(v291, v290, v292);
  v296 = v293;
  if ( *(struct tagTHREADINFO **)(v293 + 19120) == v2 )
    *(_QWORD *)(v293 + 19120) = 0LL;
  v297 = v369;
  v298 = *(unsigned int *)v369;
  if ( (v298 & 0x2000) != 0 )
    DelegationAPI::ScrubDelegateThreadWindows(v2, v294, v295);
  if ( _bittest64(v297, 0x25u) )
    DelegationAPI::ScrubShellHandwritingDelegateThread(v2, v294);
  if ( *((_QWORD *)v2 + 58) )
  {
    v299 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v298) + 48);
    v300 = *(__int64 (**)(void))(v299 + 992);
    if ( v300 )
      v28 = v300();
    if ( v28 >= 0 )
    {
      v301 = *((_QWORD *)v2 + 58);
      v302 = *(void (__fastcall **)(__int64, struct tagTHREADINFO *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v299) + 48)
                                                                    + 1000LL);
      if ( v302 )
        v302(v301, v2);
    }
    ++*(_DWORD *)(*((_QWORD *)v2 + 58) + 440LL);
    zzzDestroyQueue(*((__int64 **)v2 + 58), v2);
  }
  if ( *((_QWORD *)v2 + 86) )
    tagTHREADINFO::AssignQueueWorker((_DWORD)v2, 0, 536, 1696, 688);
  if ( *v366 )
  {
    v303 = (_QWORD *)((char *)v2 + 768);
    v304 = *((_QWORD *)v2 + 96);
    v305 = (_QWORD *)*((_QWORD *)v2 + 97);
    if ( *(struct tagTHREADINFO **)(v304 + 8) != (struct tagTHREADINFO *)((char *)v2 + 768) || (_QWORD *)*v305 != v303 )
      __fastfail(3u);
    *v305 = v304;
    *(_QWORD *)(v304 + 8) = v305;
    *((_QWORD *)v2 + 97) = (char *)v2 + 768;
    *v303 = v303;
  }
  FreeMessageList((__int64)v2 + 840);
  v310 = (char *)(W32GetUserSessionState(v307, v306, v308) + 16896);
  while ( 1 )
  {
    v313 = *(char **)v310;
    if ( !*(_QWORD *)v310 )
      break;
    if ( *((struct tagTHREADINFO **)v313 + 1) == v2 || *((struct tagTHREADINFO **)v313 + 2) == v2 )
    {
      *(_QWORD *)v310 = *(_QWORD *)v313;
      GreDeleteFastMutex(v313, v309, v311, v312);
    }
    else
    {
      v310 = *(char **)v310;
    }
  }
  MarkThreadsObjects((__int64)v2, v309, v311);
  if ( *(struct tagTHREADINFO **)(W32GetUserSessionState(v315, v314, v316) + 69032) == v2 )
  {
    *(_QWORD *)(W32GetUserSessionState(v318, v317, v319) + 69032) = 0LL;
    W32GetUserSessionState(v321, v320, v322);
  }
  if ( *(struct tagTHREADINFO **)(v296 + 19120) == v2 )
    *(_QWORD *)(v296 + 19120) = 0LL;
  if ( *(struct tagTHREADINFO **)(W32GetUserSessionState(v318, v317, v319) + 18984) == v2 )
    *(_QWORD *)(W32GetUserSessionState(v324, v323, (_DWORD)v325) + 18984) = 0LL;
  v326 = (tagQ *)*((_QWORD *)v2 + 58);
  if ( v326 && !tagQ::IsAnyThreadAttached(v326) )
  {
    v329 = *(_QWORD *)(W32GetUserSessionState(v327, v323, (_DWORD)v325) + 18928);
    if ( v329 == *((_QWORD *)v2 + 58) )
      *(_QWORD *)(W32GetUserSessionState(v329, v328, v330) + 18928) = 0LL;
    v332 = *(_QWORD *)(W32GetUserSessionState(v329, v328, v330) + 18936);
    if ( v332 == *((_QWORD *)v2 + 58) )
      *(_QWORD *)(W32GetUserSessionState(v332, v331, v333) + 18936) = 0LL;
    v334 = *(_QWORD *)(W32GetUserSessionState(v332, v331, v333) + 19208);
    if ( v334 == *((_QWORD *)v2 + 58) )
      *(_QWORD *)(W32GetUserSessionState(v334, v323, (_DWORD)v325) + 19208) = 0LL;
  }
  v335 = v369;
  if ( _bittest64(v369, 0x29u) )
  {
    v336 = *((_QWORD *)*v204 + 151);
    *(_DWORD *)(v336 + 63456) = 0;
    *(_QWORD *)(v336 + 63440) = 0LL;
    *(_QWORD *)(v336 + 63448) = 0LL;
  }
  v337 = (int)v365;
  if ( v365 )
  {
    v325 = (char *)*((_QWORD *)v2 + 60);
    if ( v325 )
    {
      if ( v325 != (char *)v2 + 1088 )
      {
        RtlFreeHeap(*((PVOID *)v365 + 17), 0, v325);
        *((_QWORD *)v2 + 60) = (char *)v2 + 1088;
      }
    }
  }
  if ( IsInputThread(v337, v323, (int)v325) )
  {
    v341 = W32GetUserSessionState(v339, v338, v340);
    CInputThreadBase::RevokeThreadAsInput(*(CInputThreadBase **)(v341 + 18800));
  }
  if ( IsKSTThread(v339, v338, v340) )
  {
    InputTraceLogging::KST::RevokeThreadAsKST();
    v348 = W32GetUserSessionState(v346, v345, v347);
    CInputThreadBase::RevokeThreadAsInput(*(CInputThreadBase **)(v348 + 3104));
  }
  if ( (_InterlockedCompareExchange(*(volatile signed __int32 **)&v378.Data1, 0, 0) & 4) != 0 && *((_QWORD *)v2 + 64) )
  {
    GreDeleteFastMutex(*((char **)v2 + 64), v342, v343, v344);
    *((_QWORD *)v2 + 64) = 0LL;
  }
  DeferrableUnlockObjectAssignment<tagDESKTOP>(&v365, v342);
  v352 = *(_DWORD *)(W32GetUserSessionState(v350, v349, v351) + 63464);
  if ( v352 == (unsigned int)PsGetCurrentThreadId() )
  {
    v356 = W32GetUserSessionState(v354, v353, v355);
    DeferrableUnlockObjectAssignment<tagWINDOWSTATION>(v356 + 63504);
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(v354, &CompleteGuiThreadExecution, &W32kControlGuid);
  while ( 1 )
  {
    v357 = (_QWORD *)*((_QWORD *)v2 + 209);
    if ( !v357 )
      break;
    *((_QWORD *)v2 + 209) = *v357;
    if ( (_UNKNOWN *)*(v357 - 1) != &gSmartObjNullRef && !--*(_DWORD *)(*(v357 - 1) + 8LL) )
    {
      if ( *(_BYTE *)(*(v357 - 1) + 12LL) )
      {
        v358 = (char *)*(v357 - 1);
        v359 = W32GetUserSessionState(v354, v353, v355);
        Win32FreeToPagedLookasideListImpl(*(char **)(v359 + 42608), v358, v360);
      }
    }
  }
  v361 = W32GetUserSessionState(v354, v353, v355);
  --*(_DWORD *)(v361 + 36440);
  *v335 |= 0x80uLL;
  if ( tagTHREADINFO::IsAnyPriorityFloorSet(v2) )
    KeBugCheckEx(0x164u, 0x41uLL, 0LL, 0LL, 0LL);
  if ( (_BYTE)v374 )
    --*(_DWORD *)(v375 + 28);
  if ( v372[0] )
    DisplayScenarioContextDissociate(&v373);
}
