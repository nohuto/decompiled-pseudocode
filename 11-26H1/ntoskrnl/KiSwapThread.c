/*
 * XREFs of KiSwapThread @ 0x14023DA00
 * Callers:
 *     KeTerminateThread @ 0x140203468 (KeTerminateThread.c)
 *     KiCommitThreadWait @ 0x140224340 (KiCommitThreadWait.c)
 *     KiInSwapSingleProcess @ 0x140312684 (KiInSwapSingleProcess.c)
 *     KiExecuteDpcDelegate @ 0x1405FD980 (KiExecuteDpcDelegate.c)
 * Callees:
 *     HalpTimerQueryCounterSafe @ 0x1402086D0 (HalpTimerQueryCounterSafe.c)
 *     HalpTimerScaleCounter @ 0x140208DE0 (HalpTimerScaleCounter.c)
 *     KiInsertDeferredPreemptionApc @ 0x14020A138 (KiInsertDeferredPreemptionApc.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetThreadServerSilo @ 0x140216AD0 (PsGetThreadServerSilo.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x14021FDA0 (KiSendHeteroRescheduleIntRequest.c)
 *     KiUpdateThreadHgsFeedback @ 0x140228590 (KiUpdateThreadHgsFeedback.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAbProcessPostContextSwitch @ 0x14023D3E0 (KiAbProcessPostContextSwitch.c)
 *     ?KiAbpProcessPostContextSwitch@LegacyAutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x14023D580 (-KiAbpProcessPostContextSwitch@LegacyAutoBoost@@YAXPEAU_KTHREAD@@@Z.c)
 *     KiProcessThreadWaitList @ 0x14023D710 (KiProcessThreadWaitList.c)
 *     Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline @ 0x14023F7D0 (Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline.c)
 *     KiAbProcessPreContextSwitch @ 0x14023F810 (KiAbProcessPreContextSwitch.c)
 *     KiSearchForNewThread @ 0x14023FD30 (KiSearchForNewThread.c)
 *     KiDeliverApc @ 0x140245350 (KiDeliverApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     ExSaDecodeHandle @ 0x14030C290 (ExSaDecodeHandle.c)
 *     KiResumeThreadCycleAccumulation @ 0x140336E8C (KiResumeThreadCycleAccumulation.c)
 *     ?KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x140337FA0 (-KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140338648 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1403387BC (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     DifObjTrkRemoveItem @ 0x1403B7980 (DifObjTrkRemoveItem.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1403CA120 (KiUpdateVPBackingThreadPriority.c)
 *     EtwpLogContextSwapEvent @ 0x1404075AC (EtwpLogContextSwapEvent.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x140420700 (KeInterlockedSetProcessorAffinityEx.c)
 *     ?KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x14043E7DC (-KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@.c)
 *     KiProcessScbTracingList @ 0x1404555D0 (KiProcessScbTracingList.c)
 *     ?KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z @ 0x1404607C0 (-KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     EtwpCovSampCaptureSample @ 0x1406CC924 (EtwpCovSampCaptureSample.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140734AA0 (KiSwapContext.c)
 */

__int64 __fastcall KiSwapThread(LegacyAutoBoost *this, __int64 a2, _QWORD *a3)
{
  bool v3; // zf
  LegacyAutoBoost *v5; // r15
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  ULONG_PTR v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r14
  signed __int64 v16; // rdx
  unsigned __int8 v17; // cl
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int128 v22; // rax
  int v23; // r8d
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  char v28; // bl
  __int64 v29; // rax
  _QWORD *v30; // rdx
  __int64 v31; // r10
  unsigned int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r10
  _PROC_PERF_DOMAIN *v36; // rcx
  _PROC_PERF_CONSTRAINT *v37; // rax
  unsigned int CurrentFrequencyPercent; // edx
  unsigned __int16 *v39; // r8
  unsigned __int8 v40; // r8
  _QWORD *v41; // rdx
  unsigned int UserWaitTime_high; // eax
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  int v45; // ecx
  __int64 v46; // rax
  _QWORD *v47; // rdx
  __int64 v48; // rax
  unsigned int v49; // ecx
  __int64 v50; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 SchedulerAssist; // r8
  _KCORE_CONTROL_BLOCK *v53; // rax
  _KPRCB **Prcbs; // rsi
  __int64 ProcessorCount; // r14
  _KPRCB *v56; // rbx
  unsigned int v57; // edi
  volatile signed __int64 *v58; // rsi
  struct _SINGLE_LIST_ENTRY *p_TracingListEntry; // rbx
  struct _KSCB *v60; // rdi
  _KTHREAD *v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  int IsEnabledNoReportingNoInline; // eax
  unsigned __int64 v67; // rbx
  unsigned int v68; // esi
  unsigned int j; // ecx
  __int64 v70; // rdx
  __int64 v71; // r9
  __int64 v72; // rcx
  _QWORD *i; // rax
  __int64 v74; // rax
  __int64 v75; // r8
  __int64 v76; // r10
  unsigned int *v77; // r11
  __int64 v78; // rbx
  unsigned __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rcx
  unsigned __int16 PrcbLockFlags; // cx
  unsigned int Rank; // r12d
  __int16 v84; // r15
  bool v85; // dl
  char v86; // al
  unsigned __int16 v87; // ax
  __int128 *v88; // r8
  __int64 v89; // rdx
  unsigned __int8 *v90; // rax
  unsigned int v91; // edi
  _KSCHEDULER_SUBNODE *v92; // rdx
  unsigned __int64 v93; // rcx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  __int64 v95; // rcx
  _BYTE *v96; // rax
  __int64 v97; // rdx
  __int128 *v98; // r8
  __int64 v99; // rcx
  char v100; // si
  __int64 v101; // rdx
  __int64 v102; // r8
  unsigned int v103; // r9d
  char v104; // r13
  __int64 v105; // rcx
  __int64 v106; // rdi
  __int64 v107; // rdi
  unsigned __int8 v108; // bl
  unsigned int k; // ecx
  __int64 v110; // rdx
  __int64 v111; // rdx
  unsigned int v112; // r14d
  __int64 v113; // r15
  LegacyAutoBoost *v114; // r13
  __int64 v115; // rbx
  signed __int8 v116; // al
  signed __int8 v117; // tt
  signed __int8 v118; // al
  signed __int8 v119; // tt
  __int64 v120; // r8
  char v121; // dl
  _LIST_ENTRY *v122; // rdx
  struct _LIST_ENTRY *Blink; // r8
  struct _LIST_ENTRY *v124; // rax
  char *v125; // rbx
  char v126; // r12
  char v127; // r15
  unsigned int v128; // r14d
  unsigned __int64 v129; // rcx
  unsigned __int64 v130; // r13
  unsigned __int64 v131; // rax
  volatile signed __int32 *v132; // rsi
  unsigned int v133; // r14d
  __int64 v134; // r8
  __int64 v135; // r9
  _QWORD *v136; // rcx
  _QWORD *v137; // rax
  __int64 v138; // r10
  __int64 v139; // r12
  char *v140; // rax
  __int64 v141; // rcx
  volatile signed __int32 *v142; // r14
  unsigned int v143; // r15d
  __int64 v144; // rcx
  unsigned __int64 v145; // rcx
  __int64 v146; // r14
  unsigned __int32 v147; // eax
  __int64 v148; // rdx
  unsigned __int32 v149; // ett
  unsigned __int64 LongTermCycles; // rax
  __int64 v151; // r8
  unsigned __int64 v152; // rcx
  unsigned __int64 v153; // rdx
  unsigned int v154; // ecx
  volatile signed __int32 *ShareRank; // rax
  unsigned __int32 v156; // edx
  unsigned int v157; // esi
  unsigned int v158; // r15d
  unsigned __int32 v159; // edx
  struct _KTHREAD *v160; // rdx
  __int64 ThreadServerSilo; // rbx
  __int64 v162; // rax
  _QWORD *v163; // rcx
  __int64 v164; // rsi
  _QWORD *v165; // rdi
  __int64 v166; // rdi
  __int64 v167; // r15
  LegacyAutoBoost *v168; // r13
  char v169; // al
  __int64 v170; // rdi
  unsigned __int64 v171; // r11
  signed __int64 v172; // rax
  int v173; // r10d
  unsigned __int64 v174; // rcx
  __int64 v175; // r8
  _QWORD *v176; // r8
  __int64 v177; // r9
  _QWORD *v178; // r8
  unsigned int v179; // ebx
  __int64 v180; // rax
  __int64 CounterSafe; // rax
  __int64 v182; // r14
  signed __int64 v183; // rdx
  __int64 v184; // rdx
  unsigned __int8 CurrentIrql; // si
  __int64 v186; // rax
  unsigned __int64 v187; // r11
  int v188; // r10d
  int v189; // r8d
  int v190; // r14d
  int v191; // r9d
  int v192; // eax
  unsigned int v193; // r9d
  unsigned int v194; // eax
  int v195; // edx
  ULONG_PTR v196; // rcx
  __int64 v197; // rdi
  unsigned __int64 v198; // r11
  signed __int64 v199; // rax
  int v200; // r10d
  unsigned __int64 v201; // rcx
  __int64 v202; // r9
  unsigned __int64 v203; // r9
  __int64 v204; // rdx
  signed __int32 v206[8]; // [rsp+0h] [rbp-A9h] BYREF
  bool v207; // [rsp+30h] [rbp-79h]
  unsigned __int8 v208; // [rsp+31h] [rbp-78h] BYREF
  LegacyAutoBoost *v209; // [rsp+38h] [rbp-71h]
  _QWORD v210[2]; // [rsp+40h] [rbp-69h] BYREF
  __int128 v211; // [rsp+50h] [rbp-59h] BYREF
  _QWORD *v212; // [rsp+60h] [rbp-49h]
  __int64 v213[3]; // [rsp+68h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v214; // [rsp+80h] [rbp-29h] BYREF
  _QWORD *v215; // [rsp+A0h] [rbp-9h]
  __int64 v216; // [rsp+A8h] [rbp-1h]
  unsigned __int8 *v217; // [rsp+B0h] [rbp+7h]
  __int64 v218; // [rsp+B8h] [rbp+Fh]

  v3 = *(_QWORD *)(a2 + 11528) == 0LL;
  v212 = a3;
  v5 = this;
  v209 = this;
  if ( !v3 )
    KiProcessThreadWaitList((struct _SINGLE_LIST_ENTRY *)a2, 1LL, 0LL, 2);
  KiAbProcessPreContextSwitch(v5);
  _disable();
  *(_BYTE *)(a2 + 32) = 1;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( !*(_BYTE *)(a2 + 34524) )
    goto LABEL_37;
  v10 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    v11 = 10000000LL;
    if ( HalpTimerReferencePage )
    {
      while ( 1 )
      {
        v80 = *(unsigned int *)(v10 + 188);
        if ( (unsigned int)v80 < HalpTimerQueryCounterHandlerCount )
          break;
        v159 = 0;
        if ( HalpTimerQueryCounterHandlerCount )
        {
          v178 = &unk_140FBB7E8;
          do
          {
            if ( v10 == *v178 )
              break;
            ++v159;
            v178 += 2;
          }
          while ( v159 < HalpTimerQueryCounterHandlerCount );
        }
        if ( v159 >= HalpTimerQueryCounterHandlerCount
          || (_DWORD)v80 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 188), v159, v80) )
        {
          KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v10, *(int *)(v10 + 228));
        }
      }
      v81 = (*(_DWORD *)(v10 + 224) & 0x10000) != 0
          ? *(_QWORD *)(v10 + 72) + *(_DWORD *)(v10 + 80) * KeGetPcr()->Prcb.Number
          : *(_QWORD *)(v10 + 72);
      v7 = (((unsigned __int64)((__int64 (__fastcall *)(__int64))HalpTimerQueryCounterHandlers[2 * v80])(v81)
           * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
         + MEMORY[0xFFFFF780000003B8];
    }
    else
    {
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        CounterSafe = HalpTimerQueryCounterSafe(HalpPerformanceCounter);
        v182 = *(_QWORD *)(v10 + 208);
        v183 = CounterSafe;
      }
      else
      {
        do
        {
          v182 = *(_QWORD *)(v10 + 208);
          do
          {
            v197 = *(_QWORD *)(v10 + 200);
            v198 = HalpTimerQueryCounterSafe(v10);
            _InterlockedOr(v206, 0);
            v199 = *(_QWORD *)(v10 + 200);
          }
          while ( v197 != v199 );
        }
        while ( v182 != *(_QWORD *)(v10 + 208) );
        v200 = *(_DWORD *)(v10 + 220);
        v201 = v197 ^ v198;
        if ( _bittest64((const __int64 *)&v201, (unsigned __int8)(v200 - 1)) )
        {
          if ( v200 == 64 )
            v202 = -1LL;
          else
            v202 = (1LL << v200) - 1;
          v203 = v197 & v202;
          v183 = (v198 | v197 ^ v203) + (1LL << v200);
          if ( v198 >= v203 )
            v183 = v198 | v197 ^ v203;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 200), v183, v199);
        }
        else
        {
          v204 = v200 == 64 ? -1LL : (1LL << v200) - 1;
          v183 = v198 | v197 & ~v204;
        }
      }
      v7 = HalpTimerScaleCounter(v182 + v183, *(_QWORD *)(v10 + 192), 10000000LL);
    }
  }
  else
  {
    v11 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
    {
      while ( 1 )
      {
        v12 = *(unsigned int *)(v10 + 188);
        if ( (unsigned int)v12 < HalpTimerQueryCounterHandlerCount )
          break;
        v156 = 0;
        if ( HalpTimerQueryCounterHandlerCount )
        {
          v176 = &unk_140FBB7E8;
          do
          {
            if ( v10 == *v176 )
              break;
            ++v156;
            v176 += 2;
          }
          while ( v156 < HalpTimerQueryCounterHandlerCount );
        }
        if ( v156 >= HalpTimerQueryCounterHandlerCount
          || (_DWORD)v12 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 188), v156, v12) )
        {
          KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v10, *(int *)(v10 + 228));
        }
      }
      v13 = (*(_DWORD *)(v10 + 224) & 0x10000) != 0
          ? *(_QWORD *)(v10 + 72) + *(_DWORD *)(v10 + 80) * KeGetPcr()->Prcb.Number
          : *(_QWORD *)(v10 + 72);
      v14 = ((__int64 (__fastcall *)(__int64))HalpTimerQueryCounterHandlers[2 * v12])(v13);
      v15 = *(_QWORD *)(v10 + 208);
      v16 = v14;
    }
    else
    {
      do
      {
        v15 = *(_QWORD *)(v10 + 208);
        do
        {
          v170 = *(_QWORD *)(v10 + 200);
          v171 = HalpTimerQueryCounterSafe(v10);
          _InterlockedOr(v206, 0);
          v172 = *(_QWORD *)(v10 + 200);
        }
        while ( v170 != v172 );
      }
      while ( v15 != *(_QWORD *)(v10 + 208) );
      v173 = *(_DWORD *)(v10 + 220);
      v174 = v170 ^ v171;
      if ( _bittest64((const __int64 *)&v174, (unsigned __int8)(v173 - 1)) )
      {
        if ( v173 == 64 )
          v177 = -1LL;
        else
          v177 = (1LL << v173) - 1;
        v6 = v170 & v177;
        v16 = (v171 | v170 ^ v6) + (1LL << v173);
        if ( v171 >= v6 )
          v16 = v171 | v170 ^ v6;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 200), v16, v172);
      }
      else
      {
        v16 = v173 == 64 ? v171 : v171 | v170 & ~((1LL << v173) - 1);
      }
    }
    v7 = v15 + v16;
  }
  if ( v10 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v175 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v175 = 10000000LL;
    v7 = HalpTimerScaleCounter(v7, v11, v175);
  }
  v17 = *(_BYTE *)(a2 + 172);
  v18 = *(_QWORD *)(a2 + 176);
  v19 = v7;
  *(_QWORD *)&v211 = 0LL;
  if ( v17 )
    v19 = v7 << v17;
  v8 = (v19 * (unsigned __int128)v18) >> 64;
  v9 = v8 - *(_QWORD *)(a2 + 34432);
  if ( !KiTickAccumulationFromAccountingPeriods )
    goto LABEL_37;
  v20 = *(_QWORD *)(a2 + 34552);
  if ( !MEMORY[0xFFFFF78000000300] )
    goto LABEL_37;
  *(_QWORD *)&v211 = 0LL;
  v21 = v7;
  if ( MEMORY[0xFFFFF78000000369] )
  {
    v22 = (v20 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    v21 = v7 << MEMORY[0xFFFFF78000000369];
  }
  else
  {
    v22 = v20 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
  }
  v6 = (v21 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
  v23 = ((unsigned __int64)((v6 * (unsigned __int128)(unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount)
      - ((unsigned __int64)((*((unsigned __int64 *)&v22 + 1)
                           * (unsigned __int128)(unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount);
  if ( !v23 )
    goto LABEL_37;
  if ( (*((_DWORD *)v5 + 29) & 0x400) != 0 || ((v7 >> 4) & 0x1F) >= (unsigned int)__popcnt(*((unsigned int *)v5 + 275)) )
  {
    *(_DWORD *)(a2 + 34372) += v23;
    *((_DWORD *)v5 + 163) += v23;
  }
  else
  {
    *(_DWORD *)(a2 + 34376) += v23;
    *((_DWORD *)v5 + 183) += v23;
  }
  if ( v5 == *(LegacyAutoBoost **)(a2 + 24) )
    goto LABEL_37;
  if ( *((char *)v5 + 195) < 16 )
  {
    if ( *((_QWORD *)v5 + 13) )
    {
      v24 = *((_QWORD *)v5 + 13);
      if ( v24 )
      {
        v25 = v24 + *(unsigned int *)(a2 + 216);
        if ( v25 )
        {
          v6 = 0LL;
          if ( *((char *)v5 + 195) < 16 && (*((_DWORD *)v5 + 30) & 0x200) == 0 )
          {
            v26 = v24 + *(unsigned int *)(a2 + 216);
            while ( (*(_BYTE *)(v26 + 128) & 2) == 0 )
            {
              v26 = *(_QWORD *)(v26 + 440);
              if ( !v26 )
              {
                do
                {
                  v6 = (unsigned int)(*(_DWORD *)(v25 + 140) + v6);
                  if ( (_DWORD)v6 )
                    break;
                  v25 = *(_QWORD *)(v25 + 440);
                }
                while ( v25 );
                if ( (_DWORD)v6 )
                  goto LABEL_36;
                goto LABEL_35;
              }
            }
            goto LABEL_36;
          }
        }
      }
    }
  }
LABEL_35:
  if ( *((char *)v5 + 195) < 8 )
LABEL_36:
    *(_DWORD *)(a2 + 34412) += v23;
LABEL_37:
  *(_QWORD *)(a2 + 34552) = v7;
  *(_QWORD *)(a2 + 34432) = v8;
  *((_QWORD *)v5 + 9) += v9;
  if ( v5 != *(LegacyAutoBoost **)(a2 + 24) )
  {
    v27 = *((unsigned int *)v5 + 20) + ((v9 * *(unsigned int *)(a2 + 34488)) >> 16);
    if ( v27 > 0xFFFFFFFF )
      LODWORD(v27) = -1;
    *((_DWORD *)v5 + 20) = v27;
  }
  v28 = *((_BYTE *)v5 + 2);
  if ( (v28 & 0xBE) != 0 )
  {
    if ( v28 < 0 )
    {
      v29 = *((_QWORD *)v5 + 68);
      v30 = *(_QWORD **)(a2 + 35824);
      LODWORD(v210[0]) = 0;
      v31 = (*(_QWORD *)(v29 + 400) >> 4) & 0x1FFLL;
      v6 = ((unsigned int)*(_QWORD *)(v29 + 400) >> 13) & 0x3FFFF;
      _BitScanReverse(&v32, v6);
      v33 = *(_QWORD *)(v30[v32 - 2] + 8 * (v6 ^ (unsigned int)(1 << v32)) + 8);
      *(_QWORD *)(v33 + 8 * v31) += v9;
      v28 &= ~0x80u;
    }
    if ( (v28 & 0x10) != 0 )
    {
      v34 = 8LL * *((unsigned __int8 *)v5 + 124) + 34440;
      *(_QWORD *)(v34 + a2) += v9;
      v28 &= ~0x10u;
    }
    if ( (v28 & 0x20) != 0 )
    {
      v35 = *((_QWORD *)v5 + 209);
      if ( v35 )
      {
        v36 = *(_PROC_PERF_DOMAIN **)(a2 + 35264);
        v37 = *(_PROC_PERF_CONSTRAINT **)(a2 + 35272);
        if ( v36 && v37 )
        {
          CurrentFrequencyPercent = v37->CurrentFrequencyPercent;
          if ( CurrentFrequencyPercent == -1 )
          {
            CurrentFrequencyPercent = v37->LatestFrequencyPercent;
          }
          else if ( CurrentFrequencyPercent >= v36->GuaranteedPercent )
          {
            CurrentFrequencyPercent = v36->GuaranteedPercent;
          }
        }
        else
        {
          CurrentFrequencyPercent = 100;
        }
        v6 = 0LL;
        v39 = (unsigned __int16 *)(a2 + 35468);
        do
        {
          if ( CurrentFrequencyPercent <= *v39 )
            break;
          v6 = (unsigned int)(v6 + 1);
          ++v39;
        }
        while ( (unsigned int)v6 < 3 );
        v40 = *(_BYTE *)(a2 + 35352);
        v41 = (_QWORD *)((v40 != 0 ? 8 : 0) + v35 + 16LL * (unsigned int)v6);
        UserWaitTime_high = HIDWORD(KsepShimDbLock.UserWaitTime);
        *v41 += v9;
        v43 = *(_DWORD *)(v35 + 192);
        if ( UserWaitTime_high > v43 )
        {
          LODWORD(v213[0]) = UserWaitTime_high;
          if ( UserWaitTime_high - v43 >= 0x20 )
            HIDWORD(v213[0]) = 1;
          else
            HIDWORD(v213[0]) = (*(_DWORD *)(v35 + 196) << (UserWaitTime_high - v43)) | 1;
          *(_QWORD *)(v35 + 192) = v213[0];
        }
        else
        {
          v44 = v43 - UserWaitTime_high;
          if ( v44 < 0x20 )
            *(_DWORD *)(v35 + 196) |= 1 << v44;
        }
        if ( !KiEfficiencyClassSystem )
        {
          v45 = *((unsigned __int8 *)v5 + 516);
          if ( v45 == 2 || *((_BYTE *)v5 + 516) == 6 || (_BYTE)v45 == 5 )
            *(_QWORD *)(v35 + 16LL * (unsigned int)v6 + 8) += v9;
        }
        if ( *((_QWORD *)v5 + 202) )
        {
          v46 = 64LL;
          v47 = (_QWORD *)((v40 != 0 ? 8 : 0) + v35 + 16 * ((unsigned int)v6 + 8LL));
          *v47 += v9;
          if ( v40 )
            v46 = 72LL;
          _InterlockedAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)v5 + 202) + 1672LL) + v46 + 16LL * (unsigned int)v6),
            v9);
        }
      }
      v28 &= ~0x20u;
    }
    if ( (v28 & 0x40) != 0 )
    {
      v48 = *((_QWORD *)v5 + 121);
      if ( v48 )
        *(_BYTE *)(v48 + 64) = 0;
    }
    if ( KiHgsPlusEnabled )
      KiUpdateThreadHgsFeedback((_BYTE *)a2, (__int64)v5, v9, 1);
    if ( *(_QWORD *)(a2 + 34480) && *((_UNKNOWN **)v5 + 68) != &unk_140FC9F40 && *((unsigned __int8 *)v5 + 516) < 7u )
    {
      v49 = *((_DWORD *)v5 + 20);
      if ( v49 <= *((_DWORD *)v5 + 21) )
        v49 = *((_DWORD *)v5 + 21);
      v50 = *((unsigned __int8 *)v5 + 517)
          + KiHgsPlusConfiguration
          * ((v49 >= KiDynamicHeteroCpuPolicyExpectedCycles) + 2 * (unsigned int)*((unsigned __int8 *)v5 + 516));
      *(_QWORD *)(*(_QWORD *)(a2 + 34480) + 8 * v50) += v9;
    }
    if ( (v28 & 0xBE) != 0 )
    {
      v72 = *((_QWORD *)v5 + 13);
      if ( v72 )
      {
        for ( i = (_QWORD *)(v72 + *(unsigned int *)(a2 + 216)); i; i = (_QWORD *)i[55] )
          *i += v9;
      }
      if ( (*((_BYTE *)v5 + 2) & 8) != 0
        && *((_UNKNOWN **)v5 + 68) != &unk_140FC9F40
        && (*(_QWORD *)(*((_QWORD *)v5 + 72) + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 136LL) + 8) & *(_QWORD *)(*(_QWORD *)(a2 + 192) + 128LL)) != *(_QWORD *)(*(_QWORD *)(a2 + 192) + 128LL) )
      {
        *(_QWORD *)(a2 + 34472) += v9;
      }
      v74 = *((_QWORD *)v5 + 45);
      if ( v74 )
      {
        v75 = *(_QWORD *)(v74 + 32);
        if ( v75 )
        {
          v76 = 1LL;
          if ( KiHwCountersCount )
          {
            v77 = (unsigned int *)&KiHwCounters;
            v78 = (unsigned int)KiHwCountersCount;
            v6 = v74 + 48;
            do
            {
              if ( (v75 & v76) != 0 )
              {
                v79 = __readpmc(*v77);
                *(_QWORD *)(v6 + 8) += (unsigned int)(v79 - *(_DWORD *)v6);
                *(_QWORD *)v6 = v79;
              }
              v76 *= 2LL;
              ++v77;
              v6 += 24LL;
              --v78;
            }
            while ( v78 );
          }
        }
      }
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int64)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw((const void *)SchedulerAssist);
    v147 = *(_DWORD *)SchedulerAssist;
    do
    {
      v148 = v147;
      LODWORD(v148) = v147 & 0xFFDFFFFF;
      v149 = v147;
      v147 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v147 & 0xFFDFFFFF, v147);
    }
    while ( v149 != v147 );
    if ( (v147 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v148, SchedulerAssist, v6);
  }
  _enable();
  *((_DWORD *)v5 + 21) = (*((_DWORD *)v5 + 20) >> 1) + (*((_DWORD *)v5 + 21) >> 1);
  *((_DWORD *)v5 + 20) = 0;
  v213[0] = a2 | 1;
  v53 = *(_KCORE_CONTROL_BLOCK **)(a2 + 36504);
  Prcbs = v53->Prcbs;
  if ( v53->ProcessorCount )
  {
    ProcessorCount = v53->ProcessorCount;
    while ( 1 )
    {
      v56 = *Prcbs;
      v57 = 0;
LABEL_83:
      if ( _interlockedbittestandset64((volatile signed __int32 *)&v56->PrcbLock, 0LL) )
        break;
      ++Prcbs;
      if ( !--ProcessorCount )
        goto LABEL_85;
    }
    while ( 1 )
    {
      if ( (++v57 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
        {
LABEL_102:
          HvlNotifyLongSpinWait(v57);
          goto LABEL_91;
        }
        SchedulerAssist = (unsigned int)KeNumberProcessors_0;
        for ( j = 0; j < (unsigned int)KeNumberProcessors_0; ++j )
        {
          v70 = KiProcessorBlock[j];
          if ( (*(_BYTE *)(v70 + 35) & 1) != 0 )
          {
            v71 = *(_QWORD *)(v70 + 36600);
            if ( !v71 || !*(_BYTE *)(v71 + 65) || !*(_BYTE *)(v71 + 64) )
              goto LABEL_102;
          }
        }
      }
      _mm_pause();
LABEL_91:
      if ( !v56->PrcbLock )
        goto LABEL_83;
    }
  }
LABEL_85:
  v58 = (volatile signed __int64 *)*((_QWORD *)v5 + 13);
  p_TracingListEntry = 0LL;
  v210[0] = 0LL;
  if ( !v58 )
    goto LABEL_87;
  v60 = (struct _KSCB *)((char *)v58 + *(unsigned int *)(a2 + 216));
  if ( !v60 )
    goto LABEL_87;
  while ( 1 )
  {
    PrcbLockFlags = v60->PrcbLockFlags;
    Rank = v60->Rank;
    v84 = PrcbLockFlags & 2;
    if ( (PrcbLockFlags & 4) == 0 )
    {
      v85 = 0;
      if ( (PrcbLockFlags & 0x12) != 0 )
        goto LABEL_125;
      v145 = v60->LastReportedCycles - v60->GenerationCycles;
      v60->LastReportedCycles = v60->GenerationCycles;
      v146 = v145 + _InterlockedExchangeAdd64(v58 + 6, v145);
      if ( *((__int64 *)v58 + 4) > 0 && (__int64)(v145 + _InterlockedExchangeAdd64(v58 + 4, v145)) <= 0 )
      {
        v196 = _InterlockedExchange64(v58 + 10, 0LL);
        if ( v196 )
          KiInsertQueueDpc(v196, 0);
      }
      PrcbLockFlags = v60->PrcbLockFlags;
      v85 = v146 <= 0;
      if ( (PrcbLockFlags & 0x80u) == 0 || v60->GenerationCycles <= v60->MaxQuotaCycleTarget )
      {
        if ( v146 > 0 )
          goto LABEL_125;
      }
      else
      {
        v85 = 1;
      }
      PrcbLockFlags |= 2u;
      v60->PrcbLockFlags = PrcbLockFlags;
LABEL_125:
      if ( (PrcbLockFlags & 0x24) != 0 || v60->GenerationCycles < v60->MinQuotaCycleTarget )
      {
        v86 = 0;
      }
      else
      {
        PrcbLockFlags |= 4u;
        v86 = 1;
        v60->PrcbLockFlags = PrcbLockFlags;
      }
      if ( (PrcbLockFlags & 0x20) == 0 && v86 || (PrcbLockFlags & 0x10) == 0 && v85 )
      {
        LongTermCycles = v60->LongTermCycles;
        v60->PrcbLockFlags = PrcbLockFlags | 4;
        v151 = *((unsigned int *)v58 + 2);
        v152 = (unsigned __int64)(KiCycleDivisorLongTerm * v151) >> 7;
        v153 = LongTermCycles % v152;
        v154 = LongTermCycles / v152 + 1;
        ShareRank = (volatile signed __int32 *)v60->ShareRank;
        v60->Rank = v154;
        if ( ShareRank )
          _InterlockedAdd(ShareRank, v154);
        v60->RankCycleTarget = v60->MinQuotaCycleTarget + ((unsigned __int64)(KiCycleDivisorShortTerm * v151) >> 7);
        KiCheckForEffectivePriorityChange((struct _KPRCB *)a2, (union _KISOLATION_UNIT_LOCK_HANDLE *)v153, v60);
      }
      v87 = v60->PrcbLockFlags;
      if ( (v87 & 1) != 0 )
      {
        if ( (v87 & 2) != 0 )
          KiRemoveSchedulingGroupQueue((struct _KPRCB *)a2, v60, 1u);
        else
          KiResortScbQueue((struct _KPRCB *)a2, v60, 1u);
      }
      if ( (*(_BYTE *)&v60->0 & 4) != 0 && !*(_BYTE *)(a2 + 34393) )
      {
        KeInterlockedSetProcessorAffinityEx(KiGroupSchedulingOverQuotaMask, *(unsigned int *)(a2 + 36), SchedulerAssist);
        v3 = KiClockTimerPerCpuTickScheduling == 0;
        *(_BYTE *)(a2 + 34393) = 1;
        if ( !v3 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql != 15 )
            __writecr8(0xFuLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v184) = 15;
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v184);
          }
          *(_BYTE *)(a2 + 38436) &= ~2u;
          if ( (unsigned int)dword_140E06F90 > 5 )
          {
            LODWORD(v210[0]) = 4;
            v215 = v210;
            v216 = 4LL;
            v217 = &v208;
            v208 = 0;
            v218 = 1LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06F90,
              (unsigned __int8 *)&byte_1400493A7,
              0LL,
              0LL,
              4u,
              &v214);
          }
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
      }
      goto LABEL_131;
    }
    if ( KiCheckMaxOverQuotaTransition(v60, (struct _KSCHEDULING_GROUP *)v58) )
    {
      if ( (*(_BYTE *)&v60->0 & 1) != 0 )
        KiRemoveSchedulingGroupQueue((struct _KPRCB *)a2, v60, 1u);
    }
    else if ( v60->GenerationCycles >= v60->RankCycleTarget && (*(_BYTE *)&v60->0 & 2) == 0 )
    {
      KiRecomputeGroupSchedulingRank((struct _KSCHEDULING_GROUP *)v58, v60, (struct _KPRCB *)a2);
    }
LABEL_131:
    if ( (WORD2(xmmword_140FC0C10) & 0x4000) != 0
      && (Rank != v60->Rank || (v84 != 0) != ((v60->PrcbLockFlags >> 1) & 1)) )
    {
      v60->PrcbLockFlags |= 0x100u;
      v60->TracingListEntry.Next = p_TracingListEntry;
      p_TracingListEntry = &v60->TracingListEntry;
    }
    v60 = v60->Parent;
    if ( !v60 )
      break;
    v58 = (volatile signed __int64 *)((char *)v60 - *(unsigned int *)(a2 + 216));
  }
  v210[0] = p_TracingListEntry;
  if ( p_TracingListEntry )
  {
    KiReleasePrcbLocksForIsolationUnit(v213);
    KiProcessScbTracingList(a2, v210);
    KiAcquirePrcbLocksForIsolationUnit(a2, 1LL, v213);
  }
  v5 = v209;
LABEL_87:
  v61 = (_KTHREAD *)KiSearchForNewThread((struct _KPRCB *)a2);
  IsEnabledNoReportingNoInline = Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline(v63, v62, v64, v65);
  if ( v61 == *(_KTHREAD **)(a2 + 24) )
  {
    if ( !IsEnabledNoReportingNoInline )
    {
      if ( KeHeteroSystem && !KeHeteroSystemVirtual )
      {
        KiReleasePrcbLocksForIsolationUnit(v213);
        KiSendHeteroRescheduleIntRequest((_QWORD *)a2);
        KiAcquirePrcbLocksForIsolationUnit(a2, 0LL, v213);
        v61 = *(_KTHREAD **)(a2 + 16);
      }
      goto LABEL_88;
    }
    if ( KeHeteroSystemVirtual || !KeHeteroSystem || *(_BYTE *)(a2 + 14523) )
      goto LABEL_88;
    v68 = 0;
    v88 = 0LL;
    LODWORD(v89) = 0;
    *(_QWORD *)&v211 = v213[0] & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v213[0] & 1) != 0 )
    {
      if ( (v213[0] & 1) == 1 )
      {
        v90 = *(unsigned __int8 **)((v213[0] & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
        LODWORD(v89) = *v90;
        v88 = (__int128 *)(v90 + 8);
      }
      if ( !(_DWORD)v89 )
        goto LABEL_153;
    }
    else
    {
      v88 = &v211;
      LODWORD(v89) = 1;
    }
    do
    {
      v89 = (unsigned int)(v89 - 1);
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)v88 + v89) + 48LL), 0LL);
    }
    while ( (_DWORD)v89 );
LABEL_153:
    KiSendHeteroRescheduleIntRequest((_QWORD *)a2);
    v91 = 0;
    v67 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
LABEL_154:
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
    {
      v61 = *(_KTHREAD **)(a2 + 16);
      goto LABEL_160;
    }
    while ( 1 )
    {
      if ( (++v91 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
        {
LABEL_197:
          HvlNotifyLongSpinWait(v91);
          goto LABEL_157;
        }
        for ( k = 0; k < (unsigned int)KeNumberProcessors_0; ++k )
        {
          v110 = KiProcessorBlock[k];
          if ( (*(_BYTE *)(v110 + 35) & 1) != 0 )
          {
            v111 = *(_QWORD *)(v110 + 36600);
            if ( !v111 || !*(_BYTE *)(v111 + 65) || !*(_BYTE *)(v111 + 64) )
              goto LABEL_197;
          }
        }
      }
      _mm_pause();
LABEL_157:
      if ( !*(_QWORD *)(a2 + 48) )
        goto LABEL_154;
    }
  }
LABEL_88:
  v67 = v213[0];
  v68 = 0;
LABEL_160:
  if ( v61 == *(_KTHREAD **)(a2 + 24) || v61 == (_KTHREAD *)v5 || !v61->Running )
  {
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 8) = v61;
    if ( v61->WaitBlockFill6[68] == 1 )
      v61->ReadyTime += MEMORY[0xFFFFF78000000320] - v61->WaitBlock[2].SpareLong;
    v61->WaitBlockFill6[68] = 2;
    v92 = *(_KSCHEDULER_SUBNODE **)(a2 + 192);
    v93 = *(_QWORD *)(a2 + 200);
    if ( (v93 & v92->StealableStandbyThreads) != 0 )
      _InterlockedAnd64((volatile signed __int64 *)&v92->StealableStandbyThreads, ~v93);
    SchedulingGroup = v61->SchedulingGroup;
    if ( SchedulingGroup )
    {
      v95 = (__int64)SchedulingGroup + *(unsigned int *)(a2 + 216);
      if ( v95 )
      {
        if ( (*(_WORD *)(v95 + 128) & 0x200) == 0 )
        {
          v122 = (_LIST_ENTRY *)(a2 + 35544);
          while ( v95 && (*(_WORD *)(v95 + 128) & 0x200) == 0 )
          {
            Blink = v122->Blink;
            v124 = (struct _LIST_ENTRY *)(v95 + 88);
            if ( Blink->Flink != v122 )
              goto LABEL_230;
            v124->Flink = v122;
            *(_QWORD *)(v95 + 96) = Blink;
            Blink->Flink = v124;
            v122->Blink = v124;
            v122 = (_LIST_ENTRY *)(v95 + 88);
            *(_WORD *)(v95 + 128) = *(_WORD *)(v95 + 128) & 0xF1FF | 0x200;
            v180 = *(_QWORD *)(v95 + 440);
            v95 = v180;
            if ( v180 )
              ++*(_QWORD *)(v180 + 416);
          }
        }
      }
    }
  }
  else
  {
    v61 = *(_KTHREAD **)(a2 + 24);
    *(_QWORD *)(a2 + 8) = v61;
    if ( v61->WaitBlockFill6[68] == 1 )
      v61->ReadyTime += MEMORY[0xFFFFF78000000320] - v61->WaitBlock[2].SpareLong;
    v61->WaitBlockFill6[68] = 2;
  }
  *(_QWORD *)&v211 = v67 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v67 & 1) == 0 )
  {
    v98 = &v211;
    LODWORD(v97) = 1;
    goto LABEL_169;
  }
  v96 = *(_BYTE **)((v67 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
  v97 = (unsigned __int8)*v96;
  v98 = (__int128 *)(v96 + 8);
  if ( *v96 )
  {
    do
    {
LABEL_169:
      v97 = (unsigned int)(v97 - 1);
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)v98 + v97) + 48LL), 0LL);
    }
    while ( (_DWORD)v97 );
  }
  v99 = *((unsigned __int8 *)v5 + 390);
  v208 = *((_BYTE *)v5 + 390);
  if ( v5 != (LegacyAutoBoost *)v61 )
  {
    v100 = 0;
    if ( (*((_DWORD *)v5 + 30) & 0x400000) != 0 && *((_BYTE *)v5 + 388) == 5 && *((_BYTE *)v5 + 792) )
    {
      v179 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v5 + 16, 0LL) )
      {
        do
        {
          if ( (++v179 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v99, v97, v98) )
          {
            HvlNotifyLongSpinWait(v179);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *((_QWORD *)v5 + 8) );
      }
      if ( (*((_DWORD *)v5 + 30) & 0x400000) != 0 && *((_BYTE *)v5 + 388) == 5 )
      {
        if ( (*((_DWORD *)v5 + 30) & 0x400000) != 0 )
          _InterlockedOr(*((volatile signed __int32 **)v5 + 121), 0x40000u);
        KiUpdateVPBackingThreadPriority((struct _KTHREAD *)v5);
        v100 = 1;
      }
      LOBYTE(v99) = v208;
      *((_QWORD *)v5 + 8) = 0LL;
    }
    v104 = KiSwapContext(v5, v61, (unsigned __int8)v99);
    v207 = v104;
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      v105 = *((_QWORD *)v5 + 142);
      v106 = *(_QWORD *)(v105 + 8);
      if ( v106 )
      {
        v102 = 1LL;
        v101 = 1LL << *(_BYTE *)(v106 + 14);
        v105 = *(unsigned __int16 *)(v106 + 10);
        LOWORD(v101) = v101 - 1;
        LOWORD(v105) = *(_WORD *)(v106 + 8) | v105;
        if ( (_WORD)v101 != (_WORD)v105 )
        {
          if ( *((_BYTE *)v5 + 793) )
          {
            v105 = *(unsigned __int16 *)(v106 + 8);
            v101 = (unsigned __int16)((1LL << *(_BYTE *)(v106 + 14)) - 1);
            v112 = v101 ^ (v105 | *(unsigned __int16 *)(v106 + 10));
            LODWORD(v210[0]) = 0;
            v3 = !_BitScanForward((unsigned int *)&v113, v112);
            if ( !v3 )
            {
              v114 = v209;
              do
              {
                v115 = v106 + 48 * v113 + 16;
                if ( (*(_BYTE *)(v115 + 33) & 4) == 0
                  && !*(_DWORD *)(v115 + 40)
                  && (*(_BYTE *)(v115 + 32) & 2) != 0
                  && *(_QWORD *)v115 )
                {
                  v211 = 0LL;
                  _m_prefetchw((const void *)(v115 + 35));
                  v116 = *(_BYTE *)(v115 + 35);
                  do
                  {
                    v117 = v116;
                    v116 = _InterlockedCompareExchange8((volatile signed __int8 *)(v115 + 35), v116 | 1, v116);
                  }
                  while ( v117 != v116 );
                  if ( (v116 & 1) != 0 )
                  {
                    do
                    {
                      while ( (*(_BYTE *)(v115 + 35) & 1) != 0 )
                        _mm_pause();
                      _m_prefetchw((const void *)(v115 + 35));
                      v118 = *(_BYTE *)(v115 + 35);
                      do
                      {
                        v119 = v118;
                        v118 = _InterlockedCompareExchange8((volatile signed __int8 *)(v115 + 35), v118 | 1, v118);
                      }
                      while ( v119 != v118 );
                    }
                    while ( (v118 & 1) != 0 );
                  }
                  *(_BYTE *)(v115 + 33) |= 1u;
                  AutoBoost::KiAbpEntryUnlink(
                    (AutoBoost *)(v106 + 48 * v113 + 16),
                    (struct AutoBoost::_AB_THREAD_ENTRY *)v101);
                  v120 = *(_QWORD *)(v115 + 40);
                  *(_DWORD *)(v115 + 40) = 0;
                  _InterlockedAnd8((volatile signed __int8 *)(v115 + 35), 0xFEu);
                  v121 = *(_BYTE *)(v115 + 36);
                  *(_QWORD *)v115 = 0LL;
                  *(_WORD *)(v115 + 32) = 0;
                  *(_WORD *)(v115 - 48LL * (v121 & 0x7F) - 8) |= 1 << (v121 & 0xF);
                  AutoBoost::KiAbpUnboostThread(v114, 0LL, v120, 0LL);
                  v101 = *((_QWORD *)v114 + 100);
                  if ( v101 )
                  {
                    v105 = 8 * v113;
                    v213[0] = *(_QWORD *)(8 * v113 + v101);
                    HIBYTE(v213[0]) &= ~0x80u;
                    *(_QWORD *)(8 * v113 + v101) = v213[0];
                  }
                }
                v112 &= v112 - 1;
                v3 = !_BitScanForward((unsigned int *)&v113, v112);
              }
              while ( !v3 );
              v104 = v207;
            }
            v5 = v209;
          }
        }
      }
    }
    else
    {
      LegacyAutoBoost::KiAbpProcessPostContextSwitch(v5, (struct _KTHREAD *)v101, v102, v103);
    }
    if ( v100 && (*((_DWORD *)v5 + 30) & 0x400000) != 0 )
      _InterlockedAnd(*((volatile signed __int32 **)v5 + 121), 0xFFFBFFFF);
    goto LABEL_177;
  }
  v207 = v61->ApcState.KernelApcPending && !v61->SpecialApcDisable && !(_BYTE)v99;
  KiResumeThreadCycleAccumulation(a2, v61, 0LL);
  KiAbProcessPostContextSwitch((__int64)v5, v160);
  if ( (*((_DWORD *)&v61->0 + 1) & 0x800) != 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)&v61->116 + 1, 0xBu);
    KiInsertDeferredPreemptionApc(a2, (__int64)v61, 0);
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
  {
    ThreadServerSilo = PsGetThreadServerSilo((__int64)v5);
    v162 = PsGetThreadServerSilo((__int64)v5);
    v163 = &PspHostSiloGlobals;
    v164 = v162;
    if ( ThreadServerSilo )
      v165 = *(_QWORD **)(ThreadServerSilo + 1504);
    else
      v165 = &PspHostSiloGlobals;
    v166 = v165[104];
    if ( v162 )
      v163 = *(_QWORD **)(v162 + 1504);
    v167 = v163[104];
    v168 = v209;
    if ( EtwpHostSiloState != -4844
      && (*(_DWORD *)(EtwpHostSiloState + 4848) & 4) != 0
      && v209 != (LegacyAutoBoost *)ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Blink->Flink
      && v209 != (LegacyAutoBoost *)KeGetCurrentPrcb()->IdleThread )
    {
      v186 = ExSaDecodeHandle(*(_QWORD *)(ExpSysDbgLock.InGlobalUpdateVpThreadPriorityList + 8));
      v187 = (v186 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      v188 = *(_DWORD *)(v187 + 0xB8);
      if ( !v188 )
        goto LABEL_441;
      v189 = *(_DWORD *)(((v186 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0xCC);
      v190 = MEMORY[0xFFFFF78000000320];
      if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(((v186 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0xBC)) > *(_DWORD *)(((v186 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0xC0) )
      {
        *(_DWORD *)(((v186 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0xBC) = MEMORY[0xFFFFF78000000320];
        v192 = v189 + v188;
        v189 = *(_DWORD *)(v187 + 196);
        if ( v192 <= v189 )
          v189 = v192;
        *(_DWORD *)(v187 + 204) = v189;
        v193 = (unsigned int)(*(_DWORD *)(v187 + 212) + *(_DWORD *)(v187 + 200)) >> 1;
        *(_DWORD *)(v187 + 212) = v193;
        *(_DWORD *)(v187 + 200) = 0;
        if ( v193 >= 2 * v188 )
        {
          v194 = v193 / (v188 + 1);
          *(_DWORD *)(v187 + 216) = v194;
          v191 = v194;
          v195 = 16777619 * (v190 ^ *(_DWORD *)(v187 + 220));
          *(_DWORD *)(v187 + 220) = v195;
          *(_DWORD *)(v187 + 208) = v195 & (2 * v194);
        }
        else
        {
          *(_DWORD *)(v187 + 216) = 1;
          v191 = 1;
          *(_DWORD *)(v187 + 208) = 1;
        }
      }
      else
      {
        v191 = *(_DWORD *)(((v186 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0xD8);
      }
      _InterlockedIncrement((volatile signed __int32 *)(v187 + 200));
      if ( v189 > 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v187 + 208), 0xFFFFFFFF) <= 1 )
      {
        *(_DWORD *)(v187 + 204) = v189 - 1;
        *(_DWORD *)(v187 + 208) = v191;
LABEL_441:
        _InterlockedIncrement((volatile signed __int32 *)(v187 + 324));
        EtwpCovSampCaptureSample(0LL, 1342177284LL);
      }
    }
    EtwpLogContextSwapEvent(EtwpHostSiloState, v168, v168);
    if ( ThreadServerSilo == v164 )
    {
      if ( ThreadServerSilo && v166 )
      {
        v5 = v209;
        EtwpLogContextSwapEvent(v166, v209, v209);
        v104 = v207;
        goto LABEL_177;
      }
    }
    else if ( ThreadServerSilo && v166 )
    {
      EtwpLogContextSwapEvent(v166, v168, 0LL);
    }
    if ( v164 && v167 )
      EtwpLogContextSwapEvent(v167, 0LL, v168);
    v5 = v209;
    v104 = v207;
LABEL_177:
    v68 = 0;
  }
  else
  {
    v104 = v207;
  }
  v107 = *((_QWORD *)v5 + 25);
  if ( !_bittestandreset((signed __int32 *)v5 + 29, 9u) )
    goto LABEL_179;
  v125 = (char *)v5 + 256;
  *(_QWORD *)&v211 = 0LL;
  v101 = 1LL;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)v5 + 315, 1, 2) == 2 )
  {
    v126 = 1;
    DifObjTrkRemoveItem(49LL, (char *)v5 + 256, 0LL);
  }
  else
  {
    v126 = 0;
  }
  v127 = 0;
  v128 = -129;
  while ( 2 )
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)v125, 7u) )
    {
      do
      {
        if ( (++v68 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v105, v101, v102) )
        {
          HvlNotifyLongSpinWait(v68);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)v125 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v125, 7u) );
    }
    if ( v126 )
      _InterlockedCompareExchange8(v125 + 59, 0, 1);
    if ( (v125[3] & 0xC0) == 0 )
      goto LABEL_254;
    v129 = 0x140000000uLL;
    v130 = (unsigned __int8)v125[2];
    v131 = (unsigned __int64)(unsigned __int8)v125[58] << 8;
    v213[0] = KiProcessorBlock[*((unsigned __int16 *)v125 + 28)] + 16640;
    v132 = (volatile signed __int32 *)(v213[0] + 32 * (v131 + v130 + 16));
    v133 = 0;
    while ( _interlockedbittestandset64(v132, 0LL) )
    {
      do
      {
        if ( (++v133 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v129, v101, v102) )
        {
          HvlNotifyLongSpinWait(v133);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v132 );
    }
    if ( v125[3] >= 0 )
    {
      v134 = (unsigned __int8)v125[58];
      v101 = (__int64)(v125 + 32);
      v135 = v213[0];
      v136 = (_QWORD *)*((_QWORD *)v125 + 4);
      v137 = (_QWORD *)*((_QWORD *)v125 + 5);
      v138 = v213[0] + 32 * (v130 + ((v134 ^ 1) << 8) + 16);
      v139 = v213[0] + 32 * (v130 + (v134 << 8) + 16);
      v210[0] = v138;
      if ( (char *)v136[1] != v125 + 32 || *v137 != v101 )
LABEL_230:
        __fastfail(3u);
      *v137 = v136;
      v136[1] = v137;
      if ( v137 != v136 )
        goto LABEL_248;
      v141 = 0xFFFFFFFFLL;
      *(_DWORD *)(v139 + 28) = -1;
      if ( !(_BYTE)v134 )
      {
        v142 = (volatile signed __int32 *)(v135 + 32 * (v130 + 272));
        v143 = 0;
        while ( _interlockedbittestandset64(v142, 0LL) )
        {
          do
          {
            if ( (++v143 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v141, v101, v134) )
            {
              HvlNotifyLongSpinWait(v143);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v142 );
        }
        goto LABEL_269;
      }
      v142 = (volatile signed __int32 *)(v135 + 32 * (v130 + 16));
      if ( _interlockedbittestandset64(v142, 0LL) )
      {
        _mm_pause();
        goto LABEL_305;
      }
      if ( !v142 )
      {
LABEL_305:
        _InterlockedAnd64((volatile signed __int64 *)v132, 0LL);
        v157 = 0;
        while ( _interlockedbittestandset64(v142, 0LL) )
        {
          do
          {
            if ( (++v157 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v141, v101, v134) )
            {
              HvlNotifyLongSpinWait(v157);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v142 );
        }
        v132 = (volatile signed __int32 *)(v213[0] + 32 * (v130 + 272));
        v158 = 0;
        while ( _interlockedbittestandset64(v132, 0LL) )
        {
          do
          {
            if ( (++v158 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v141, v101, v134) )
            {
              HvlNotifyLongSpinWait(v158);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v132 );
        }
LABEL_269:
        v138 = v210[0];
        v135 = v213[0];
      }
      if ( *(_DWORD *)(v139 + 28) == -1 && *(_DWORD *)(v138 + 28) == -1 )
      {
        v144 = qword_140FC2698[2 * *(unsigned __int8 *)(v135 - 16432)];
        if ( !KiSerializeTimerExpiration )
        {
          _interlockedbittestandreset64(
            (volatile signed __int32 *)((v130 << 6) + v144),
            *(unsigned __int8 *)(v135 - 16431));
          _InterlockedAnd64((volatile signed __int64 *)v142, 0LL);
          goto LABEL_248;
        }
        _interlockedbittestandreset64((volatile signed __int32 *)(v144 + 8 * (v130 >> 6)), v130 & 0x3F);
      }
      _InterlockedAnd64((volatile signed __int64 *)v142, 0LL);
LABEL_248:
      _InterlockedAnd64((volatile signed __int64 *)v132, 0LL);
      v127 = 1;
      v128 = -1073741953;
      goto LABEL_254;
    }
    _InterlockedAnd64((volatile signed __int64 *)v132, 0LL);
    v68 = 0;
    v101 = v213[0];
    v105 = _InterlockedExchange64((volatile __int64 *)(v213[0] + 8LL * (v125[3] & 0x3F)), 0LL);
    if ( !v105 )
    {
      v128 = -129;
      _InterlockedAnd((volatile signed __int32 *)v125, 0xFFFFFF7F);
      v169 = v125[3];
      LODWORD(v210[0]) = 0;
      if ( v169 < 0 )
      {
        do
          KeYieldProcessorEx(v210);
        while ( v125[3] < 0 );
      }
      continue;
    }
    break;
  }
  v127 = 1;
  v128 = 16777087;
LABEL_254:
  _InterlockedAnd((volatile signed __int32 *)v125, v128);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    if ( !v127 )
    {
LABEL_256:
      v5 = v209;
      v140 = (char *)v209 + 464;
      *((_BYTE *)v209 + 481) = 4;
      *((_QWORD *)v5 + 33) = v140;
      *((_QWORD *)v5 + 34) = v140;
      goto LABEL_257;
    }
    *(_QWORD *)&v211 = v125;
    v213[0] = (__int64)&v211;
    v213[1] = 8LL;
    EtwTraceKernelEvent((unsigned int)v213, 1, 1073872896, 3925, 1538);
    v104 = v207;
    v5 = v209;
  }
  else
  {
    if ( !v127 )
      goto LABEL_256;
    v5 = v209;
LABEL_257:
    v104 = v207;
  }
LABEL_179:
  if ( v212 )
    *v212 = *((_QWORD *)v5 + 122);
  if ( v104 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v101) = 1;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v101);
    }
    __writecr8(1uLL);
    KiDeliverApc(0LL, 0LL, 0LL);
  }
  v108 = v208;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v208);
  __writecr8(v108);
  return v107;
}
