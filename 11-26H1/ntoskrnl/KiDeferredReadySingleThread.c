/*
 * XREFs of KiDeferredReadySingleThread @ 0x140233180
 * Callers:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiAttemptToStealStandbyThread @ 0x14022D190 (KiAttemptToStealStandbyThread.c)
 *     KiDeferredReadyThread @ 0x140230D00 (KiDeferredReadyThread.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiProcessThreadWaitList @ 0x14023D710 (KiProcessThreadWaitList.c)
 *     KiAbProcessPreContextSwitch @ 0x14023F810 (KiAbProcessPreContextSwitch.c)
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 *     KiFastExitThreadWait @ 0x1402459A0 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x1402470E0 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x1402478E0 (KiSatisfyThreadWait.c)
 *     KiRemoveBoostThread @ 0x140273850 (KiRemoveBoostThread.c)
 *     KiInswapAndReadyThread @ 0x1403115E4 (KiInswapAndReadyThread.c)
 *     KiReadyDeferredReadyList @ 0x140331960 (KiReadyDeferredReadyList.c)
 *     ?KiAbpDeferredProcessingWorker@AutoBoost@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1403770D0 (-KiAbpDeferredProcessingWorker@AutoBoost@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     PopFxActivateComponent @ 0x14037C8F0 (PopFxActivateComponent.c)
 *     ?KiAbpThreadUnboostCpuPriority@AutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14037CDD0 (-KiAbpThreadUnboostCpuPriority@AutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x14037D0A0 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     KeSetPriorityBoost @ 0x14037D350 (KeSetPriorityBoost.c)
 *     KiReadyOutSwappedThreads @ 0x14037D574 (KiReadyOutSwappedThreads.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     PspRevertContainerImpersonation @ 0x14037F6B0 (PspRevertContainerImpersonation.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1403971A0 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 * Callees:
 *     EtwTraceReadyQueueInsertion @ 0x1402260FC (EtwTraceReadyQueueInsertion.c)
 *     KiComputeThreadAffinity @ 0x14022B520 (KiComputeThreadAffinity.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x140230F44 (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 *     KiIsThreadExemptFromForcePark @ 0x14023137C (KiIsThreadExemptFromForcePark.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402313D0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiShouldPreemptionBeDeferred @ 0x140231EA0 (KiShouldPreemptionBeDeferred.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140231EC0 (KiCheckForMaxOverQuotaScb.c)
 *     KiHeteroSelectIdleProcessorFromNode @ 0x140236710 (KiHeteroSelectIdleProcessorFromNode.c)
 *     KiIsIsolationUnitIdleByHandle @ 0x1402367F0 (KiIsIsolationUnitIdleByHandle.c)
 *     KiSelectCandidateProcessor @ 0x140236870 (KiSelectCandidateProcessor.c)
 *     KiHeteroAttemptPreemptionSwapOnSubNode @ 0x140236B50 (KiHeteroAttemptPreemptionSwapOnSubNode.c)
 *     KiChooseTargetProcessor @ 0x1402370C0 (KiChooseTargetProcessor.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiIsThreadStateControlledByProcessor @ 0x14023944C (KiIsThreadStateControlledByProcessor.c)
 *     KiComputeThreadPriority @ 0x14023B414 (KiComputeThreadPriority.c)
 *     ?KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z @ 0x14023D390 (-KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     EtwTraceScheduleThread @ 0x140248130 (EtwTraceScheduleThread.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiComputeThreadQos @ 0x140306EE0 (KiComputeThreadQos.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1403070D0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x1403076F0 (-KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@.c)
 *     KiIsPrcbThread @ 0x1403078D0 (KiIsPrcbThread.c)
 *     KiInsertDeferredReadyList @ 0x140307900 (KiInsertDeferredReadyList.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KiAddThreadToPrcbQueue @ 0x1403096A0 (KiAddThreadToPrcbQueue.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiUpdateThreadPriority @ 0x140380850 (KiUpdateThreadPriority.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1403CA120 (KiUpdateVPBackingThreadPriority.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1403CA394 (KiReadGuestSchedulerAssistPriority.c)
 *     EtwTraceXSchedulerPriorityUpdate @ 0x1403CA4C0 (EtwTraceXSchedulerPriorityUpdate.c)
 *     KeIsForceParkingEnabled @ 0x1404366F0 (KeIsForceParkingEnabled.c)
 *     KiComputeNewPriority @ 0x140486450 (KiComputeNewPriority.c)
 *     KiTryScheduleNextForegroundBoost @ 0x14048D9C4 (KiTryScheduleNextForegroundBoost.c)
 *     KiAddThreadToScbQueue @ 0x1404A57FC (KiAddThreadToScbQueue.c)
 *     EtwTraceIdealProcessor @ 0x1404E0C98 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x140506B68 (EtwTraceThreadAffinity.c)
 *     KiIsThreadRankBiased @ 0x14050F950 (KiIsThreadRankBiased.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x140521C58 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140529DB4 (EtwTraceXSchedulerPriorityKickSend.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall KiDeferredReadySingleThread(
        struct _KPRCB *a1,
        ULONG_PTR a2,
        struct _SINGLE_LIST_ENTRY *a3,
        __int64 *a4)
{
  int v4; // eax
  unsigned int v5; // esi
  unsigned __int64 v6; // r15
  char v7; // di
  bool v8; // zf
  ULONG_PTR v9; // r11
  struct _KPRCB *v10; // r14
  char v11; // r13
  unsigned int v12; // ebx
  char v13; // r12
  char v14; // r15
  volatile signed __int32 *v15; // rdx
  unsigned int v16; // ecx
  char v17; // bl
  char v18; // al
  char v19; // r8
  __int64 v20; // r13
  struct _KPRCB *CurrentPrcb; // rbx
  char v22; // cl
  int v23; // eax
  int v24; // ecx
  int v25; // r8d
  void ***v26; // rbx
  int v27; // eax
  int v28; // edx
  int v29; // eax
  unsigned int v30; // edx
  unsigned int v31; // ecx
  bool v32; // r12
  int v33; // r8d
  unsigned int v34; // edx
  bool v35; // al
  struct _KPRCB *v36; // rdx
  _QWORD *p_Next; // rcx
  bool v38; // r15
  _QWORD *KernelShadowStackInitial; // rax
  char v40; // al
  char v41; // cl
  int v42; // r9d
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  int v46; // ebx
  int v47; // edx
  int v48; // ebx
  char v49; // bl
  unsigned __int16 *v50; // rcx
  unsigned int v51; // edx
  unsigned int v52; // eax
  unsigned __int64 *v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rdx
  unsigned int v56; // ecx
  struct _KPRCB *v57; // r10
  char v58; // r8
  unsigned int v59; // eax
  __int64 v60; // r13
  __int64 v61; // rax
  int v62; // r15d
  __int16 v63; // bx
  unsigned int v64; // r12d
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // r12
  __int64 v70; // rbx
  int v71; // edx
  _QWORD *v72; // r13
  unsigned __int64 v73; // r11
  _BYTE *v74; // rax
  unsigned int v75; // ecx
  __int64 *v76; // r15
  __int64 v77; // r12
  __int64 v78; // rbx
  unsigned int v79; // edi
  unsigned __int64 v80; // rcx
  __int64 *v81; // r9
  unsigned int v82; // r8d
  int v83; // edx
  bool v84; // r15
  char v85; // dl
  __int64 v86; // rdi
  unsigned __int64 v87; // r11
  int v88; // edx
  unsigned int m; // ecx
  __int64 v90; // rdx
  __int64 v91; // r8
  unsigned __int64 v92; // r9
  __int64 v93; // rax
  __int64 v94; // r8
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rdi
  __int64 v98; // r15
  __int64 v99; // rdi
  __int64 v100; // r13
  unsigned __int8 *v101; // rdx
  int v102; // ebx
  __int64 v103; // rdi
  unsigned int v104; // r12d
  int v105; // r10d
  char v106; // r9
  int v107; // ecx
  __int64 v108; // r10
  char v109; // cl
  unsigned __int64 v110; // rax
  int v111; // edx
  int v112; // r15d
  int v113; // ecx
  unsigned __int8 v114; // bl
  _BYTE *v115; // rax
  unsigned int v116; // ecx
  __int64 *v117; // r12
  __int64 v118; // r13
  __int64 v119; // rdi
  unsigned int v120; // r15d
  __int64 *v121; // r8
  unsigned __int64 v122; // rdx
  unsigned int v123; // r9d
  int v124; // edx
  unsigned int k; // edx
  __int64 v126; // rcx
  __int64 v127; // rcx
  __int16 *v128; // rcx
  __int16 v129; // dx
  unsigned __int64 v130; // r8
  unsigned __int64 v131; // rcx
  unsigned int v132; // edx
  __int64 v133; // rax
  unsigned int v134; // edx
  unsigned int v135; // ecx
  unsigned __int8 v136; // bl
  _BYTE *v137; // rax
  unsigned int v138; // ecx
  __int64 *v139; // r12
  __int64 v140; // r13
  __int64 v141; // rdi
  unsigned int v142; // r15d
  unsigned __int64 v143; // r8
  __int64 *v144; // r9
  unsigned int v145; // r10d
  unsigned int v146; // r8d
  unsigned int j; // ecx
  __int64 v148; // rdx
  __int64 v149; // r8
  _BYTE *v150; // rax
  __int64 *v151; // r8
  __int64 v152; // r9
  __int64 v153; // rax
  __int64 v154; // r12
  __int64 v155; // rax
  signed __int16 *v156; // r9
  signed __int16 v157; // r8
  __int64 v158; // rax
  unsigned __int64 v159; // rcx
  int v160; // edx
  unsigned int v161; // r13d
  unsigned int v162; // edx
  $C82B617CBFAFB7514E50AF91648DC6C0 v163; // bl
  _KCORE_CONTROL_BLOCK *v164; // rax
  unsigned int ProcessorCount; // ecx
  __int64 *Prcbs; // r15
  __int64 v167; // r12
  __int64 v168; // rdi
  unsigned int v169; // r14d
  __int64 v170; // rax
  struct _KSCB *v171; // rbx
  __int64 v172; // rax
  _BYTE *v173; // rax
  char v174; // cl
  char v175; // r11
  char v176; // r10
  _QWORD *v177; // r8
  __int64 v178; // rdx
  unsigned __int8 *v179; // rax
  unsigned int i; // ecx
  __int64 v181; // rdx
  __int64 v182; // r9
  unsigned __int8 v183; // al
  char v184; // al
  _KPRCB *v185; // rdi
  unsigned __int8 TargetType; // al
  unsigned int SingleTargetIndex; // eax
  unsigned int v188; // ecx
  unsigned __int64 *v189; // r8
  __int64 v190; // rcx
  char *v191; // rdx
  __int64 v192; // rcx
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  unsigned int v195; // eax
  unsigned int v196; // ecx
  __int64 v197; // rcx
  char *v198; // rdx
  __int64 v199; // rcx
  int v200; // edx
  _DWORD *SchedulerAssist; // rcx
  __int64 Number; // r12
  _KTHREAD *NewThread; // rcx
  __int64 *v204; // r8
  unsigned __int8 *v205; // rax
  __int64 v206; // r10
  __int64 v207; // rax
  _BYTE *v208; // rax
  __int64 v209; // rdx
  unsigned __int64 *v210; // r8
  unsigned int v211; // r8d
  __int64 v212; // rdx
  _BYTE *v213; // r11
  BOOL v214; // r15d
  _BYTE *v215; // rax
  __int64 v216; // rcx
  _QWORD *v217; // r8
  int IsIsolationUnitIdleByHandle; // eax
  unsigned __int8 *v219; // rax
  __int64 v220; // r10
  __int64 v221; // rax
  int v222; // edx
  __int64 v223; // rcx
  __int64 v224; // r8
  int v225; // r9d
  __int64 v226; // r10
  unsigned __int8 *v227; // rax
  __int64 v228; // r11
  __int64 v229; // rax
  unsigned int v230; // r8d
  unsigned int v231; // eax
  __int64 v232; // rdx
  _BYTE *v233; // rbx
  __int64 v234; // rax
  __int64 v235; // r9
  __int64 v236; // rax
  __int64 v237; // r10
  __int64 v238; // r8
  __int64 v239; // r10
  __int64 v240; // r9
  int v241; // eax
  int v242; // r15d
  int v243; // r9d
  ULONG_PTR v244; // rax
  char v245; // cl
  int v246; // r8d
  int v247; // eax
  int v248; // edx
  __int64 v249; // rax
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r15
  unsigned __int64 v251; // r12
  struct _KPRCB **v252; // r8
  unsigned int v253; // edi
  _KISOLATION_WIDTH v254; // ebx
  unsigned __int8 *v255; // rax
  int v256; // edx
  unsigned __int8 v257; // al
  __int64 v258; // r9
  unsigned int ii; // edx
  ULONG_PTR v260; // r8
  unsigned int v261; // eax
  unsigned int v262; // r10d
  unsigned int v263; // ebx
  struct _SINGLE_LIST_ENTRY *v264; // r14
  unsigned __int8 v265; // r10
  _KPRCB *Prcb; // rdi
  unsigned __int8 *v267; // r9
  unsigned __int64 v268; // rcx
  _KTHREAD *IdleThread; // r11
  __int64 v270; // r11
  unsigned __int8 *v271; // r12
  unsigned __int64 v272; // r11
  struct _KPRCB *v273; // r10
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rcx
  _KTHREAD *NextThread; // r13
  unsigned __int8 v276; // cl
  unsigned __int8 v277; // cl
  char v278; // r9
  unsigned __int8 v279; // dl
  unsigned __int8 v280; // cl
  _KI_RESCHEDULE_CONTEXT *v281; // r15
  struct _KPRCB **v282; // r11
  unsigned int v283; // edi
  _KISOLATION_WIDTH v284; // ebx
  unsigned __int8 *v285; // rax
  int v286; // r12d
  unsigned __int8 v287; // al
  __int64 v288; // r13
  unsigned int kk; // edx
  unsigned int v290; // edi
  char v291; // al
  struct _KTHREAD *v292; // rdx
  unsigned int v293; // ecx
  __int64 v294; // r9
  unsigned __int64 v295; // r12
  unsigned int nn; // edx
  struct _KPRCB **v297; // r8
  struct _KPRCB *v298; // r10
  _KTHREAD *CurrentThread; // r13
  char v300; // cl
  char v301; // cl
  char v302; // r9
  char v303; // dl
  unsigned __int8 v304; // cl
  unsigned int v305; // eax
  unsigned int v306; // r10d
  unsigned int v307; // ebx
  _KPRCB *v308; // rdi
  unsigned __int8 *v309; // r9
  unsigned __int64 v310; // rcx
  _KTHREAD *v311; // r11
  __int64 v312; // r11
  struct _SINGLE_LIST_ENTRY *v313; // rdx
  __int64 v314; // rcx
  __int64 v315; // rdx
  __int64 v316; // rcx
  __int64 v317; // rax
  __int64 v318; // rdx
  __int64 v319; // rcx
  __int64 v320; // rax
  char v321; // r8
  __int64 v322; // rax
  char v323; // dl
  unsigned __int64 v324; // rdx
  void *v325; // r11
  __int64 v326; // rbx
  char v327; // al
  char v328; // r12
  unsigned int v329; // edi
  unsigned int v330; // ebx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  __int64 v332; // rdx
  unsigned __int8 *v333; // rax
  struct _SINGLE_LIST_ENTRY *v334; // rsi
  struct _SINGLE_LIST_ENTRY *v335; // rcx
  unsigned int v336; // r11d
  struct _SINGLE_LIST_ENTRY *v337; // r14
  unsigned __int8 v338; // r10
  _KPRCB *v339; // rbx
  unsigned __int8 *v340; // r9
  unsigned __int64 v341; // rcx
  int v342; // r11d
  _KTHREAD *SmtIsolationThread; // rdi
  unsigned __int8 v344; // cl
  unsigned int mm; // r12d
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v346; // rcx
  unsigned __int8 *v347; // r8
  unsigned int n; // edx
  unsigned __int8 *v349; // r9
  unsigned __int8 *v350; // rcx
  __int64 v351; // rdx
  __int64 v352; // rcx
  unsigned __int8 *v353; // r8
  unsigned int jj; // edx
  unsigned __int8 *v355; // r9
  unsigned __int8 *v356; // rcx
  __int64 v357; // rdx
  __int64 v358; // rcx
  unsigned __int64 v359; // rdx
  void *v360; // r11
  __int64 v361; // rbx
  char v362; // al
  char v363; // r12
  unsigned int v364; // edi
  unsigned int v365; // ebx
  _KCORE_CONTROL_BLOCK *v366; // rcx
  unsigned __int64 *v367; // r8
  __int64 v368; // rdx
  unsigned __int8 *v369; // rax
  char v370; // al
  _KPRCB *v371; // rdi
  unsigned __int8 *v372; // rbx
  unsigned __int8 v373; // al
  unsigned __int8 v374; // al
  unsigned int v375; // eax
  unsigned int v376; // ecx
  __int64 v377; // rcx
  char *v378; // rdx
  __int64 v379; // rcx
  __int64 v380; // rcx
  unsigned __int64 v381; // rdx
  unsigned int v382; // eax
  unsigned int v383; // ecx
  __int64 v384; // rcx
  char *v385; // rdx
  __int64 v386; // rcx
  int v387; // edx
  _DWORD *v388; // rcx
  __int64 v389; // r12
  __int64 v390; // rcx
  __int64 *v391; // r8
  struct _SINGLE_LIST_ENTRY *v392; // rsi
  struct _SINGLE_LIST_ENTRY *v393; // rcx
  __int64 v394; // rcx
  unsigned int v395; // r11d
  _KPRCB *v396; // rbx
  unsigned __int8 *v397; // r9
  unsigned __int64 v398; // rcx
  int v399; // r11d
  _KTHREAD *v400; // rdi
  unsigned __int8 v401; // cl
  __int64 v402; // rcx
  __int64 v403; // rcx
  __int64 v404; // r10
  __int64 v405; // rcx
  __int64 v406; // r10
  __int64 v407; // rcx
  __int64 v408; // r10
  char v409; // al
  int v410; // r12d
  int v411; // eax
  int v412; // edx
  int v413; // ebx
  int v414; // edx
  _DWORD *v415; // rcx
  __int64 v416; // rcx
  __int64 v417; // r10
  ULONG_PTR v418; // rcx
  char v419; // al
  __int64 v420; // rdx
  _BYTE *v421; // r11
  struct _SINGLE_LIST_ENTRY *v422; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  bool v425; // [rsp+40h] [rbp-C0h]
  char v426; // [rsp+40h] [rbp-C0h]
  char v427; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v428; // [rsp+41h] [rbp-BFh]
  bool v430; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v431; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v432; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v433; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v434; // [rsp+70h] [rbp-90h]
  __int128 v435; // [rsp+78h] [rbp-88h] BYREF
  struct _KPRCB **v436; // [rsp+88h] [rbp-78h]
  unsigned __int64 v437; // [rsp+90h] [rbp-70h]
  struct _KPRCB *v438; // [rsp+98h] [rbp-68h]
  int v439; // [rsp+A0h] [rbp-60h]
  struct _SINGLE_LIST_ENTRY *v440; // [rsp+A8h] [rbp-58h]
  struct _KPRCB *v441; // [rsp+B0h] [rbp-50h]
  unsigned int v442; // [rsp+B8h] [rbp-48h]
  struct _KPRCB *v443; // [rsp+C0h] [rbp-40h]
  __int128 v444; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v445; // [rsp+D8h] [rbp-28h]
  int v446; // [rsp+E0h] [rbp-20h]
  int v447; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v448; // [rsp+ECh] [rbp-14h]
  __int64 *v449; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v450; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v451[2]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v452; // [rsp+110h] [rbp+10h] BYREF
  __int64 v453; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v454; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v455[2]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v456; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v457[3]; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v458; // [rsp+158h] [rbp+58h] BYREF
  unsigned __int64 v459; // [rsp+160h] [rbp+60h] BYREF
  __int64 v460; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v461[10]; // [rsp+170h] [rbp+70h] BYREF

  v5 = 0;
  v449 = a4;
  LOBYTE(v4) = 0;
  v440 = a3;
  v435 = 0LL;
  v6 = *(_QWORD *)(a2 + 72);
  v7 = 0;
  v8 = *(_BYTE *)(a2 + 566) == 1;
  v9 = a2;
  v432 = v6;
  v10 = a1;
  v443 = a1;
  v447 = 0;
  v439 = v4;
  v434 = 0;
  if ( v8 )
    v11 = *(_BYTE *)(a2 + 567);
  else
    v11 = 0;
  v12 = 0;
LABEL_4:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 64), 0LL) )
  {
    while ( 1 )
    {
      if ( (++v12 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
        {
          HvlNotifyLongSpinWait(v12);
          v9 = a2;
          goto LABEL_7;
        }
        v9 = a2;
      }
      _mm_pause();
LABEL_7:
      if ( !*(_QWORD *)(v9 + 64) )
        goto LABEL_4;
    }
  }
  v8 = (*(_DWORD *)(v9 + 120) & 0x400000) == 0;
  v433 = 0LL;
  if ( v8 )
  {
    v13 = 0;
  }
  else
  {
    _InterlockedOr(*(volatile signed __int32 **)(v9 + 968), 0x100000u);
    v241 = KiReadGuestSchedulerAssistPriority(v9, &v433);
    v242 = v241;
    v243 = *(_DWORD *)(a2 + 1024);
    if ( v241 != v243 )
    {
      v244 = a2 + (char)v241;
      v245 = *(_BYTE *)(v244 + 824);
      if ( v245 == -1 )
        KeBugCheckEx(0x157u, a2, (char)v242, 1uLL, 0LL);
      *(_BYTE *)(v244 + 824) = v245 + 1;
      *(_DWORD *)(a2 + 856) |= 1 << v242;
      if ( v243 != 32 )
      {
        v418 = a2 + (char)v243;
        v419 = *(_BYTE *)(v418 + 824);
        if ( !v419 )
          KeBugCheckEx(0x157u, a2, (char)v243, 2uLL, 0LL);
        v409 = v419 - 1;
        *(_BYTE *)(v418 + 824) = v409;
        if ( !v409 )
          *(_DWORD *)(a2 + 856) ^= 1 << v243;
      }
      *(_DWORD *)(a2 + 1024) = v242;
    }
    v410 = *(char *)(a2 + 195);
    v411 = KiComputeThreadPriority((struct _KTHREAD *)a2, 0, 0);
    v413 = v411;
    if ( v411 != v410 )
      KiUpdateThreadPriority(0, v412, a2, v411, 0);
    v9 = a2;
    v414 = *(unsigned __int8 *)(a2 + 1122);
    if ( *(_BYTE *)(a2 + 1122) )
    {
      v415 = *(_DWORD **)(a2 + 968);
      if ( v415 )
      {
        if ( v415[7] || v415[8] || (v415[5] & 0x4000) != 0 || (*v415 & 0x200000) != 0 )
          v414 = 0;
      }
    }
    if ( v414 != *(unsigned __int8 *)(a2 + 516) )
      *(_BYTE *)(a2 + 516) = v414;
    if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
      _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFEFFFFF);
    if ( v410 != v413 && (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
    {
      EtwTraceXSchedulerPriorityUpdate(a2, v410, v242, v413, (__int64)&v433);
      v9 = a2;
    }
    v6 = v432;
    v13 = 1;
  }
  if ( *(_BYTE *)(v9 + 566) )
  {
    v14 = 63;
    LODWORD(v15) = 4080;
    if ( *(char *)(v9 + 195) >= 16 )
    {
      v20 = a2;
      if ( v13 )
      {
        v7 = (*(_WORD *)(a2 + 518) & 0xFF0u) < 0x100;
        if ( v432 >= *(_QWORD *)(a2 + 32) )
        {
          v7 = 1;
          KiComputeNewPriority((struct _KTHREAD *)a2);
        }
      }
      else
      {
        v7 = 1;
      }
      goto LABEL_28;
    }
    v16 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v9 + 436);
    if ( v432 >= *(_QWORD *)(v9 + 32) )
    {
      v17 = 4;
      if ( v16 < 2 )
        v17 = 5;
    }
    else
    {
      v17 = 0;
      if ( *(char *)(v9 + 563) < 14 && ((*(_WORD *)(v9 + 518) & 0xFF0) != 0 || v16 < 2) )
      {
LABEL_22:
        v19 = v17 | 2;
        if ( (*(_DWORD *)(*(_QWORD *)(v9 + 544) + 136LL) & 0x2000) == 0 )
          v19 = v17;
        LODWORD(v15) = *(_DWORD *)(v9 + 120);
        if ( ((unsigned __int8)~v19 & (((unsigned __int8)v15 & 8) == 0)) != 0 && *(char *)(v9 + 195) > 0 )
        {
          if ( v11 > *(char *)(v9 + 870) )
          {
            v46 = v11;
            v20 = a2;
            if ( (unsigned int)((__int64 (*)(void))Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline)() )
            {
              v47 = *(char *)(a2 + 563) + (*(_WORD *)(a2 + 518) & 0xF);
              if ( v47 >= 16 )
                v47 = 15;
            }
            else
            {
              v47 = *(char *)(a2 + 563);
            }
            v48 = v47 + v46;
            if ( v48 >= 16 )
              LOBYTE(v48) = 15;
            v49 = v48 - v47;
            Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(15LL);
            *(_BYTE *)(a2 + 870) = v49;
            v14 = KiComputeThreadPriority((struct _KTHREAD *)a2, 0, 0);
          }
          else
          {
            v20 = a2;
          }
        }
        else
        {
          v20 = a2;
          if ( KiSchedulerForegroundBoostDecayPolicy
            && (v19 & 6) == 6
            && ((unsigned __int8)v15 & 8) == 0
            && *(char *)(a2 + 195) > 0 )
          {
            v7 |= 2u;
          }
        }
LABEL_28:
        if ( v14 != 63 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v22 = *(_BYTE *)(v20 + 195);
          if ( (KiAbpGlobalState & 1) != 0 )
          {
            if ( v14 > v22 )
            {
              if ( *(_BYTE *)(v20 + 792) )
              {
                v422 = (struct _SINGLE_LIST_ENTRY *)(v20 + 808);
                if ( *(_QWORD *)(v20 + 808) == 1LL )
                {
                  p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
                  if ( CurrentPrcb != (struct _KPRCB *)-37304LL )
                  {
                    v422->Next = p_AbPropagateBoostsList->Next;
                    p_AbPropagateBoostsList->Next = v422;
                    _InterlockedIncrement16((volatile signed __int16 *)(v20 + 868));
                    if ( !CurrentPrcb->AbDpc.DeferredContext )
                    {
                      KiInsertQueueDpc((ULONG_PTR)&CurrentPrcb->AbDpc, 0);
                      CurrentPrcb->AbDpc.DeferredContext = (PVOID)1;
                    }
                  }
                }
              }
            }
          }
          else if ( v14 > v22 )
          {
            if ( *(_BYTE *)(v20 + 792) )
            {
              v36 = (struct _KPRCB *)(v20 + 808);
              if ( *(_QWORD *)(v20 + 808) == 1LL )
              {
                p_Next = &CurrentPrcb->AbPropagateBoostsList.Next;
                if ( CurrentPrcb != (struct _KPRCB *)-37304LL )
                {
                  *(_QWORD *)&v36->MxCsr = *p_Next;
                  *p_Next = v36;
                  _InterlockedIncrement16((volatile signed __int16 *)(v20 + 868));
                  AutoBoost::KiAbpQueueAutoBoostDpc((AutoBoost *)CurrentPrcb, v36);
                }
              }
            }
          }
          *(_BYTE *)(v20 + 195) = v14;
          v23 = KiComputeThreadQos(v20);
          if ( v23 != *(unsigned __int8 *)(v20 + 516) )
            *(_BYTE *)(v20 + 516) = v23;
          if ( (*(_DWORD *)(v20 + 120) & 0x400000) != 0 )
          {
            v15 = *(volatile signed __int32 **)(v20 + 968);
            v24 = *(char *)(v20 + 195);
            v25 = (unsigned __int8)*v15;
            if ( v24 != v25 )
              _InterlockedAdd(v15, v24 - v25);
          }
        }
        if ( (v7 & 2) != 0 )
        {
          v26 = (void ***)(v20 + 880);
          if ( *(_QWORD *)(v20 + 880) == 1LL )
          {
            v38 = 0;
            KxAcquireSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.KernelShadowStackBase);
            if ( *v26 == (void **)1 )
            {
              KernelShadowStackInitial = KiSupervisorXStateFeaturesLock.KernelShadowStackInitial;
              v38 = KiSupervisorXStateFeaturesLock.KernelShadowStack == &KiSupervisorXStateFeaturesLock.KernelShadowStack;
              if ( *(struct _KTHREAD **)KiSupervisorXStateFeaturesLock.KernelShadowStackInitial != (struct _KTHREAD *)&KiSupervisorXStateFeaturesLock.KernelShadowStack )
                __fastfail(3u);
              *v26 = &KiSupervisorXStateFeaturesLock.KernelShadowStack;
              *(_QWORD *)(v20 + 888) = KernelShadowStackInitial;
              *KernelShadowStackInitial = v26;
              KiSupervisorXStateFeaturesLock.KernelShadowStackInitial = (void *)(v20 + 880);
            }
            KxReleaseSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.KernelShadowStackBase);
            if ( v38 )
              KiInsertQueueDpc((ULONG_PTR)&KiSupervisorXStateFeaturesLock.SchedulerAssist, 0);
          }
        }
        v7 &= 1u;
        if ( *(_BYTE *)(v20 + 566) == 2 )
        {
          v40 = *(_BYTE *)(v20 + 195);
          if ( v40 <= 0 || (v41 = *(_BYTE *)(v20 + 567), v40 >= v41) || v40 >= 13 || (*(_DWORD *)(v20 + 120) & 8) != 0 )
          {
            v6 = v432;
            if ( !v7 )
            {
              v45 = *(_QWORD *)(v20 + 32);
              if ( v432 > v45 || v45 - v432 < (unsigned int)KiLockQuantumTarget )
                *(_QWORD *)(v20 + 32) = v432 + (unsigned int)KiLockQuantumTarget;
            }
          }
          else
          {
            v42 = v41;
            if ( v41 >= 13 )
              v42 = 13;
            v43 = (unsigned int)KiLockQuantumTarget;
            if ( (unsigned __int8)(*(unsigned __int16 *)(v20 + 518) >> 4) < v42 )
            {
              LODWORD(v15) = 4080;
              *(_WORD *)(v20 + 518) ^= (*(_WORD *)(v20 + 518) ^ (16 * (char)v42)) & 0xFF0;
            }
            KiUpdateThreadPriority(0, (_DWORD)v15, v20, v42, 0);
            v44 = *(_QWORD *)(v20 + 32);
            v6 = v432;
            if ( v432 > v44 || v44 - v432 < v43 )
              *(_QWORD *)(v20 + 32) = v432 + v43;
          }
        }
        else
        {
          v6 = v432;
        }
        goto LABEL_40;
      }
    }
    v7 = 1;
    v18 = KiComputeNewPriority((struct _KTHREAD *)v9);
    v9 = a2;
    v14 = 63;
    if ( !v13 )
      v14 = v18;
    goto LABEL_22;
  }
  v20 = a2;
  if ( v6 >= *(_QWORD *)(a2 + 32) )
  {
    v247 = KiComputeNewPriority((struct _KTHREAD *)a2);
    if ( !v13 )
      KiUpdateThreadPriority(0, v248, a2, v247, 0);
    v7 = 1;
    KiTryScheduleNextForegroundBoost(a2);
  }
  else
  {
    v434 = *(unsigned __int8 *)(a2 + 565);
  }
LABEL_40:
  v27 = KiComputeThreadQos(v20);
  if ( v27 != *(unsigned __int8 *)(v20 + 516) )
    *(_BYTE *)(v20 + 516) = v27;
  if ( v7 )
  {
    v28 = *(unsigned __int8 *)(v20 + 651);
    if ( (KiVelocityFlags & 0x40000) != 0 && KiVariableQuantumEnabled )
    {
      v29 = *(unsigned __int8 *)(v20 + 516);
      if ( v29 == 4 )
      {
LABEL_46:
        v28 = 36;
      }
      else if ( v29 == 7 )
      {
LABEL_59:
        v28 = 2;
      }
      else
      {
        switch ( *(_BYTE *)(v20 + 516) )
        {
          case 0:
          case 3:
            goto LABEL_46;
          case 1:
            v28 = 18;
            break;
          case 2:
          case 5:
          case 6:
            goto LABEL_59;
          default:
            break;
        }
      }
    }
    v30 = KiCyclesPerClockQuantum * v28;
    if ( (*(_DWORD *)(v20 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v20 + 120), 5u);
    *(_QWORD *)(v20 + 32) = v6 + v30;
  }
  *(_BYTE *)(v20 + 565) = 0;
  *(_BYTE *)(v20 + 566) = 0;
  v31 = *(_DWORD *)(v20 + 588);
  v448 = v31;
  v32 = *(_DWORD *)(v20 + 484) || *(_BYTE *)(v20 + 390) == 1;
  v428 = _bittestandreset((signed __int32 *)(v20 + 116), 1u);
  v425 = v32;
  if ( *(_QWORD *)(v20 + 568) == KiCpuSetSequence || (*(_DWORD *)(v20 + 116) & 8) != 0 )
  {
    LOBYTE(v33) = v439;
  }
  else
  {
    v33 = KiComputeThreadAffinity(v20);
    LOBYTE(v33) = ((WORD2(PerfGlobalGroupMask) & 0x1000) != 0) & v33;
    v31 = v448;
    v439 = v33;
  }
  v34 = *(_DWORD *)(v20 + 588);
  v442 = v34;
  v35 = (xmmword_140FC0C10 & 0x8000000) != 0 && v34 != v31;
  v430 = v35;
  if ( (_BYTE)v33 || v35 )
    _InterlockedIncrement16((volatile signed __int16 *)(v20 + 868));
  v435 = 0uLL;
  if ( !KiForceIdleDisabled && KiForceIdleState == 4 )
  {
    v155 = *(unsigned int *)(v20 + 536);
    v156 = *(signed __int16 **)(v20 + 576);
    LODWORD(v155) = v155 & 0x7FFFFFFF;
    v433 = (unsigned int)v155;
    v86 = KiProcessorBlock[v155];
    v157 = *v156;
    v432 = v86;
    v158 = *(unsigned __int8 *)(v86 + 208);
    if ( (unsigned __int16)v158 >= (unsigned __int16)v157
      || ((*(_QWORD *)&v156[4 * v158 + 4] >> *(_BYTE *)(v86 + 209)) & 1) == 0 )
    {
      while ( --v157 >= 0 )
      {
        v159 = *(_QWORD *)&v156[4 * v157 + 4];
        if ( v159 )
        {
          _BitScanReverse64(&v159, v159);
          v160 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                 + (unsigned int)((v157 << 6) + v159));
          goto LABEL_274;
        }
      }
      v160 = -1;
LABEL_274:
      LODWORD(v433) = v160;
      v86 = KiProcessorBlock[v160];
      v432 = v86;
    }
    v161 = (*(_DWORD *)(v20 + 120) >> 1) & 1;
    v162 = v161;
    v163 = **($C82B617CBFAFB7514E50AF91648DC6C0 **)(v86 + 56);
    v460 = v86;
    if ( v161 < *(unsigned __int8 *)&v163 >> 7 )
      v162 = *(unsigned __int8 *)&v163 >> 7;
    *(_QWORD *)&v435 = v162 | v86 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v162 )
    {
      if ( v162 != 1 )
        goto LABEL_289;
      v164 = *(_KCORE_CONTROL_BLOCK **)(v86 + 36504);
      ProcessorCount = v164->ProcessorCount;
      Prcbs = (__int64 *)v164->Prcbs;
      if ( !v164->ProcessorCount )
        goto LABEL_289;
    }
    else
    {
      Prcbs = &v460;
      ProcessorCount = 1;
    }
    v167 = ProcessorCount;
    do
    {
      v168 = *Prcbs;
      v169 = 0;
LABEL_282:
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v168 + 48), 0LL) )
      {
        while ( 1 )
        {
          if ( (++v169 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
          {
            if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
            {
LABEL_320:
              HvlNotifyLongSpinWait(v169);
              goto LABEL_285;
            }
            for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
            {
              v181 = KiProcessorBlock[i];
              if ( (*(_BYTE *)(v181 + 35) & 1) != 0 )
              {
                v182 = *(_QWORD *)(v181 + 36600);
                if ( !v182 || !*(_BYTE *)(v182 + 65) || !*(_BYTE *)(v182 + 64) )
                  goto LABEL_320;
              }
            }
          }
          _mm_pause();
LABEL_285:
          if ( !*(_QWORD *)(v168 + 48) )
            goto LABEL_282;
        }
      }
      ++Prcbs;
      --v167;
    }
    while ( v167 );
    v86 = v432;
LABEL_289:
    if ( ((**(_BYTE **)(v86 + 56) ^ *(_BYTE *)&v163) & 0x80u) != 0 )
      KiAcquirePrcbLocksForPreemptionAttemptSlowPath(v86, v161, &v435);
    v20 = a2;
    *((_QWORD *)&v435 + 1) = (unsigned int)KiIsIsolationUnitIdleByHandle(&v435);
    *(_DWORD *)(a2 + 536) = v433;
    v170 = *(_QWORD *)(a2 + 104);
    if ( v170 )
      v171 = (struct _KSCB *)(v170 + *(unsigned int *)(v86 + 216));
    else
      v171 = 0LL;
    goto LABEL_293;
  }
  v50 = *(unsigned __int16 **)(v20 + 576);
  v51 = 0;
  v52 = *v50;
  if ( !(_WORD)v52 )
    goto LABEL_220;
  v53 = (unsigned __int64 *)(v50 + 4);
  v54 = v52;
  do
  {
    v51 += __popcnt(*v53++);
    --v54;
  }
  while ( v54 );
  if ( v51 <= 1 )
  {
LABEL_220:
    v128 = *(__int16 **)(v20 + 576);
    v129 = *v128;
    while ( --v129 >= 0 )
    {
      v130 = *(_QWORD *)&v128[4 * v129 + 4];
      if ( v130 )
      {
        _BitScanReverse64(&v131, v130);
        LODWORD(v431) = 0;
        v132 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
               + (unsigned int)((v129 << 6) + v131));
        goto LABEL_224;
      }
    }
    v132 = -1;
LABEL_224:
    v133 = v132;
    v134 = (*(_DWORD *)(v20 + 120) >> 1) & 1;
    v135 = v134;
    v432 = KiProcessorBlock[v133];
    v86 = v432;
    LODWORD(v431) = v134;
    v136 = **(_BYTE **)(v432 + 56);
    v457[0] = v432;
    if ( v134 < v136 >> 7 )
      v135 = v136 >> 7;
    v73 = v135 | v432 & 0xFFFFFFFFFFFFFFFEuLL;
    v437 = v73;
    *(_QWORD *)&v435 = v73;
    if ( v135 )
    {
      if ( v135 != 1 )
      {
LABEL_235:
        if ( ((**(_BYTE **)(v86 + 56) ^ v136) & 0x80u) != 0 )
        {
          KiAcquirePrcbLocksForPreemptionAttemptSlowPath(v86, v134, &v435);
          v73 = v435;
          v437 = v435;
        }
        v143 = v73 & 0xFFFFFFFFFFFFFFFEuLL;
        v85 = v73;
        v457[1] = v73 & 0xFFFFFFFFFFFFFFFEuLL;
        v144 = 0LL;
        v145 = 0;
        if ( (v73 & 1) != 0 )
        {
          if ( (v73 & 1) == 1 )
          {
            v227 = *(unsigned __int8 **)(v143 + 36504);
            v145 = *v227;
            v144 = (__int64 *)(v227 + 8);
          }
          v146 = 1;
          if ( v145 )
          {
            v228 = v145;
            do
            {
              v229 = *v144++;
              v146 = ((*(_BYTE *)(v229 + 35) & 1) == 0) & (unsigned __int8)v146;
              --v228;
            }
            while ( v228 );
            v73 = v437;
          }
        }
        else
        {
          v146 = (*(_BYTE *)(v143 + 35) & 1) == 0;
        }
        *((_QWORD *)&v435 + 1) = v146;
        v84 = 0;
        goto LABEL_155;
      }
      v137 = *(_BYTE **)(v432 + 36504);
      v138 = (unsigned __int8)*v137;
      v139 = (__int64 *)(v137 + 8);
      if ( !*v137 )
      {
LABEL_234:
        v32 = v425;
        goto LABEL_235;
      }
    }
    else
    {
      v139 = v457;
      v138 = 1;
    }
    v140 = v138;
    while ( 1 )
    {
      v141 = *v139;
      v142 = 0;
LABEL_231:
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v141 + 48), 0LL) )
        break;
      ++v139;
      if ( !--v140 )
      {
        v73 = v435;
        v134 = v431;
        v86 = v432;
        v20 = a2;
        v437 = v435;
        goto LABEL_234;
      }
    }
    while ( 1 )
    {
      if ( (++v142 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
        {
LABEL_253:
          HvlNotifyLongSpinWait(v142);
          goto LABEL_242;
        }
        for ( j = 0; j < (unsigned int)KeNumberProcessors_0; ++j )
        {
          v148 = KiProcessorBlock[j];
          if ( (*(_BYTE *)(v148 + 35) & 1) != 0 )
          {
            v149 = *(_QWORD *)(v148 + 36600);
            if ( !v149 || !*(_BYTE *)(v149 + 65) || !*(_BYTE *)(v149 + 64) )
              goto LABEL_253;
          }
        }
      }
      _mm_pause();
LABEL_242:
      if ( !*(_QWORD *)(v141 + 48) )
        goto LABEL_231;
    }
  }
  if ( !KeHeteroSystem )
  {
    v84 = KiPerfIsoEnabled && (unsigned __int8)KiIsThreadRankBiased(v20, v10) && !v32;
    LOBYTE(BugCheckParameter4) = v84;
    KiChooseTargetProcessor(v10, v20, *(_QWORD *)(v20 + 576), &v435, BugCheckParameter4);
    v73 = v435;
    goto LABEL_154;
  }
  v55 = *(unsigned __int8 *)(v20 + 516);
  v56 = *(_DWORD *)(v20 + 80);
  v57 = *(struct _KPRCB **)(v20 + 576);
  v58 = *(_BYTE *)(v20 + 195);
  v445 = 0LL;
  v446 = 0;
  v59 = *(_DWORD *)(v20 + 84);
  v444 = 0LL;
  if ( v56 <= v59 )
    v56 = v59;
  LODWORD(v431) = 33752069;
  WORD2(v431) = 6;
  BYTE6(v431) = 1;
  DWORD2(v444) = v56 >= KiDynamicHeteroCpuPolicyExpectedCycles;
  v441 = v57;
  LOBYTE(v444) = v58;
  DWORD1(v444) = v55;
  HIDWORD(v444) = KiDynamicHeteroCpuPolicy[2 * v55 + (v56 >= KiDynamicHeteroCpuPolicyExpectedCycles)];
  LOBYTE(v445) = *(_BYTE *)(v20 + 517);
  BYTE1(v431) = *((_BYTE *)&v431 + v55);
  if ( (KiHeteroSchedulerOptionsMask & 8) == 0 || (LOBYTE(v431) = v58, (KiHeteroSchedulerOptions & 8) == 0) )
    LOBYTE(v431) = 0;
  WORD1(v445) = v431;
  HIDWORD(v445) = (*(_DWORD *)(v20 + 120) >> 1) & 1;
  v60 = KiProcessorBlock[*(unsigned int *)(v20 + 588)];
  v432 = v60;
LABEL_123:
  while ( 2 )
  {
    v61 = *(_QWORD *)(v60 + 192);
    v62 = 0;
    v451[1] = 0LL;
    v63 = 0;
    v64 = *(unsigned __int16 *)(v61 + 138);
    while ( 1 )
    {
      if ( v63 )
      {
        if ( ++v62 == (unsigned __int16)KeNumberNodes )
          v65 = 0xFFFFFFFFLL;
        else
          v65 = *(unsigned int *)(qword_140E2D810 + 4LL * (v62 + (unsigned __int16)KeNumberNodes * v64));
      }
      else
      {
        v65 = v64;
        v63 = 1;
      }
      if ( (_DWORD)v65 == -1 )
      {
        v92 = *(_QWORD *)(v60 + 192);
        v433 = v92;
        v93 = *(unsigned __int16 *)(v92 + 136);
        if ( (unsigned __int16)v93 >= LOWORD(v57->MxCsr) )
          v94 = 0LL;
        else
          v94 = *((_QWORD *)&v57->CurrentThread + v93);
        v95 = (unsigned __int8)v445 + (unsigned int)*(unsigned __int8 *)(v92 + 185) * (DWORD2(v444) + 2 * DWORD1(v444));
        v96 = *(_QWORD *)(v92 + 192);
        v97 = *(_QWORD *)(v96 + 24 * v95 + 16);
        v98 = v94 & v97 & *(_QWORD *)(v96 + 24 * v95 + 8);
        v99 = v94 & v97;
        v438 = (struct _KPRCB *)v99;
        if ( v99 )
        {
          if ( v98 )
          {
            v438 = (struct _KPRCB *)v99;
            if ( v98 != v99 )
            {
              v438 = (struct _KPRCB *)v99;
LABEL_176:
              v100 = v99 & *(_QWORD *)(v60 + 36480);
              if ( ((v100 - 1) & v100) == 0 )
              {
                v108 = v432;
                v436 = (struct _KPRCB **)v432;
LABEL_185:
                if ( (v99 & *(_QWORD *)(v108 + 200)) == 0 )
                {
                  v109 = *(_BYTE *)(v108 + 209);
                  _BitScanForward64(&v110, __ROR8__(v99, v109));
                  v111 = *(unsigned __int8 *)(v108 + 208) << 6;
                  LODWORD(v431) = 0;
                  v108 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                                          + v111
                                          + (((_BYTE)v110 + v109) & 0x3Fu))];
                  v436 = (struct _KPRCB **)v108;
                }
                v112 = HIDWORD(v445);
                v113 = HIDWORD(v445);
                v114 = **(_BYTE **)(v108 + 56);
                v453 = v108;
                if ( SHIDWORD(v445) < v114 >> 7 )
                  v113 = v114 >> 7;
                v73 = v113 ^ (v108 ^ v113) & 0xFFFFFFFFFFFFFFFEuLL;
                v437 = v73;
                v431 = v73;
                if ( v113 )
                {
                  if ( v113 != 1 )
                    goto LABEL_197;
                  v115 = *(_BYTE **)(v108 + 36504);
                  v116 = (unsigned __int8)*v115;
                  v117 = (__int64 *)(v115 + 8);
                  if ( !*v115 )
                    goto LABEL_197;
                }
                else
                {
                  v117 = &v453;
                  v116 = 1;
                }
                v118 = v116;
                do
                {
                  v119 = *v117;
                  v120 = 0;
LABEL_194:
                  if ( _interlockedbittestandset64((volatile signed __int32 *)(v119 + 48), 0LL) )
                  {
                    while ( 1 )
                    {
                      if ( (++v120 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
                      {
                        if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
                        {
LABEL_218:
                          HvlNotifyLongSpinWait(v120);
                          goto LABEL_207;
                        }
                        for ( k = 0; k < (unsigned int)KeNumberProcessors_0; ++k )
                        {
                          v126 = KiProcessorBlock[k];
                          if ( (*(_BYTE *)(v126 + 35) & 1) != 0 )
                          {
                            v127 = *(_QWORD *)(v126 + 36600);
                            if ( !v127 || !*(_BYTE *)(v127 + 65) || !*(_BYTE *)(v127 + 64) )
                              goto LABEL_218;
                          }
                        }
                      }
                      _mm_pause();
LABEL_207:
                      if ( !*(_QWORD *)(v119 + 48) )
                        goto LABEL_194;
                    }
                  }
                  ++v117;
                  --v118;
                }
                while ( v118 );
                v108 = (__int64)v436;
                v99 = (__int64)v438;
                v112 = HIDWORD(v445);
                v92 = v433;
                v73 = v437;
LABEL_197:
                if ( ((**(_BYTE **)(v108 + 56) ^ v114) & 0x80u) != 0 )
                {
                  KiAcquirePrcbLocksForPreemptionAttemptSlowPath(v108, v112, &v431);
                  v73 = v431;
                  v108 = (__int64)v436;
                  v92 = v433;
                }
                v121 = 0LL;
                if ( (v99 & *(_QWORD *)(v92 + 8LL * v112 + 16) & *(_QWORD *)(v92 + 8)) == 0 )
                {
                  DWORD2(v435) = 0;
                  v122 = v73 & 0xFFFFFFFFFFFFFFFEuLL;
                  if ( (*(_BYTE *)(v108 + 35) & 0x10) == 0 )
                  {
                    v455[1] = v73 & 0xFFFFFFFFFFFFFFFEuLL;
                    v123 = 0;
                    if ( (v73 & 1) != 0 )
                    {
                      if ( (v73 & 1) == 1 )
                      {
                        v219 = *(unsigned __int8 **)(v122 + 36504);
                        v123 = *v219;
                        v121 = (__int64 *)(v219 + 8);
                      }
                      v124 = 1;
                      if ( v123 )
                      {
                        v220 = v123;
                        do
                        {
                          v221 = *v121++;
                          v124 = ((*(_BYTE *)(v221 + 35) & 1) == 0) & (unsigned __int8)v124;
                          --v220;
                        }
                        while ( v220 );
                      }
                    }
                    else
                    {
                      v124 = (*(_BYTE *)(v122 + 35) & 1) == 0;
                    }
                    if ( v124 )
                    {
                      v456 = v99;
                      v451[0] = &v456;
                      __fastfail(0x21u);
                    }
                    v20 = a2;
LABEL_400:
                    HIDWORD(v435) = 0;
                    goto LABEL_152;
                  }
                  v455[0] = v73 & 0xFFFFFFFFFFFFFFFEuLL;
                  if ( (v73 & 1) != 0 )
                  {
                    v215 = *(_BYTE **)(v122 + 36504);
                    LODWORD(v216) = (unsigned __int8)*v215;
                    v217 = v215 + 8;
                    if ( !*v215 )
                      goto LABEL_399;
                  }
                  else
                  {
                    v217 = v455;
                    LODWORD(v216) = 1;
                  }
                  do
                  {
                    v216 = (unsigned int)(v216 - 1);
                    _InterlockedAnd64((volatile signed __int64 *)(v217[v216] + 48LL), 0LL);
                  }
                  while ( (_DWORD)v216 );
LABEL_399:
                  v20 = a2;
                  v431 = 0LL;
                  KiSelectCandidateProcessor(v108, a2, v99, v112, (__int64)&v431);
                  IsIsolationUnitIdleByHandle = KiIsIsolationUnitIdleByHandle(&v431);
                  v73 = v431;
                  if ( IsIsolationUnitIdleByHandle )
                  {
                    *((_QWORD *)&v435 + 1) = 1LL;
                    goto LABEL_152;
                  }
                  goto LABEL_400;
                }
                v454 = v73 & 0xFFFFFFFFFFFFFFFEuLL;
                if ( (v73 & 1) != 0 )
                {
                  v208 = *(_BYTE **)((v73 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
                  LODWORD(v209) = (unsigned __int8)*v208;
                  v210 = (unsigned __int64 *)(v208 + 8);
                  v60 = v432;
                  v57 = v441;
                  if ( *v208 )
                    goto LABEL_377;
                }
                else
                {
                  v210 = &v454;
                  LODWORD(v209) = 1;
                  do
                  {
LABEL_377:
                    v209 = (unsigned int)(v209 - 1);
                    _InterlockedAnd64((volatile signed __int64 *)(v210[v209] + 48), 0LL);
                  }
                  while ( (_DWORD)v209 );
                  v60 = v432;
                  v57 = v441;
                }
                goto LABEL_123;
              }
              v101 = *(unsigned __int8 **)(v432 + 36488);
              v102 = v101[704];
              v103 = v101[705];
              RtlCopyVolatileMemory((char *)&v461[2] + v103, v101 + 576, v101[704]);
              v104 = v103 + v102;
              v105 = -1;
              LODWORD(v431) = v103 + v102;
              v106 = *(_BYTE *)(a2 + 195);
              if ( (KiHeteroSchedulerOptionsMask & 2) == 0 || (KiHeteroSchedulerOptions & 2) != 0 )
              {
                v107 = *(unsigned __int8 *)(a2 + 516);
                if ( v107 == 5 || ((v107 - 2) & 0xFFFFFFFB) == 0 || (_BYTE)v107 == 1 && !KiDisableMediumQosGrouping )
                {
                  if ( KeHeteroSystemQos )
                  {
                    v154 = v100 & *(_QWORD *)(*(_QWORD *)(v432 + 192) + 328LL);
                    if ( v154 )
                    {
                      v230 = v103;
                      if ( (unsigned int)v103 < (unsigned int)v431 )
                      {
                        v231 = v431;
                        v232 = __ROL8__(1LL, v103);
                        v233 = (char *)&v461[2] + v103;
                        do
                        {
                          if ( (v154 & v232) != 0 )
                          {
                            v231 = v431;
                            if ( (*v233 & 0x7F) < v106 )
                            {
                              v105 = v230;
                              v106 = *v233 & 0x7F;
                            }
                          }
                          ++v230;
                          v232 = __ROL8__(v232, 1);
                          ++v233;
                        }
                        while ( v230 < v231 );
                      }
                    }
                    v104 = v431;
                  }
                }
              }
              if ( v98 )
              {
                if ( v105 >= 0 )
                  goto LABEL_183;
                v211 = v103;
                if ( (unsigned int)v103 >= v104 )
                {
LABEL_819:
                  v108 = v432;
                  goto LABEL_184;
                }
                v212 = __ROL8__(1LL, v103);
                v213 = (char *)&v461[2] + v103;
                do
                {
                  if ( (v98 & v212) != 0 && (*v213 & 0x7F) < v106 )
                  {
                    v105 = v211;
                    v106 = *v213 & 0x7F;
                  }
                  ++v211;
                  v212 = __ROL8__(v212, 1);
                  ++v213;
                }
                while ( v211 < v104 );
              }
              if ( v105 < 0 )
              {
                if ( (unsigned int)v103 >= v104 )
                  goto LABEL_819;
                v420 = __ROL8__(1LL, v103);
                v421 = (char *)&v461[2] + v103;
                do
                {
                  if ( (v100 & v420) != 0 && (*v421 & 0x7F) < v106 )
                  {
                    v105 = v103;
                    v106 = *v421 & 0x7F;
                  }
                  LODWORD(v103) = v103 + 1;
                  v420 = __ROL8__(v420, 1);
                  ++v421;
                }
                while ( (unsigned int)v103 < v104 );
                if ( v105 < 0 )
                  goto LABEL_819;
              }
LABEL_183:
              v108 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * *(unsigned __int8 *)(v432 + 208)].Flink
                                      + v105)];
LABEL_184:
              v92 = v433;
              v99 = (__int64)v438;
              v436 = (struct _KPRCB **)v108;
              goto LABEL_185;
            }
          }
        }
        else
        {
          v99 = v94 & *(_QWORD *)(v92 + 128);
          v438 = (struct _KPRCB *)v99;
        }
        v98 = 0LL;
        goto LABEL_176;
      }
      v66 = KeNodeBlock[v65];
      if ( v66 )
      {
        v67 = KiHeteroSelectIdleProcessorFromNode(a2, v66, v60, (_DWORD)v57, (__int64)&v444);
        v57 = v441;
        v68 = v67;
        if ( v67 )
          break;
      }
    }
    v69 = *(_QWORD *)(v60 + 192);
    v70 = *(_QWORD *)(v67 + 192);
    if ( *(_QWORD *)((char *)&v444 + 4) != 0x100000000LL || (unsigned int)(HIDWORD(v444) - 1) > 1 )
      goto LABEL_395;
    v71 = HIDWORD(v445);
    if ( HIDWORD(v445) )
      goto LABEL_132;
    v234 = *(unsigned __int16 *)(v70 + 136);
    v235 = (unsigned __int16)v234 >= LOWORD(v441->MxCsr) ? 0LL : *((_QWORD *)&v441->CurrentThread + v234);
    v236 = *(_QWORD *)(v70 + 192);
    v237 = *(_QWORD *)(v236 + 24LL * ((unsigned __int8)v445 + (unsigned int)*(unsigned __int8 *)(v70 + 185)) + 16);
    v238 = v235 & v237 & *(_QWORD *)(v236
                                   + 24LL * ((unsigned __int8)v445 + (unsigned int)*(unsigned __int8 *)(v70 + 185))
                                   + 8);
    v239 = v235 & v237;
    if ( v239 )
    {
      if ( !v238 )
        v238 = v239;
    }
    else
    {
      v238 = v235 & *(_QWORD *)(v70 + 128);
    }
    v240 = *(_QWORD *)(v70 + 16);
    if ( (v238 & *(_QWORD *)(v68 + 200)) != 0 && (v240 & *(_QWORD *)(v68 + 36512)) == *(_QWORD *)(v68 + 36512) )
    {
LABEL_132:
      v72 = (_QWORD *)v68;
      v461[0] = v68;
      v73 = v71 ^ (v68 ^ v71) & 0xFFFFFFFFFFFFFFFEuLL;
      v437 = v73;
      v433 = v73;
      if ( v71 )
      {
        if ( v71 != 1 )
          goto LABEL_147;
        v74 = *(_BYTE **)(v68 + 36504);
        v75 = (unsigned __int8)*v74;
        v76 = (__int64 *)(v74 + 8);
        if ( !*v74 )
          goto LABEL_147;
      }
      else
      {
        v76 = v461;
        v75 = 1;
      }
      v77 = v75;
      v72 = (_QWORD *)v68;
      do
      {
        v78 = *v76;
        v79 = 0;
LABEL_137:
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v78 + 48), 0LL) )
        {
          while ( 1 )
          {
            if ( (++v79 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
            {
              if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
              {
LABEL_168:
                HvlNotifyLongSpinWait(v79);
                goto LABEL_140;
              }
              for ( m = 0; m < (unsigned int)KeNumberProcessors_0; ++m )
              {
                v90 = KiProcessorBlock[m];
                if ( (*(_BYTE *)(v90 + 35) & 1) != 0 )
                {
                  v91 = *(_QWORD *)(v90 + 36600);
                  if ( !v91 || !*(_BYTE *)(v91 + 65) || !*(_BYTE *)(v91 + 64) )
                    goto LABEL_168;
                }
              }
            }
            _mm_pause();
LABEL_140:
            if ( !*(_QWORD *)(v78 + 48) )
              goto LABEL_137;
          }
        }
        ++v76;
        --v77;
      }
      while ( v77 );
      v73 = v437;
LABEL_147:
      v80 = v73 & 0xFFFFFFFFFFFFFFFEuLL;
      v81 = 0LL;
      v461[1] = v73 & 0xFFFFFFFFFFFFFFFEuLL;
      v82 = 0;
      if ( (v73 & 1) != 0 )
      {
        if ( (v73 & 1) == 1 )
        {
          v205 = *(unsigned __int8 **)(v80 + 36504);
          v82 = *v205;
          v81 = (__int64 *)(v205 + 8);
        }
        v83 = 1;
        if ( v82 )
        {
          v206 = v82;
          do
          {
            v207 = *v81++;
            v83 = ((*(_BYTE *)(v207 + 35) & 1) == 0) & (unsigned __int8)v83;
            --v206;
          }
          while ( v206 );
        }
      }
      else
      {
        v83 = (*(_BYTE *)(v80 + 35) & 1) == 0;
      }
      if ( v83 && (*((_BYTE *)v72 + 35) & 0x10) == 0 )
      {
        v20 = a2;
        *((_QWORD *)&v435 + 1) = 1LL;
LABEL_152:
        *(_QWORD *)&v435 = v73;
        goto LABEL_153;
      }
      KiReleasePrcbLocksForIsolationUnit(&v433);
      v57 = v441;
      v60 = v432;
      continue;
    }
    break;
  }
  v214 = (v240 & *(_QWORD *)(v68 + 36512)) == *(_QWORD *)(v68 + 36512);
  if ( (int)KiHeteroAttemptPreemptionSwapOnSubNode(
              *(_QWORD *)(v60 + 192),
              v60,
              v68,
              (_DWORD)v441,
              (__int64)&v444,
              v214,
              (__int64)&v435) < 0
    && (v69 == v70
     || (int)KiHeteroAttemptPreemptionSwapOnSubNode(v70, v60, v68, (_DWORD)v441, (__int64)&v444, v214, (__int64)&v435) < 0) )
  {
LABEL_395:
    v71 = HIDWORD(v445);
    goto LABEL_132;
  }
  v73 = v435;
  v20 = a2;
LABEL_153:
  v32 = v425;
  v84 = 0;
LABEL_154:
  v85 = v73;
  v86 = v73 & 0xFFFFFFFFFFFFFFFEuLL;
  v432 = v73 & 0xFFFFFFFFFFFFFFFEuLL;
LABEL_155:
  v87 = v73 & 0xFFFFFFFFFFFFFFFEuLL;
  v457[2] = v87;
  if ( (v85 & 1) != 0 )
  {
    v150 = *(_BYTE **)(v87 + 36504);
    v151 = (__int64 *)(v150 + 8);
    v88 = 1;
    if ( *v150 )
    {
      v152 = (unsigned __int8)*v150;
      do
      {
        v153 = *v151++;
        v88 = ((*(_BYTE *)(v153 + 35) & 1) == 0) & (unsigned __int8)v88;
        --v152;
      }
      while ( v152 );
    }
  }
  else
  {
    v88 = (*(_BYTE *)(v87 + 35) & 1) == 0;
  }
  if ( v88 != DWORD2(v435) )
    __fastfail(0x21u);
  *(_DWORD *)(v20 + 536) = *(_DWORD *)(v86 + 36);
  v249 = *(_QWORD *)(v20 + 104);
  if ( !v249 )
  {
    v171 = 0LL;
    goto LABEL_462;
  }
  v171 = (struct _KSCB *)(v249 + *(unsigned int *)(v86 + 216));
  if ( !v171 || *(char *)(v20 + 195) >= 16 || (*(_DWORD *)(v20 + 120) & 0x200) != 0 )
    goto LABEL_462;
  v314 = v249 + *(unsigned int *)(v86 + 216);
  while ( (*(_BYTE *)(v314 + 128) & 2) == 0 )
  {
    v314 = *(_QWORD *)(v314 + 440);
    if ( !v314 )
      goto LABEL_462;
  }
  if ( v32 )
  {
LABEL_462:
    if ( KiForceParkingConfiguration && (*(_BYTE *)(v86 + 35) & 0x20) != 0 && !KiIsThreadExemptFromForcePark(v20) )
      goto LABEL_293;
    if ( DWORD2(v435) )
    {
      StaticRescheduleContext = v10->StaticRescheduleContext;
      v251 = v435 & 0xFFFFFFFFFFFFFFFEuLL;
      v437 = v435 & 0xFFFFFFFFFFFFFFFEuLL;
      memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
      v252 = 0LL;
      v436 = 0LL;
      v253 = 0;
      v452 = v435 & 0xFFFFFFFFFFFFFFFEuLL;
      v254 = v435 & 1;
      if ( (v435 & 1) != 0 )
      {
        if ( v254 == KiIsolationWidthCore )
        {
          v255 = *(unsigned __int8 **)((v435 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
          v253 = *v255;
          v252 = (struct _KPRCB **)(v255 + 8);
          v436 = (struct _KPRCB **)(v255 + 8);
        }
        v256 = 0;
        LODWORD(v431) = 0;
        if ( !v253 )
        {
LABEL_469:
          StaticRescheduleContext->MaximumThreadIsolationWidth = v256;
          StaticRescheduleContext->IsolationWidth = v254;
          StaticRescheduleContext->ProcessorCount = v253;
          if ( v254 )
            v257 = *(_BYTE *)(*(_QWORD *)(v452 + 36504) + 1LL);
          else
            v257 = 0;
          StaticRescheduleContext->ScanStart = v257;
          if ( v256 )
          {
            v347 = 0LL;
            for ( n = 0; n < v253; ++n )
            {
              v349 = &StaticRescheduleContext->ProcessorCount + 40 * n;
              if ( *((_QWORD *)v349 + 4) != *(_QWORD *)(*((_QWORD *)v349 + 2) + 36544LL) )
              {
                v347 = v349 + 16;
                break;
              }
            }
            if ( v253 )
            {
              v350 = (unsigned __int8 *)&StaticRescheduleContext->ProcessorEntries[0].32;
              v351 = v253;
              do
              {
                if ( v350 - 32 != v347 )
                {
                  *((_QWORD *)v350 - 2) = *((_QWORD *)v347 + 2);
                  *v350 = v347[32] | 0x20;
                }
                v350 += 40;
                --v351;
              }
              while ( v351 );
            }
          }
          v258 = 0LL;
          for ( ii = 0; ii < StaticRescheduleContext->ProcessorCount; ++ii )
          {
            if ( StaticRescheduleContext->ProcessorEntries[ii].Prcb == (_KPRCB *)v251 )
            {
              v258 = (__int64)&StaticRescheduleContext->ProcessorEntries[ii];
              break;
            }
          }
          v260 = a2;
          v261 = (*(unsigned __int8 *)(v258 + 32) >> 1) & 1;
          v262 = (*(_DWORD *)(a2 + 120) >> 1) & 1;
          v434 = v262;
          if ( v262 < v261 )
          {
            v263 = 0;
            if ( !StaticRescheduleContext->ProcessorCount )
              goto LABEL_586;
            v264 = v440;
            v265 = v428;
            do
            {
              Prcb = StaticRescheduleContext->ProcessorEntries[v263].Prcb;
              v267 = &StaticRescheduleContext->ProcessorCount + 40 * v263;
              v268 = *((_QWORD *)v267 + 5);
              if ( Prcb == (_KPRCB *)v251 )
              {
                if ( v268 && v268 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v268) )
                {
                  if ( (v267[49] & 1) != 0 )
                    *(_DWORD *)(v402 + 116) |= 2u;
                  *(_BYTE *)(v402 + 565) = 1;
                  KiInsertDeferredReadyList(v264, v402);
                  v260 = a2;
                }
                *((_QWORD *)v267 + 4) = v260;
                v267[48] &= ~1u;
                v267[48] = (v267[48] & 0xFD ^ (2 * ((*(_DWORD *)(v260 + 120) & 2) != 0))) & 0xC3 | 4;
                *((_QWORD *)v267 + 5) = v260;
                v267[49] ^= (v267[49] ^ v265) & 1;
                if ( !(unsigned __int8)KiIsPrcbThread(v260) )
                  *(_DWORD *)(v260 + 536) = Prcb->Number;
              }
              else
              {
                IdleThread = Prcb->IdleThread;
                if ( v268 && v268 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v268) )
                {
                  if ( (v267[49] & 1) != 0 )
                    *(_DWORD *)(v352 + 116) |= 2u;
                  *(_BYTE *)(v352 + 565) = 1;
                  KiInsertDeferredReadyList(v264, v352);
                }
                *((_QWORD *)v267 + 4) = IdleThread;
                v267[48] |= 1u;
                v267[48] = (v267[48] & 0xFD ^ (2 * ((*((_DWORD *)&IdleThread->0 + 1) & 2) != 0))) & 0xC3 | 4;
                *((_QWORD *)v267 + 5) = IdleThread;
                v267[49] &= ~1u;
                if ( !(unsigned __int8)KiIsPrcbThread(IdleThread) )
                  *(_DWORD *)(v270 + 536) = Prcb->Number;
              }
              ++v263;
            }
            while ( v263 < StaticRescheduleContext->ProcessorCount );
            goto LABEL_485;
          }
          if ( v262 )
          {
            v336 = 0;
            if ( StaticRescheduleContext->ProcessorCount )
            {
              v337 = v440;
              v338 = v428;
              do
              {
                v339 = StaticRescheduleContext->ProcessorEntries[v336].Prcb;
                v340 = &StaticRescheduleContext->ProcessorCount + 40 * v336;
                v341 = *((_QWORD *)v340 + 5);
                if ( v339 == (_KPRCB *)v251 )
                {
                  if ( v341 && v341 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v341) )
                  {
                    if ( (v340[49] & 1) != 0 )
                      *(_DWORD *)(v358 + 116) |= 2u;
                    *(_BYTE *)(v358 + 565) = 1;
                    KiInsertDeferredReadyList(v337, v358);
                    v260 = a2;
                  }
                  *((_QWORD *)v340 + 4) = v260;
                  v340[48] &= ~1u;
                  v340[48] = (v340[48] & 0xFD ^ (2 * ((*(_DWORD *)(v260 + 120) & 2) != 0))) & 0xC3 | 4;
                  *((_QWORD *)v340 + 5) = v260;
                  v340[49] ^= (v340[49] ^ v338) & 1;
                  if ( !(unsigned __int8)KiIsPrcbThread(v260) )
                    *(_DWORD *)(v260 + 536) = v339->Number;
                }
                else
                {
                  SmtIsolationThread = v339->SmtIsolationThread;
                  if ( v341 && v341 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v341) )
                  {
                    if ( (v340[49] & 1) != 0 )
                      *(_DWORD *)(v394 + 116) |= 2u;
                    *(_BYTE *)(v394 + 565) = 1;
                    KiInsertDeferredReadyList(v337, v394);
                    v260 = a2;
                  }
                  *((_QWORD *)v340 + 4) = v260;
                  v340[48] &= ~1u;
                  v344 = (v340[48] & 0xFD ^ (2 * ((*(_DWORD *)(v260 + 120) & 2) != 0))) & 0xC3 | 0x24;
                  if ( (_KTHREAD *)v260 == SmtIsolationThread )
                    v344 = (v340[48] & 0xFD ^ (2 * ((*(_DWORD *)(v260 + 120) & 2) != 0))) & 0xC3 | 4;
                  v340[48] = v344;
                  *((_QWORD *)v340 + 5) = SmtIsolationThread;
                  v340[49] &= ~1u;
                  if ( !(unsigned __int8)KiIsPrcbThread(SmtIsolationThread) )
                    SmtIsolationThread->NextProcessor = v339->Number;
                }
                v336 = v342 + 1;
              }
              while ( v336 < StaticRescheduleContext->ProcessorCount );
LABEL_485:
              v262 = v434;
              v10 = v443;
            }
          }
          else
          {
            v324 = *(_QWORD *)(v258 + 24);
            v325 = &unk_140FC9F40;
            v326 = *(_QWORD *)v258;
            if ( v324 && v324 <= 0xFFFFFFFFFFFFFFFDuLL && *(_UNKNOWN **)(v324 + 544) != &unk_140FC9F40 )
            {
              if ( (*(_BYTE *)(v258 + 33) & 1) != 0 )
                *(_DWORD *)(v324 + 116) |= 2u;
              v335 = v440;
              *(_BYTE *)(v324 + 565) = 1;
              KiInsertDeferredReadyList(v335, v324);
              v260 = a2;
            }
            *(_QWORD *)(v258 + 16) = v260;
            v327 = *(_BYTE *)(v258 + 32) & 0xFE;
            *(_BYTE *)(v258 + 32) = v327;
            *(_BYTE *)(v258 + 32) = (v327 & 0xFD ^ (2 * ((*(_DWORD *)(v260 + 120) & 2) != 0))) & 0xC3 | 4;
            *(_QWORD *)(v258 + 24) = v260;
            *(_BYTE *)(v258 + 33) ^= (v428 ^ *(_BYTE *)(v258 + 33)) & 1;
            if ( *(void **)(v260 + 544) != v325 )
              *(_DWORD *)(v260 + 536) = *(_DWORD *)(v326 + 36);
          }
LABEL_586:
          v328 = 0;
          StaticRescheduleContext->MaximumThreadIsolationWidth = v262;
          v329 = 0;
          if ( (WORD2(xmmword_140FC0C10) & 0x400) != 0 )
            v329 = 2;
          v330 = 0;
          if ( StaticRescheduleContext->ProcessorCount )
          {
            v334 = v440;
            do
            {
              v328 |= KiCommitRescheduleContextEntry(
                        (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                              + 32 * v330
                                                              + 8 * v330),
                        v10,
                        v329,
                        v334);
              ++v330;
            }
            while ( v330 < StaticRescheduleContext->ProcessorCount );
            v5 = 0;
          }
          if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
          {
            CoreControlBlock = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
            if ( ++CoreControlBlock->ScanStartIndex >= CoreControlBlock->ProcessorCount )
              CoreControlBlock->ScanStartIndex = 0;
          }
          v189 = 0LL;
          LODWORD(v332) = 0;
          v458 = v435 & 0xFFFFFFFFFFFFFFFEuLL;
          if ( (v435 & 1) != 0 )
          {
            if ( (v435 & 1) == 1 )
            {
              v333 = *(unsigned __int8 **)((v435 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
              LODWORD(v332) = *v333;
              v189 = (unsigned __int64 *)(v333 + 8);
            }
            if ( !(_DWORD)v332 )
            {
LABEL_333:
              v20 = a2;
              *(_QWORD *)&v435 = 0LL;
              *(_QWORD *)(a2 + 64) = 0LL;
              if ( !v328 || !StaticRescheduleContext->ProcessorCount )
                goto LABEL_330;
              while ( 1 )
              {
                v184 = StaticRescheduleContext->ProcessorEntries[v5].___u6[0];
                v185 = StaticRescheduleContext->ProcessorEntries[v5].Prcb;
                if ( (v184 & 0x10) != 0 )
                {
                  TargetType = v10->DeferredDispatchInterrupts.TargetType;
                  if ( !TargetType )
                    goto LABEL_323;
                  if ( TargetType == 1 )
                  {
                    SingleTargetIndex = v10->DeferredDispatchInterrupts.SingleTargetIndex;
                    if ( SingleTargetIndex == v185->Number )
                      goto LABEL_324;
                    v10->DeferredDispatchInterrupts.TargetType = 2;
                    v188 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock
                           + SingleTargetIndex);
                    v189 = (unsigned __int64 *)(v188 & 0x3F);
                    v190 = v188 >> 6;
                    if ( v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Count <= (unsigned int)v190 )
                    {
                      if ( v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v190 )
                      {
                        v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v190 + 1;
                        goto LABEL_343;
                      }
                    }
                    else
                    {
LABEL_343:
                      v191 = (char *)v10 + 8 * v190;
                      v192 = *((_QWORD *)v191 + 1725);
                      _bittestandset64(&v192, (unsigned int)v189);
                      *((_QWORD *)v191 + 1725) = v192;
                    }
                  }
                  Group = v185->Group;
                  GroupSetMember = v185->GroupSetMember;
                  if ( v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)Group )
                    goto LABEL_352;
                  goto LABEL_345;
                }
                if ( (v184 & 8) == 0 || !v185->IdleHalt )
                  goto LABEL_324;
                v183 = v10->DeferredDispatchInterrupts.TargetType;
                if ( !v183 )
                {
LABEL_323:
                  v10->DeferredDispatchInterrupts.TargetType = 1;
                  v10->DeferredDispatchInterrupts.SingleTargetIndex = v185->Number;
                  goto LABEL_324;
                }
                if ( v183 == 1 )
                {
                  v195 = v10->DeferredDispatchInterrupts.SingleTargetIndex;
                  if ( v195 == v185->Number )
                    goto LABEL_324;
                  v10->DeferredDispatchInterrupts.TargetType = 2;
                  v196 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v195);
                  v189 = (unsigned __int64 *)(v196 & 0x3F);
                  v197 = v196 >> 6;
                  if ( v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned int)v197 )
                    goto LABEL_350;
                  if ( v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v197 )
                    break;
                }
LABEL_351:
                Group = v185->Group;
                GroupSetMember = v185->GroupSetMember;
                if ( v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)Group )
                  goto LABEL_352;
LABEL_345:
                if ( v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned __int16)Group )
                {
                  v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = Group + 1;
LABEL_352:
                  v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[Group] |= GroupSetMember;
                }
LABEL_324:
                if ( (StaticRescheduleContext->ProcessorEntries[v5].___u6[0] & 2) != 0 )
                {
                  NewThread = StaticRescheduleContext->ProcessorEntries[v5].NewThread;
                  if ( NewThread == (_KTHREAD *)v20 )
                    v204 = v449;
                  else
                    v204 = 0LL;
                  EtwTraceScheduleThread(NewThread, v185, v204);
                }
                if ( (StaticRescheduleContext->ProcessorEntries[v5].___u6[0] & 4) != 0 )
                {
                  if ( v185->SchedulerAssist )
                  {
                    if ( v10->SchedulerAssist )
                    {
                      if ( v10 != v185 )
                      {
                        v200 = *(_DWORD *)v185->SchedulerAssist;
                        if ( (v200 & 0x100000) != 0
                          || (*(_DWORD *)v185->SchedulerAssist & 0x40000) != 0
                          && (unsigned __int8)v200 < StaticRescheduleContext->ProcessorEntries[v5].KickPriority )
                        {
                          SchedulerAssist = v10->SchedulerAssist;
                          SchedulerAssist[3] = 2;
                          Number = v185->Number;
                          if ( !HvlpVirtualProcessorsIdentityMapped )
                          {
                            v20 = a2;
                            LODWORD(Number) = (unsigned __int8)byte_140FC71C1[2 * (unsigned int)Number] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
                          }
                          SchedulerAssist[2] = Number;
                          if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
                            EtwTraceXSchedulerPriorityKickSend(v185->Number, 2LL, v189);
                          __writemsr(0x400000C2u, (unsigned int)Number);
                        }
                      }
                    }
                  }
                }
                if ( (StaticRescheduleContext->ProcessorEntries[v5].___u6[0] & 1) != 0 )
                  _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[v5].NewThread->KeReferenceCount);
                if ( ++v5 >= StaticRescheduleContext->ProcessorCount )
                  goto LABEL_330;
              }
              v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v197 + 1;
LABEL_350:
              v198 = (char *)v10 + 8 * v197;
              v199 = *((_QWORD *)v198 + 1725);
              _bittestandset64(&v199, (unsigned int)v189);
              *((_QWORD *)v198 + 1725) = v199;
              goto LABEL_351;
            }
          }
          else
          {
            v189 = &v458;
            LODWORD(v332) = 1;
          }
          do
          {
            v332 = (unsigned int)(v332 - 1);
            _InterlockedAnd64((volatile signed __int64 *)(v189[v332] + 48), 0LL);
          }
          while ( (_DWORD)v332 );
          goto LABEL_333;
        }
      }
      else
      {
        v252 = (struct _KPRCB **)&v452;
        LODWORD(v431) = 0;
        v436 = (struct _KPRCB **)&v452;
        v253 = 1;
      }
      v271 = (unsigned __int8 *)&StaticRescheduleContext->ProcessorEntries[0].32;
      v272 = v253;
      v433 = v253;
      while ( 1 )
      {
        *((_OWORD *)v271 - 2) = 0LL;
        *((_OWORD *)v271 - 1) = 0LL;
        *(_QWORD *)v271 = 0LL;
        *((_QWORD *)v271 - 1) = -1LL;
        v271[4] = 63;
        v273 = *v252;
        *((_QWORD *)v271 - 4) = *v252;
        *((_QWORD *)v271 - 3) = 0LL;
        v438 = v273;
        SharedReadyQueue = v273->SharedReadyQueue;
        if ( SharedReadyQueue )
        {
          if ( (v273->IdleState & 0x10) == 0
            || ((unsigned __int8)KeIsForceParkingEnabled(SharedReadyQueue) && (v273->IdleState & 0x20) != 0
              ? (v317 = ~*(_QWORD *)(v315 + 104))
              : (v317 = *(_QWORD *)(v315 + 80)),
                (v317 & *(_QWORD *)(v316 + 712)) == 0) )
          {
            *((_QWORD *)v271 - 3) = v273->SharedReadyQueue;
          }
        }
        NextThread = v273->NextThread;
        *((_QWORD *)v271 - 2) = NextThread;
        if ( !NextThread )
        {
          NextThread = v273->CurrentThread;
          *((_QWORD *)v271 - 2) = NextThread;
        }
        if ( v273->NextThread == NextThread )
        {
          *v271 |= 4u;
        }
        else
        {
          v276 = *v271;
          if ( v273 == KeGetCurrentPrcb() )
            v277 = v276 | 4;
          else
            v277 = v276 & 0xFB;
          *v271 = v277;
        }
        v278 = 0;
        v426 = 0;
        if ( (*((_DWORD *)&NextThread->0 + 1) & 0x400000) == 0 )
          goto LABEL_498;
        if ( NextThread == (_KTHREAD *)a2 )
          goto LABEL_829;
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&NextThread->ThreadLock, 0LL) )
          break;
LABEL_498:
        v279 = *v271 & 0xFE | ((v273->IdleState & 1) == 0);
        *v271 = v279;
        v280 = v279 ^ (v279 ^ (v273->PriorityState->AllFields >> 6)) & 2;
        v256 = v431;
        *v271 = v280;
        if ( ((v280 >> 1) & 1) > v256 )
          v256 = (v280 >> 1) & 1;
        ++v252;
        v271 += 40;
        LODWORD(v431) = v256;
        --v272;
        v436 = v252;
        v433 = v272;
        if ( !v272 )
        {
          v10 = v443;
          v251 = v437;
          goto LABEL_469;
        }
      }
      v278 = 1;
      v426 = 1;
LABEL_829:
      if ( (*((_DWORD *)&NextThread->0 + 1) & 0x400000) != 0 )
      {
        if ( (unsigned __int8)KiIsThreadStateControlledByProcessor(NextThread, v273) )
        {
          KiUpdateVPBackingThreadPriority(NextThread);
          v273 = v438;
          v278 = v426;
          v272 = v433;
        }
        v252 = v436;
      }
      if ( v278 )
        NextThread->ThreadLock = 0LL;
      goto LABEL_498;
    }
    if ( v84 )
      goto LABEL_293;
    v281 = v10->StaticRescheduleContext;
    v437 = v435 & 0xFFFFFFFFFFFFFFFEuLL;
    memset_0(v281, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
    v282 = 0LL;
    v433 = 0LL;
    v283 = 0;
    v450 = v435 & 0xFFFFFFFFFFFFFFFEuLL;
    v284 = v435 & 1;
    if ( (v435 & 1) != 0 )
    {
      if ( v284 == KiIsolationWidthCore )
      {
        v285 = *(unsigned __int8 **)((v435 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
        v283 = *v285;
        v282 = (struct _KPRCB **)(v285 + 8);
        v433 = (unsigned __int64)(v285 + 8);
      }
      v286 = 0;
      if ( !v283 )
      {
LABEL_507:
        v281->MaximumThreadIsolationWidth = v286;
        v281->IsolationWidth = v284;
        v281->ProcessorCount = v283;
        if ( v284 )
          v287 = *(_BYTE *)(*(_QWORD *)(v450 + 36504) + 1LL);
        else
          v287 = 0;
        v281->ScanStart = v287;
        if ( v286 )
        {
          v353 = 0LL;
          for ( jj = 0; jj < v283; ++jj )
          {
            v355 = &v281->ProcessorCount + 40 * jj;
            if ( *((_QWORD *)v355 + 4) != *(_QWORD *)(*((_QWORD *)v355 + 2) + 36544LL) )
            {
              v353 = v355 + 16;
              break;
            }
          }
          if ( v283 )
          {
            v356 = (unsigned __int8 *)&v281->ProcessorEntries[0].32;
            v357 = v283;
            do
            {
              if ( v356 - 32 != v353 )
              {
                *((_QWORD *)v356 - 2) = *((_QWORD *)v353 + 2);
                *v356 = v353[32] | 0x20;
              }
              v356 += 40;
              --v357;
            }
            while ( v357 );
          }
        }
        v288 = 0LL;
        for ( kk = 0; kk < v281->ProcessorCount; ++kk )
        {
          if ( v281->ProcessorEntries[kk].Prcb == (_KPRCB *)v437 )
          {
            v288 = (__int64)&v281->ProcessorEntries[kk];
            break;
          }
        }
        v171 = 0LL;
        v290 = HIDWORD(v435) != 0;
        v433 = 0LL;
        if ( KiGroupSchedulingEnabled )
        {
          v291 = KiEvaluateGroupSchedulingPreemption(v288, a2, HIDWORD(v435) != 0, &v433);
          v171 = (struct _KSCB *)v433;
          if ( v291 )
            goto LABEL_517;
        }
        else
        {
          v321 = *(_BYTE *)(v288 + 32);
          v322 = *(_QWORD *)(v288 + 16);
          if ( (v321 & 1) != 0
            || (v323 = *(_BYTE *)(a2 + 195), v323 > *(char *)(v322 + 195))
            || v323 == *(_BYTE *)(v322 + 195) && ((v321 & 0x18) != 0 || HIDWORD(v435) != 0)
            || (v321 & 0x10) != 0 && v323 )
          {
LABEL_517:
            v292 = (struct _KTHREAD *)a2;
            v293 = (*(_DWORD *)(a2 + 120) >> 1) & 1;
            if ( v293 < ((*(unsigned __int8 *)(v288 + 32) >> 1) & 1u) )
              v293 = (*(unsigned __int8 *)(v288 + 32) >> 1) & 1;
            if ( v293 == 1 )
            {
              for ( mm = 0; mm < v281->ProcessorCount; ++mm )
              {
                v346 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v281->ProcessorEntries + 32 * mm + 8 * mm);
                if ( v346 != (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)v288 )
                {
                  if ( !KiDoesThreadDominateRescheduleContextEntry(v346, v292, v290, 0LL) )
                    goto LABEL_581;
                  v292 = (struct _KTHREAD *)a2;
                }
              }
            }
            v294 = 0LL;
            v295 = v437;
            for ( nn = 0; nn < v281->ProcessorCount; ++nn )
            {
              if ( v281->ProcessorEntries[nn].Prcb == (_KPRCB *)v437 )
              {
                v294 = (__int64)&v281->ProcessorEntries[nn];
                break;
              }
            }
            v20 = a2;
            v305 = (*(unsigned __int8 *)(v294 + 32) >> 1) & 1;
            v306 = (*(_DWORD *)(a2 + 120) >> 1) & 1;
            v434 = v306;
            if ( v306 >= v305 )
            {
              if ( v306 )
              {
                v395 = 0;
                if ( v281->ProcessorCount )
                {
                  do
                  {
                    v396 = v281->ProcessorEntries[v395].Prcb;
                    v397 = &v281->ProcessorCount + 40 * v395;
                    v398 = *((_QWORD *)v397 + 5);
                    if ( v396 == (_KPRCB *)v295 )
                    {
                      if ( v398 && v398 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v398) )
                      {
                        if ( (v397[49] & 1) != 0 )
                          *(_DWORD *)(v405 + 116) |= 2u;
                        *(_BYTE *)(v405 + 565) = 1;
                        KiInsertDeferredReadyList(v406, v405);
                      }
                      *((_QWORD *)v397 + 4) = a2;
                      v397[48] &= ~1u;
                      v397[48] = (v397[48] & 0xFD ^ (2 * ((*(_DWORD *)(a2 + 120) & 2) != 0))) & 0xC3 | 4;
                      *((_QWORD *)v397 + 5) = a2;
                      v397[49] ^= (v397[49] ^ v428) & 1;
                      if ( !(unsigned __int8)KiIsPrcbThread(a2) )
                        *(_DWORD *)(a2 + 536) = v396->Number;
                    }
                    else
                    {
                      v400 = v396->SmtIsolationThread;
                      if ( v398 && v398 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v398) )
                      {
                        if ( (v397[49] & 1) != 0 )
                          *(_DWORD *)(v407 + 116) |= 2u;
                        *(_BYTE *)(v407 + 565) = 1;
                        KiInsertDeferredReadyList(v408, v407);
                      }
                      *((_QWORD *)v397 + 4) = a2;
                      v397[48] &= ~1u;
                      v401 = (v397[48] & 0xFD ^ (2 * ((*(_DWORD *)(a2 + 120) & 2) != 0))) & 0xC3 | 0x24;
                      if ( (_KTHREAD *)a2 == v400 )
                        v401 = (v397[48] & 0xFD ^ (2 * ((*(_DWORD *)(a2 + 120) & 2) != 0))) & 0xC3 | 4;
                      v397[48] = v401;
                      *((_QWORD *)v397 + 5) = v400;
                      v397[49] &= ~1u;
                      if ( !(unsigned __int8)KiIsPrcbThread(v400) )
                        v400->NextProcessor = v396->Number;
                    }
                    v395 = v399 + 1;
                  }
                  while ( v395 < v281->ProcessorCount );
                  v306 = v434;
                  v10 = v443;
                }
              }
              else
              {
                v359 = *(_QWORD *)(v294 + 24);
                v360 = &unk_140FC9F40;
                v361 = *(_QWORD *)v294;
                if ( v359 && v359 <= 0xFFFFFFFFFFFFFFFDuLL && *(_UNKNOWN **)(v359 + 544) != &unk_140FC9F40 )
                {
                  if ( (*(_BYTE *)(v294 + 33) & 1) != 0 )
                    *(_DWORD *)(v359 + 116) |= 2u;
                  v393 = v440;
                  *(_BYTE *)(v359 + 565) = 1;
                  KiInsertDeferredReadyList(v393, v359);
                }
                *(_QWORD *)(v294 + 16) = a2;
                v362 = *(_BYTE *)(v294 + 32) & 0xFE;
                *(_BYTE *)(v294 + 32) = v362;
                *(_BYTE *)(v294 + 32) = (v362 & 0xFD ^ (2 * ((*(_DWORD *)(a2 + 120) & 2) != 0))) & 0xC3 | 4;
                *(_QWORD *)(v294 + 24) = a2;
                *(_BYTE *)(v294 + 33) ^= (*(_BYTE *)(v294 + 33) ^ v428) & 1;
                if ( *(void **)(a2 + 544) != v360 )
                  *(_DWORD *)(a2 + 536) = *(_DWORD *)(v361 + 36);
              }
              v281->MaximumThreadIsolationWidth = v306;
            }
            else
            {
              v307 = 0;
              if ( v281->ProcessorCount )
              {
                do
                {
                  v308 = v281->ProcessorEntries[v307].Prcb;
                  v309 = &v281->ProcessorCount + 40 * v307;
                  v310 = *((_QWORD *)v309 + 5);
                  if ( v308 == (_KPRCB *)v295 )
                  {
                    if ( v310 && v310 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v310) )
                    {
                      if ( (v309[49] & 1) != 0 )
                        *(_DWORD *)(v416 + 116) |= 2u;
                      *(_BYTE *)(v416 + 565) = 1;
                      KiInsertDeferredReadyList(v417, v416);
                    }
                    *((_QWORD *)v309 + 4) = a2;
                    v309[48] &= ~1u;
                    v309[48] = (v309[48] & 0xFD ^ (2 * ((*(_DWORD *)(a2 + 120) & 2) != 0))) & 0xC3 | 4;
                    *((_QWORD *)v309 + 5) = a2;
                    v309[49] ^= (v309[49] ^ v428) & 1;
                    if ( !(unsigned __int8)KiIsPrcbThread(a2) )
                      *(_DWORD *)(a2 + 536) = v308->Number;
                  }
                  else
                  {
                    v311 = v308->IdleThread;
                    if ( v310 && v310 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v310) )
                    {
                      if ( (v309[49] & 1) != 0 )
                        *(_DWORD *)(v403 + 116) |= 2u;
                      *(_BYTE *)(v403 + 565) = 1;
                      KiInsertDeferredReadyList(v404, v403);
                    }
                    *((_QWORD *)v309 + 4) = v311;
                    v309[48] |= 1u;
                    v309[48] = (v309[48] & 0xFD ^ (2 * ((*((_DWORD *)&v311->0 + 1) & 2) != 0))) & 0xC3 | 4;
                    *((_QWORD *)v309 + 5) = v311;
                    v309[49] &= ~1u;
                    if ( !(unsigned __int8)KiIsPrcbThread(v311) )
                      *(_DWORD *)(v312 + 536) = v308->Number;
                  }
                  ++v307;
                }
                while ( v307 < v281->ProcessorCount );
                v10 = v443;
                v306 = v434;
              }
              v313 = v440;
              v281->MaximumThreadIsolationWidth = v306;
              KiSearchForNewThreadsForRescheduleContext(&v281->ProcessorCount, v313);
            }
            v363 = 0;
            v364 = 0;
            if ( (WORD2(xmmword_140FC0C10) & 0x400) != 0 )
              v364 = 2;
            v365 = 0;
            if ( v281->ProcessorCount )
            {
              v392 = v440;
              do
              {
                v363 |= KiCommitRescheduleContextEntry(
                          (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v281->ProcessorEntries + 32 * v365 + 8 * v365),
                          v10,
                          v364,
                          v392);
                ++v365;
              }
              while ( v365 < v281->ProcessorCount );
              v5 = 0;
            }
            if ( v281->IsolationWidth == KiIsolationWidthCore )
            {
              v366 = v281->ProcessorEntries[0].Prcb->CoreControlBlock;
              if ( ++v366->ScanStartIndex >= v366->ProcessorCount )
                v366->ScanStartIndex = 0;
            }
            v367 = 0LL;
            LODWORD(v368) = 0;
            v459 = v435 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( (v435 & 1) != 0 )
            {
              if ( (v435 & 1) == 1 )
              {
                v369 = *(unsigned __int8 **)((v435 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
                LODWORD(v368) = *v369;
                v367 = (unsigned __int64 *)(v369 + 8);
              }
              if ( !(_DWORD)v368 )
              {
LABEL_681:
                *(_QWORD *)&v435 = 0LL;
                *(_QWORD *)(a2 + 64) = 0LL;
                if ( !v363 || !v281->ProcessorCount )
                  goto LABEL_330;
                while ( 1 )
                {
                  v370 = v281->ProcessorEntries[v5].___u6[0];
                  v371 = v281->ProcessorEntries[v5].Prcb;
                  v372 = &v281->ProcessorCount + 40 * v5;
                  if ( (v370 & 0x10) != 0 )
                  {
                    v374 = v10->DeferredDispatchInterrupts.TargetType;
                    if ( !v374 )
                      goto LABEL_687;
                    if ( v374 == 1 )
                    {
                      v375 = v10->DeferredDispatchInterrupts.SingleTargetIndex;
                      if ( v375 == v371->Number )
                        goto LABEL_688;
                      v10->DeferredDispatchInterrupts.TargetType = 2;
                      v376 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v375);
                      v367 = (unsigned __int64 *)(v376 & 0x3F);
                      v377 = v376 >> 6;
                      if ( v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Count <= (unsigned int)v377 )
                      {
                        if ( v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v377 )
                        {
                          v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v377 + 1;
                          goto LABEL_699;
                        }
                      }
                      else
                      {
LABEL_699:
                        v378 = (char *)v10 + 8 * v377;
                        v379 = *((_QWORD *)v378 + 1725);
                        _bittestandset64(&v379, (unsigned int)v367);
                        *((_QWORD *)v378 + 1725) = v379;
                      }
                    }
                    v380 = v371->Group;
                    v381 = v371->GroupSetMember;
                    if ( v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v380 )
                      goto LABEL_708;
                    goto LABEL_701;
                  }
                  if ( (v370 & 8) == 0 || !v371->IdleHalt )
                    goto LABEL_688;
                  v373 = v10->DeferredDispatchInterrupts.TargetType;
                  if ( !v373 )
                  {
LABEL_687:
                    v10->DeferredDispatchInterrupts.TargetType = 1;
                    v10->DeferredDispatchInterrupts.SingleTargetIndex = v371->Number;
                    goto LABEL_688;
                  }
                  if ( v373 == 1 )
                  {
                    v382 = v10->DeferredDispatchInterrupts.SingleTargetIndex;
                    if ( v382 == v371->Number )
                      goto LABEL_688;
                    v10->DeferredDispatchInterrupts.TargetType = 2;
                    v383 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v382);
                    v367 = (unsigned __int64 *)(v383 & 0x3F);
                    v384 = v383 >> 6;
                    if ( v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned int)v384 )
                      goto LABEL_706;
                    if ( v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v384 )
                      break;
                  }
LABEL_707:
                  v380 = v371->Group;
                  v381 = v371->GroupSetMember;
                  if ( v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v380 )
                    goto LABEL_708;
LABEL_701:
                  if ( v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned __int16)v380 )
                  {
                    v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v380 + 1;
LABEL_708:
                    v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v380] |= v381;
                  }
LABEL_688:
                  if ( (v372[51] & 2) != 0 )
                  {
                    v390 = *((_QWORD *)v372 + 5);
                    if ( v390 == v20 )
                      v391 = v449;
                    else
                      v391 = 0LL;
                    EtwTraceScheduleThread(v390, v371, v391);
                  }
                  if ( (v372[51] & 4) != 0 )
                  {
                    if ( v371->SchedulerAssist )
                    {
                      if ( v10->SchedulerAssist )
                      {
                        if ( v10 != v371 )
                        {
                          v387 = *(_DWORD *)v371->SchedulerAssist;
                          if ( (v387 & 0x100000) != 0
                            || (v367 = (unsigned __int64 *)(unsigned __int8)v387,
                                (*(_DWORD *)v371->SchedulerAssist & 0x40000) != 0)
                            && (unsigned __int8)v387 < (char)v372[52] )
                          {
                            v388 = v10->SchedulerAssist;
                            v388[3] = 2;
                            v389 = v371->Number;
                            if ( !HvlpVirtualProcessorsIdentityMapped )
                            {
                              v20 = a2;
                              LODWORD(v389) = (unsigned __int8)byte_140FC71C1[2 * (unsigned int)v389] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v389] << 6);
                            }
                            v388[2] = v389;
                            if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
                              EtwTraceXSchedulerPriorityKickSend(v371->Number, 2LL, v367);
                            __writemsr(0x400000C2u, (unsigned int)v389);
                          }
                        }
                      }
                    }
                  }
                  if ( (v372[51] & 1) != 0 )
                    _InterlockedDecrement16((volatile signed __int16 *)(*((_QWORD *)v372 + 5) + 868LL));
                  if ( ++v5 >= v281->ProcessorCount )
                    goto LABEL_330;
                }
                v10->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v384 + 1;
LABEL_706:
                v385 = (char *)v10 + 8 * v384;
                v386 = *((_QWORD *)v385 + 1725);
                _bittestandset64(&v386, (unsigned int)v367);
                *((_QWORD *)v385 + 1725) = v386;
                goto LABEL_707;
              }
            }
            else
            {
              v367 = &v459;
              LODWORD(v368) = 1;
            }
            do
            {
              v368 = (unsigned int)(v368 - 1);
              _InterlockedAnd64((volatile signed __int64 *)(v367[v368] + 48), 0LL);
            }
            while ( (_DWORD)v368 );
            goto LABEL_681;
          }
        }
LABEL_581:
        v86 = v432;
        v20 = a2;
        goto LABEL_293;
      }
    }
    else
    {
      v282 = (struct _KPRCB **)&v450;
      v283 = 1;
      v433 = (unsigned __int64)&v450;
      v286 = 0;
    }
    v297 = (struct _KPRCB **)&v281->ProcessorEntries[0].32;
    v436 = (struct _KPRCB **)&v281->ProcessorEntries[0].32;
    v438 = (struct _KPRCB *)v283;
    while ( 1 )
    {
      *((_OWORD *)v297 - 2) = 0LL;
      *((_OWORD *)v297 - 1) = 0LL;
      *v297 = 0LL;
      *(v297 - 1) = (struct _KPRCB *)-1LL;
      *((_BYTE *)v297 + 4) = 63;
      v298 = *v282;
      *(v297 - 4) = *v282;
      *(v297 - 3) = 0LL;
      v441 = v298;
      if ( v298->SharedReadyQueue )
      {
        if ( (v298->IdleState & 0x10) == 0
          || ((unsigned __int8)KeIsForceParkingEnabled(v298->SchedulerSubNode) && (v298->IdleState & 0x20) != 0
            ? (v320 = ~*(_QWORD *)(v319 + 104))
            : (v320 = *(_QWORD *)(v319 + 80)),
              (v320 & *(_QWORD *)(v318 + 712)) == 0) )
        {
          *(v297 - 3) = (struct _KPRCB *)v298->SharedReadyQueue;
        }
      }
      CurrentThread = v298->NextThread;
      *(v297 - 2) = (struct _KPRCB *)CurrentThread;
      if ( !CurrentThread )
      {
        CurrentThread = v298->CurrentThread;
        *(v297 - 2) = (struct _KPRCB *)CurrentThread;
      }
      if ( v298->NextThread == CurrentThread )
      {
        *(_BYTE *)v297 |= 4u;
      }
      else
      {
        v300 = *(_BYTE *)v297;
        if ( v298 == KeGetCurrentPrcb() )
          v301 = v300 | 4;
        else
          v301 = v300 & 0xFB;
        *(_BYTE *)v297 = v301;
      }
      v302 = 0;
      v427 = 0;
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x400000) == 0 )
        goto LABEL_536;
      if ( CurrentThread == (_KTHREAD *)a2 )
        goto LABEL_835;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        break;
LABEL_536:
      v303 = *(_BYTE *)v297 & 0xFE | ((v298->IdleState & 1) == 0);
      *(_BYTE *)v297 = v303;
      v304 = v303 ^ (v303 ^ (v298->PriorityState->AllFields >> 6)) & 2;
      *(_BYTE *)v297 = v304;
      if ( ((v304 >> 1) & 1) > v286 )
        v286 = (v304 >> 1) & 1;
      v297 += 5;
      ++v282;
      v436 = v297;
      v8 = v438 == (struct _KPRCB *)1;
      v438 = (struct _KPRCB *)((char *)v438 - 1);
      v433 = (unsigned __int64)v282;
      if ( v8 )
      {
        v10 = v443;
        goto LABEL_507;
      }
    }
    v302 = 1;
    v427 = 1;
LABEL_835:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x400000) != 0 )
    {
      if ( (unsigned __int8)KiIsThreadStateControlledByProcessor(CurrentThread, v298) )
      {
        KiUpdateVPBackingThreadPriority(CurrentThread);
        v298 = v441;
        v302 = v427;
        v282 = (struct _KPRCB **)v433;
      }
      v297 = v436;
    }
    if ( v302 )
      CurrentThread->ThreadLock = 0LL;
    goto LABEL_536;
  }
LABEL_293:
  if ( !v428 )
    *(_DWORD *)(v20 + 436) = MEMORY[0xFFFFF78000000320];
  if ( !v171 )
  {
    v172 = *(_QWORD *)(v20 + 104);
    if ( v172 )
      v171 = (struct _KSCB *)(v172 + *(unsigned int *)(v86 + 216));
    else
      v171 = 0LL;
  }
  v173 = *(_BYTE **)(v86 + 36600);
  if ( v173 )
    v173[16] = 0;
  v174 = 0;
  *(_BYTE *)(v20 + 388) = 1;
  if ( !v171 || (*(_DWORD *)(v20 + 120) & 0xC00) != 0 )
    goto LABEL_301;
  if ( KiIsThreadConstrainedBySchedulingGroup(v20) && !KiShouldPreemptionBeDeferred(v223) )
  {
    if ( KiCheckForMaxOverQuotaScb((__int64)v171) )
    {
      v222 = -1;
    }
    else
    {
      do
      {
        v222 += *(_DWORD *)(v224 + 140);
        if ( v226 )
        {
          v225 += **(_DWORD **)(v224 + 144);
        }
        else if ( v222 )
        {
          break;
        }
        v224 = *(_QWORD *)(v224 + 440);
      }
      while ( v224 );
      if ( v225 )
      {
        v174 = 1;
        goto LABEL_845;
      }
    }
  }
  v174 = 0;
LABEL_845:
  if ( v222 )
  {
    KiAddThreadToScbQueue((struct _KPRCB *)v86, v171);
    v175 = 2;
  }
  else
  {
LABEL_301:
    KiAddThreadToPrcbQueue(v86, v20, *(char *)(v20 + 195), v434, v174, (__int64)&v447);
    v175 = v447;
  }
  v176 = 0;
  if ( (WORD2(xmmword_140FC0C10) & 0x800) != 0 )
  {
    v176 = 1;
    _InterlockedIncrement16((volatile signed __int16 *)(v20 + 868));
  }
  v177 = 0LL;
  LODWORD(v178) = 0;
  v451[0] = v435 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v435 & 1) == 0 )
  {
    v177 = v451;
    LODWORD(v178) = 1;
    goto LABEL_308;
  }
  if ( (v435 & 1) == 1 )
  {
    v179 = *(unsigned __int8 **)((v435 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
    LODWORD(v178) = *v179;
    v177 = v179 + 8;
  }
  while ( (_DWORD)v178 )
  {
LABEL_308:
    v178 = (unsigned int)(v178 - 1);
    _InterlockedAnd64((volatile signed __int64 *)(v177[v178] + 48LL), 0LL);
  }
  *(_QWORD *)&v435 = 0LL;
  *(_QWORD *)(v20 + 64) = 0LL;
  if ( v176 )
  {
    EtwTraceReadyQueueInsertion(v20, *(_DWORD *)(v86 + 36), v175, v449);
    _InterlockedDecrement16((volatile signed __int16 *)(v20 + 868));
  }
LABEL_330:
  if ( (_BYTE)v439 )
  {
    v246 = *(_DWORD *)(v20 + 116) >> 3;
    LOBYTE(v246) = (*(_DWORD *)(v20 + 116) & 8) != 0;
    EtwTraceThreadAffinity(v20, *(unsigned __int16 *)(v20 + 584), v246, 0, *(_QWORD *)(v20 + 576), 1334);
    if ( !v430 )
    {
LABEL_449:
      _InterlockedDecrement16((volatile signed __int16 *)(v20 + 868));
      return;
    }
LABEL_447:
    if ( (xmmword_140FC0C10 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(v20, 1350LL, v448, v442);
    goto LABEL_449;
  }
  if ( v430 )
    goto LABEL_447;
}
