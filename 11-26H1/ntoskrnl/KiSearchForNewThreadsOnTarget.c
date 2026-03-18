/*
 * XREFs of KiSearchForNewThreadsOnTarget @ 0x1402404D0
 * Callers:
 *     KiSearchForNewThreadsWithinL0SearchContext @ 0x14023F880 (KiSearchForNewThreadsWithinL0SearchContext.c)
 *     KiSearchForNewThreadsWithinSearchContext @ 0x14023FC00 (KiSearchForNewThreadsWithinSearchContext.c)
 * Callees:
 *     KiFindRankBiasedIdleSmtSet @ 0x140228C34 (KiFindRankBiasedIdleSmtSet.c)
 *     KiAttemptToStealStandbyThread @ 0x14022B800 (KiAttemptToStealStandbyThread.c)
 *     KiScheduleThreadToRescheduleContext @ 0x14022E2A0 (KiScheduleThreadToRescheduleContext.c)
 *     KiEnterDeferredReadyState @ 0x14022E6D0 (KiEnterDeferredReadyState.c)
 *     KiRemoveCurrentThreadSharedReadyQueueEnumerator @ 0x14022F6F8 (KiRemoveCurrentThreadSharedReadyQueueEnumerator.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x14022FA40 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiShouldPreemptionBeDeferred @ 0x140230510 (KiShouldPreemptionBeDeferred.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140230530 (KiCheckForMaxOverQuotaScb.c)
 *     KiDetermineNextScbForScbReadyQueueEnumerator @ 0x140230558 (KiDetermineNextScbForScbReadyQueueEnumerator.c)
 *     KiGetProcessorClassForPolicy @ 0x140230634 (KiGetProcessorClassForPolicy.c)
 *     Feature_CrossProcessorClassThreadStealing__private_IsEnabledNoReportingNoInline @ 0x140230678 (Feature_CrossProcessorClassThreadStealing__private_IsEnabledNoReportingNoInline.c)
 *     KiRemoveThreadFromReadyQueue @ 0x1402306B0 (KiRemoveThreadFromReadyQueue.c)
 *     KiRemoveCurrentThreadScbReadyQueueEnumerator @ 0x140230720 (KiRemoveCurrentThreadScbReadyQueueEnumerator.c)
 *     HalpInterruptSendIpi @ 0x140230DF0 (HalpInterruptSendIpi.c)
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KiIsIsolationUnitIdleByHandle @ 0x140234E90 (KiIsIsolationUnitIdleByHandle.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140237A80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14023F140 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402436D0 (KiFlushSoftwareInterruptBatch.c)
 *     EtwTraceScheduleThread @ 0x1402467D0 (EtwTraceScheduleThread.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1402BA360 (KxWaitForLockChainValid.c)
 *     KiWakeAddressAll @ 0x1402BA5A8 (KiWakeAddressAll.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiComputeThreadQos @ 0x1402BC220 (KiComputeThreadQos.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiIsPrcbThread @ 0x1402BCC10 (KiIsPrcbThread.c)
 *     KiInsertDeferredReadyList @ 0x1402BCC40 (KiInsertDeferredReadyList.c)
 *     KiStartRescheduleContext @ 0x14032F5E0 (KiStartRescheduleContext.c)
 *     KiSendSoftwareInterruptAffinity @ 0x1403C9B60 (KiSendSoftwareInterruptAffinity.c)
 *     KiCheckThreadAffinity @ 0x140463360 (KiCheckThreadAffinity.c)
 *     KiTryAcquirePrcbLocksForIsolationUnit @ 0x140473E38 (KiTryAcquirePrcbLocksForIsolationUnit.c)
 *     KiRemoveCurrentThreadLocalReadyQueueEnumerator @ 0x1404BD66C (KiRemoveCurrentThreadLocalReadyQueueEnumerator.c)
 *     KiIsThreadRankBiased @ 0x140515EE0 (KiIsThreadRankBiased.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140527744 (EtwTraceXSchedulerPriorityKickSend.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
  _KPRCB *v41; // rdi
  __int64 v42; // rax
  int v43; // edx
  unsigned __int8 v44; // r8
  unsigned __int8 ProcessorClassForPolicy; // al
  unsigned __int8 v46; // r10
  unsigned int v47; // ebx
  unsigned int v48; // eax
  unsigned int v49; // r13d
  __int64 v50; // rbx
  __int64 v51; // r14
  __int64 v52; // r14
  __int64 v53; // rbx
  _WORD *v54; // rcx
  __int64 v55; // rax
  __int64 v56; // r12
  int v57; // eax
  unsigned int v58; // edx
  _QWORD *v59; // r9
  __int64 v60; // rcx
  __int64 v61; // r8
  unsigned __int64 v62; // r11
  char v63; // al
  __int64 v64; // rcx
  unsigned int i; // ecx
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // r10
  unsigned int v71; // r9d
  unsigned int v72; // r13d
  __int64 v73; // r12
  unsigned __int64 *v74; // r8
  unsigned __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rbx
  __int64 v78; // rbx
  __int64 v79; // rax
  __int64 v80; // r14
  _WORD *v81; // rcx
  __int64 v82; // rax
  __int64 v83; // r15
  int v84; // eax
  unsigned int v85; // edx
  __int64 v86; // rcx
  __int64 v87; // r8
  unsigned __int64 v88; // r11
  __int64 v89; // r14
  char v90; // al
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // r9
  unsigned int v94; // ecx
  unsigned int v95; // eax
  unsigned __int64 v96; // r12
  unsigned __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // r10
  unsigned int v100; // eax
  unsigned __int64 v101; // rbx
  _BYTE *v102; // rax
  _QWORD *v103; // rcx
  __int64 v104; // rdx
  unsigned __int64 v105; // rdx
  __int64 *v106; // r8
  unsigned int v107; // r9d
  int v108; // edx
  __int64 v109; // rax
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r13
  unsigned int v111; // r11d
  __int64 v112; // r10
  _KI_RESCHEDULE_CONTEXT_ENTRY *v113; // r9
  unsigned int j; // edx
  __int64 v115; // rax
  _DWORD *v116; // r8
  unsigned __int64 v117; // r15
  _QWORD *v118; // r12
  unsigned __int64 v119; // rcx
  __int64 v120; // rcx
  _KPRCB *v121; // r13
  unsigned int v122; // eax
  unsigned __int64 v123; // rbx
  _BYTE *v124; // rax
  unsigned int v125; // r8d
  _QWORD *v126; // rcx
  __int64 v127; // rdx
  _QWORD *v128; // r9
  __int64 v129; // r10
  unsigned __int64 v130; // rdx
  __int64 *v131; // r8
  __int64 v132; // r9
  int v133; // edx
  _KI_RESCHEDULE_CONTEXT *v134; // r12
  unsigned int v135; // r11d
  __int64 v136; // r9
  unsigned int k; // edx
  __int64 v138; // rdx
  unsigned int v139; // eax
  char *v140; // r9
  __int64 v141; // r12
  unsigned __int64 v142; // rcx
  __int64 v143; // r10
  __int64 v144; // r10
  int v145; // r11d
  __int64 v146; // rdx
  unsigned int v147; // eax
  _KPRCB *v148; // r15
  char *v149; // r9
  unsigned __int64 v150; // rcx
  _KTHREAD *IdleThread; // r10
  __int64 v152; // r10
  int v153; // r11d
  unsigned int v154; // ecx
  char v155; // al
  unsigned int v156; // ecx
  unsigned int v157; // eax
  unsigned __int64 v158; // rcx
  __int64 v159; // rcx
  __int64 v160; // rcx
  unsigned __int64 v161; // rcx
  __int64 v162; // rcx
  __int64 v163; // rcx
  __int64 ScbForScbReadyQueueEnumerator; // rax
  __int64 v165; // r11
  unsigned int v166; // eax
  unsigned __int8 *v167; // rax
  __int64 v168; // r10
  __int64 v169; // rax
  unsigned __int8 *v170; // rax
  __int64 v171; // rax
  unsigned __int64 v172; // rcx
  __int64 v173; // rcx
  __int64 v174; // rcx
  unsigned __int64 v175; // rcx
  __int64 v176; // rcx
  __int64 v177; // rcx
  int v178; // r9d
  unsigned __int64 v179; // rax
  char v180; // r10
  int v181; // r9d
  unsigned __int64 v182; // rax
  char v183; // r10
  unsigned __int64 v184; // rcx
  __int64 v185; // r10
  char v186; // al
  char v187; // r13
  char v188; // r15
  unsigned int v189; // r14d
  _KCORE_CONTROL_BLOCK *v190; // rcx
  _BYTE *v191; // rax
  __int64 v192; // rdx
  unsigned __int64 *v193; // r8
  unsigned int v194; // r15d
  char v195; // al
  _KPRCB *v196; // r14
  char *v197; // rbx
  unsigned __int8 v198; // al
  unsigned __int8 v199; // al
  unsigned int v200; // eax
  unsigned int v201; // r8d
  __int64 v202; // rcx
  char *v203; // rdx
  __int64 v204; // rcx
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  unsigned int v207; // eax
  unsigned int v208; // r8d
  __int64 v209; // rcx
  char *v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // r8
  void **v213; // rax
  _DWORD *v214; // rcx
  __int64 Number; // r13
  __int64 v216; // rcx
  unsigned int v217; // r10d
  _KPRCB *v218; // r11
  char *v219; // r9
  unsigned __int64 v220; // rcx
  int v221; // r10d
  __int64 v222; // r11
  _KTHREAD *SmtIsolationThread; // r15
  char v224; // cl
  __int64 v225; // r11
  __int64 v226; // rcx
  __int64 v227; // rcx
  __int64 v228; // rcx
  unsigned __int64 NewThread; // rcx
  _KPRCB *Prcb; // r10
  unsigned __int8 v231; // al
  char v232; // r9
  char v233; // r12
  unsigned int v234; // r14d
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  _BYTE *v236; // rax
  __int64 v237; // rdx
  unsigned __int64 *v238; // r8
  unsigned int v239; // r12d
  char *v240; // rbx
  char v241; // al
  __int64 v242; // r14
  unsigned __int8 v243; // al
  unsigned __int8 v244; // al
  unsigned int v245; // eax
  unsigned int v246; // r8d
  __int64 v247; // rcx
  char *v248; // rdx
  __int64 v249; // rcx
  __int64 v250; // rcx
  __int64 v251; // rdx
  unsigned int v252; // eax
  unsigned int v253; // r8d
  __int64 v254; // rcx
  char *v255; // rdx
  __int64 v256; // rcx
  __int64 v257; // r8
  void **p_SchedulerAssist; // rax
  _DWORD *v259; // rdx
  __int64 v260; // rcx
  char v261; // r15
  __int64 v262; // rcx
  unsigned int v263; // r10d
  __int64 v264; // r15
  char *v265; // r9
  __int64 v266; // r11
  unsigned __int64 v267; // rcx
  int v268; // r10d
  __int64 v269; // r11
  __int64 v270; // r12
  char v271; // cl
  __int64 v272; // r11
  __int64 v273; // rcx
  __int64 v274; // rcx
  __int64 v275; // rcx
  __int64 v276; // rcx
  __int64 v277; // rcx
  unsigned int v278; // r14d
  char v279; // al
  _KPRCB *v280; // rdi
  char *v281; // rbx
  unsigned __int8 v282; // al
  unsigned int v283; // r13d
  __int64 v284; // rdi
  unsigned __int8 v285; // al
  unsigned int v286; // eax
  unsigned int v287; // r8d
  __int64 v288; // rcx
  char *v289; // rdx
  __int64 v290; // rcx
  __int64 v291; // rcx
  unsigned __int64 v292; // rdx
  unsigned int v293; // eax
  unsigned int v294; // r8d
  __int64 v295; // rcx
  char *v296; // rdx
  __int64 v297; // rcx
  void **v298; // r9
  __int64 v299; // r8
  _DWORD *v300; // rcx
  __int64 v301; // r13
  bool v302; // zf
  unsigned int v303; // eax
  __int64 v304; // rbx
  __int64 v305; // rbx
  __int64 v306; // rax
  __int64 v307; // r14
  _WORD *v308; // rcx
  __int64 v309; // rax
  __int64 v310; // r15
  int v311; // eax
  unsigned int v312; // edx
  __int64 v313; // rcx
  __int64 v314; // r10
  unsigned __int64 v315; // rdi
  __int64 v316; // r8
  __int64 v317; // rdi
  __int64 v318; // rdx
  unsigned __int64 v319; // rcx
  unsigned __int64 *v320; // rax
  __int64 v321; // rcx
  char v322; // al
  __int64 v323; // rcx
  __int64 v324; // rax
  __int64 v325; // rdx
  unsigned __int64 v326; // rdx
  unsigned int v327; // ecx
  unsigned int v328; // eax
  unsigned __int64 v329; // r14
  unsigned __int64 v330; // rcx
  __int64 v331; // rcx
  __int64 v332; // r13
  __int64 v333; // rax
  _KI_RESCHEDULE_CONTEXT *v334; // r15
  char v335; // r14
  char v336; // di
  unsigned int m; // ebx
  _KCORE_CONTROL_BLOCK *v338; // rcx
  unsigned __int64 *v339; // r8
  __int64 v340; // rdx
  unsigned __int8 *v341; // rax
  unsigned __int64 v342; // rcx
  __int64 v343; // rcx
  __int64 v344; // rcx
  __int64 v345; // rdx
  __int64 v346; // rax
  int v347; // r8d
  unsigned __int64 v348; // rax
  char v349; // r9
  unsigned __int64 v350; // rcx
  __int64 v351; // rcx
  __int64 v352; // rcx
  __int64 v353; // rdx
  __int64 v354; // rcx
  __int64 v355; // rdx
  signed __int32 v356[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v357; // [rsp+30h] [rbp-D0h]
  char v358; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v359; // [rsp+40h] [rbp-C0h] BYREF
  struct _SINGLE_LIST_ENTRY v360; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v361; // [rsp+50h] [rbp-B0h] BYREF
  _KI_RESCHEDULE_CONTEXT *v362; // [rsp+58h] [rbp-A8h] BYREF
  struct _SINGLE_LIST_ENTRY v363; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v364; // [rsp+68h] [rbp-98h] BYREF
  __int128 v365; // [rsp+78h] [rbp-88h]
  __int64 v366; // [rsp+88h] [rbp-78h]
  __int64 v367; // [rsp+90h] [rbp-70h] BYREF
  __int128 v368; // [rsp+98h] [rbp-68h]
  __int64 v369; // [rsp+A8h] [rbp-58h]
  __int64 v370; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v371; // [rsp+B8h] [rbp-48h]
  __int64 v372; // [rsp+BCh] [rbp-44h]
  __int64 v373; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v374; // [rsp+D0h] [rbp-30h]
  __int64 v375; // [rsp+E0h] [rbp-20h]
  __int128 v376; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v377; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v378[2]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v379; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v380[2]; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v381; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int64 v382; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 v383; // [rsp+138h] [rbp+38h] BYREF
  __int64 v385; // [rsp+190h] [rbp+90h]

  v385 = a3;
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
            LODWORD(v359) = 0;
            _BitScanForward64(&v40, __ROR8__(v38, GroupIndex));
            LODWORD(v40) = (GroupIndex + (_BYTE)v40) & 0x3F;
            v38 &= ~(1LL << v40);
            v41 = (_KPRCB *)KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                                             + 64 * *(unsigned __int16 *)(v7 + 136)
                                             + (unsigned int)v40)];
            if ( (_KPRCB *)v6 != v41 )
            {
              v42 = *(_QWORD *)(v6 + 16);
              if ( v42 )
              {
                if ( v42 != *(_QWORD *)(v6 + 24)
                  && v42 != *(_QWORD *)(v6 + 14392)
                  && v42 != *(_QWORD *)(v6 + 36544)
                  && ((**(_BYTE **)(v6 + 56) & 0x7Fu) >= 0x10 || (KiVelocityFlags & 0x1000000) != 0
                                                              && *(_BYTE *)(v6 + 7)) )
                {
                  break;
                }
              }
            }
          }
          if ( !(unsigned int)Feature_CrossProcessorClassThreadStealing__private_IsEnabledNoReportingNoInline() )
            break;
          if ( KeHeteroSystem )
          {
            KiGetProcessorClassForPolicy(
              v6,
              KiDynamicHeteroCpuPolicy[2 * (*(_BYTE *)(*(_QWORD *)(v6 + 56) + 64LL) & 7)
                                     + (((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(v6 + 56) + 64LL) >> 6) & 1)],
              (*(_BYTE *)(*(_QWORD *)(v6 + 56) + 64LL) >> 3) & 7);
            ProcessorClassForPolicy = KiGetProcessorClassForPolicy((__int64)v41, v43, v44);
            v7 = a2;
            if ( v46 > ProcessorClassForPolicy )
              continue;
          }
          goto LABEL_231;
        }
        v7 = a2;
        if ( *(_BYTE *)(v6 + 35353) == v41->PowerState.PerformanceSchedulingClass )
        {
LABEL_231:
          v155 = KiAttemptToStealStandbyThread(a1, (_KPRCB *)v6, v41);
          v7 = a2;
          if ( v155 )
            break;
        }
      }
    }
LABEL_4:
    v360.Next = 0LL;
    v369 = 0LL;
    v367 = 0LL;
    v366 = 0LL;
    v368 = 0LL;
    BYTE4(v368) = 32;
    v365 = 0LL;
    BYTE4(v365) = 32;
    v364 = 0LL;
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
          v372 = 0LL;
          v17 = 31;
          v371 = SingleTargetIndex;
          v370 = 6LL;
          ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
          if ( Level != 1 )
            v17 = 47;
          HalpInterruptSendIpi((unsigned int *)&v370, v17);
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
      Next = v360.Next;
      if ( v360.Next )
      {
        v20 = 0;
        v360.Next = v360.Next->Next;
        do
        {
          KiDeferredReadySingleThread(a1, (ULONG_PTR)&Next[-27], &v360, 0LL);
          Next = v360.Next;
          ++v20;
          if ( v360.Next )
            v360.Next = v360.Next->Next;
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
            v371 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
            v370 = 6LL;
            v372 = 0LL;
            ++v24->SynchCounters.IpiSendSoftwareInterruptCount;
            if ( (_BYTE)v23 != 1 )
              v12 = 47;
            HalpInterruptSendIpi((unsigned int *)&v370, v12);
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
    v47 = 0;
    v377 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
LABEL_72:
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 48), 0LL) )
    {
      while ( 1 )
      {
        if ( (++v47 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
        {
          if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
          {
LABEL_110:
            HvlNotifyLongSpinWait(v47);
            goto LABEL_75;
          }
          for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
          {
            v66 = KiProcessorBlock[i];
            if ( (*(_BYTE *)(v66 + 35) & 1) != 0 )
            {
              v67 = *(_QWORD *)(v66 + 36600);
              if ( !v67 || !*(_BYTE *)(v67 + 65) || !*(_BYTE *)(v67 + 64) )
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
    v367 = v6;
    v48 = *(_DWORD *)(v6 + 33752);
    LODWORD(v368) = v48;
    v369 = v6 + 33856;
    if ( v48 )
    {
      _BitScanReverse(&v48, v48);
      LODWORD(v359) = 0;
      BYTE4(v368) = v48;
      *((_QWORD *)&v368 + 1) = v6 + 33856 + 16LL * v48;
    }
    else
    {
      *((_QWORD *)&v368 + 1) = 0LL;
    }
    v49 = 0;
    LODWORD(v362) = 0;
    v50 = 0LL;
    v357 = 0LL;
LABEL_80:
    while ( v49 < 0x40 && *((_QWORD *)&v368 + 1) )
    {
      while ( 1 )
      {
        v51 = **((_QWORD **)&v368 + 1);
        *((_QWORD *)&v368 + 1) = v51;
        if ( v51 != v369 + 16LL * BYTE4(v368) )
          break;
        v94 = v368 & ~(1 << SBYTE4(v368));
        LODWORD(v368) = v94;
        if ( !v94 )
        {
          BYTE4(v368) = 0;
          *((_QWORD *)&v368 + 1) = 0LL;
          goto LABEL_112;
        }
        _BitScanReverse(&v95, v94);
        LODWORD(v359) = 0;
        BYTE4(v368) = v95;
        *((_QWORD *)&v368 + 1) = v369 + 16LL * (unsigned __int8)v95;
      }
      v52 = v51 - 216;
      if ( (v385 & *(_QWORD *)(a2 + 8)) == 0 )
        break;
      v53 = v385 & *(_QWORD *)(a2 + 8) & ~v50;
      if ( !v53 )
        break;
      v54 = *(_WORD **)(v52 + 576);
      v55 = *(unsigned __int16 *)(a2 + 136);
      if ( (unsigned __int16)v55 >= *v54 )
        v56 = 0LL;
      else
        v56 = *(_QWORD *)&v54[4 * v55 + 4];
      v57 = KiComputeThreadQos(v52);
      v58 = *(_DWORD *)(v52 + 80);
      v59 = (_QWORD *)a2;
      if ( v58 <= *(_DWORD *)(v52 + 84) )
        v58 = *(_DWORD *)(v52 + 84);
      v60 = *(_QWORD *)(*(_QWORD *)(a2 + 192)
                      + 24LL
                      * (*(unsigned __int8 *)(v52 + 517)
                       + *(unsigned __int8 *)(a2 + 185)
                       * ((unsigned int)(v58 >= KiDynamicHeteroCpuPolicyExpectedCycles) + 2 * v57))
                      + 16);
      if ( (v60 & v56) != 0 )
        v56 &= v60;
      v61 = *(_QWORD *)(v52 + 104);
      v62 = v53 & v56 & *(_QWORD *)(a2 + 8LL * ((*(_DWORD *)(v52 + 120) >> 1) & 1) + 16);
      if ( v61
        && *(char *)(v52 + 195) < 16
        && (*(_DWORD *)(v52 + 120) & 0x200) == 0
        && !*(_DWORD *)(v52 + 484)
        && *(_BYTE *)(v52 + 390) != 1 )
      {
        v76 = 0LL;
        if ( v62 )
        {
          v178 = *(unsigned __int16 *)(a2 + 136) << 6;
          do
          {
            _BitScanForward64(&v179, v62);
            LODWORD(v359) = 0;
            if ( !KiCheckForMaxOverQuotaScb(
                    v61
                  + 464LL
                  * *((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                    + (unsigned int)(v178 + v179))
                  + 128) )
              v76 |= 1LL << v180;
          }
          while ( v62 );
          v59 = (_QWORD *)a2;
        }
        v62 = v76;
        v361 = (_DWORD *)v76;
        if ( KiPerfIsoEnabled && (unsigned __int8)KiIsThreadRankBiased(v52, a1) )
        {
          KiFindRankBiasedIdleSmtSet((__int64)v59, &v361);
          v62 = (unsigned __int64)v361;
        }
      }
      if ( v62 )
      {
        if ( *(_QWORD *)(v52 + 568) != KiCpuSetSequence && (*(_DWORD *)(v52 + 116) & 8) == 0 )
        {
          _BitScanReverse64(&v172, v62);
          v173 = (*(unsigned __int16 *)(a2 + 136) << 6) + (int)v172;
          LODWORD(v359) = 0;
          v174 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                                  + v173)];
          if ( (*(_DWORD *)(v52 + 120) & 2) != 0 )
            v50 = *(_QWORD *)(v174 + 36512) | v357;
          else
            v50 = *(_QWORD *)(v174 + 200) | v357;
          v357 = v50;
          *((_QWORD *)&v368 + 1) = *(_QWORD *)(*((_QWORD *)&v368 + 1) + 8LL);
          KiRemoveThreadFromReadyQueue(v367, (_QWORD *)(v52 + 216), SBYTE4(v368));
          KiInsertDeferredReadyList(&v360, v52);
          continue;
        }
        v96 = v62;
        while ( 1 )
        {
LABEL_173:
          if ( !v96 )
          {
            v50 = v357;
            if ( v62 )
            {
              _BitScanReverse64(&v158, v62);
              v159 = (*(unsigned __int16 *)(a2 + 136) << 6) + (int)v158;
              LODWORD(v359) = 0;
              v160 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                                      + v159)];
              if ( (*(_DWORD *)(v52 + 120) & 2) != 0 )
                v50 = *(_QWORD *)(v160 + 36512) | v357;
              else
                v50 = *(_QWORD *)(v160 + 200) | v357;
              v357 = v50;
              KiRemoveCurrentThreadLocalReadyQueueEnumerator(&v367, v52, v61, v59);
              KiEnterDeferredReadyState(v52);
              *(struct _SINGLE_LIST_ENTRY *)(v52 + 216) = v360;
              v360.Next = (struct _SINGLE_LIST_ENTRY *)(v52 + 216);
            }
            else
            {
              LODWORD(v362) = ++v49;
            }
            goto LABEL_80;
          }
          _BitScanReverse64(&v97, v96);
          v98 = (*(unsigned __int16 *)(a2 + 136) << 6) + (int)v97;
          LODWORD(v359) = 0;
          v100 = (*(_DWORD *)(v52 + 120) >> 1) & 1;
          v359 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                                  + v98)];
          v99 = v359;
          v101 = v100 | v359 & 0xFFFFFFFFFFFFFFFEuLL;
          v378[0] = v359;
          v361 = (_DWORD *)v101;
          if ( !v100 )
            break;
          v102 = *(_BYTE **)(v359 + 36504);
          v61 = (unsigned __int8)*v102;
          v103 = v102 + 8;
          LODWORD(v104) = 0;
          v59 = v102 + 8;
          if ( *v102 )
            goto LABEL_178;
LABEL_180:
          if ( (_DWORD)v104 != (_DWORD)v61 )
            goto LABEL_249;
          v105 = v101 & 0xFFFFFFFFFFFFFFFEuLL;
          v106 = 0LL;
          v378[1] = v101 & 0xFFFFFFFFFFFFFFFEuLL;
          v107 = 0;
          if ( (v101 & 1) != 0 )
          {
            if ( (v101 & 1) == 1 )
            {
              v167 = *(unsigned __int8 **)(v105 + 36504);
              v107 = *v167;
              v106 = (__int64 *)(v167 + 8);
            }
            v108 = 1;
            if ( v107 )
            {
              v168 = v107;
              do
              {
                v169 = *v106++;
                v108 = ((*(_BYTE *)(v169 + 35) & 1) == 0) & (unsigned __int8)v108;
                --v168;
              }
              while ( v168 );
              v99 = v359;
            }
          }
          else
          {
            v108 = (*(_BYTE *)(v105 + 35) & 1) == 0;
          }
          if ( v108 )
          {
            v109 = *(_QWORD *)(v52 + 104);
            if ( !v109
              || !(v109 + *(unsigned int *)(v99 + 216))
              || !KiIsThreadConstrainedBySchedulingGroup(v52)
              || KiShouldPreemptionBeDeferred(v352)
              || !KiCheckForMaxOverQuotaScb(v353) )
            {
              *((_QWORD *)&v368 + 1) = *(_QWORD *)(*((_QWORD *)&v368 + 1) + 8LL);
              KiRemoveThreadFromReadyQueue(v367, (_QWORD *)(v52 + 216), SBYTE4(v368));
              StaticRescheduleContext = a1->StaticRescheduleContext;
              memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
              KiStartRescheduleContext(StaticRescheduleContext, &v361, 0LL);
              v111 = 0;
              v112 = v359;
              v113 = 0LL;
              for ( j = 0; ; ++j )
              {
                if ( j >= StaticRescheduleContext->ProcessorCount )
                  goto LABEL_210;
                v115 = j;
                if ( StaticRescheduleContext->ProcessorEntries[v115].Prcb == (_KPRCB *)v359 )
                  break;
              }
              v113 = &StaticRescheduleContext->ProcessorEntries[v115];
LABEL_210:
              v138 = (*(_DWORD *)(v52 + 120) >> 1) & 1;
              v139 = (v113->AllCompareThreadStateFlags >> 1) & 1;
              v361 = (_DWORD *)v138;
              if ( (unsigned int)v138 >= v139 )
              {
                if ( (_DWORD)v138 )
                {
                  v263 = 0;
                  if ( StaticRescheduleContext->ProcessorCount )
                  {
                    v264 = v359;
                    do
                    {
                      v265 = (char *)StaticRescheduleContext + 40 * v263;
                      v266 = *((_QWORD *)v265 + 2);
                      v267 = *((_QWORD *)v265 + 5);
                      if ( v266 == v264 )
                      {
                        if ( v267 && v267 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v267) )
                        {
                          if ( (v265[49] & 1) != 0 )
                            *(_DWORD *)(v273 + 116) |= 2u;
                          *(_BYTE *)(v273 + 565) = 1;
                          KiInsertDeferredReadyList(&v360, v273);
                        }
                        *((_QWORD *)v265 + 4) = v52;
                        v265[48] &= ~1u;
                        v265[48] = (v265[48] & 0xFD ^ (2 * ((*(_DWORD *)(v52 + 120) & 2) != 0))) & 0xC3 | 4;
                        *((_QWORD *)v265 + 5) = v52;
                        v265[49] &= ~1u;
                        if ( !(unsigned __int8)KiIsPrcbThread(v52) )
                          *(_DWORD *)(v52 + 536) = *(_DWORD *)(v269 + 36);
                      }
                      else
                      {
                        v270 = *(_QWORD *)(v266 + 36544);
                        if ( v267 && v267 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v267) )
                        {
                          if ( (v265[49] & 1) != 0 )
                            *(_DWORD *)(v274 + 116) |= 2u;
                          *(_BYTE *)(v274 + 565) = 1;
                          KiInsertDeferredReadyList(&v360, v274);
                        }
                        *((_QWORD *)v265 + 4) = v52;
                        v265[48] &= ~1u;
                        v271 = (v265[48] & 0xFD ^ (2 * ((*(_DWORD *)(v52 + 120) & 2) != 0))) & 0xC3 | 0x24;
                        if ( v52 == v270 )
                          v271 = (v265[48] & 0xFD ^ (2 * ((*(_DWORD *)(v52 + 120) & 2) != 0))) & 0xC3 | 4;
                        v265[48] = v271;
                        *((_QWORD *)v265 + 5) = v270;
                        v265[49] &= ~1u;
                        if ( !(unsigned __int8)KiIsPrcbThread(v270) )
                          *(_DWORD *)(v270 + 536) = *(_DWORD *)(v272 + 36);
                      }
                      v263 = v268 + 1;
                    }
                    while ( v263 < StaticRescheduleContext->ProcessorCount );
                    v6 = (__int64)a5;
LABEL_218:
                    LODWORD(v138) = (_DWORD)v361;
                    v111 = 0;
                  }
                }
                else
                {
                  NewThread = (unsigned __int64)v113->NewThread;
                  Prcb = v113->Prcb;
                  if ( NewThread && NewThread <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(NewThread) )
                  {
                    if ( (*((_BYTE *)&v113->0 + 1) & 1) != 0 )
                      *(_DWORD *)(v262 + 116) |= 2u;
                    *(_BYTE *)(v262 + 565) = 1;
                    KiInsertDeferredReadyList(&v360, v262);
                    LODWORD(v138) = (_DWORD)v361;
                  }
                  v113->CompareThread = (_KTHREAD *)v52;
                  v231 = v113->AllCompareThreadStateFlags & 0xFE;
                  v113->AllCompareThreadStateFlags = v231;
                  v113->AllCompareThreadStateFlags = (v231 & 0xFD ^ (2 * ((*(_DWORD *)(v52 + 120) & 2) != 0))) & 0xC3 | 4;
                  v113->NewThread = (_KTHREAD *)v52;
                  *((_BYTE *)&v113->0 + 1) &= ~1u;
                  if ( *(_UNKNOWN **)(v52 + 544) != &unk_140FC8F40 )
                    *(_DWORD *)(v52 + 536) = Prcb->Number;
                }
              }
              else if ( StaticRescheduleContext->ProcessorCount )
              {
                do
                {
                  v140 = (char *)StaticRescheduleContext + 40 * v111;
                  v141 = *((_QWORD *)v140 + 2);
                  v142 = *((_QWORD *)v140 + 5);
                  if ( v141 == v112 )
                  {
                    if ( v142 && v142 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v142) )
                    {
                      if ( (v140[49] & 1) != 0 )
                        *(_DWORD *)(v276 + 116) |= 2u;
                      *(_BYTE *)(v276 + 565) = 1;
                      KiInsertDeferredReadyList(&v360, v276);
                    }
                    *((_QWORD *)v140 + 4) = v52;
                    v140[48] &= ~1u;
                    v140[48] = (v140[48] & 0xFD ^ (2 * ((*(_DWORD *)(v52 + 120) & 2) != 0))) & 0xC3 | 4;
                    *((_QWORD *)v140 + 5) = v52;
                    v140[49] &= ~1u;
                    if ( !(unsigned __int8)KiIsPrcbThread(v52) )
                      *(_DWORD *)(v52 + 536) = *(_DWORD *)(v141 + 36);
                  }
                  else
                  {
                    v143 = *(_QWORD *)(v141 + 24);
                    if ( v142 && v142 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v142) )
                    {
                      if ( (v140[49] & 1) != 0 )
                        *(_DWORD *)(v226 + 116) |= 2u;
                      *(_BYTE *)(v226 + 565) = 1;
                      KiInsertDeferredReadyList(&v360, v226);
                    }
                    *((_QWORD *)v140 + 4) = v143;
                    v140[48] |= 1u;
                    v140[48] = (v140[48] & 0xFD ^ (2 * ((*(_DWORD *)(v143 + 120) & 2) != 0))) & 0xC3 | 4;
                    *((_QWORD *)v140 + 5) = v143;
                    v140[49] &= ~1u;
                    if ( !(unsigned __int8)KiIsPrcbThread(v143) )
                      *(_DWORD *)(v144 + 536) = *(_DWORD *)(v141 + 36);
                    v112 = v359;
                  }
                  v111 = v145 + 1;
                }
                while ( v111 < StaticRescheduleContext->ProcessorCount );
                goto LABEL_218;
              }
              v232 = 0;
              StaticRescheduleContext->MaximumThreadIsolationWidth = v138;
              v233 = v111;
              if ( (WORD2(xmmword_140FBFC10) & 0x400) != 0 )
                v233 = 2;
              v234 = v111;
              if ( StaticRescheduleContext->ProcessorCount )
              {
                v261 = 0;
                do
                {
                  v261 |= KiCommitRescheduleContextEntry(
                            (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                                  + 32 * v234
                                                                  + 8 * v234),
                            a1,
                            v233,
                            &v360);
                  ++v234;
                }
                while ( v234 < StaticRescheduleContext->ProcessorCount );
                v358 = v261;
                v232 = v261;
                v6 = (__int64)a5;
              }
              if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
              {
                CoreControlBlock = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
                if ( ++CoreControlBlock->ScanStartIndex >= CoreControlBlock->ProcessorCount )
                  CoreControlBlock->ScanStartIndex = 0;
              }
              v379 = v101 & 0xFFFFFFFFFFFFFFFEuLL;
              if ( (v101 & 1) == 0 )
              {
                v238 = &v379;
                LODWORD(v237) = 1;
                goto LABEL_413;
              }
              v236 = *(_BYTE **)((v101 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
              LODWORD(v237) = (unsigned __int8)*v236;
              v238 = (unsigned __int64 *)(v236 + 8);
              if ( *v236 )
              {
                do
                {
LABEL_413:
                  v237 = (unsigned int)(v237 - 1);
                  _InterlockedAnd64((volatile signed __int64 *)(v238[v237] + 48), 0LL);
                }
                while ( (_DWORD)v237 );
              }
              if ( !v232 || (v239 = 0, !StaticRescheduleContext->ProcessorCount) )
              {
                v49 = (unsigned int)v362;
                v50 = v357;
                goto LABEL_80;
              }
              while ( 2 )
              {
                v240 = (char *)StaticRescheduleContext + 40 * v239;
                v241 = v240[51];
                v242 = *((_QWORD *)v240 + 2);
                if ( (v241 & 0x10) == 0 )
                {
                  if ( (v241 & 8) != 0 && *(_BYTE *)(v242 + 7) )
                  {
                    v243 = a1->DeferredDispatchInterrupts.TargetType;
                    if ( !v243 )
                      goto LABEL_420;
                    if ( v243 != 1 )
                      goto LABEL_441;
                    v252 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                    if ( v252 != *(_DWORD *)(v242 + 36) )
                    {
                      a1->DeferredDispatchInterrupts.TargetType = 2;
                      v253 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * v252) & 0x3F;
                      v254 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * v252) >> 6;
                      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned int)v254 )
                        goto LABEL_440;
                      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v254 )
                      {
                        a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v254 + 1;
LABEL_440:
                        v255 = (char *)a1 + 8 * v254;
                        v256 = *((_QWORD *)v255 + 1725);
                        _bittestandset64(&v256, v253);
                        *((_QWORD *)v255 + 1725) = v256;
                      }
LABEL_441:
                      v250 = *(unsigned __int8 *)(v242 + 208);
                      v251 = *(_QWORD *)(v242 + 200);
                      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v250 )
                      {
LABEL_442:
                        a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v250] |= v251;
                        goto LABEL_421;
                      }
LABEL_435:
                      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned __int16)v250 )
                      {
                        a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v250 + 1;
                        goto LABEL_442;
                      }
                    }
                  }
LABEL_421:
                  if ( (v240[51] & 2) != 0 )
                    EtwTraceScheduleThread(*((_QWORD *)v240 + 5), v242, 0LL);
                  if ( (v240[51] & 4) != 0
                    && *(_QWORD *)(v242 + 36600)
                    && a1->SchedulerAssist
                    && a1 != (struct _KPRCB *)v242 )
                  {
                    v257 = **(unsigned int **)(v242 + 36600);
                    p_SchedulerAssist = &a1->SchedulerAssist;
                    if ( (**(_DWORD **)(v242 + 36600) & 0x40000) != 0 )
                      p_SchedulerAssist = &a1->SchedulerAssist;
                    if ( (v257 & 0x100000) != 0
                      || (p_SchedulerAssist = &a1->SchedulerAssist, (**(_DWORD **)(v242 + 36600) & 0x40000) != 0)
                      && (unsigned __int8)v257 < v240[52] )
                    {
                      v259 = *p_SchedulerAssist;
                      *((_DWORD *)*p_SchedulerAssist + 3) = 2;
                      v260 = *(unsigned int *)(v242 + 36);
                      LODWORD(v359) = *(_DWORD *)(v242 + 36);
                      if ( !HvlpVirtualProcessorsIdentityMapped )
                      {
                        LODWORD(v260) = (unsigned __int8)byte_140FC61D1[2 * v260] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v260] << 6);
                        LODWORD(v359) = v260;
                      }
                      v259[2] = v260;
                      if ( (BYTE4(xmmword_140FBFC10) & 0x20) != 0 )
                      {
                        EtwTraceXSchedulerPriorityKickSend(*(unsigned int *)(v242 + 36), 2LL, v257);
                        LODWORD(v260) = v359;
                      }
                      __writemsr(0x400000C2u, (unsigned int)v260);
                    }
                  }
                  if ( (v240[51] & 1) != 0 )
                    _InterlockedDecrement16((volatile signed __int16 *)(*((_QWORD *)v240 + 5) + 868LL));
                  if ( ++v239 >= StaticRescheduleContext->ProcessorCount )
                  {
                    v49 = (unsigned int)v362;
                    v50 = v357;
                    goto LABEL_80;
                  }
                  continue;
                }
                break;
              }
              v244 = a1->DeferredDispatchInterrupts.TargetType;
              if ( !v244 )
              {
LABEL_420:
                a1->DeferredDispatchInterrupts.TargetType = 1;
                a1->DeferredDispatchInterrupts.SingleTargetIndex = *(_DWORD *)(v242 + 36);
                goto LABEL_421;
              }
              if ( v244 == 1 )
              {
                v245 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                if ( v245 == *(_DWORD *)(v242 + 36) )
                  goto LABEL_421;
                a1->DeferredDispatchInterrupts.TargetType = 2;
                v246 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * v245) & 0x3F;
                v247 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * v245) >> 6;
                if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count <= (unsigned int)v247 )
                {
                  if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v247 )
                  {
                    a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v247 + 1;
                    goto LABEL_433;
                  }
                }
                else
                {
LABEL_433:
                  v248 = (char *)a1 + 8 * v247;
                  v249 = *((_QWORD *)v248 + 1725);
                  _bittestandset64(&v249, v246);
                  *((_QWORD *)v248 + 1725) = v249;
                }
              }
              v250 = *(unsigned __int8 *)(v242 + 208);
              v251 = *(_QWORD *)(v242 + 200);
              if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v250 )
                goto LABEL_442;
              goto LABEL_435;
            }
          }
          v96 &= ~*(_QWORD *)(v99 + 200);
          KiReleasePrcbLocksForIsolationUnit((__int64 *)&v361);
        }
        v103 = v378;
        v61 = 1LL;
        v59 = v378;
        LODWORD(v104) = 0;
LABEL_178:
        while ( !_interlockedbittestandset64((volatile signed __int32 *)(*v103 + 48LL), 0LL) )
        {
          LODWORD(v104) = v104 + 1;
          ++v103;
          if ( (unsigned int)v104 >= (unsigned int)v61 )
            goto LABEL_180;
        }
LABEL_249:
        while ( (_DWORD)v104 )
        {
          v104 = (unsigned int)(v104 - 1);
          _InterlockedAnd64((volatile signed __int64 *)(v59[v104] + 48LL), 0LL);
        }
        v96 &= ~*(_QWORD *)(v359 + 200);
        goto LABEL_173;
      }
      if ( *(_QWORD *)(v52 + 568) != KiCpuSetSequence && (*(_DWORD *)(v52 + 116) & 8) == 0 )
      {
        *((_QWORD *)&v368 + 1) = *(_QWORD *)(*((_QWORD *)&v368 + 1) + 8LL);
        KiRemoveThreadFromReadyQueue(v367, (_QWORD *)(v52 + 216), SBYTE4(v368));
        v63 = *(_BYTE *)(v52 + 388);
        if ( v63 == 1 )
        {
          *(_DWORD *)(v52 + 116) |= 2u;
        }
        else if ( v63 == 5 )
        {
          v64 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v52 + 436));
          if ( *(_BYTE *)(v52 + 391) )
            *(_QWORD *)(v52 + 1000) += v64;
          else
            *(_QWORD *)(v52 + 992) += v64;
        }
        *(_BYTE *)(v52 + 388) = 7;
        *(struct _SINGLE_LIST_ENTRY *)(v52 + 216) = v360;
        v360.Next = (struct _SINGLE_LIST_ENTRY *)(v52 + 216);
      }
      v50 = v357;
      LODWORD(v362) = ++v49;
    }
LABEL_112:
    v364 = (unsigned __int64)v6;
    v68 = *(_QWORD *)(v6 + 33848);
    if ( (v68 & 1) != 0 )
    {
      if ( v68 == 1 )
        goto LABEL_116;
      v69 = v68 ^ ((v6 + 33840) | 1);
    }
    else
    {
      v69 = *(_QWORD *)(v6 + 33848);
    }
    if ( v69 )
    {
      *((_QWORD *)&v364 + 1) = v69 - 104;
      v154 = *(unsigned __int16 *)(v69 - 104 + 136);
      v70 = v69 - 104 + 160;
      LODWORD(v365) = v154;
      v366 = v70;
      if ( v154 )
      {
        _BitScanReverse(&v71, v154);
        LODWORD(a5) = 0;
        BYTE4(v365) = v71;
        *((_QWORD *)&v365 + 1) = v70 + 16LL * v71;
        goto LABEL_118;
      }
      *((_QWORD *)&v365 + 1) = 0LL;
LABEL_117:
      LOBYTE(v71) = BYTE4(v365);
LABEL_118:
      v72 = 0;
      LODWORD(a5) = 0;
      v73 = 0LL;
      v357 = 0LL;
LABEL_119:
      if ( v72 >= 0x40 )
        goto LABEL_121;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !*((_QWORD *)&v364 + 1) )
            goto LABEL_121;
          if ( *((_QWORD *)&v365 + 1) )
          {
            while ( 1 )
            {
              v77 = **((_QWORD **)&v365 + 1);
              *((_QWORD *)&v365 + 1) = v77;
              if ( v77 != v70 + 16LL * (unsigned __int8)v71 )
                break;
              v156 = v365 & ~(1 << v71);
              LODWORD(v365) = v156;
              if ( !v156 )
              {
                *((_QWORD *)&v365 + 1) = 0LL;
                BYTE4(v365) = 0;
                goto LABEL_252;
              }
              _BitScanReverse(&v157, v156);
              LODWORD(v359) = 0;
              LOBYTE(v71) = v157;
              BYTE4(v365) = v157;
              *((_QWORD *)&v365 + 1) = v70 + 16LL * (unsigned __int8)v157;
            }
            v78 = v77 - 216;
            v79 = v385 & *(_QWORD *)(a2 + 8);
            if ( v79 )
            {
              v80 = v79 & ~v73;
              if ( v80 )
              {
                v81 = *(_WORD **)(v78 + 576);
                v82 = *(unsigned __int16 *)(a2 + 136);
                if ( (unsigned __int16)v82 >= *v81 )
                  v83 = 0LL;
                else
                  v83 = *(_QWORD *)&v81[4 * v82 + 4];
                v84 = KiComputeThreadQos(v78);
                v85 = *(_DWORD *)(v78 + 80);
                if ( v85 <= *(_DWORD *)(v78 + 84) )
                  v85 = *(_DWORD *)(v78 + 84);
                v86 = *(_QWORD *)(*(_QWORD *)(a2 + 192)
                                + 24LL
                                * (*(unsigned __int8 *)(v78 + 517)
                                 + *(unsigned __int8 *)(a2 + 185)
                                 * ((unsigned int)(v85 >= KiDynamicHeteroCpuPolicyExpectedCycles) + 2 * v84))
                                + 16);
                if ( (v86 & v83) != 0 )
                  v83 &= v86;
                v87 = *(_QWORD *)(v78 + 104);
                v88 = v80 & v83 & *(_QWORD *)(a2 + 8LL * ((*(_DWORD *)(v78 + 120) >> 1) & 1) + 16);
                v89 = v78;
                if ( v87
                  && *(char *)(v78 + 195) < 16
                  && (*(_DWORD *)(v78 + 120) & 0x200) == 0
                  && !*(_DWORD *)(v78 + 484)
                  && *(_BYTE *)(v78 + 390) != 1 )
                {
                  v92 = 0LL;
                  if ( v88 )
                  {
                    v181 = *(unsigned __int16 *)(a2 + 136) << 6;
                    do
                    {
                      _BitScanForward64(&v182, v88);
                      LODWORD(v359) = 0;
                      if ( !KiCheckForMaxOverQuotaScb(
                              v87
                            + 464LL
                            * *((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                              + (unsigned int)(v181 + v182))
                            + 128) )
                        v92 |= 1LL << v183;
                    }
                    while ( v88 );
                    v72 = (unsigned int)a5;
                  }
                  v88 = v92;
                  v361 = (_DWORD *)v92;
                  if ( KiPerfIsoEnabled && (unsigned __int8)KiIsThreadRankBiased(v78, a1) )
                  {
                    KiFindRankBiasedIdleSmtSet(v93, &v361);
                    v88 = (unsigned __int64)v361;
                  }
                }
                if ( !v88 )
                {
                  if ( *(_QWORD *)(v78 + 568) != KiCpuSetSequence && (*(_DWORD *)(v78 + 116) & 8) == 0 )
                  {
                    KiRemoveCurrentThreadScbReadyQueueEnumerator((__int64)&v364);
                    v90 = *(_BYTE *)(v78 + 388);
                    if ( v90 == 1 )
                    {
                      *(_DWORD *)(v78 + 116) |= 2u;
                    }
                    else if ( v90 == 5 )
                    {
                      v91 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v78 + 436));
                      if ( *(_BYTE *)(v78 + 391) )
                        *(_QWORD *)(v78 + 1000) += v91;
                      else
                        *(_QWORD *)(v78 + 992) += v91;
                    }
                    *(_BYTE *)(v78 + 388) = 7;
                    *(struct _SINGLE_LIST_ENTRY *)(v78 + 216) = v360;
                    v360.Next = (struct _SINGLE_LIST_ENTRY *)(v78 + 216);
                  }
                  v70 = v366;
                  ++v72;
                  LOBYTE(v71) = BYTE4(v365);
                  LODWORD(a5) = v72;
                  goto LABEL_119;
                }
                if ( *(_QWORD *)(v78 + 568) != KiCpuSetSequence && (*(_DWORD *)(v78 + 116) & 8) == 0 )
                {
                  _BitScanReverse64(&v175, v88);
                  v176 = (*(unsigned __int16 *)(a2 + 136) << 6) + (int)v175;
                  LODWORD(v359) = 0;
                  v177 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                                          + v176)];
                  if ( (*(_DWORD *)(v78 + 120) & 2) != 0 )
                    v73 |= *(_QWORD *)(v177 + 36512);
                  else
                    v73 |= *(_QWORD *)(v177 + 200);
                  v357 = v73;
                  KiRemoveCurrentThreadScbReadyQueueEnumerator((__int64)&v364);
                  KiInsertDeferredReadyList(&v360, v78);
                  v70 = v366;
                  LOBYTE(v71) = BYTE4(v365);
                  goto LABEL_119;
                }
                v116 = (_DWORD *)(v78 + 120);
                v117 = v88;
                v361 = (_DWORD *)(v78 + 120);
                v118 = (_QWORD *)(v78 + 104);
                while ( 1 )
                {
                  if ( !v117 )
                  {
                    v73 = v357;
                    if ( v88 )
                    {
                      _BitScanReverse64(&v161, v88);
                      v162 = (*(unsigned __int16 *)(a2 + 136) << 6) + (int)v161;
                      LODWORD(v359) = 0;
                      v163 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                                              + v162)];
                      if ( (*(_DWORD *)(v89 + 120) & 2) != 0 )
                        v73 = *(_QWORD *)(v163 + 36512) | v357;
                      else
                        v73 = *(_QWORD *)(v163 + 200) | v357;
                      v357 = v73;
                      KiRemoveCurrentThreadScbReadyQueueEnumerator((__int64)&v364);
                      KiEnterDeferredReadyState(v89);
                      v72 = (unsigned int)a5;
                      *(struct _SINGLE_LIST_ENTRY *)(v89 + 216) = v360;
                      v70 = v366;
                      LOBYTE(v71) = BYTE4(v365);
                      v360.Next = (struct _SINGLE_LIST_ENTRY *)(v89 + 216);
                    }
                    else
                    {
                      v70 = v366;
                      v72 = (_DWORD)a5 + 1;
                      LOBYTE(v71) = BYTE4(v365);
                      LODWORD(a5) = (_DWORD)a5 + 1;
                    }
                    goto LABEL_119;
                  }
                  _BitScanReverse64(&v119, v117);
                  v120 = (*(unsigned __int16 *)(a2 + 136) << 6) + (int)v119;
                  LODWORD(v359) = 0;
                  v122 = (*v116 >> 1) & 1;
                  v380[0] = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                                             + v120)];
                  v121 = (_KPRCB *)v380[0];
                  v123 = v122 | v380[0] & 0xFFFFFFFFFFFFFFFEuLL;
                  v359 = v123;
                  if ( !v122 )
                    break;
                  v124 = *(_BYTE **)(v380[0] + 36504LL);
                  v125 = (unsigned __int8)*v124;
                  v126 = v124 + 8;
                  LODWORD(v127) = 0;
                  v128 = v124 + 8;
                  if ( *v124 )
                    goto LABEL_197;
LABEL_199:
                  v129 = v89;
                  if ( (_DWORD)v127 == v125 )
                  {
                    v130 = v123 & 0xFFFFFFFFFFFFFFFEuLL;
                    v131 = 0LL;
                    v380[1] = v123 & 0xFFFFFFFFFFFFFFFEuLL;
                    v132 = 0LL;
                    if ( (v123 & 1) != 0 )
                    {
                      if ( (v123 & 1) == 1 )
                      {
                        v170 = *(unsigned __int8 **)(v130 + 36504);
                        v132 = *v170;
                        v131 = (__int64 *)(v170 + 8);
                      }
                      v133 = 1;
                      if ( (_DWORD)v132 )
                      {
                        do
                        {
                          v171 = *v131++;
                          v89 = v129;
                          v133 = ((*(_BYTE *)(v171 + 35) & 1) == 0) & (unsigned __int8)v133;
                          --v132;
                        }
                        while ( v132 );
                      }
                    }
                    else
                    {
                      v133 = (*(_BYTE *)(v130 + 35) & 1) == 0;
                    }
                    if ( v133
                      && (!*v118
                       || !(*v118 + v121->ScbOffset)
                       || !KiIsThreadConstrainedBySchedulingGroup(v89)
                       || KiShouldPreemptionBeDeferred(v354)
                       || !KiCheckForMaxOverQuotaScb(v355)) )
                    {
                      KiRemoveCurrentThreadScbReadyQueueEnumerator((__int64)&v364);
                      v362 = a1->StaticRescheduleContext;
                      v134 = v362;
                      memset_0(v362, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
                      KiStartRescheduleContext(v134, &v359, 0LL);
                      v135 = 0;
                      v136 = 0LL;
                      for ( k = 0; k < v134->ProcessorCount; ++k )
                      {
                        if ( v134->ProcessorEntries[k].Prcb == v121 )
                        {
                          v136 = (__int64)&v134->ProcessorEntries[k];
                          break;
                        }
                      }
                      v146 = (*(_DWORD *)(v89 + 120) >> 1) & 1;
                      v147 = (*(unsigned __int8 *)(v136 + 32) >> 1) & 1;
                      v361 = (_DWORD *)v146;
                      if ( (unsigned int)v146 >= v147 )
                      {
                        if ( (_DWORD)v146 )
                        {
                          v217 = 0;
                          if ( v134->ProcessorCount )
                          {
                            do
                            {
                              v218 = v134->ProcessorEntries[v217].Prcb;
                              v219 = (char *)v134 + 40 * v217;
                              v220 = *((_QWORD *)v219 + 5);
                              if ( v218 == v121 )
                              {
                                if ( v220 && v220 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v220) )
                                {
                                  if ( (v219[49] & 1) != 0 )
                                    *(_DWORD *)(v228 + 116) |= 2u;
                                  *(_BYTE *)(v228 + 565) = 1;
                                  KiInsertDeferredReadyList(&v360, v228);
                                }
                                *((_QWORD *)v219 + 4) = v89;
                                v219[48] &= ~1u;
                                v219[48] = (v219[48] & 0xFD ^ (2 * ((*(_DWORD *)(v89 + 120) & 2) != 0))) & 0xC3 | 4;
                                *((_QWORD *)v219 + 5) = v89;
                                v219[49] &= ~1u;
                                if ( !(unsigned __int8)KiIsPrcbThread(v89) )
                                  *(_DWORD *)(v89 + 536) = *(_DWORD *)(v222 + 36);
                              }
                              else
                              {
                                SmtIsolationThread = v218->SmtIsolationThread;
                                if ( v220 && v220 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v220) )
                                {
                                  if ( (v219[49] & 1) != 0 )
                                    *(_DWORD *)(v275 + 116) |= 2u;
                                  *(_BYTE *)(v275 + 565) = 1;
                                  KiInsertDeferredReadyList(&v360, v275);
                                }
                                *((_QWORD *)v219 + 4) = v89;
                                v219[48] &= ~1u;
                                v224 = (v219[48] & 0xFD ^ (2 * ((*(_DWORD *)(v89 + 120) & 2) != 0))) & 0xC3 | 0x24;
                                if ( (_KTHREAD *)v89 == SmtIsolationThread )
                                  v224 = (v219[48] & 0xFD ^ (2 * ((*(_DWORD *)(v89 + 120) & 2) != 0))) & 0xC3 | 4;
                                v219[48] = v224;
                                *((_QWORD *)v219 + 5) = SmtIsolationThread;
                                v219[49] &= ~1u;
                                if ( !(unsigned __int8)KiIsPrcbThread(SmtIsolationThread) )
                                  SmtIsolationThread->NextProcessor = *(_DWORD *)(v225 + 36);
                              }
                              v217 = v221 + 1;
                            }
                            while ( v217 < v134->ProcessorCount );
LABEL_227:
                            LODWORD(v146) = (_DWORD)v361;
                            v135 = 0;
                          }
                        }
                        else
                        {
                          v184 = *(_QWORD *)(v136 + 24);
                          v185 = *(_QWORD *)v136;
                          if ( v184 && v184 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v184) )
                          {
                            if ( (*(_BYTE *)(v136 + 33) & 1) != 0 )
                              *(_DWORD *)(v216 + 116) |= 2u;
                            *(_BYTE *)(v216 + 565) = 1;
                            KiInsertDeferredReadyList(&v360, v216);
                            LODWORD(v146) = (_DWORD)v361;
                          }
                          *(_QWORD *)(v136 + 16) = v89;
                          v186 = *(_BYTE *)(v136 + 32) & 0xFE;
                          *(_BYTE *)(v136 + 32) = v186;
                          *(_BYTE *)(v136 + 32) = (v186 & 0xFD ^ (2 * ((*(_DWORD *)(v89 + 120) & 2) != 0))) & 0xC3 | 4;
                          *(_QWORD *)(v136 + 24) = v89;
                          *(_BYTE *)(v136 + 33) &= ~1u;
                          if ( *(_UNKNOWN **)(v89 + 544) != &unk_140FC8F40 )
                            *(_DWORD *)(v89 + 536) = *(_DWORD *)(v185 + 36);
                        }
                      }
                      else if ( v134->ProcessorCount )
                      {
                        do
                        {
                          v148 = v134->ProcessorEntries[v135].Prcb;
                          v149 = (char *)v134 + 40 * v135;
                          v150 = *((_QWORD *)v149 + 5);
                          if ( v148 == v121 )
                          {
                            if ( v150 && v150 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v150) )
                            {
                              if ( (v149[49] & 1) != 0 )
                                *(_DWORD *)(v277 + 116) |= 2u;
                              *(_BYTE *)(v277 + 565) = 1;
                              KiInsertDeferredReadyList(&v360, v277);
                            }
                            *((_QWORD *)v149 + 4) = v89;
                            v149[48] &= ~1u;
                            v149[48] = (v149[48] & 0xFD ^ (2 * ((*(_DWORD *)(v89 + 120) & 2) != 0))) & 0xC3 | 4;
                            *((_QWORD *)v149 + 5) = v89;
                            v149[49] &= ~1u;
                            if ( !(unsigned __int8)KiIsPrcbThread(v89) )
                              *(_DWORD *)(v89 + 536) = v148->Number;
                          }
                          else
                          {
                            IdleThread = v148->IdleThread;
                            if ( v150 && v150 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v150) )
                            {
                              if ( (v149[49] & 1) != 0 )
                                *(_DWORD *)(v227 + 116) |= 2u;
                              *(_BYTE *)(v227 + 565) = 1;
                              KiInsertDeferredReadyList(&v360, v227);
                            }
                            *((_QWORD *)v149 + 4) = IdleThread;
                            v149[48] |= 1u;
                            v149[48] = (v149[48] & 0xFD ^ (2 * ((*((_DWORD *)&IdleThread->0 + 1) & 2) != 0))) & 0xC3 | 4;
                            *((_QWORD *)v149 + 5) = IdleThread;
                            v149[49] &= ~1u;
                            if ( !(unsigned __int8)KiIsPrcbThread(IdleThread) )
                              *(_DWORD *)(v152 + 536) = v148->Number;
                          }
                          v135 = v153 + 1;
                        }
                        while ( v135 < v134->ProcessorCount );
                        goto LABEL_227;
                      }
                      v187 = 0;
                      v134->MaximumThreadIsolationWidth = v146;
                      v188 = v135;
                      if ( (WORD2(xmmword_140FBFC10) & 0x400) != 0 )
                        v188 = 2;
                      v189 = v135;
                      if ( v134->ProcessorCount )
                      {
                        do
                        {
                          v187 |= KiCommitRescheduleContextEntry(
                                    (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v134->ProcessorEntries
                                                                          + 32 * v189
                                                                          + 8 * v189),
                                    a1,
                                    v188,
                                    &v360);
                          ++v189;
                        }
                        while ( v189 < v134->ProcessorCount );
                      }
                      if ( v134->IsolationWidth == KiIsolationWidthCore )
                      {
                        v190 = v134->ProcessorEntries[0].Prcb->CoreControlBlock;
                        if ( ++v190->ScanStartIndex >= v190->ProcessorCount )
                          v190->ScanStartIndex = 0;
                      }
                      v381 = v123 & 0xFFFFFFFFFFFFFFFEuLL;
                      if ( (v123 & 1) == 0 )
                      {
                        v193 = &v381;
                        LODWORD(v192) = 1;
                        goto LABEL_309;
                      }
                      v191 = *(_BYTE **)((v123 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
                      LODWORD(v192) = (unsigned __int8)*v191;
                      v193 = (unsigned __int64 *)(v191 + 8);
                      if ( *v191 )
                      {
                        do
                        {
LABEL_309:
                          v192 = (unsigned int)(v192 - 1);
                          _InterlockedAnd64((volatile signed __int64 *)(v193[v192] + 48), 0LL);
                        }
                        while ( (_DWORD)v192 );
                      }
                      if ( v187 )
                      {
                        v194 = 0;
                        if ( v134->ProcessorCount )
                        {
                          while ( 2 )
                          {
                            v195 = v134->ProcessorEntries[v194].___u6[0];
                            v196 = v134->ProcessorEntries[v194].Prcb;
                            v197 = (char *)v134 + 40 * v194;
                            if ( (v195 & 0x10) == 0 )
                            {
                              if ( (v195 & 8) != 0 && v196->IdleHalt )
                              {
                                v198 = a1->DeferredDispatchInterrupts.TargetType;
                                if ( !v198 )
                                  goto LABEL_316;
                                if ( v198 != 1 )
                                  goto LABEL_337;
                                v207 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                                if ( v207 != v196->Number )
                                {
                                  a1->DeferredDispatchInterrupts.TargetType = 2;
                                  v208 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112]
                                                   + 4LL * v207) & 0x3F;
                                  v209 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112]
                                                   + 4LL * v207) >> 6;
                                  if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned int)v209 )
                                    goto LABEL_336;
                                  if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v209 )
                                  {
                                    a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v209 + 1;
LABEL_336:
                                    v210 = (char *)a1 + 8 * v209;
                                    v211 = *((_QWORD *)v210 + 1725);
                                    _bittestandset64(&v211, v208);
                                    *((_QWORD *)v210 + 1725) = v211;
                                  }
LABEL_337:
                                  Group = v196->Group;
                                  GroupSetMember = v196->GroupSetMember;
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
                              if ( (v197[51] & 2) != 0 )
                                EtwTraceScheduleThread(*((_QWORD *)v197 + 5), v196, 0LL);
                              if ( (v197[51] & 4) != 0 && v196->SchedulerAssist && a1->SchedulerAssist && a1 != v196 )
                              {
                                v212 = *(unsigned int *)v196->SchedulerAssist;
                                v213 = &a1->SchedulerAssist;
                                if ( (*(_DWORD *)v196->SchedulerAssist & 0x40000) != 0 )
                                  v213 = &a1->SchedulerAssist;
                                if ( (v212 & 0x100000) != 0
                                  || (v213 = &a1->SchedulerAssist, (*(_DWORD *)v196->SchedulerAssist & 0x40000) != 0)
                                  && (unsigned __int8)v212 < v197[52] )
                                {
                                  v214 = *v213;
                                  *((_DWORD *)*v213 + 3) = 2;
                                  Number = v196->Number;
                                  if ( !HvlpVirtualProcessorsIdentityMapped )
                                  {
                                    v134 = v362;
                                    LODWORD(Number) = (unsigned __int8)byte_140FC61D1[2 * (unsigned int)Number] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
                                  }
                                  v214[2] = Number;
                                  if ( (BYTE4(xmmword_140FBFC10) & 0x20) != 0 )
                                    EtwTraceXSchedulerPriorityKickSend(v196->Number, 2LL, v212);
                                  __writemsr(0x400000C2u, (unsigned int)Number);
                                }
                              }
                              if ( (v197[51] & 1) != 0 )
                                _InterlockedDecrement16((volatile signed __int16 *)(*((_QWORD *)v197 + 5) + 868LL));
                              if ( ++v194 >= v134->ProcessorCount )
                              {
                                v70 = v366;
                                LOBYTE(v71) = BYTE4(v365);
                                v72 = (unsigned int)a5;
                                v73 = v357;
                                goto LABEL_119;
                              }
                              continue;
                            }
                            break;
                          }
                          v199 = a1->DeferredDispatchInterrupts.TargetType;
                          if ( !v199 )
                          {
LABEL_316:
                            a1->DeferredDispatchInterrupts.TargetType = 1;
                            a1->DeferredDispatchInterrupts.SingleTargetIndex = v196->Number;
                            goto LABEL_317;
                          }
                          if ( v199 == 1 )
                          {
                            v200 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                            if ( v200 == v196->Number )
                              goto LABEL_317;
                            a1->DeferredDispatchInterrupts.TargetType = 2;
                            v201 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112]
                                             + 4LL * v200) & 0x3F;
                            v202 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112]
                                             + 4LL * v200) >> 6;
                            if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count <= (unsigned int)v202 )
                            {
                              if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v202 )
                              {
                                a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v202 + 1;
                                goto LABEL_329;
                              }
                            }
                            else
                            {
LABEL_329:
                              v203 = (char *)a1 + 8 * v202;
                              v204 = *((_QWORD *)v203 + 1725);
                              _bittestandset64(&v204, v201);
                              *((_QWORD *)v203 + 1725) = v204;
                            }
                          }
                          Group = v196->Group;
                          GroupSetMember = v196->GroupSetMember;
                          if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)Group )
                            goto LABEL_338;
                          goto LABEL_331;
                        }
                      }
                      v70 = v366;
                      LOBYTE(v71) = BYTE4(v365);
                      v72 = (unsigned int)a5;
                      v73 = v357;
                      goto LABEL_119;
                    }
                    v117 &= ~v121->GroupSetMember;
                    KiReleasePrcbLocksForIsolationUnit((__int64 *)&v359);
                    v116 = v361;
                  }
                  else
                  {
                    while ( (_DWORD)v127 )
                    {
                      v127 = (unsigned int)(v127 - 1);
                      _InterlockedAnd64((volatile signed __int64 *)(v128[v127] + 48LL), 0LL);
                    }
                    v116 = v361;
                    v117 &= ~v121->GroupSetMember;
                  }
                }
                v126 = v380;
                v125 = 1;
                v128 = v380;
                LODWORD(v127) = 0;
                do
                {
LABEL_197:
                  if ( _interlockedbittestandset64((volatile signed __int32 *)(*v126 + 48LL), 0LL) )
                    break;
                  LODWORD(v127) = v127 + 1;
                  ++v126;
                }
                while ( (unsigned int)v127 < v125 );
                goto LABEL_199;
              }
            }
LABEL_121:
            if ( !v377 )
              goto LABEL_6;
            v74 = 0LL;
            LODWORD(v75) = 0;
            v382 = v377 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( (v377 & 1) != 0 )
            {
              if ( (v377 & 1) == 1 )
              {
                v75 = *(_QWORD *)((v377 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
                v74 = (unsigned __int64 *)(v75 + 8);
                LODWORD(v75) = *(unsigned __int8 *)v75;
              }
              if ( !(_DWORD)v75 )
                goto LABEL_6;
            }
            else
            {
              v74 = &v382;
              LODWORD(v75) = 1;
            }
            do
            {
              v75 = (unsigned int)(v75 - 1);
              _InterlockedAnd64((volatile signed __int64 *)(v74[v75] + 48), 0LL);
            }
            while ( (_DWORD)v75 );
            goto LABEL_6;
          }
LABEL_252:
          ScbForScbReadyQueueEnumerator = KiDetermineNextScbForScbReadyQueueEnumerator(*((_QWORD **)&v364 + 1));
          v165 = ScbForScbReadyQueueEnumerator;
          if ( ScbForScbReadyQueueEnumerator )
            break;
LABEL_255:
          *((_QWORD *)&v364 + 1) = v165;
        }
        v70 = ScbForScbReadyQueueEnumerator + 160;
        v166 = *(unsigned __int16 *)(ScbForScbReadyQueueEnumerator + 136);
        LODWORD(v365) = v166;
        v366 = v70;
        if ( v166 )
        {
          _BitScanReverse(&v166, v166);
          LODWORD(v359) = 0;
          LOBYTE(v71) = v166;
          BYTE4(v365) = v166;
          *((_QWORD *)&v365 + 1) = v70 + 16LL * v166;
          goto LABEL_255;
        }
        LOBYTE(v71) = 32;
        *((_QWORD *)&v365 + 1) = 0LL;
        BYTE4(v365) = 32;
        *((_QWORD *)&v364 + 1) = v165;
      }
    }
LABEL_116:
    v70 = v366;
    goto LABEL_117;
  }
  v375 = 0LL;
  LOBYTE(v25) = 0;
  v363.Next = 0LL;
  v373 = 0LL;
  v374 = 0LL;
  BYTE4(v374) = 32;
  v376 = 0LL;
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
  *((_QWORD *)&v376 + 1) = a6;
  *(_QWORD *)&v376 = 0LL;
  if ( _InterlockedExchange64((volatile __int64 *)a6, (__int64)&v376) )
  {
    KxWaitForLockOwnerShip(&v376);
LABEL_631:
    a3 = v385;
    v7 = a2;
  }
  v302 = (*(_DWORD *)(v8 + 8) & 0xFFFFFFFE) == 0;
  v303 = *(_DWORD *)(v8 + 8) & 0xFFFFFFFE;
  v373 = v8;
  LODWORD(v374) = v303;
  v375 = v8 + 64;
  if ( v302 )
  {
    *((_QWORD *)&v374 + 1) = 0LL;
  }
  else
  {
    _BitScanReverse(&v303, v303);
    LODWORD(a5) = 0;
    BYTE4(v374) = v303;
    *((_QWORD *)&v374 + 1) = v8 + 64 + 16LL * v303;
  }
  v362 = 0LL;
  v283 = 0;
  LODWORD(a5) = 0;
  v284 = 0LL;
  v357 = 0LL;
  while ( 1 )
  {
LABEL_550:
    if ( v283 >= 0x40 || !*((_QWORD *)&v374 + 1) )
      goto LABEL_592;
    while ( 1 )
    {
      v304 = **((_QWORD **)&v374 + 1);
      *((_QWORD *)&v374 + 1) = v304;
      if ( v304 != v375 + 16LL * BYTE4(v374) )
        break;
      v327 = v374 & ~(1 << SBYTE4(v374));
      LODWORD(v374) = v327;
      if ( !v327 )
      {
        BYTE4(v374) = 0;
        *((_QWORD *)&v374 + 1) = 0LL;
        goto LABEL_592;
      }
      _BitScanReverse(&v328, v327);
      BYTE4(v374) = v328;
      *((_QWORD *)&v374 + 1) = v375 + 16LL * (unsigned __int8)v328;
    }
    v305 = v304 - 216;
    v306 = a3 & *(_QWORD *)(v7 + 8);
    if ( !v306 )
      goto LABEL_592;
    v307 = v306 & ~v284;
    if ( !v307 )
      break;
    v308 = *(_WORD **)(v305 + 576);
    v309 = *(unsigned __int16 *)(v7 + 136);
    if ( (unsigned __int16)v309 >= *v308 )
      v310 = 0LL;
    else
      v310 = *(_QWORD *)&v308[4 * v309 + 4];
    v311 = KiComputeThreadQos(v305);
    v312 = *(_DWORD *)(v305 + 80);
    v7 = a2;
    if ( v312 <= *(_DWORD *)(v305 + 84) )
      v312 = *(_DWORD *)(v305 + 84);
    v313 = *(_QWORD *)(*(_QWORD *)(a2 + 192)
                     + 24LL
                     * (*(unsigned __int8 *)(v305 + 517)
                      + *(unsigned __int8 *)(a2 + 185)
                      * ((unsigned int)(v312 >= KiDynamicHeteroCpuPolicyExpectedCycles) + 2 * v311))
                     + 16);
    if ( (v313 & v310) != 0 )
      v310 &= v313;
    v314 = *(_QWORD *)(v305 + 104);
    v315 = v307 & v310 & *(_QWORD *)(a2 + 8LL * ((*(_DWORD *)(v305 + 120) >> 1) & 1) + 16);
    if ( !v314 || *(char *)(v305 + 195) >= 16 || (*(_DWORD *)(v305 + 120) & 0x200) != 0 || *(_DWORD *)(v305 + 484) )
    {
      v25 = 0;
    }
    else
    {
      v25 = 0;
      if ( *(_BYTE *)(v305 + 390) != 1 )
      {
        v326 = 0LL;
        if ( v315 )
        {
          v347 = *(unsigned __int16 *)(a2 + 136) << 6;
          do
          {
            _BitScanForward64(&v348, v315);
            v315 &= ~(1LL << v348);
            if ( !KiCheckForMaxOverQuotaScb(
                    v314
                  + 464LL
                  * *((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                    + (unsigned int)(v347 + v348))
                  + 128) )
              v326 |= 1LL << v349;
          }
          while ( v315 );
        }
        v315 = v326;
        v377 = v326;
        if ( KiPerfIsoEnabled && (unsigned __int8)KiIsThreadRankBiased(v305, a1) )
        {
          KiFindRankBiasedIdleSmtSet(v7, &v377);
          v7 = a2;
          v315 = v377;
        }
      }
    }
    if ( !v315 )
    {
      if ( *(_QWORD *)(v305 + 568) != KiCpuSetSequence && (*(_DWORD *)(v305 + 116) & 8) == 0 )
      {
        v316 = BYTE4(v374);
        v317 = v373;
        *((_QWORD *)&v374 + 1) = *(_QWORD *)(*((_QWORD *)&v374 + 1) + 8LL);
        if ( (*(_DWORD *)(v305 + 120) & 0x400000) != 0 )
          _InterlockedAnd(*(volatile signed __int32 **)(v305 + 968), 0xFFFBFFFF);
        v318 = v305 + 216;
        v319 = *(_QWORD *)(v305 + 216);
        v320 = *(unsigned __int64 **)(v305 + 224);
        if ( *(_QWORD *)(v319 + 8) != v305 + 216 || *v320 != v318 )
          __fastfail(3u);
        *v320 = v319;
        *(_QWORD *)(v319 + 8) = v320;
        if ( v320 == (unsigned __int64 *)v319 )
          *(_DWORD *)(v317 + 8) &= ~(1 << v316);
        v302 = (*(_DWORD *)(v317 + 12))-- == 1;
        if ( v302 )
        {
          v319 = ~*(_QWORD *)(v317 + 712);
          _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v317 + 720) + 392LL), v319);
        }
        *(_QWORD *)(v317 + 16) -= *(unsigned int *)(v305 + 1784);
        if ( *(_QWORD *)(v305 + 1792) == *(_QWORD *)(v317 + 776) )
        {
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v317 + 768), 0LL) )
          {
            do
            {
              if ( (++v25 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v319, v318, v316) )
              {
                HvlNotifyLongSpinWait(v25);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(_QWORD *)(v317 + 768) );
          }
          if ( *(_QWORD *)(v305 + 1792) == *(_QWORD *)(v317 + 776) )
          {
            --*(_DWORD *)(v317 + 784);
            *(_QWORD *)(v317 + 792) -= *(unsigned int *)(v305 + 1788);
            if ( !*(_DWORD *)(v317 + 784) )
              *(_QWORD *)(v317 + 1760) = 0LL;
            v321 = *(unsigned __int8 *)(v305 + 1829)
                 + 8 * (*(unsigned __int8 *)(v305 + 1830) + 2LL * *(unsigned __int8 *)(v305 + 1828));
            *(_QWORD *)(v317 + 8 * v321 + 864) -= *(unsigned int *)(v305 + 1788);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v317 + 768), 0LL);
          v7 = a2;
        }
        v322 = *(_BYTE *)(v305 + 388);
        if ( v322 == 1 )
        {
          *(_DWORD *)(v305 + 116) |= 2u;
        }
        else if ( v322 == 5 )
        {
          v323 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v305 + 436));
          if ( *(_BYTE *)(v305 + 391) )
            *(_QWORD *)(v305 + 1000) += v323;
          else
            *(_QWORD *)(v305 + 992) += v323;
        }
        *(_BYTE *)(v305 + 388) = 7;
        *(struct _SINGLE_LIST_ENTRY *)(v305 + 216) = v363;
        v363.Next = (struct _SINGLE_LIST_ENTRY *)(v305 + 216);
      }
      goto LABEL_590;
    }
    if ( (unsigned int)KiCheckThreadAffinity(v305) )
    {
      v329 = v315;
      while ( v329 )
      {
        _BitScanReverse64(&v330, v329);
        v331 = (*(unsigned __int16 *)(v7 + 136) << 6) + (int)v330;
        LODWORD(v359) = 0;
        v332 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock + v331)];
        if ( (unsigned __int8)KiTryAcquirePrcbLocksForIsolationUnit(v332, (*(_DWORD *)(v305 + 120) >> 1) & 1, &v362) )
        {
          if ( (unsigned int)KiIsIsolationUnitIdleByHandle(&v362) )
          {
            v333 = *(_QWORD *)(v305 + 104);
            if ( !v333
              || !(v333 + *(unsigned int *)(v332 + 216))
              || !KiIsThreadConstrainedBySchedulingGroup(v305)
              || KiShouldPreemptionBeDeferred(v344)
              || !KiCheckForMaxOverQuotaScb(v345) )
            {
              KiRemoveCurrentThreadSharedReadyQueueEnumerator(&v373, v305);
              v334 = a1->StaticRescheduleContext;
              memset_0(v334, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
              KiStartRescheduleContext(v334, &v362, 0LL);
              KiScheduleThreadToRescheduleContext(&v334->ProcessorCount, v305, v332, 0, &v363);
              v335 = 0;
              v336 = 0;
              if ( (WORD2(xmmword_140FBFC10) & 0x400) != 0 )
                v336 = 2;
              for ( m = 0; m < v334->ProcessorCount; ++m )
                v335 |= KiCommitRescheduleContextEntry(
                          (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v334->ProcessorEntries + 32 * m + 8 * m),
                          a1,
                          v336,
                          &v363);
              if ( v334->IsolationWidth == KiIsolationWidthCore )
              {
                v338 = v334->ProcessorEntries[0].Prcb->CoreControlBlock;
                if ( ++v338->ScanStartIndex >= v338->ProcessorCount )
                  v338->ScanStartIndex = 0;
              }
              v339 = 0LL;
              LODWORD(v340) = 0;
              v383 = (unsigned __int64)v362 & 0xFFFFFFFFFFFFFFFEuLL;
              if ( ((unsigned __int8)v362 & 1) == 0 )
              {
                v339 = &v383;
                LODWORD(v340) = 1;
                goto LABEL_628;
              }
              if ( ((unsigned __int8)v362 & 1) == 1 )
              {
                v341 = *(unsigned __int8 **)(((unsigned __int64)v362 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
                LODWORD(v340) = *v341;
                v339 = (unsigned __int64 *)(v341 + 8);
              }
              while ( (_DWORD)v340 )
              {
LABEL_628:
                v340 = (unsigned int)(v340 - 1);
                _InterlockedAnd64((volatile signed __int64 *)(v339[v340] + 48), 0LL);
              }
              v362 = 0LL;
              if ( !v335 || (v278 = 0, !v334->ProcessorCount) )
              {
                v283 = (unsigned int)a5;
                LOBYTE(v25) = 0;
                v7 = a2;
                v284 = v357;
                a3 = v385;
                goto LABEL_550;
              }
              while ( 2 )
              {
                v279 = v334->ProcessorEntries[v278].___u6[0];
                v280 = v334->ProcessorEntries[v278].Prcb;
                v281 = (char *)v334 + 40 * v278;
                if ( (v279 & 0x10) == 0 )
                {
                  if ( (v279 & 8) != 0 && v280->IdleHalt )
                  {
                    v282 = a1->DeferredDispatchInterrupts.TargetType;
                    if ( !v282 )
                      goto LABEL_513;
                    if ( v282 != 1 )
                      goto LABEL_534;
                    v293 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                    if ( v293 != v280->Number )
                    {
                      a1->DeferredDispatchInterrupts.TargetType = 2;
                      v294 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * v293) & 0x3F;
                      v295 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * v293) >> 6;
                      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned int)v295 )
                        goto LABEL_533;
                      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v295 )
                      {
                        a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v295 + 1;
LABEL_533:
                        v296 = (char *)a1 + 8 * v295;
                        v297 = *((_QWORD *)v296 + 1725);
                        _bittestandset64(&v297, v294);
                        *((_QWORD *)v296 + 1725) = v297;
                      }
LABEL_534:
                      v291 = v280->Group;
                      v292 = v280->GroupSetMember;
                      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v291 )
                      {
LABEL_535:
                        a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v291] |= v292;
                        goto LABEL_514;
                      }
LABEL_528:
                      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned __int16)v291 )
                      {
                        a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v291 + 1;
                        goto LABEL_535;
                      }
                    }
                  }
LABEL_514:
                  if ( (v281[51] & 2) != 0 )
                    EtwTraceScheduleThread(*((_QWORD *)v281 + 5), v280, 0LL);
                  if ( (v281[51] & 4) != 0 && v280->SchedulerAssist && a1->SchedulerAssist && a1 != v280 )
                  {
                    v298 = &a1->SchedulerAssist;
                    v299 = *(unsigned int *)v280->SchedulerAssist;
                    if ( (*(_DWORD *)v280->SchedulerAssist & 0x40000) != 0 )
                      v298 = &a1->SchedulerAssist;
                    if ( (v299 & 0x100000) != 0
                      || (v298 = &a1->SchedulerAssist, (*(_DWORD *)v280->SchedulerAssist & 0x40000) != 0)
                      && (unsigned __int8)v299 < v281[52] )
                    {
                      v300 = *v298;
                      *((_DWORD *)*v298 + 3) = 2;
                      v301 = v280->Number;
                      if ( !HvlpVirtualProcessorsIdentityMapped )
                        LODWORD(v301) = (unsigned __int8)byte_140FC61D1[2 * v301] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v301] << 6);
                      v300[2] = v301;
                      if ( (BYTE4(xmmword_140FBFC10) & 0x20) != 0 )
                        EtwTraceXSchedulerPriorityKickSend(v280->Number, 2LL, v299);
                      __writemsr(0x400000C2u, (unsigned int)v301);
                    }
                  }
                  if ( (v281[51] & 1) != 0 )
                    _InterlockedDecrement16((volatile signed __int16 *)(*((_QWORD *)v281 + 5) + 868LL));
                  if ( ++v278 >= v334->ProcessorCount )
                  {
                    v8 = a6;
                    LOBYTE(v25) = 0;
                    v283 = (unsigned int)a5;
                    v284 = v357;
                    v7 = a2;
                    a3 = v385;
                    goto LABEL_550;
                  }
                  continue;
                }
                break;
              }
              v285 = a1->DeferredDispatchInterrupts.TargetType;
              if ( !v285 )
              {
LABEL_513:
                a1->DeferredDispatchInterrupts.TargetType = 1;
                a1->DeferredDispatchInterrupts.SingleTargetIndex = v280->Number;
                goto LABEL_514;
              }
              if ( v285 == 1 )
              {
                v286 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                if ( v286 == v280->Number )
                  goto LABEL_514;
                a1->DeferredDispatchInterrupts.TargetType = 2;
                v287 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * v286) & 0x3F;
                v288 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * v286) >> 6;
                if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count <= (unsigned int)v288 )
                {
                  if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v288 )
                  {
                    a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v288 + 1;
                    goto LABEL_526;
                  }
                }
                else
                {
LABEL_526:
                  v289 = (char *)a1 + 8 * v288;
                  v290 = *((_QWORD *)v289 + 1725);
                  _bittestandset64(&v290, v287);
                  *((_QWORD *)v289 + 1725) = v290;
                }
              }
              v291 = v280->Group;
              v292 = v280->GroupSetMember;
              if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v291 )
                goto LABEL_535;
              goto LABEL_528;
            }
          }
          v346 = ~*(_QWORD *)(v332 + 200);
          v315 &= v346;
          v329 &= v346;
          KiReleasePrcbLocksForIsolationUnit((__int64 *)&v362);
          v7 = a2;
        }
        else
        {
          v7 = a2;
          v329 &= ~*(_QWORD *)(v332 + 200);
        }
      }
      if ( !v315 )
      {
        v283 = (unsigned int)a5;
LABEL_590:
        v284 = v357;
        ++v283;
        a3 = v385;
        LOBYTE(v25) = 0;
        LODWORD(a5) = v283;
        continue;
      }
      LOBYTE(v25) = 0;
      _BitScanReverse64(&v342, v315);
      v343 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                              + 64 * *(unsigned __int16 *)(v7 + 136)
                              + (int)v342)];
      if ( (*(_DWORD *)(v305 + 120) & 2) != 0 )
        v284 = *(_QWORD *)(v343 + 36512) | v357;
      else
        v284 = *(_QWORD *)(v343 + 200) | v357;
      v357 = v284;
      KiRemoveCurrentThreadSharedReadyQueueEnumerator(&v373, v305);
      KiInsertDeferredReadyList(&v363, v305);
      a3 = v385;
      v283 = (unsigned int)a5;
      v7 = a2;
    }
    else
    {
      _BitScanReverse64(&v350, v315);
      v351 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                              + 64 * *(unsigned __int16 *)(v7 + 136)
                              + (int)v350)];
      if ( (*(_DWORD *)(v305 + 120) & 2) != 0 )
        v284 = *(_QWORD *)(v351 + 36512) | v357;
      else
        v284 = *(_QWORD *)(v351 + 200) | v357;
      v357 = v284;
      KiRemoveCurrentThreadSharedReadyQueueEnumerator(&v373, v305);
      KiInsertDeferredReadyList(&v363, v305);
      a3 = v385;
      v7 = a2;
    }
  }
  LOBYTE(v25) = 0;
LABEL_592:
  if ( (KiVelocityFlags & 0x200000) != 0 )
  {
    _m_prefetchw(&v376);
    v324 = v376;
    if ( !(_QWORD)v376 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(
                         *((volatile signed __int64 **)&v376 + 1),
                         0LL,
                         (signed __int64)&v376) == &v376 )
        goto LABEL_29;
      v324 = KxWaitForLockChainValid(&v376);
    }
    *(_QWORD *)&v376 = 0LL;
    v325 = *((_QWORD *)&v376 + 1);
    if ( (((unsigned __int8)v325 ^ (unsigned __int8)_InterlockedExchange64(
                                                      (volatile __int64 *)(v324 + 8),
                                                      *((__int64 *)&v376 + 1))) & 4) != 0 )
    {
      _InterlockedOr(v356, 0);
      KiWakeAddressAll(v324 + 8, v325, a3);
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
      v371 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
      v370 = 6LL;
      v372 = 0LL;
      ++v31->SynchCounters.IpiSendSoftwareInterruptCount;
      if ( v30 != 1 )
        v29 = 47;
      HalpInterruptSendIpi((unsigned int *)&v370, v29);
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
  v33 = v363.Next;
  if ( v363.Next )
  {
    v363.Next = v363.Next->Next;
    do
    {
      KiDeferredReadySingleThread(a1, (ULONG_PTR)&v33[-27], &v363, 0LL);
      v33 = v363.Next;
      LOBYTE(v25) = v25 + 1;
      if ( v363.Next )
        v363.Next = v363.Next->Next;
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
        v371 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
        v370 = 6LL;
        v372 = 0LL;
        ++v37->SynchCounters.IpiSendSoftwareInterruptCount;
        if ( v36 != 1 )
          v27 = 47;
        HalpInterruptSendIpi((unsigned int *)&v370, v27);
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
