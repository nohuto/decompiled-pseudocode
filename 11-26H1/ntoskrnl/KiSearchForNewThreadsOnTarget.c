/*
 * XREFs of KiSearchForNewThreadsOnTarget @ 0x140241E30
 * Callers:
 *     KiSearchForNewThreadsWithinL0SearchContext @ 0x1402411E0 (KiSearchForNewThreadsWithinL0SearchContext.c)
 *     KiSearchForNewThreadsWithinSearchContext @ 0x140241560 (KiSearchForNewThreadsWithinSearchContext.c)
 * Callees:
 *     KiFindRankBiasedIdleSmtSet @ 0x14022A5C4 (KiFindRankBiasedIdleSmtSet.c)
 *     KiAttemptToStealStandbyThread @ 0x14022D190 (KiAttemptToStealStandbyThread.c)
 *     KiScheduleThreadToRescheduleContext @ 0x14022FC30 (KiScheduleThreadToRescheduleContext.c)
 *     KiEnterDeferredReadyState @ 0x140230060 (KiEnterDeferredReadyState.c)
 *     KiRemoveCurrentThreadSharedReadyQueueEnumerator @ 0x140231088 (KiRemoveCurrentThreadSharedReadyQueueEnumerator.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402313D0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiShouldPreemptionBeDeferred @ 0x140231EA0 (KiShouldPreemptionBeDeferred.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140231EC0 (KiCheckForMaxOverQuotaScb.c)
 *     KiDetermineNextScbForScbReadyQueueEnumerator @ 0x140231EE8 (KiDetermineNextScbForScbReadyQueueEnumerator.c)
 *     KiGetProcessorClassForPolicy @ 0x140231FC4 (KiGetProcessorClassForPolicy.c)
 *     KiRemoveThreadFromReadyQueue @ 0x140232008 (KiRemoveThreadFromReadyQueue.c)
 *     KiRemoveCurrentThreadScbReadyQueueEnumerator @ 0x140232078 (KiRemoveCurrentThreadScbReadyQueueEnumerator.c)
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiIsIsolationUnitIdleByHandle @ 0x1402367F0 (KiIsIsolationUnitIdleByHandle.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     EtwTraceScheduleThread @ 0x140248130 (EtwTraceScheduleThread.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiWakeAddressAll @ 0x140305268 (KiWakeAddressAll.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiComputeThreadQos @ 0x140306EE0 (KiComputeThreadQos.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiIsPrcbThread @ 0x1403078D0 (KiIsPrcbThread.c)
 *     KiInsertDeferredReadyList @ 0x140307900 (KiInsertDeferredReadyList.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     KiSendSoftwareInterruptAffinity @ 0x1403D3A10 (KiSendSoftwareInterruptAffinity.c)
 *     KiCheckThreadAffinity @ 0x14045C320 (KiCheckThreadAffinity.c)
 *     KiTryAcquirePrcbLocksForIsolationUnit @ 0x14046D5B8 (KiTryAcquirePrcbLocksForIsolationUnit.c)
 *     KiRemoveCurrentThreadLocalReadyQueueEnumerator @ 0x1404B6E4C (KiRemoveCurrentThreadLocalReadyQueueEnumerator.c)
 *     KiIsThreadRankBiased @ 0x14050F950 (KiIsThreadRankBiased.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140529DB4 (EtwTraceXSchedulerPriorityKickSend.c)
 *     Feature_CrossProcessorClassThreadStealing__private_IsEnabledDeviceUsageNoInline @ 0x1405FDBFC (Feature_CrossProcessorClassThreadStealing__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall KiSearchForNewThreadsOnTarget(
        struct _KPRCB *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _KPRCB *a5,
        __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // r11
  __int64 v8; // r12
  _KTHREAD *NextThread; // rax
  _KSOFTWARE_INTERRUPT_BATCH *p_DeferredDispatchInterrupts; // r14
  unsigned int v12; // r15d
  unsigned __int8 TargetType; // al
  unsigned int SingleTargetIndex; // ecx
  unsigned __int8 Level; // r8
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v17; // edx
  _KSOFTWARE_INTERRUPT_BATCH *v18; // rbx
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  char v20; // di
  __int64 v21; // rdx
  unsigned __int8 v22; // al
  __int64 v23; // rdx
  struct _KPRCB *v24; // rax
  unsigned int v25; // r14d
  _KSOFTWARE_INTERRUPT_BATCH *v26; // rdi
  unsigned int v27; // r15d
  unsigned __int8 v28; // al
  unsigned int v29; // edx
  unsigned __int8 v30; // r8
  struct _KPRCB *v31; // rax
  _KSOFTWARE_INTERRUPT_BATCH *v32; // rbx
  struct _SINGLE_LIST_ENTRY *v33; // rbx
  __int64 v34; // rdx
  unsigned __int8 v35; // al
  unsigned __int8 v36; // r8
  struct _KPRCB *v37; // rax
  __int64 v38; // rbx
  char GroupIndex; // cl
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  _KPRCB *v42; // rdi
  __int64 v43; // rax
  int v44; // edx
  unsigned __int8 v45; // r8
  unsigned __int8 ProcessorClassForPolicy; // al
  unsigned __int8 v47; // r10
  unsigned int v48; // ebx
  unsigned int v49; // eax
  unsigned int v50; // r13d
  __int64 v51; // rbx
  __int64 v52; // r14
  __int64 v53; // r14
  __int64 v54; // rbx
  _WORD *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // r12
  int v58; // eax
  unsigned int v59; // edx
  _QWORD *v60; // r9
  __int64 v61; // rcx
  __int64 v62; // r8
  unsigned __int64 v63; // r11
  char v64; // al
  __int64 v65; // rcx
  unsigned int i; // ecx
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // r10
  unsigned int v72; // r9d
  unsigned int v73; // r13d
  __int64 v74; // r12
  unsigned __int64 *v75; // r8
  unsigned __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rbx
  __int64 v79; // rbx
  __int64 v80; // rax
  __int64 v81; // r14
  _WORD *v82; // rcx
  __int64 v83; // rax
  __int64 v84; // r15
  int v85; // eax
  unsigned int v86; // edx
  __int64 v87; // rcx
  __int64 v88; // r8
  unsigned __int64 v89; // r11
  __int64 v90; // r14
  char v91; // al
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // r9
  unsigned int v95; // ecx
  unsigned int v96; // eax
  unsigned __int64 v97; // r12
  unsigned __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // r10
  unsigned int v101; // eax
  unsigned __int64 v102; // rbx
  _BYTE *v103; // rax
  _QWORD *v104; // rcx
  __int64 v105; // rdx
  unsigned __int64 v106; // rdx
  __int64 *v107; // r8
  unsigned int v108; // r9d
  int v109; // edx
  __int64 v110; // rax
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r13
  unsigned int v112; // r11d
  __int64 v113; // r10
  _KI_RESCHEDULE_CONTEXT_ENTRY *v114; // r9
  unsigned int j; // edx
  __int64 v116; // rax
  _DWORD *v117; // r8
  unsigned __int64 v118; // r15
  _QWORD *v119; // r12
  unsigned __int64 v120; // rcx
  __int64 v121; // rcx
  _KPRCB *v122; // r13
  unsigned int v123; // eax
  unsigned __int64 v124; // rbx
  _BYTE *v125; // rax
  unsigned int v126; // r8d
  _QWORD *v127; // rcx
  __int64 v128; // rdx
  _QWORD *v129; // r9
  __int64 v130; // r10
  unsigned __int64 v131; // rdx
  __int64 *v132; // r8
  __int64 v133; // r9
  int v134; // edx
  _KI_RESCHEDULE_CONTEXT *v135; // r12
  unsigned int v136; // r11d
  __int64 v137; // r9
  unsigned int k; // edx
  __int64 v139; // rdx
  unsigned int v140; // eax
  char *v141; // r9
  __int64 v142; // r12
  unsigned __int64 v143; // rcx
  __int64 v144; // r10
  __int64 v145; // r10
  int v146; // r11d
  __int64 v147; // rdx
  unsigned int v148; // eax
  _KPRCB *v149; // r15
  char *v150; // r9
  unsigned __int64 v151; // rcx
  _KTHREAD *IdleThread; // r10
  __int64 v153; // r10
  int v154; // r11d
  unsigned int v155; // ecx
  char v156; // al
  unsigned int v157; // ecx
  unsigned int v158; // eax
  unsigned __int64 v159; // rcx
  __int64 v160; // rcx
  __int64 v161; // rcx
  unsigned __int64 v162; // rcx
  __int64 v163; // rcx
  __int64 v164; // rcx
  __int64 ScbForScbReadyQueueEnumerator; // rax
  __int64 v166; // r11
  unsigned int v167; // eax
  unsigned __int8 *v168; // rax
  __int64 v169; // r10
  __int64 v170; // rax
  unsigned __int8 *v171; // rax
  __int64 v172; // rax
  unsigned __int64 v173; // rcx
  __int64 v174; // rcx
  __int64 v175; // rcx
  unsigned __int64 v176; // rcx
  __int64 v177; // rcx
  __int64 v178; // rcx
  int v179; // r9d
  unsigned __int64 v180; // rax
  char v181; // r10
  int v182; // r9d
  unsigned __int64 v183; // rax
  char v184; // r10
  unsigned __int64 v185; // rcx
  __int64 v186; // r10
  char v187; // al
  char v188; // r13
  char v189; // r15
  unsigned int v190; // r14d
  _KCORE_CONTROL_BLOCK *v191; // rcx
  _BYTE *v192; // rax
  __int64 v193; // rdx
  unsigned __int64 *v194; // r8
  unsigned int v195; // r15d
  char v196; // al
  _KPRCB *v197; // r14
  char *v198; // rbx
  unsigned __int8 v199; // al
  unsigned __int8 v200; // al
  unsigned int v201; // eax
  unsigned int v202; // r8d
  __int64 v203; // rcx
  char *v204; // rdx
  __int64 v205; // rcx
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  unsigned int v208; // eax
  unsigned int v209; // r8d
  __int64 v210; // rcx
  char *v211; // rdx
  __int64 v212; // rcx
  __int64 v213; // r8
  void **v214; // rax
  _DWORD *v215; // rcx
  __int64 Number; // r13
  __int64 v217; // rcx
  unsigned int v218; // r10d
  _KPRCB *v219; // r11
  char *v220; // r9
  unsigned __int64 v221; // rcx
  int v222; // r10d
  __int64 v223; // r11
  _KTHREAD *SmtIsolationThread; // r15
  char v225; // cl
  __int64 v226; // r11
  __int64 v227; // rcx
  __int64 v228; // rcx
  __int64 v229; // rcx
  unsigned __int64 NewThread; // rcx
  _KPRCB *Prcb; // r10
  unsigned __int8 v232; // al
  char v233; // r9
  char v234; // r12
  unsigned int v235; // r14d
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  _BYTE *v237; // rax
  __int64 v238; // rdx
  unsigned __int64 *v239; // r8
  unsigned int v240; // r12d
  char *v241; // rbx
  char v242; // al
  __int64 v243; // r14
  unsigned __int8 v244; // al
  unsigned __int8 v245; // al
  unsigned int v246; // eax
  unsigned int v247; // r8d
  __int64 v248; // rcx
  char *v249; // rdx
  __int64 v250; // rcx
  __int64 v251; // rcx
  __int64 v252; // rdx
  unsigned int v253; // eax
  unsigned int v254; // r8d
  __int64 v255; // rcx
  char *v256; // rdx
  __int64 v257; // rcx
  __int64 v258; // r8
  void **p_SchedulerAssist; // rax
  _DWORD *v260; // rdx
  __int64 v261; // rcx
  char v262; // r15
  __int64 v263; // rcx
  unsigned int v264; // r10d
  __int64 v265; // r15
  char *v266; // r9
  __int64 v267; // r11
  unsigned __int64 v268; // rcx
  int v269; // r10d
  __int64 v270; // r11
  __int64 v271; // r12
  char v272; // cl
  __int64 v273; // r11
  __int64 v274; // rcx
  __int64 v275; // rcx
  __int64 v276; // rcx
  __int64 v277; // rcx
  __int64 v278; // rcx
  unsigned int v279; // r14d
  char v280; // al
  _KPRCB *v281; // rdi
  char *v282; // rbx
  unsigned __int8 v283; // al
  unsigned int v284; // r13d
  __int64 v285; // rdi
  unsigned __int8 v286; // al
  unsigned int v287; // eax
  unsigned int v288; // r8d
  __int64 v289; // rcx
  char *v290; // rdx
  __int64 v291; // rcx
  __int64 v292; // rcx
  unsigned __int64 v293; // rdx
  unsigned int v294; // eax
  unsigned int v295; // r8d
  __int64 v296; // rcx
  char *v297; // rdx
  __int64 v298; // rcx
  void **v299; // r9
  __int64 v300; // r8
  _DWORD *v301; // rcx
  __int64 v302; // r13
  bool v303; // zf
  unsigned int v304; // eax
  __int64 v305; // rbx
  __int64 v306; // rbx
  __int64 v307; // rax
  __int64 v308; // r14
  _WORD *v309; // rcx
  __int64 v310; // rax
  __int64 v311; // r15
  int v312; // eax
  unsigned int v313; // edx
  __int64 v314; // rcx
  __int64 v315; // r10
  unsigned __int64 v316; // rdi
  __int64 v317; // r8
  __int64 v318; // rdi
  __int64 v319; // rdx
  unsigned __int64 v320; // rcx
  unsigned __int64 *v321; // rax
  __int64 v322; // rcx
  char v323; // al
  __int64 v324; // rcx
  __int64 v325; // rax
  __int64 v326; // rdx
  unsigned __int64 v327; // rdx
  unsigned int v328; // ecx
  unsigned int v329; // eax
  unsigned __int64 v330; // r14
  unsigned __int64 v331; // rcx
  __int64 v332; // rcx
  __int64 v333; // r13
  __int64 v334; // rax
  _KI_RESCHEDULE_CONTEXT *v335; // r15
  char v336; // r14
  char v337; // di
  unsigned int m; // ebx
  _KCORE_CONTROL_BLOCK *v339; // rcx
  unsigned __int64 *v340; // r8
  __int64 v341; // rdx
  unsigned __int8 *v342; // rax
  unsigned __int64 v343; // rcx
  __int64 v344; // rcx
  __int64 v345; // rcx
  __int64 v346; // rdx
  __int64 v347; // rax
  int v348; // r8d
  unsigned __int64 v349; // rax
  char v350; // r9
  unsigned __int64 v351; // rcx
  __int64 v352; // rcx
  __int64 v353; // rcx
  __int64 v354; // rdx
  __int64 v355; // rcx
  __int64 v356; // rdx
  signed __int32 v357[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v358; // [rsp+30h] [rbp-D0h]
  char v359; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v360; // [rsp+40h] [rbp-C0h] BYREF
  struct _SINGLE_LIST_ENTRY v361; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v362; // [rsp+50h] [rbp-B0h] BYREF
  _KI_RESCHEDULE_CONTEXT *v363; // [rsp+58h] [rbp-A8h] BYREF
  struct _SINGLE_LIST_ENTRY v364; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v365; // [rsp+68h] [rbp-98h] BYREF
  __int128 v366; // [rsp+78h] [rbp-88h]
  __int64 v367; // [rsp+88h] [rbp-78h]
  __int64 v368; // [rsp+90h] [rbp-70h] BYREF
  __int128 v369; // [rsp+98h] [rbp-68h]
  __int64 v370; // [rsp+A8h] [rbp-58h]
  __int64 v371; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v372; // [rsp+B8h] [rbp-48h]
  __int64 v373; // [rsp+BCh] [rbp-44h]
  __int64 v374; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v375; // [rsp+D0h] [rbp-30h]
  __int64 v376; // [rsp+E0h] [rbp-20h]
  __int128 v377; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v378; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v379[2]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v380; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v381[2]; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v382; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int64 v383; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 v384; // [rsp+138h] [rbp+38h] BYREF
  __int64 v386; // [rsp+190h] [rbp+90h]

  v386 = a3;
  v6 = (__int64)a5;
  v7 = a2;
  v8 = a6;
  if ( a5 )
  {
    if ( a1 == a5 )
      return;
    NextThread = a5->NextThread;
    if ( NextThread
      && NextThread != a5->IdleThread
      && NextThread != a5->DpcDelegateThread
      && NextThread != a5->SmtIsolationThread
      && ((*(_BYTE *)&a5->PriorityState->0 & 0x7Fu) >= 0x10 || (KiVelocityFlags & 0x1000000) != 0 && a5->IdleHalt) )
    {
      v38 = a4 & *(_QWORD *)(a2 + 8);
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !v38 )
              goto LABEL_4;
            GroupIndex = a1->GroupIndex;
            LODWORD(v360) = 0;
            _BitScanForward64(&v40, __ROR8__(v38, GroupIndex));
            LODWORD(v40) = (GroupIndex + (_BYTE)v40) & 0x3F;
            v41 = (unsigned int)v40 + (*(unsigned __int16 *)(v7 + 136) << 6);
            v38 &= ~(1LL << v40);
            v42 = (_KPRCB *)KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                                             + v41)];
            if ( (_KPRCB *)v6 != v42 )
            {
              v43 = *(_QWORD *)(v6 + 16);
              if ( v43 )
              {
                if ( v43 != *(_QWORD *)(v6 + 24)
                  && v43 != *(_QWORD *)(v6 + 14392)
                  && v43 != *(_QWORD *)(v6 + 36544)
                  && ((**(_BYTE **)(v6 + 56) & 0x7Fu) >= 0x10 || (KiVelocityFlags & 0x1000000) != 0
                                                              && *(_BYTE *)(v6 + 7)) )
                {
                  break;
                }
              }
            }
          }
          if ( !(unsigned int)Feature_CrossProcessorClassThreadStealing__private_IsEnabledDeviceUsageNoInline(v41, 0LL) )
            break;
          if ( KeHeteroSystem )
          {
            KiGetProcessorClassForPolicy(
              v6,
              KiDynamicHeteroCpuPolicy[2 * (*(_BYTE *)(*(_QWORD *)(v6 + 56) + 64LL) & 7)
                                     + (((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(v6 + 56) + 64LL) >> 6) & 1)],
              (*(_BYTE *)(*(_QWORD *)(v6 + 56) + 64LL) >> 3) & 7);
            ProcessorClassForPolicy = KiGetProcessorClassForPolicy((__int64)v42, v44, v45);
            v7 = a2;
            if ( v47 > ProcessorClassForPolicy )
              continue;
          }
          goto LABEL_231;
        }
        v7 = a2;
        if ( *(_BYTE *)(v6 + 35353) == v42->PowerState.PerformanceSchedulingClass )
        {
LABEL_231:
          v156 = KiAttemptToStealStandbyThread(a1, (_KPRCB *)v6, v42);
          v7 = a2;
          if ( v156 )
            break;
        }
      }
    }
LABEL_4:
    v361.Next = 0LL;
    v370 = 0LL;
    v368 = 0LL;
    v367 = 0LL;
    v369 = 0LL;
    BYTE4(v369) = 32;
    v366 = 0LL;
    BYTE4(v366) = 32;
    v365 = 0LL;
    if ( !*(_DWORD *)(v6 + 33752) && !*(_QWORD *)(v6 + 33840) )
    {
LABEL_6:
      p_DeferredDispatchInterrupts = &a1->DeferredDispatchInterrupts;
      v12 = 31;
      TargetType = a1->DeferredDispatchInterrupts.TargetType;
      if ( TargetType )
      {
        if ( TargetType == 1 )
        {
          SingleTargetIndex = a1->DeferredDispatchInterrupts.SingleTargetIndex;
          Level = p_DeferredDispatchInterrupts->Level;
          CurrentPrcb = KeGetCurrentPrcb();
          v373 = 0LL;
          v17 = 31;
          v372 = SingleTargetIndex;
          v371 = 6LL;
          ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
          if ( Level != 1 )
            v17 = 47;
          HalpInterruptSendIpi((unsigned int *)&v371, v17);
          v18 = &a1->DeferredDispatchInterrupts;
        }
        else
        {
          KiSendSoftwareInterruptAffinity(
            &a1->DeferredDispatchInterrupts.MultipleTargetAffinity,
            p_DeferredDispatchInterrupts->Level);
          v18 = &a1->DeferredDispatchInterrupts;
        }
        if ( a1->DeferredDispatchInterrupts.TargetType == 2 )
        {
          *(_QWORD *)&a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = 2097153LL;
          memset_0(
            &a1->DeferredDispatchInterrupts.MultipleTargetAffinity.8,
            0,
            sizeof(a1->DeferredDispatchInterrupts.MultipleTargetAffinity.8));
        }
        a1->DeferredDispatchInterrupts.TargetType = 0;
        a1->DeferredDispatchInterrupts.SingleTargetIndex = 0xFFFF;
        p_DeferredDispatchInterrupts = v18;
      }
      Next = v361.Next;
      if ( v361.Next )
      {
        v20 = 0;
        v361.Next = v361.Next->Next;
        do
        {
          KiDeferredReadySingleThread(a1, (ULONG_PTR)&Next[-27], &v361, 0LL);
          Next = v361.Next;
          ++v20;
          if ( v361.Next )
            v361.Next = v361.Next->Next;
          if ( (v20 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch(p_DeferredDispatchInterrupts, v21);
        }
        while ( Next );
        v22 = a1->DeferredDispatchInterrupts.TargetType;
        if ( v22 )
        {
          v23 = a1->DeferredDispatchInterrupts.Level;
          if ( v22 == 1 )
          {
            v24 = KeGetCurrentPrcb();
            v372 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
            v371 = 6LL;
            v373 = 0LL;
            ++v24->SynchCounters.IpiSendSoftwareInterruptCount;
            if ( (_BYTE)v23 != 1 )
              v12 = 47;
            HalpInterruptSendIpi((unsigned int *)&v371, v12);
          }
          else
          {
            KiSendSoftwareInterruptAffinity(&a1->DeferredDispatchInterrupts.MultipleTargetAffinity, v23);
          }
          if ( a1->DeferredDispatchInterrupts.TargetType != 2 )
            goto LABEL_27;
          goto LABEL_50;
        }
      }
      return;
    }
    v48 = 0;
    v378 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
LABEL_72:
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 48), 0LL) )
    {
      while ( 1 )
      {
        if ( (++v48 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
        {
          if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
          {
LABEL_110:
            HvlNotifyLongSpinWait(v48);
            goto LABEL_75;
          }
          for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
          {
            v67 = KiProcessorBlock[i];
            if ( (*(_BYTE *)(v67 + 35) & 1) != 0 )
            {
              v68 = *(_QWORD *)(v67 + 36600);
              if ( !v68 || !*(_BYTE *)(v68 + 65) || !*(_BYTE *)(v68 + 64) )
                goto LABEL_110;
            }
          }
        }
        _mm_pause();
LABEL_75:
        if ( !*(_QWORD *)(v6 + 48) )
          goto LABEL_72;
      }
    }
    v368 = v6;
    v49 = *(_DWORD *)(v6 + 33752);
    LODWORD(v369) = v49;
    v370 = v6 + 33856;
    if ( v49 )
    {
      _BitScanReverse(&v49, v49);
      LODWORD(v360) = 0;
      BYTE4(v369) = v49;
      *((_QWORD *)&v369 + 1) = v6 + 33856 + 16LL * v49;
    }
    else
    {
      *((_QWORD *)&v369 + 1) = 0LL;
    }
    v50 = 0;
    LODWORD(v363) = 0;
    v51 = 0LL;
    v358 = 0LL;
LABEL_80:
    while ( v50 < 0x40 && *((_QWORD *)&v369 + 1) )
    {
      while ( 1 )
      {
        v52 = **((_QWORD **)&v369 + 1);
        *((_QWORD *)&v369 + 1) = v52;
        if ( v52 != v370 + 16LL * BYTE4(v369) )
          break;
        v95 = v369 & ~(1 << SBYTE4(v369));
        LODWORD(v369) = v95;
        if ( !v95 )
        {
          BYTE4(v369) = 0;
          *((_QWORD *)&v369 + 1) = 0LL;
          goto LABEL_112;
        }
        _BitScanReverse(&v96, v95);
        LODWORD(v360) = 0;
        BYTE4(v369) = v96;
        *((_QWORD *)&v369 + 1) = v370 + 16LL * (unsigned __int8)v96;
      }
      v53 = v52 - 216;
      if ( (v386 & *(_QWORD *)(a2 + 8)) == 0 )
        break;
      v54 = v386 & *(_QWORD *)(a2 + 8) & ~v51;
      if ( !v54 )
        break;
      v55 = *(_WORD **)(v53 + 576);
      v56 = *(unsigned __int16 *)(a2 + 136);
      if ( (unsigned __int16)v56 >= *v55 )
        v57 = 0LL;
      else
        v57 = *(_QWORD *)&v55[4 * v56 + 4];
      v58 = KiComputeThreadQos(v53);
      v59 = *(_DWORD *)(v53 + 80);
      v60 = (_QWORD *)a2;
      if ( v59 <= *(_DWORD *)(v53 + 84) )
        v59 = *(_DWORD *)(v53 + 84);
      v61 = *(_QWORD *)(*(_QWORD *)(a2 + 192)
                      + 24LL
                      * (*(unsigned __int8 *)(v53 + 517)
                       + *(unsigned __int8 *)(a2 + 185)
                       * ((unsigned int)(v59 >= KiDynamicHeteroCpuPolicyExpectedCycles) + 2 * v58))
                      + 16);
      if ( (v61 & v57) != 0 )
        v57 &= v61;
      v62 = *(_QWORD *)(v53 + 104);
      v63 = v54 & v57 & *(_QWORD *)(a2 + 8LL * ((*(_DWORD *)(v53 + 120) >> 1) & 1) + 16);
      if ( v62
        && *(char *)(v53 + 195) < 16
        && (*(_DWORD *)(v53 + 120) & 0x200) == 0
        && !*(_DWORD *)(v53 + 484)
        && *(_BYTE *)(v53 + 390) != 1 )
      {
        v77 = 0LL;
        if ( v63 )
        {
          v179 = *(unsigned __int16 *)(a2 + 136) << 6;
          do
          {
            _BitScanForward64(&v180, v63);
            LODWORD(v360) = 0;
            if ( !KiCheckForMaxOverQuotaScb(
                    v62
                  + 464LL
                  * *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                    + (unsigned int)(v179 + v180))
                  + 128) )
              v77 |= 1LL << v181;
          }
          while ( v63 );
          v60 = (_QWORD *)a2;
        }
        v63 = v77;
        v362 = (_DWORD *)v77;
        if ( KiPerfIsoEnabled && (unsigned __int8)KiIsThreadRankBiased(v53, a1) )
        {
          KiFindRankBiasedIdleSmtSet((__int64)v60, &v362);
          v63 = (unsigned __int64)v362;
        }
      }
      if ( v63 )
      {
        if ( *(_QWORD *)(v53 + 568) != KiCpuSetSequence && (*(_DWORD *)(v53 + 116) & 8) == 0 )
        {
          _BitScanReverse64(&v173, v63);
          v174 = (*(unsigned __int16 *)(a2 + 136) << 6) + (int)v173;
          LODWORD(v360) = 0;
          v175 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                                  + v174)];
          if ( (*(_DWORD *)(v53 + 120) & 2) != 0 )
            v51 = *(_QWORD *)(v175 + 36512) | v358;
          else
            v51 = *(_QWORD *)(v175 + 200) | v358;
          v358 = v51;
          *((_QWORD *)&v369 + 1) = *(_QWORD *)(*((_QWORD *)&v369 + 1) + 8LL);
          KiRemoveThreadFromReadyQueue(v368, (_QWORD *)(v53 + 216), SBYTE4(v369));
          KiInsertDeferredReadyList(&v361, v53);
          continue;
        }
        v97 = v63;
        while ( 1 )
        {
LABEL_173:
          if ( !v97 )
          {
            v51 = v358;
            if ( v63 )
            {
              _BitScanReverse64(&v159, v63);
              v160 = (*(unsigned __int16 *)(a2 + 136) << 6) + (int)v159;
              LODWORD(v360) = 0;
              v161 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                                      + v160)];
              if ( (*(_DWORD *)(v53 + 120) & 2) != 0 )
                v51 = *(_QWORD *)(v161 + 36512) | v358;
              else
                v51 = *(_QWORD *)(v161 + 200) | v358;
              v358 = v51;
              KiRemoveCurrentThreadLocalReadyQueueEnumerator(&v368, v53, v62, v60);
              KiEnterDeferredReadyState(v53);
              *(struct _SINGLE_LIST_ENTRY *)(v53 + 216) = v361;
              v361.Next = (struct _SINGLE_LIST_ENTRY *)(v53 + 216);
            }
            else
            {
              LODWORD(v363) = ++v50;
            }
            goto LABEL_80;
          }
          _BitScanReverse64(&v98, v97);
          v99 = (*(unsigned __int16 *)(a2 + 136) << 6) + (int)v98;
          LODWORD(v360) = 0;
          v101 = (*(_DWORD *)(v53 + 120) >> 1) & 1;
          v360 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                                  + v99)];
          v100 = v360;
          v102 = v101 | v360 & 0xFFFFFFFFFFFFFFFEuLL;
          v379[0] = v360;
          v362 = (_DWORD *)v102;
          if ( !v101 )
            break;
          v103 = *(_BYTE **)(v360 + 36504);
          v62 = (unsigned __int8)*v103;
          v104 = v103 + 8;
          LODWORD(v105) = 0;
          v60 = v103 + 8;
          if ( *v103 )
            goto LABEL_178;
LABEL_180:
          if ( (_DWORD)v105 != (_DWORD)v62 )
            goto LABEL_249;
          v106 = v102 & 0xFFFFFFFFFFFFFFFEuLL;
          v107 = 0LL;
          v379[1] = v102 & 0xFFFFFFFFFFFFFFFEuLL;
          v108 = 0;
          if ( (v102 & 1) != 0 )
          {
            if ( (v102 & 1) == 1 )
            {
              v168 = *(unsigned __int8 **)(v106 + 36504);
              v108 = *v168;
              v107 = (__int64 *)(v168 + 8);
            }
            v109 = 1;
            if ( v108 )
            {
              v169 = v108;
              do
              {
                v170 = *v107++;
                v109 = ((*(_BYTE *)(v170 + 35) & 1) == 0) & (unsigned __int8)v109;
                --v169;
              }
              while ( v169 );
              v100 = v360;
            }
          }
          else
          {
            v109 = (*(_BYTE *)(v106 + 35) & 1) == 0;
          }
          if ( v109 )
          {
            v110 = *(_QWORD *)(v53 + 104);
            if ( !v110
              || !(v110 + *(unsigned int *)(v100 + 216))
              || !KiIsThreadConstrainedBySchedulingGroup(v53)
              || KiShouldPreemptionBeDeferred(v353)
              || !KiCheckForMaxOverQuotaScb(v354) )
            {
              *((_QWORD *)&v369 + 1) = *(_QWORD *)(*((_QWORD *)&v369 + 1) + 8LL);
              KiRemoveThreadFromReadyQueue(v368, (_QWORD *)(v53 + 216), SBYTE4(v369));
              StaticRescheduleContext = a1->StaticRescheduleContext;
              memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
              KiStartRescheduleContext(StaticRescheduleContext, &v362, 0LL);
              v112 = 0;
              v113 = v360;
              v114 = 0LL;
              for ( j = 0; ; ++j )
              {
                if ( j >= StaticRescheduleContext->ProcessorCount )
                  goto LABEL_210;
                v116 = j;
                if ( StaticRescheduleContext->ProcessorEntries[v116].Prcb == (_KPRCB *)v360 )
                  break;
              }
              v114 = &StaticRescheduleContext->ProcessorEntries[v116];
LABEL_210:
              v139 = (*(_DWORD *)(v53 + 120) >> 1) & 1;
              v140 = (v114->AllCompareThreadStateFlags >> 1) & 1;
              v362 = (_DWORD *)v139;
              if ( (unsigned int)v139 >= v140 )
              {
                if ( (_DWORD)v139 )
                {
                  v264 = 0;
                  if ( StaticRescheduleContext->ProcessorCount )
                  {
                    v265 = v360;
                    do
                    {
                      v266 = (char *)StaticRescheduleContext + 40 * v264;
                      v267 = *((_QWORD *)v266 + 2);
                      v268 = *((_QWORD *)v266 + 5);
                      if ( v267 == v265 )
                      {
                        if ( v268 && v268 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v268) )
                        {
                          if ( (v266[49] & 1) != 0 )
                            *(_DWORD *)(v274 + 116) |= 2u;
                          *(_BYTE *)(v274 + 565) = 1;
                          KiInsertDeferredReadyList(&v361, v274);
                        }
                        *((_QWORD *)v266 + 4) = v53;
                        v266[48] &= ~1u;
                        v266[48] = (v266[48] & 0xFD ^ (2 * ((*(_DWORD *)(v53 + 120) & 2) != 0))) & 0xC3 | 4;
                        *((_QWORD *)v266 + 5) = v53;
                        v266[49] &= ~1u;
                        if ( !(unsigned __int8)KiIsPrcbThread(v53) )
                          *(_DWORD *)(v53 + 536) = *(_DWORD *)(v270 + 36);
                      }
                      else
                      {
                        v271 = *(_QWORD *)(v267 + 36544);
                        if ( v268 && v268 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v268) )
                        {
                          if ( (v266[49] & 1) != 0 )
                            *(_DWORD *)(v275 + 116) |= 2u;
                          *(_BYTE *)(v275 + 565) = 1;
                          KiInsertDeferredReadyList(&v361, v275);
                        }
                        *((_QWORD *)v266 + 4) = v53;
                        v266[48] &= ~1u;
                        v272 = (v266[48] & 0xFD ^ (2 * ((*(_DWORD *)(v53 + 120) & 2) != 0))) & 0xC3 | 0x24;
                        if ( v53 == v271 )
                          v272 = (v266[48] & 0xFD ^ (2 * ((*(_DWORD *)(v53 + 120) & 2) != 0))) & 0xC3 | 4;
                        v266[48] = v272;
                        *((_QWORD *)v266 + 5) = v271;
                        v266[49] &= ~1u;
                        if ( !(unsigned __int8)KiIsPrcbThread(v271) )
                          *(_DWORD *)(v271 + 536) = *(_DWORD *)(v273 + 36);
                      }
                      v264 = v269 + 1;
                    }
                    while ( v264 < StaticRescheduleContext->ProcessorCount );
                    v6 = (__int64)a5;
LABEL_218:
                    LODWORD(v139) = (_DWORD)v362;
                    v112 = 0;
                  }
                }
                else
                {
                  NewThread = (unsigned __int64)v114->NewThread;
                  Prcb = v114->Prcb;
                  if ( NewThread && NewThread <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(NewThread) )
                  {
                    if ( (*((_BYTE *)&v114->0 + 1) & 1) != 0 )
                      *(_DWORD *)(v263 + 116) |= 2u;
                    *(_BYTE *)(v263 + 565) = 1;
                    KiInsertDeferredReadyList(&v361, v263);
                    LODWORD(v139) = (_DWORD)v362;
                  }
                  v114->CompareThread = (_KTHREAD *)v53;
                  v232 = v114->AllCompareThreadStateFlags & 0xFE;
                  v114->AllCompareThreadStateFlags = v232;
                  v114->AllCompareThreadStateFlags = (v232 & 0xFD ^ (2 * ((*(_DWORD *)(v53 + 120) & 2) != 0))) & 0xC3 | 4;
                  v114->NewThread = (_KTHREAD *)v53;
                  *((_BYTE *)&v114->0 + 1) &= ~1u;
                  if ( *(_UNKNOWN **)(v53 + 544) != &unk_140FC9F40 )
                    *(_DWORD *)(v53 + 536) = Prcb->Number;
                }
              }
              else if ( StaticRescheduleContext->ProcessorCount )
              {
                do
                {
                  v141 = (char *)StaticRescheduleContext + 40 * v112;
                  v142 = *((_QWORD *)v141 + 2);
                  v143 = *((_QWORD *)v141 + 5);
                  if ( v142 == v113 )
                  {
                    if ( v143 && v143 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v143) )
                    {
                      if ( (v141[49] & 1) != 0 )
                        *(_DWORD *)(v277 + 116) |= 2u;
                      *(_BYTE *)(v277 + 565) = 1;
                      KiInsertDeferredReadyList(&v361, v277);
                    }
                    *((_QWORD *)v141 + 4) = v53;
                    v141[48] &= ~1u;
                    v141[48] = (v141[48] & 0xFD ^ (2 * ((*(_DWORD *)(v53 + 120) & 2) != 0))) & 0xC3 | 4;
                    *((_QWORD *)v141 + 5) = v53;
                    v141[49] &= ~1u;
                    if ( !(unsigned __int8)KiIsPrcbThread(v53) )
                      *(_DWORD *)(v53 + 536) = *(_DWORD *)(v142 + 36);
                  }
                  else
                  {
                    v144 = *(_QWORD *)(v142 + 24);
                    if ( v143 && v143 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v143) )
                    {
                      if ( (v141[49] & 1) != 0 )
                        *(_DWORD *)(v227 + 116) |= 2u;
                      *(_BYTE *)(v227 + 565) = 1;
                      KiInsertDeferredReadyList(&v361, v227);
                    }
                    *((_QWORD *)v141 + 4) = v144;
                    v141[48] |= 1u;
                    v141[48] = (v141[48] & 0xFD ^ (2 * ((*(_DWORD *)(v144 + 120) & 2) != 0))) & 0xC3 | 4;
                    *((_QWORD *)v141 + 5) = v144;
                    v141[49] &= ~1u;
                    if ( !(unsigned __int8)KiIsPrcbThread(v144) )
                      *(_DWORD *)(v145 + 536) = *(_DWORD *)(v142 + 36);
                    v113 = v360;
                  }
                  v112 = v146 + 1;
                }
                while ( v112 < StaticRescheduleContext->ProcessorCount );
                goto LABEL_218;
              }
              v233 = 0;
              StaticRescheduleContext->MaximumThreadIsolationWidth = v139;
              v234 = v112;
              if ( (WORD2(xmmword_140FC0C10) & 0x400) != 0 )
                v234 = 2;
              v235 = v112;
              if ( StaticRescheduleContext->ProcessorCount )
              {
                v262 = 0;
                do
                {
                  v262 |= KiCommitRescheduleContextEntry(
                            (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                                  + 32 * v235
                                                                  + 8 * v235),
                            a1,
                            v234,
                            &v361);
                  ++v235;
                }
                while ( v235 < StaticRescheduleContext->ProcessorCount );
                v359 = v262;
                v233 = v262;
                v6 = (__int64)a5;
              }
              if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
              {
                CoreControlBlock = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
                if ( ++CoreControlBlock->ScanStartIndex >= CoreControlBlock->ProcessorCount )
                  CoreControlBlock->ScanStartIndex = 0;
              }
              v380 = v102 & 0xFFFFFFFFFFFFFFFEuLL;
              if ( (v102 & 1) == 0 )
              {
                v239 = &v380;
                LODWORD(v238) = 1;
                goto LABEL_413;
              }
              v237 = *(_BYTE **)((v102 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
              LODWORD(v238) = (unsigned __int8)*v237;
              v239 = (unsigned __int64 *)(v237 + 8);
              if ( *v237 )
              {
                do
                {
LABEL_413:
                  v238 = (unsigned int)(v238 - 1);
                  _InterlockedAnd64((volatile signed __int64 *)(v239[v238] + 48), 0LL);
                }
                while ( (_DWORD)v238 );
              }
              if ( !v233 || (v240 = 0, !StaticRescheduleContext->ProcessorCount) )
              {
                v50 = (unsigned int)v363;
                v51 = v358;
                goto LABEL_80;
              }
              while ( 2 )
              {
                v241 = (char *)StaticRescheduleContext + 40 * v240;
                v242 = v241[51];
                v243 = *((_QWORD *)v241 + 2);
                if ( (v242 & 0x10) == 0 )
                {
                  if ( (v242 & 8) != 0 && *(_BYTE *)(v243 + 7) )
                  {
                    v244 = a1->DeferredDispatchInterrupts.TargetType;
                    if ( !v244 )
                      goto LABEL_420;
                    if ( v244 != 1 )
                      goto LABEL_441;
                    v253 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                    if ( v253 != *(_DWORD *)(v243 + 36) )
                    {
                      a1->DeferredDispatchInterrupts.TargetType = 2;
                      v254 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v253) & 0x3F;
                      v255 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v253) >> 6;
                      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned int)v255 )
                        goto LABEL_440;
                      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v255 )
                      {
                        a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v255 + 1;
LABEL_440:
                        v256 = (char *)a1 + 8 * v255;
                        v257 = *((_QWORD *)v256 + 1725);
                        _bittestandset64(&v257, v254);
                        *((_QWORD *)v256 + 1725) = v257;
                      }
LABEL_441:
                      v251 = *(unsigned __int8 *)(v243 + 208);
                      v252 = *(_QWORD *)(v243 + 200);
                      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v251 )
                      {
LABEL_442:
                        a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v251] |= v252;
                        goto LABEL_421;
                      }
LABEL_435:
                      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned __int16)v251 )
                      {
                        a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v251 + 1;
                        goto LABEL_442;
                      }
                    }
                  }
LABEL_421:
                  if ( (v241[51] & 2) != 0 )
                    EtwTraceScheduleThread(*((_QWORD *)v241 + 5), v243, 0LL);
                  if ( (v241[51] & 4) != 0
                    && *(_QWORD *)(v243 + 36600)
                    && a1->SchedulerAssist
                    && a1 != (struct _KPRCB *)v243 )
                  {
                    v258 = **(unsigned int **)(v243 + 36600);
                    p_SchedulerAssist = &a1->SchedulerAssist;
                    if ( (**(_DWORD **)(v243 + 36600) & 0x40000) != 0 )
                      p_SchedulerAssist = &a1->SchedulerAssist;
                    if ( (v258 & 0x100000) != 0
                      || (p_SchedulerAssist = &a1->SchedulerAssist, (**(_DWORD **)(v243 + 36600) & 0x40000) != 0)
                      && (unsigned __int8)v258 < v241[52] )
                    {
                      v260 = *p_SchedulerAssist;
                      *((_DWORD *)*p_SchedulerAssist + 3) = 2;
                      v261 = *(unsigned int *)(v243 + 36);
                      LODWORD(v360) = *(_DWORD *)(v243 + 36);
                      if ( !HvlpVirtualProcessorsIdentityMapped )
                      {
                        LODWORD(v261) = (unsigned __int8)byte_140FC71C1[2 * v261] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v261] << 6);
                        LODWORD(v360) = v261;
                      }
                      v260[2] = v261;
                      if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
                      {
                        EtwTraceXSchedulerPriorityKickSend(*(unsigned int *)(v243 + 36), 2LL, v258);
                        LODWORD(v261) = v360;
                      }
                      __writemsr(0x400000C2u, (unsigned int)v261);
                    }
                  }
                  if ( (v241[51] & 1) != 0 )
                    _InterlockedDecrement16((volatile signed __int16 *)(*((_QWORD *)v241 + 5) + 868LL));
                  if ( ++v240 >= StaticRescheduleContext->ProcessorCount )
                  {
                    v50 = (unsigned int)v363;
                    v51 = v358;
                    goto LABEL_80;
                  }
                  continue;
                }
                break;
              }
              v245 = a1->DeferredDispatchInterrupts.TargetType;
              if ( !v245 )
              {
LABEL_420:
                a1->DeferredDispatchInterrupts.TargetType = 1;
                a1->DeferredDispatchInterrupts.SingleTargetIndex = *(_DWORD *)(v243 + 36);
                goto LABEL_421;
              }
              if ( v245 == 1 )
              {
                v246 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                if ( v246 == *(_DWORD *)(v243 + 36) )
                  goto LABEL_421;
                a1->DeferredDispatchInterrupts.TargetType = 2;
                v247 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v246) & 0x3F;
                v248 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v246) >> 6;
                if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count <= (unsigned int)v248 )
                {
                  if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v248 )
                  {
                    a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v248 + 1;
                    goto LABEL_433;
                  }
                }
                else
                {
LABEL_433:
                  v249 = (char *)a1 + 8 * v248;
                  v250 = *((_QWORD *)v249 + 1725);
                  _bittestandset64(&v250, v247);
                  *((_QWORD *)v249 + 1725) = v250;
                }
              }
              v251 = *(unsigned __int8 *)(v243 + 208);
              v252 = *(_QWORD *)(v243 + 200);
              if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v251 )
                goto LABEL_442;
              goto LABEL_435;
            }
          }
          v97 &= ~*(_QWORD *)(v100 + 200);
          KiReleasePrcbLocksForIsolationUnit((__int64 *)&v362);
        }
        v104 = v379;
        v62 = 1LL;
        v60 = v379;
        LODWORD(v105) = 0;
LABEL_178:
        while ( !_interlockedbittestandset64((volatile signed __int32 *)(*v104 + 48LL), 0LL) )
        {
          LODWORD(v105) = v105 + 1;
          ++v104;
          if ( (unsigned int)v105 >= (unsigned int)v62 )
            goto LABEL_180;
        }
LABEL_249:
        while ( (_DWORD)v105 )
        {
          v105 = (unsigned int)(v105 - 1);
          _InterlockedAnd64((volatile signed __int64 *)(v60[v105] + 48LL), 0LL);
        }
        v97 &= ~*(_QWORD *)(v360 + 200);
        goto LABEL_173;
      }
      if ( *(_QWORD *)(v53 + 568) != KiCpuSetSequence && (*(_DWORD *)(v53 + 116) & 8) == 0 )
      {
        *((_QWORD *)&v369 + 1) = *(_QWORD *)(*((_QWORD *)&v369 + 1) + 8LL);
        KiRemoveThreadFromReadyQueue(v368, (_QWORD *)(v53 + 216), SBYTE4(v369));
        v64 = *(_BYTE *)(v53 + 388);
        if ( v64 == 1 )
        {
          *(_DWORD *)(v53 + 116) |= 2u;
        }
        else if ( v64 == 5 )
        {
          v65 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v53 + 436));
          if ( *(_BYTE *)(v53 + 391) )
            *(_QWORD *)(v53 + 1000) += v65;
          else
            *(_QWORD *)(v53 + 992) += v65;
        }
        *(_BYTE *)(v53 + 388) = 7;
        *(struct _SINGLE_LIST_ENTRY *)(v53 + 216) = v361;
        v361.Next = (struct _SINGLE_LIST_ENTRY *)(v53 + 216);
      }
      v51 = v358;
      LODWORD(v363) = ++v50;
    }
LABEL_112:
    v365 = (unsigned __int64)v6;
    v69 = *(_QWORD *)(v6 + 33848);
    if ( (v69 & 1) != 0 )
    {
      if ( v69 == 1 )
        goto LABEL_116;
      v70 = v69 ^ ((v6 + 33840) | 1);
    }
    else
    {
      v70 = *(_QWORD *)(v6 + 33848);
    }
    if ( v70 )
    {
      *((_QWORD *)&v365 + 1) = v70 - 104;
      v155 = *(unsigned __int16 *)(v70 - 104 + 136);
      v71 = v70 - 104 + 160;
      LODWORD(v366) = v155;
      v367 = v71;
      if ( v155 )
      {
        _BitScanReverse(&v72, v155);
        LODWORD(a5) = 0;
        BYTE4(v366) = v72;
        *((_QWORD *)&v366 + 1) = v71 + 16LL * v72;
        goto LABEL_118;
      }
      *((_QWORD *)&v366 + 1) = 0LL;
LABEL_117:
      LOBYTE(v72) = BYTE4(v366);
LABEL_118:
      v73 = 0;
      LODWORD(a5) = 0;
      v74 = 0LL;
      v358 = 0LL;
LABEL_119:
      if ( v73 >= 0x40 )
        goto LABEL_121;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !*((_QWORD *)&v365 + 1) )
            goto LABEL_121;
          if ( *((_QWORD *)&v366 + 1) )
          {
            while ( 1 )
            {
              v78 = **((_QWORD **)&v366 + 1);
              *((_QWORD *)&v366 + 1) = v78;
              if ( v78 != v71 + 16LL * (unsigned __int8)v72 )
                break;
              v157 = v366 & ~(1 << v72);
              LODWORD(v366) = v157;
              if ( !v157 )
              {
                *((_QWORD *)&v366 + 1) = 0LL;
                BYTE4(v366) = 0;
                goto LABEL_252;
              }
              _BitScanReverse(&v158, v157);
              LODWORD(v360) = 0;
              LOBYTE(v72) = v158;
              BYTE4(v366) = v158;
              *((_QWORD *)&v366 + 1) = v71 + 16LL * (unsigned __int8)v158;
            }
            v79 = v78 - 216;
            v80 = v386 & *(_QWORD *)(a2 + 8);
            if ( v80 )
            {
              v81 = v80 & ~v74;
              if ( v81 )
              {
                v82 = *(_WORD **)(v79 + 576);
                v83 = *(unsigned __int16 *)(a2 + 136);
                if ( (unsigned __int16)v83 >= *v82 )
                  v84 = 0LL;
                else
                  v84 = *(_QWORD *)&v82[4 * v83 + 4];
                v85 = KiComputeThreadQos(v79);
                v86 = *(_DWORD *)(v79 + 80);
                if ( v86 <= *(_DWORD *)(v79 + 84) )
                  v86 = *(_DWORD *)(v79 + 84);
                v87 = *(_QWORD *)(*(_QWORD *)(a2 + 192)
                                + 24LL
                                * (*(unsigned __int8 *)(v79 + 517)
                                 + *(unsigned __int8 *)(a2 + 185)
                                 * ((unsigned int)(v86 >= KiDynamicHeteroCpuPolicyExpectedCycles) + 2 * v85))
                                + 16);
                if ( (v87 & v84) != 0 )
                  v84 &= v87;
                v88 = *(_QWORD *)(v79 + 104);
                v89 = v81 & v84 & *(_QWORD *)(a2 + 8LL * ((*(_DWORD *)(v79 + 120) >> 1) & 1) + 16);
                v90 = v79;
                if ( v88
                  && *(char *)(v79 + 195) < 16
                  && (*(_DWORD *)(v79 + 120) & 0x200) == 0
                  && !*(_DWORD *)(v79 + 484)
                  && *(_BYTE *)(v79 + 390) != 1 )
                {
                  v93 = 0LL;
                  if ( v89 )
                  {
                    v182 = *(unsigned __int16 *)(a2 + 136) << 6;
                    do
                    {
                      _BitScanForward64(&v183, v89);
                      LODWORD(v360) = 0;
                      if ( !KiCheckForMaxOverQuotaScb(
                              v88
                            + 464LL
                            * *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                              + (unsigned int)(v182 + v183))
                            + 128) )
                        v93 |= 1LL << v184;
                    }
                    while ( v89 );
                    v73 = (unsigned int)a5;
                  }
                  v89 = v93;
                  v362 = (_DWORD *)v93;
                  if ( KiPerfIsoEnabled && (unsigned __int8)KiIsThreadRankBiased(v79, a1) )
                  {
                    KiFindRankBiasedIdleSmtSet(v94, &v362);
                    v89 = (unsigned __int64)v362;
                  }
                }
                if ( !v89 )
                {
                  if ( *(_QWORD *)(v79 + 568) != KiCpuSetSequence && (*(_DWORD *)(v79 + 116) & 8) == 0 )
                  {
                    KiRemoveCurrentThreadScbReadyQueueEnumerator((__int64)&v365);
                    v91 = *(_BYTE *)(v79 + 388);
                    if ( v91 == 1 )
                    {
                      *(_DWORD *)(v79 + 116) |= 2u;
                    }
                    else if ( v91 == 5 )
                    {
                      v92 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v79 + 436));
                      if ( *(_BYTE *)(v79 + 391) )
                        *(_QWORD *)(v79 + 1000) += v92;
                      else
                        *(_QWORD *)(v79 + 992) += v92;
                    }
                    *(_BYTE *)(v79 + 388) = 7;
                    *(struct _SINGLE_LIST_ENTRY *)(v79 + 216) = v361;
                    v361.Next = (struct _SINGLE_LIST_ENTRY *)(v79 + 216);
                  }
                  v71 = v367;
                  ++v73;
                  LOBYTE(v72) = BYTE4(v366);
                  LODWORD(a5) = v73;
                  goto LABEL_119;
                }
                if ( *(_QWORD *)(v79 + 568) != KiCpuSetSequence && (*(_DWORD *)(v79 + 116) & 8) == 0 )
                {
                  _BitScanReverse64(&v176, v89);
                  v177 = (*(unsigned __int16 *)(a2 + 136) << 6) + (int)v176;
                  LODWORD(v360) = 0;
                  v178 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                                          + v177)];
                  if ( (*(_DWORD *)(v79 + 120) & 2) != 0 )
                    v74 |= *(_QWORD *)(v178 + 36512);
                  else
                    v74 |= *(_QWORD *)(v178 + 200);
                  v358 = v74;
                  KiRemoveCurrentThreadScbReadyQueueEnumerator((__int64)&v365);
                  KiInsertDeferredReadyList(&v361, v79);
                  v71 = v367;
                  LOBYTE(v72) = BYTE4(v366);
                  goto LABEL_119;
                }
                v117 = (_DWORD *)(v79 + 120);
                v118 = v89;
                v362 = (_DWORD *)(v79 + 120);
                v119 = (_QWORD *)(v79 + 104);
                while ( 1 )
                {
                  if ( !v118 )
                  {
                    v74 = v358;
                    if ( v89 )
                    {
                      _BitScanReverse64(&v162, v89);
                      v163 = (*(unsigned __int16 *)(a2 + 136) << 6) + (int)v162;
                      LODWORD(v360) = 0;
                      v164 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                                              + v163)];
                      if ( (*(_DWORD *)(v90 + 120) & 2) != 0 )
                        v74 = *(_QWORD *)(v164 + 36512) | v358;
                      else
                        v74 = *(_QWORD *)(v164 + 200) | v358;
                      v358 = v74;
                      KiRemoveCurrentThreadScbReadyQueueEnumerator((__int64)&v365);
                      KiEnterDeferredReadyState(v90);
                      v73 = (unsigned int)a5;
                      *(struct _SINGLE_LIST_ENTRY *)(v90 + 216) = v361;
                      v71 = v367;
                      LOBYTE(v72) = BYTE4(v366);
                      v361.Next = (struct _SINGLE_LIST_ENTRY *)(v90 + 216);
                    }
                    else
                    {
                      v71 = v367;
                      v73 = (_DWORD)a5 + 1;
                      LOBYTE(v72) = BYTE4(v366);
                      LODWORD(a5) = (_DWORD)a5 + 1;
                    }
                    goto LABEL_119;
                  }
                  _BitScanReverse64(&v120, v118);
                  v121 = (*(unsigned __int16 *)(a2 + 136) << 6) + (int)v120;
                  LODWORD(v360) = 0;
                  v123 = (*v117 >> 1) & 1;
                  v381[0] = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                                             + v121)];
                  v122 = (_KPRCB *)v381[0];
                  v124 = v123 | v381[0] & 0xFFFFFFFFFFFFFFFEuLL;
                  v360 = v124;
                  if ( !v123 )
                    break;
                  v125 = *(_BYTE **)(v381[0] + 36504LL);
                  v126 = (unsigned __int8)*v125;
                  v127 = v125 + 8;
                  LODWORD(v128) = 0;
                  v129 = v125 + 8;
                  if ( *v125 )
                    goto LABEL_197;
LABEL_199:
                  v130 = v90;
                  if ( (_DWORD)v128 == v126 )
                  {
                    v131 = v124 & 0xFFFFFFFFFFFFFFFEuLL;
                    v132 = 0LL;
                    v381[1] = v124 & 0xFFFFFFFFFFFFFFFEuLL;
                    v133 = 0LL;
                    if ( (v124 & 1) != 0 )
                    {
                      if ( (v124 & 1) == 1 )
                      {
                        v171 = *(unsigned __int8 **)(v131 + 36504);
                        v133 = *v171;
                        v132 = (__int64 *)(v171 + 8);
                      }
                      v134 = 1;
                      if ( (_DWORD)v133 )
                      {
                        do
                        {
                          v172 = *v132++;
                          v90 = v130;
                          v134 = ((*(_BYTE *)(v172 + 35) & 1) == 0) & (unsigned __int8)v134;
                          --v133;
                        }
                        while ( v133 );
                      }
                    }
                    else
                    {
                      v134 = (*(_BYTE *)(v131 + 35) & 1) == 0;
                    }
                    if ( v134
                      && (!*v119
                       || !(*v119 + v122->ScbOffset)
                       || !KiIsThreadConstrainedBySchedulingGroup(v90)
                       || KiShouldPreemptionBeDeferred(v355)
                       || !KiCheckForMaxOverQuotaScb(v356)) )
                    {
                      KiRemoveCurrentThreadScbReadyQueueEnumerator((__int64)&v365);
                      v363 = a1->StaticRescheduleContext;
                      v135 = v363;
                      memset_0(v363, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
                      KiStartRescheduleContext(v135, &v360, 0LL);
                      v136 = 0;
                      v137 = 0LL;
                      for ( k = 0; k < v135->ProcessorCount; ++k )
                      {
                        if ( v135->ProcessorEntries[k].Prcb == v122 )
                        {
                          v137 = (__int64)&v135->ProcessorEntries[k];
                          break;
                        }
                      }
                      v147 = (*(_DWORD *)(v90 + 120) >> 1) & 1;
                      v148 = (*(unsigned __int8 *)(v137 + 32) >> 1) & 1;
                      v362 = (_DWORD *)v147;
                      if ( (unsigned int)v147 >= v148 )
                      {
                        if ( (_DWORD)v147 )
                        {
                          v218 = 0;
                          if ( v135->ProcessorCount )
                          {
                            do
                            {
                              v219 = v135->ProcessorEntries[v218].Prcb;
                              v220 = (char *)v135 + 40 * v218;
                              v221 = *((_QWORD *)v220 + 5);
                              if ( v219 == v122 )
                              {
                                if ( v221 && v221 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v221) )
                                {
                                  if ( (v220[49] & 1) != 0 )
                                    *(_DWORD *)(v229 + 116) |= 2u;
                                  *(_BYTE *)(v229 + 565) = 1;
                                  KiInsertDeferredReadyList(&v361, v229);
                                }
                                *((_QWORD *)v220 + 4) = v90;
                                v220[48] &= ~1u;
                                v220[48] = (v220[48] & 0xFD ^ (2 * ((*(_DWORD *)(v90 + 120) & 2) != 0))) & 0xC3 | 4;
                                *((_QWORD *)v220 + 5) = v90;
                                v220[49] &= ~1u;
                                if ( !(unsigned __int8)KiIsPrcbThread(v90) )
                                  *(_DWORD *)(v90 + 536) = *(_DWORD *)(v223 + 36);
                              }
                              else
                              {
                                SmtIsolationThread = v219->SmtIsolationThread;
                                if ( v221 && v221 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v221) )
                                {
                                  if ( (v220[49] & 1) != 0 )
                                    *(_DWORD *)(v276 + 116) |= 2u;
                                  *(_BYTE *)(v276 + 565) = 1;
                                  KiInsertDeferredReadyList(&v361, v276);
                                }
                                *((_QWORD *)v220 + 4) = v90;
                                v220[48] &= ~1u;
                                v225 = (v220[48] & 0xFD ^ (2 * ((*(_DWORD *)(v90 + 120) & 2) != 0))) & 0xC3 | 0x24;
                                if ( (_KTHREAD *)v90 == SmtIsolationThread )
                                  v225 = (v220[48] & 0xFD ^ (2 * ((*(_DWORD *)(v90 + 120) & 2) != 0))) & 0xC3 | 4;
                                v220[48] = v225;
                                *((_QWORD *)v220 + 5) = SmtIsolationThread;
                                v220[49] &= ~1u;
                                if ( !(unsigned __int8)KiIsPrcbThread(SmtIsolationThread) )
                                  SmtIsolationThread->NextProcessor = *(_DWORD *)(v226 + 36);
                              }
                              v218 = v222 + 1;
                            }
                            while ( v218 < v135->ProcessorCount );
LABEL_227:
                            LODWORD(v147) = (_DWORD)v362;
                            v136 = 0;
                          }
                        }
                        else
                        {
                          v185 = *(_QWORD *)(v137 + 24);
                          v186 = *(_QWORD *)v137;
                          if ( v185 && v185 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v185) )
                          {
                            if ( (*(_BYTE *)(v137 + 33) & 1) != 0 )
                              *(_DWORD *)(v217 + 116) |= 2u;
                            *(_BYTE *)(v217 + 565) = 1;
                            KiInsertDeferredReadyList(&v361, v217);
                            LODWORD(v147) = (_DWORD)v362;
                          }
                          *(_QWORD *)(v137 + 16) = v90;
                          v187 = *(_BYTE *)(v137 + 32) & 0xFE;
                          *(_BYTE *)(v137 + 32) = v187;
                          *(_BYTE *)(v137 + 32) = (v187 & 0xFD ^ (2 * ((*(_DWORD *)(v90 + 120) & 2) != 0))) & 0xC3 | 4;
                          *(_QWORD *)(v137 + 24) = v90;
                          *(_BYTE *)(v137 + 33) &= ~1u;
                          if ( *(_UNKNOWN **)(v90 + 544) != &unk_140FC9F40 )
                            *(_DWORD *)(v90 + 536) = *(_DWORD *)(v186 + 36);
                        }
                      }
                      else if ( v135->ProcessorCount )
                      {
                        do
                        {
                          v149 = v135->ProcessorEntries[v136].Prcb;
                          v150 = (char *)v135 + 40 * v136;
                          v151 = *((_QWORD *)v150 + 5);
                          if ( v149 == v122 )
                          {
                            if ( v151 && v151 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v151) )
                            {
                              if ( (v150[49] & 1) != 0 )
                                *(_DWORD *)(v278 + 116) |= 2u;
                              *(_BYTE *)(v278 + 565) = 1;
                              KiInsertDeferredReadyList(&v361, v278);
                            }
                            *((_QWORD *)v150 + 4) = v90;
                            v150[48] &= ~1u;
                            v150[48] = (v150[48] & 0xFD ^ (2 * ((*(_DWORD *)(v90 + 120) & 2) != 0))) & 0xC3 | 4;
                            *((_QWORD *)v150 + 5) = v90;
                            v150[49] &= ~1u;
                            if ( !(unsigned __int8)KiIsPrcbThread(v90) )
                              *(_DWORD *)(v90 + 536) = v149->Number;
                          }
                          else
                          {
                            IdleThread = v149->IdleThread;
                            if ( v151 && v151 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v151) )
                            {
                              if ( (v150[49] & 1) != 0 )
                                *(_DWORD *)(v228 + 116) |= 2u;
                              *(_BYTE *)(v228 + 565) = 1;
                              KiInsertDeferredReadyList(&v361, v228);
                            }
                            *((_QWORD *)v150 + 4) = IdleThread;
                            v150[48] |= 1u;
                            v150[48] = (v150[48] & 0xFD ^ (2 * ((*((_DWORD *)&IdleThread->0 + 1) & 2) != 0))) & 0xC3 | 4;
                            *((_QWORD *)v150 + 5) = IdleThread;
                            v150[49] &= ~1u;
                            if ( !(unsigned __int8)KiIsPrcbThread(IdleThread) )
                              *(_DWORD *)(v153 + 536) = v149->Number;
                          }
                          v136 = v154 + 1;
                        }
                        while ( v136 < v135->ProcessorCount );
                        goto LABEL_227;
                      }
                      v188 = 0;
                      v135->MaximumThreadIsolationWidth = v147;
                      v189 = v136;
                      if ( (WORD2(xmmword_140FC0C10) & 0x400) != 0 )
                        v189 = 2;
                      v190 = v136;
                      if ( v135->ProcessorCount )
                      {
                        do
                        {
                          v188 |= KiCommitRescheduleContextEntry(
                                    (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v135->ProcessorEntries
                                                                          + 32 * v190
                                                                          + 8 * v190),
                                    a1,
                                    v189,
                                    &v361);
                          ++v190;
                        }
                        while ( v190 < v135->ProcessorCount );
                      }
                      if ( v135->IsolationWidth == KiIsolationWidthCore )
                      {
                        v191 = v135->ProcessorEntries[0].Prcb->CoreControlBlock;
                        if ( ++v191->ScanStartIndex >= v191->ProcessorCount )
                          v191->ScanStartIndex = 0;
                      }
                      v382 = v124 & 0xFFFFFFFFFFFFFFFEuLL;
                      if ( (v124 & 1) == 0 )
                      {
                        v194 = &v382;
                        LODWORD(v193) = 1;
                        goto LABEL_309;
                      }
                      v192 = *(_BYTE **)((v124 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
                      LODWORD(v193) = (unsigned __int8)*v192;
                      v194 = (unsigned __int64 *)(v192 + 8);
                      if ( *v192 )
                      {
                        do
                        {
LABEL_309:
                          v193 = (unsigned int)(v193 - 1);
                          _InterlockedAnd64((volatile signed __int64 *)(v194[v193] + 48), 0LL);
                        }
                        while ( (_DWORD)v193 );
                      }
                      if ( v188 )
                      {
                        v195 = 0;
                        if ( v135->ProcessorCount )
                        {
                          while ( 2 )
                          {
                            v196 = v135->ProcessorEntries[v195].___u6[0];
                            v197 = v135->ProcessorEntries[v195].Prcb;
                            v198 = (char *)v135 + 40 * v195;
                            if ( (v196 & 0x10) == 0 )
                            {
                              if ( (v196 & 8) != 0 && v197->IdleHalt )
                              {
                                v199 = a1->DeferredDispatchInterrupts.TargetType;
                                if ( !v199 )
                                  goto LABEL_316;
                                if ( v199 != 1 )
                                  goto LABEL_337;
                                v208 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                                if ( v208 != v197->Number )
                                {
                                  a1->DeferredDispatchInterrupts.TargetType = 2;
                                  v209 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v208) & 0x3F;
                                  v210 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV
                                                       + v208) >> 6;
                                  if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned int)v210 )
                                    goto LABEL_336;
                                  if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v210 )
                                  {
                                    a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v210 + 1;
LABEL_336:
                                    v211 = (char *)a1 + 8 * v210;
                                    v212 = *((_QWORD *)v211 + 1725);
                                    _bittestandset64(&v212, v209);
                                    *((_QWORD *)v211 + 1725) = v212;
                                  }
LABEL_337:
                                  Group = v197->Group;
                                  GroupSetMember = v197->GroupSetMember;
                                  if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)Group )
                                  {
LABEL_338:
                                    a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[Group] |= GroupSetMember;
                                    goto LABEL_317;
                                  }
LABEL_331:
                                  if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned __int16)Group )
                                  {
                                    a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = Group + 1;
                                    goto LABEL_338;
                                  }
                                }
                              }
LABEL_317:
                              if ( (v198[51] & 2) != 0 )
                                EtwTraceScheduleThread(*((_QWORD *)v198 + 5), v197, 0LL);
                              if ( (v198[51] & 4) != 0 && v197->SchedulerAssist && a1->SchedulerAssist && a1 != v197 )
                              {
                                v213 = *(unsigned int *)v197->SchedulerAssist;
                                v214 = &a1->SchedulerAssist;
                                if ( (*(_DWORD *)v197->SchedulerAssist & 0x40000) != 0 )
                                  v214 = &a1->SchedulerAssist;
                                if ( (v213 & 0x100000) != 0
                                  || (v214 = &a1->SchedulerAssist, (*(_DWORD *)v197->SchedulerAssist & 0x40000) != 0)
                                  && (unsigned __int8)v213 < v198[52] )
                                {
                                  v215 = *v214;
                                  *((_DWORD *)*v214 + 3) = 2;
                                  Number = v197->Number;
                                  if ( !HvlpVirtualProcessorsIdentityMapped )
                                  {
                                    v135 = v363;
                                    LODWORD(Number) = (unsigned __int8)byte_140FC71C1[2 * (unsigned int)Number] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
                                  }
                                  v215[2] = Number;
                                  if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
                                    EtwTraceXSchedulerPriorityKickSend(v197->Number, 2LL, v213);
                                  __writemsr(0x400000C2u, (unsigned int)Number);
                                }
                              }
                              if ( (v198[51] & 1) != 0 )
                                _InterlockedDecrement16((volatile signed __int16 *)(*((_QWORD *)v198 + 5) + 868LL));
                              if ( ++v195 >= v135->ProcessorCount )
                              {
                                v71 = v367;
                                LOBYTE(v72) = BYTE4(v366);
                                v73 = (unsigned int)a5;
                                v74 = v358;
                                goto LABEL_119;
                              }
                              continue;
                            }
                            break;
                          }
                          v200 = a1->DeferredDispatchInterrupts.TargetType;
                          if ( !v200 )
                          {
LABEL_316:
                            a1->DeferredDispatchInterrupts.TargetType = 1;
                            a1->DeferredDispatchInterrupts.SingleTargetIndex = v197->Number;
                            goto LABEL_317;
                          }
                          if ( v200 == 1 )
                          {
                            v201 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                            if ( v201 == v197->Number )
                              goto LABEL_317;
                            a1->DeferredDispatchInterrupts.TargetType = 2;
                            v202 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v201) & 0x3F;
                            v203 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV
                                                 + v201) >> 6;
                            if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count <= (unsigned int)v203 )
                            {
                              if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v203 )
                              {
                                a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v203 + 1;
                                goto LABEL_329;
                              }
                            }
                            else
                            {
LABEL_329:
                              v204 = (char *)a1 + 8 * v203;
                              v205 = *((_QWORD *)v204 + 1725);
                              _bittestandset64(&v205, v202);
                              *((_QWORD *)v204 + 1725) = v205;
                            }
                          }
                          Group = v197->Group;
                          GroupSetMember = v197->GroupSetMember;
                          if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)Group )
                            goto LABEL_338;
                          goto LABEL_331;
                        }
                      }
                      v71 = v367;
                      LOBYTE(v72) = BYTE4(v366);
                      v73 = (unsigned int)a5;
                      v74 = v358;
                      goto LABEL_119;
                    }
                    v118 &= ~v122->GroupSetMember;
                    KiReleasePrcbLocksForIsolationUnit((__int64 *)&v360);
                    v117 = v362;
                  }
                  else
                  {
                    while ( (_DWORD)v128 )
                    {
                      v128 = (unsigned int)(v128 - 1);
                      _InterlockedAnd64((volatile signed __int64 *)(v129[v128] + 48LL), 0LL);
                    }
                    v117 = v362;
                    v118 &= ~v122->GroupSetMember;
                  }
                }
                v127 = v381;
                v126 = 1;
                v129 = v381;
                LODWORD(v128) = 0;
                do
                {
LABEL_197:
                  if ( _interlockedbittestandset64((volatile signed __int32 *)(*v127 + 48LL), 0LL) )
                    break;
                  LODWORD(v128) = v128 + 1;
                  ++v127;
                }
                while ( (unsigned int)v128 < v126 );
                goto LABEL_199;
              }
            }
LABEL_121:
            if ( !v378 )
              goto LABEL_6;
            v75 = 0LL;
            LODWORD(v76) = 0;
            v383 = v378 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( (v378 & 1) != 0 )
            {
              if ( (v378 & 1) == 1 )
              {
                v76 = *(_QWORD *)((v378 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
                v75 = (unsigned __int64 *)(v76 + 8);
                LODWORD(v76) = *(unsigned __int8 *)v76;
              }
              if ( !(_DWORD)v76 )
                goto LABEL_6;
            }
            else
            {
              v75 = &v383;
              LODWORD(v76) = 1;
            }
            do
            {
              v76 = (unsigned int)(v76 - 1);
              _InterlockedAnd64((volatile signed __int64 *)(v75[v76] + 48), 0LL);
            }
            while ( (_DWORD)v76 );
            goto LABEL_6;
          }
LABEL_252:
          ScbForScbReadyQueueEnumerator = KiDetermineNextScbForScbReadyQueueEnumerator(*((_QWORD **)&v365 + 1));
          v166 = ScbForScbReadyQueueEnumerator;
          if ( ScbForScbReadyQueueEnumerator )
            break;
LABEL_255:
          *((_QWORD *)&v365 + 1) = v166;
        }
        v71 = ScbForScbReadyQueueEnumerator + 160;
        v167 = *(unsigned __int16 *)(ScbForScbReadyQueueEnumerator + 136);
        LODWORD(v366) = v167;
        v367 = v71;
        if ( v167 )
        {
          _BitScanReverse(&v167, v167);
          LODWORD(v360) = 0;
          LOBYTE(v72) = v167;
          BYTE4(v366) = v167;
          *((_QWORD *)&v366 + 1) = v71 + 16LL * v167;
          goto LABEL_255;
        }
        LOBYTE(v72) = 32;
        *((_QWORD *)&v366 + 1) = 0LL;
        BYTE4(v366) = 32;
        *((_QWORD *)&v365 + 1) = v166;
      }
    }
LABEL_116:
    v71 = v367;
    goto LABEL_117;
  }
  v376 = 0LL;
  LOBYTE(v25) = 0;
  v364.Next = 0LL;
  v374 = 0LL;
  v375 = 0LL;
  BYTE4(v375) = 32;
  v377 = 0LL;
  if ( (*(_DWORD *)(a6 + 8) & 0xFFFFFFFE) == 0 )
    goto LABEL_29;
  if ( (KiVelocityFlags & 0x200000) == 0 )
  {
    LODWORD(a5) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    {
      do
        KeYieldProcessorEx(&a5);
      while ( *(_QWORD *)v8 );
    }
    goto LABEL_631;
  }
  *((_QWORD *)&v377 + 1) = a6;
  *(_QWORD *)&v377 = 0LL;
  if ( _InterlockedExchange64((volatile __int64 *)a6, (__int64)&v377) )
  {
    KxWaitForLockOwnerShip(&v377);
LABEL_631:
    a3 = v386;
    v7 = a2;
  }
  v303 = (*(_DWORD *)(v8 + 8) & 0xFFFFFFFE) == 0;
  v304 = *(_DWORD *)(v8 + 8) & 0xFFFFFFFE;
  v374 = v8;
  LODWORD(v375) = v304;
  v376 = v8 + 64;
  if ( v303 )
  {
    *((_QWORD *)&v375 + 1) = 0LL;
  }
  else
  {
    _BitScanReverse(&v304, v304);
    LODWORD(a5) = 0;
    BYTE4(v375) = v304;
    *((_QWORD *)&v375 + 1) = v8 + 64 + 16LL * v304;
  }
  v363 = 0LL;
  v284 = 0;
  LODWORD(a5) = 0;
  v285 = 0LL;
  v358 = 0LL;
  while ( 1 )
  {
LABEL_550:
    if ( v284 >= 0x40 || !*((_QWORD *)&v375 + 1) )
      goto LABEL_592;
    while ( 1 )
    {
      v305 = **((_QWORD **)&v375 + 1);
      *((_QWORD *)&v375 + 1) = v305;
      if ( v305 != v376 + 16LL * BYTE4(v375) )
        break;
      v328 = v375 & ~(1 << SBYTE4(v375));
      LODWORD(v375) = v328;
      if ( !v328 )
      {
        BYTE4(v375) = 0;
        *((_QWORD *)&v375 + 1) = 0LL;
        goto LABEL_592;
      }
      _BitScanReverse(&v329, v328);
      BYTE4(v375) = v329;
      *((_QWORD *)&v375 + 1) = v376 + 16LL * (unsigned __int8)v329;
    }
    v306 = v305 - 216;
    v307 = a3 & *(_QWORD *)(v7 + 8);
    if ( !v307 )
      goto LABEL_592;
    v308 = v307 & ~v285;
    if ( !v308 )
      break;
    v309 = *(_WORD **)(v306 + 576);
    v310 = *(unsigned __int16 *)(v7 + 136);
    if ( (unsigned __int16)v310 >= *v309 )
      v311 = 0LL;
    else
      v311 = *(_QWORD *)&v309[4 * v310 + 4];
    v312 = KiComputeThreadQos(v306);
    v313 = *(_DWORD *)(v306 + 80);
    v7 = a2;
    if ( v313 <= *(_DWORD *)(v306 + 84) )
      v313 = *(_DWORD *)(v306 + 84);
    v314 = *(_QWORD *)(*(_QWORD *)(a2 + 192)
                     + 24LL
                     * (*(unsigned __int8 *)(v306 + 517)
                      + *(unsigned __int8 *)(a2 + 185)
                      * ((unsigned int)(v313 >= KiDynamicHeteroCpuPolicyExpectedCycles) + 2 * v312))
                     + 16);
    if ( (v314 & v311) != 0 )
      v311 &= v314;
    v315 = *(_QWORD *)(v306 + 104);
    v316 = v308 & v311 & *(_QWORD *)(a2 + 8LL * ((*(_DWORD *)(v306 + 120) >> 1) & 1) + 16);
    if ( !v315 || *(char *)(v306 + 195) >= 16 || (*(_DWORD *)(v306 + 120) & 0x200) != 0 || *(_DWORD *)(v306 + 484) )
    {
      v25 = 0;
    }
    else
    {
      v25 = 0;
      if ( *(_BYTE *)(v306 + 390) != 1 )
      {
        v327 = 0LL;
        if ( v316 )
        {
          v348 = *(unsigned __int16 *)(a2 + 136) << 6;
          do
          {
            _BitScanForward64(&v349, v316);
            v316 &= ~(1LL << v349);
            if ( !KiCheckForMaxOverQuotaScb(
                    v315
                  + 464LL
                  * *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                    + (unsigned int)(v348 + v349))
                  + 128) )
              v327 |= 1LL << v350;
          }
          while ( v316 );
        }
        v316 = v327;
        v378 = v327;
        if ( KiPerfIsoEnabled && (unsigned __int8)KiIsThreadRankBiased(v306, a1) )
        {
          KiFindRankBiasedIdleSmtSet(v7, &v378);
          v7 = a2;
          v316 = v378;
        }
      }
    }
    if ( !v316 )
    {
      if ( *(_QWORD *)(v306 + 568) != KiCpuSetSequence && (*(_DWORD *)(v306 + 116) & 8) == 0 )
      {
        v317 = BYTE4(v375);
        v318 = v374;
        *((_QWORD *)&v375 + 1) = *(_QWORD *)(*((_QWORD *)&v375 + 1) + 8LL);
        if ( (*(_DWORD *)(v306 + 120) & 0x400000) != 0 )
          _InterlockedAnd(*(volatile signed __int32 **)(v306 + 968), 0xFFFBFFFF);
        v319 = v306 + 216;
        v320 = *(_QWORD *)(v306 + 216);
        v321 = *(unsigned __int64 **)(v306 + 224);
        if ( *(_QWORD *)(v320 + 8) != v306 + 216 || *v321 != v319 )
          __fastfail(3u);
        *v321 = v320;
        *(_QWORD *)(v320 + 8) = v321;
        if ( v321 == (unsigned __int64 *)v320 )
          *(_DWORD *)(v318 + 8) &= ~(1 << v317);
        v303 = (*(_DWORD *)(v318 + 12))-- == 1;
        if ( v303 )
        {
          v320 = ~*(_QWORD *)(v318 + 712);
          _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v318 + 720) + 392LL), v320);
        }
        *(_QWORD *)(v318 + 16) -= *(unsigned int *)(v306 + 1784);
        if ( *(_QWORD *)(v306 + 1792) == *(_QWORD *)(v318 + 776) )
        {
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v318 + 768), 0LL) )
          {
            do
            {
              if ( (++v25 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v320, v319, v317) )
              {
                HvlNotifyLongSpinWait(v25);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(_QWORD *)(v318 + 768) );
          }
          if ( *(_QWORD *)(v306 + 1792) == *(_QWORD *)(v318 + 776) )
          {
            --*(_DWORD *)(v318 + 784);
            *(_QWORD *)(v318 + 792) -= *(unsigned int *)(v306 + 1788);
            if ( !*(_DWORD *)(v318 + 784) )
              *(_QWORD *)(v318 + 1760) = 0LL;
            v322 = *(unsigned __int8 *)(v306 + 1829)
                 + 8 * (*(unsigned __int8 *)(v306 + 1830) + 2LL * *(unsigned __int8 *)(v306 + 1828));
            *(_QWORD *)(v318 + 8 * v322 + 864) -= *(unsigned int *)(v306 + 1788);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v318 + 768), 0LL);
          v7 = a2;
        }
        v323 = *(_BYTE *)(v306 + 388);
        if ( v323 == 1 )
        {
          *(_DWORD *)(v306 + 116) |= 2u;
        }
        else if ( v323 == 5 )
        {
          v324 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v306 + 436));
          if ( *(_BYTE *)(v306 + 391) )
            *(_QWORD *)(v306 + 1000) += v324;
          else
            *(_QWORD *)(v306 + 992) += v324;
        }
        *(_BYTE *)(v306 + 388) = 7;
        *(struct _SINGLE_LIST_ENTRY *)(v306 + 216) = v364;
        v364.Next = (struct _SINGLE_LIST_ENTRY *)(v306 + 216);
      }
      goto LABEL_590;
    }
    if ( (unsigned int)KiCheckThreadAffinity(v306) )
    {
      v330 = v316;
      while ( v330 )
      {
        _BitScanReverse64(&v331, v330);
        v332 = (*(unsigned __int16 *)(v7 + 136) << 6) + (int)v331;
        LODWORD(v360) = 0;
        v333 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                                + v332)];
        if ( (unsigned __int8)KiTryAcquirePrcbLocksForIsolationUnit(v333, (*(_DWORD *)(v306 + 120) >> 1) & 1, &v363) )
        {
          if ( (unsigned int)KiIsIsolationUnitIdleByHandle(&v363) )
          {
            v334 = *(_QWORD *)(v306 + 104);
            if ( !v334
              || !(v334 + *(unsigned int *)(v333 + 216))
              || !KiIsThreadConstrainedBySchedulingGroup(v306)
              || KiShouldPreemptionBeDeferred(v345)
              || !KiCheckForMaxOverQuotaScb(v346) )
            {
              KiRemoveCurrentThreadSharedReadyQueueEnumerator(&v374, v306);
              v335 = a1->StaticRescheduleContext;
              memset_0(v335, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
              KiStartRescheduleContext(v335, &v363, 0LL);
              KiScheduleThreadToRescheduleContext(&v335->ProcessorCount, v306, v333, 0, &v364);
              v336 = 0;
              v337 = 0;
              if ( (WORD2(xmmword_140FC0C10) & 0x400) != 0 )
                v337 = 2;
              for ( m = 0; m < v335->ProcessorCount; ++m )
                v336 |= KiCommitRescheduleContextEntry(
                          (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v335->ProcessorEntries + 32 * m + 8 * m),
                          a1,
                          v337,
                          &v364);
              if ( v335->IsolationWidth == KiIsolationWidthCore )
              {
                v339 = v335->ProcessorEntries[0].Prcb->CoreControlBlock;
                if ( ++v339->ScanStartIndex >= v339->ProcessorCount )
                  v339->ScanStartIndex = 0;
              }
              v340 = 0LL;
              LODWORD(v341) = 0;
              v384 = (unsigned __int64)v363 & 0xFFFFFFFFFFFFFFFEuLL;
              if ( ((unsigned __int8)v363 & 1) == 0 )
              {
                v340 = &v384;
                LODWORD(v341) = 1;
                goto LABEL_628;
              }
              if ( ((unsigned __int8)v363 & 1) == 1 )
              {
                v342 = *(unsigned __int8 **)(((unsigned __int64)v363 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
                LODWORD(v341) = *v342;
                v340 = (unsigned __int64 *)(v342 + 8);
              }
              while ( (_DWORD)v341 )
              {
LABEL_628:
                v341 = (unsigned int)(v341 - 1);
                _InterlockedAnd64((volatile signed __int64 *)(v340[v341] + 48), 0LL);
              }
              v363 = 0LL;
              if ( !v336 || (v279 = 0, !v335->ProcessorCount) )
              {
                v284 = (unsigned int)a5;
                LOBYTE(v25) = 0;
                v7 = a2;
                v285 = v358;
                a3 = v386;
                goto LABEL_550;
              }
              while ( 2 )
              {
                v280 = v335->ProcessorEntries[v279].___u6[0];
                v281 = v335->ProcessorEntries[v279].Prcb;
                v282 = (char *)v335 + 40 * v279;
                if ( (v280 & 0x10) == 0 )
                {
                  if ( (v280 & 8) != 0 && v281->IdleHalt )
                  {
                    v283 = a1->DeferredDispatchInterrupts.TargetType;
                    if ( !v283 )
                      goto LABEL_513;
                    if ( v283 != 1 )
                      goto LABEL_534;
                    v294 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                    if ( v294 != v281->Number )
                    {
                      a1->DeferredDispatchInterrupts.TargetType = 2;
                      v295 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v294) & 0x3F;
                      v296 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v294) >> 6;
                      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned int)v296 )
                        goto LABEL_533;
                      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v296 )
                      {
                        a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v296 + 1;
LABEL_533:
                        v297 = (char *)a1 + 8 * v296;
                        v298 = *((_QWORD *)v297 + 1725);
                        _bittestandset64(&v298, v295);
                        *((_QWORD *)v297 + 1725) = v298;
                      }
LABEL_534:
                      v292 = v281->Group;
                      v293 = v281->GroupSetMember;
                      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v292 )
                      {
LABEL_535:
                        a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v292] |= v293;
                        goto LABEL_514;
                      }
LABEL_528:
                      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned __int16)v292 )
                      {
                        a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v292 + 1;
                        goto LABEL_535;
                      }
                    }
                  }
LABEL_514:
                  if ( (v282[51] & 2) != 0 )
                    EtwTraceScheduleThread(*((_QWORD *)v282 + 5), v281, 0LL);
                  if ( (v282[51] & 4) != 0 && v281->SchedulerAssist && a1->SchedulerAssist && a1 != v281 )
                  {
                    v299 = &a1->SchedulerAssist;
                    v300 = *(unsigned int *)v281->SchedulerAssist;
                    if ( (*(_DWORD *)v281->SchedulerAssist & 0x40000) != 0 )
                      v299 = &a1->SchedulerAssist;
                    if ( (v300 & 0x100000) != 0
                      || (v299 = &a1->SchedulerAssist, (*(_DWORD *)v281->SchedulerAssist & 0x40000) != 0)
                      && (unsigned __int8)v300 < v282[52] )
                    {
                      v301 = *v299;
                      *((_DWORD *)*v299 + 3) = 2;
                      v302 = v281->Number;
                      if ( !HvlpVirtualProcessorsIdentityMapped )
                        LODWORD(v302) = (unsigned __int8)byte_140FC71C1[2 * v302] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v302] << 6);
                      v301[2] = v302;
                      if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
                        EtwTraceXSchedulerPriorityKickSend(v281->Number, 2LL, v300);
                      __writemsr(0x400000C2u, (unsigned int)v302);
                    }
                  }
                  if ( (v282[51] & 1) != 0 )
                    _InterlockedDecrement16((volatile signed __int16 *)(*((_QWORD *)v282 + 5) + 868LL));
                  if ( ++v279 >= v335->ProcessorCount )
                  {
                    v8 = a6;
                    LOBYTE(v25) = 0;
                    v284 = (unsigned int)a5;
                    v285 = v358;
                    v7 = a2;
                    a3 = v386;
                    goto LABEL_550;
                  }
                  continue;
                }
                break;
              }
              v286 = a1->DeferredDispatchInterrupts.TargetType;
              if ( !v286 )
              {
LABEL_513:
                a1->DeferredDispatchInterrupts.TargetType = 1;
                a1->DeferredDispatchInterrupts.SingleTargetIndex = v281->Number;
                goto LABEL_514;
              }
              if ( v286 == 1 )
              {
                v287 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                if ( v287 == v281->Number )
                  goto LABEL_514;
                a1->DeferredDispatchInterrupts.TargetType = 2;
                v288 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v287) & 0x3F;
                v289 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v287) >> 6;
                if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count <= (unsigned int)v289 )
                {
                  if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v289 )
                  {
                    a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v289 + 1;
                    goto LABEL_526;
                  }
                }
                else
                {
LABEL_526:
                  v290 = (char *)a1 + 8 * v289;
                  v291 = *((_QWORD *)v290 + 1725);
                  _bittestandset64(&v291, v288);
                  *((_QWORD *)v290 + 1725) = v291;
                }
              }
              v292 = v281->Group;
              v293 = v281->GroupSetMember;
              if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v292 )
                goto LABEL_535;
              goto LABEL_528;
            }
          }
          v347 = ~*(_QWORD *)(v333 + 200);
          v316 &= v347;
          v330 &= v347;
          KiReleasePrcbLocksForIsolationUnit((__int64 *)&v363);
          v7 = a2;
        }
        else
        {
          v7 = a2;
          v330 &= ~*(_QWORD *)(v333 + 200);
        }
      }
      if ( !v316 )
      {
        v284 = (unsigned int)a5;
LABEL_590:
        v285 = v358;
        ++v284;
        a3 = v386;
        LOBYTE(v25) = 0;
        LODWORD(a5) = v284;
        continue;
      }
      LOBYTE(v25) = 0;
      _BitScanReverse64(&v343, v316);
      v344 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * *(unsigned __int16 *)(v7 + 136)].Flink
                              + (int)v343)];
      if ( (*(_DWORD *)(v306 + 120) & 2) != 0 )
        v285 = *(_QWORD *)(v344 + 36512) | v358;
      else
        v285 = *(_QWORD *)(v344 + 200) | v358;
      v358 = v285;
      KiRemoveCurrentThreadSharedReadyQueueEnumerator(&v374, v306);
      KiInsertDeferredReadyList(&v364, v306);
      a3 = v386;
      v284 = (unsigned int)a5;
      v7 = a2;
    }
    else
    {
      _BitScanReverse64(&v351, v316);
      v352 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * *(unsigned __int16 *)(v7 + 136)].Flink
                              + (int)v351)];
      if ( (*(_DWORD *)(v306 + 120) & 2) != 0 )
        v285 = *(_QWORD *)(v352 + 36512) | v358;
      else
        v285 = *(_QWORD *)(v352 + 200) | v358;
      v358 = v285;
      KiRemoveCurrentThreadSharedReadyQueueEnumerator(&v374, v306);
      KiInsertDeferredReadyList(&v364, v306);
      a3 = v386;
      v7 = a2;
    }
  }
  LOBYTE(v25) = 0;
LABEL_592:
  if ( (KiVelocityFlags & 0x200000) != 0 )
  {
    _m_prefetchw(&v377);
    v325 = v377;
    if ( !(_QWORD)v377 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(
                         *((volatile signed __int64 **)&v377 + 1),
                         0LL,
                         (signed __int64)&v377) == &v377 )
        goto LABEL_29;
      v325 = KxWaitForLockChainValid(&v377);
    }
    *(_QWORD *)&v377 = 0LL;
    v326 = *((_QWORD *)&v377 + 1);
    if ( (((unsigned __int8)v326 ^ (unsigned __int8)_InterlockedExchange64(
                                                      (volatile __int64 *)(v325 + 8),
                                                      *((__int64 *)&v377 + 1))) & 4) != 0 )
    {
      _InterlockedOr(v357, 0);
      KiWakeAddressAll(v325 + 8, v326, a3);
    }
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
  }
LABEL_29:
  v26 = &a1->DeferredDispatchInterrupts;
  v27 = 31;
  v28 = a1->DeferredDispatchInterrupts.TargetType;
  if ( v28 )
  {
    if ( v28 == 1 )
    {
      v29 = 31;
      v30 = v26->Level;
      v31 = KeGetCurrentPrcb();
      v372 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
      v371 = 6LL;
      v373 = 0LL;
      ++v31->SynchCounters.IpiSendSoftwareInterruptCount;
      if ( v30 != 1 )
        v29 = 47;
      HalpInterruptSendIpi((unsigned int *)&v371, v29);
      v32 = &a1->DeferredDispatchInterrupts;
    }
    else
    {
      KiSendSoftwareInterruptAffinity(&a1->DeferredDispatchInterrupts.MultipleTargetAffinity, v26->Level);
      v32 = &a1->DeferredDispatchInterrupts;
    }
    if ( a1->DeferredDispatchInterrupts.TargetType == 2 )
    {
      *(_QWORD *)&a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = 2097153LL;
      memset_0(
        &a1->DeferredDispatchInterrupts.MultipleTargetAffinity.8,
        0,
        sizeof(a1->DeferredDispatchInterrupts.MultipleTargetAffinity.8));
    }
    a1->DeferredDispatchInterrupts.TargetType = 0;
    a1->DeferredDispatchInterrupts.SingleTargetIndex = 0xFFFF;
    v26 = v32;
  }
  v33 = v364.Next;
  if ( v364.Next )
  {
    v364.Next = v364.Next->Next;
    do
    {
      KiDeferredReadySingleThread(a1, (ULONG_PTR)&v33[-27], &v364, 0LL);
      v33 = v364.Next;
      LOBYTE(v25) = v25 + 1;
      if ( v364.Next )
        v364.Next = v364.Next->Next;
      if ( (v25 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(v26, v34);
    }
    while ( v33 );
    v35 = a1->DeferredDispatchInterrupts.TargetType;
    if ( v35 )
    {
      if ( v35 == 1 )
      {
        v36 = a1->DeferredDispatchInterrupts.Level;
        v37 = KeGetCurrentPrcb();
        v372 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
        v371 = 6LL;
        v373 = 0LL;
        ++v37->SynchCounters.IpiSendSoftwareInterruptCount;
        if ( v36 != 1 )
          v27 = 47;
        HalpInterruptSendIpi((unsigned int *)&v371, v27);
      }
      else
      {
        KiSendSoftwareInterruptAffinity(
          &a1->DeferredDispatchInterrupts.MultipleTargetAffinity,
          a1->DeferredDispatchInterrupts.Level);
      }
      if ( a1->DeferredDispatchInterrupts.TargetType != 2 )
        goto LABEL_27;
LABEL_50:
      *(_QWORD *)&a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = 2097153LL;
      memset_0(
        &a1->DeferredDispatchInterrupts.MultipleTargetAffinity.8,
        0,
        sizeof(a1->DeferredDispatchInterrupts.MultipleTargetAffinity.8));
LABEL_27:
      a1->DeferredDispatchInterrupts.TargetType = 0;
      a1->DeferredDispatchInterrupts.SingleTargetIndex = 0xFFFF;
    }
  }
}
