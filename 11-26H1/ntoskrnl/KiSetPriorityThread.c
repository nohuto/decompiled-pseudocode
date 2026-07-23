/*
 * XREFs of KiSetPriorityThread @ 0x140381000
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     KeAdjustPriorityFloor @ 0x14023972C (KeAdjustPriorityFloor.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KiFastExitThreadWait @ 0x1402459A0 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x1402470E0 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x1402478E0 (KiSatisfyThreadWait.c)
 *     ?KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEAU_AB_BOOST_CONTEXT@1@PEAT_AB_IO_BOOST@1@@Z @ 0x140377280 (-KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEA.c)
 *     PopFxActivateComponent @ 0x14037C8F0 (PopFxActivateComponent.c)
 *     ?KiAbpThreadUnboostCpuPriority@AutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14037CDD0 (-KiAbpThreadUnboostCpuPriority@AutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x14037D0A0 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     KeSetPriorityBoost @ 0x14037D350 (KeSetPriorityBoost.c)
 *     PspRevertContainerImpersonation @ 0x14037F6B0 (PspRevertContainerImpersonation.c)
 *     PspUpdateContainerImpersonation @ 0x14037FEA0 (PspUpdateContainerImpersonation.c)
 *     KiClearPriorityFloor @ 0x1403823E0 (KiClearPriorityFloor.c)
 *     KiSetPriorityFloor @ 0x1403825B0 (KiSetPriorityFloor.c)
 *     KiWakePriQueueWaiter @ 0x1403826C0 (KiWakePriQueueWaiter.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1403971A0 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     KiSetPriorityBoost @ 0x1403C9908 (KiSetPriorityBoost.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403C9D80 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KeRemovePriQueue @ 0x1403EF700 (KeRemovePriQueue.c)
 *     KiPerformWaitDeferredWork @ 0x1403F08D0 (KiPerformWaitDeferredWork.c)
 *     KiSetDisableBoostThread @ 0x14049D8D0 (KiSetDisableBoostThread.c)
 *     KeSetBasePriorityThread @ 0x14052B1A0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x14052EA80 (KeBoostPriorityThread.c)
 * Callees:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14022FB10 (KiPrepareReadyThreadForRescheduling.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiIsThreadStateControlledByProcessor @ 0x14023944C (KiIsThreadStateControlledByProcessor.c)
 *     ?KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z @ 0x14023D390 (-KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     EtwTraceScheduleThread @ 0x140248130 (EtwTraceScheduleThread.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiComputeThreadQos @ 0x140306EE0 (KiComputeThreadQos.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x140338054 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiUpdateThreadPriority @ 0x140380850 (KiUpdateThreadPriority.c)
 *     KiUpdateStandbyStealSummaryForStandbyChange @ 0x140380B40 (KiUpdateStandbyStealSummaryForStandbyChange.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140380C70 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiQueryEffectivePriorityThread @ 0x140380E90 (KiQueryEffectivePriorityThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1403CA120 (KiUpdateVPBackingThreadPriority.c)
 *     KeIsForceParkingEnabled @ 0x1404366F0 (KeIsForceParkingEnabled.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140529DB4 (EtwTraceXSchedulerPriorityKickSend.c)
 */

char __fastcall KiSetPriorityThread(unsigned __int64 a1, struct _SINGLE_LIST_ENTRY *a2, unsigned __int64 *a3)
{
  __int64 v3; // r13
  int v4; // edi
  int v5; // eax
  struct _KPRCB *v6; // r11
  volatile __int64 *v7; // r10
  int v8; // esi
  __int64 v9; // r12
  _BYTE *v10; // rax
  __int64 *v11; // r14
  __int64 v12; // r15
  __int64 v13; // rbx
  unsigned int v14; // esi
  unsigned int i; // ecx
  __int64 v16; // rdx
  __int64 v17; // rdx
  char v18; // al
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v21; // rdx
  signed int v22; // r12d
  _KTHREAD *NextThread; // rbx
  AutoBoost *v24; // r8
  char v25; // cl
  int v26; // eax
  __int64 v27; // r9
  int v28; // ecx
  _BYTE *v29; // rax
  unsigned int v30; // ecx
  struct _KPRCB **v31; // r12
  __int64 v32; // r15
  __int64 v33; // r13
  struct _KPRCB *v34; // rbx
  unsigned __int8 *v35; // r14
  unsigned __int8 v36; // si
  char v37; // al
  unsigned __int8 v38; // cl
  volatile signed __int32 *v39; // rdx
  unsigned int v40; // edx
  _KPRIORITY_STATE *v41; // r8
  char v42; // cl
  char v43; // al
  char v44; // si
  char v45; // cl
  int v46; // esi
  AutoBoost *v47; // r8
  char v48; // bl
  char v49; // cl
  int v50; // eax
  struct _KPRCB **v51; // r13
  unsigned int v52; // edx
  unsigned __int8 *v53; // rax
  __int64 v54; // r15
  struct _KPRCB *v55; // rbx
  unsigned __int8 *PriorityState; // r12
  unsigned __int8 v57; // si
  char v58; // al
  unsigned __int8 v59; // cl
  volatile signed __int32 *SchedulerAssist; // rdx
  int v61; // ecx
  int v62; // r8d
  unsigned int v63; // ecx
  unsigned int v64; // r8d
  _KPRIORITY_STATE *v65; // r9
  char v66; // cl
  char v67; // dl
  volatile signed __int32 *v68; // rdx
  int v69; // ecx
  int v70; // r8d
  __int64 v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  unsigned __int8 v75; // dl
  volatile signed __int32 *v76; // rdx
  int v77; // ecx
  int v78; // r8d
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rax
  _WORD *v83; // rcx
  __int64 v84; // rcx
  struct _KPRCB **v85; // r10
  unsigned __int64 v86; // rcx
  int v87; // r12d
  unsigned int v88; // r9d
  unsigned __int8 *v89; // rax
  int v90; // r8d
  unsigned __int8 v91; // al
  __int64 v92; // r9
  unsigned int k; // edx
  struct _SINGLE_LIST_ENTRY *v94; // r13
  char v95; // r12
  char v96; // si
  unsigned int m; // ebx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  unsigned __int8 *v99; // rax
  __int64 v100; // rax
  unsigned __int8 v101; // dl
  unsigned __int8 v102; // al
  __int64 Prcb; // rsi
  unsigned __int8 v104; // al
  unsigned __int8 TargetType; // al
  unsigned int SingleTargetIndex; // eax
  unsigned int v108; // ecx
  __int64 v109; // rcx
  char *v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rcx
  __int64 v113; // rdx
  unsigned int v114; // eax
  unsigned int v115; // ecx
  __int64 v116; // rcx
  char *v117; // rdx
  __int64 v118; // rcx
  int v119; // edx
  bool v120; // zf
  _DWORD *v121; // rcx
  __int64 v122; // r12
  unsigned __int8 *v123; // rbx
  __int64 v124; // r11
  struct _KPRCB *v125; // rsi
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rcx
  __int64 CurrentThread; // r13
  unsigned __int8 v128; // cl
  unsigned __int8 v129; // cl
  unsigned __int8 v130; // dl
  unsigned __int8 v131; // cl
  volatile signed __int32 *v132; // r13
  _QWORD *v133; // r9
  struct _KPRCB *v134; // rdx
  __int64 v135; // rbx
  __int64 v136; // rdx
  unsigned __int8 *v137; // rax
  _QWORD *v138; // r9
  struct _KPRCB *v139; // rdx
  __int64 v140; // rdx
  int v141; // ecx
  _DWORD *v142; // rcx
  __int64 v143; // rbx
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // rax
  unsigned __int8 *v147; // r8
  unsigned int j; // edx
  unsigned __int8 *v149; // r10
  unsigned __int8 *v150; // rcx
  __int64 v151; // rdx
  int v152; // ecx
  int v153; // r8d
  unsigned int v154; // ecx
  __int64 v155; // [rsp+38h] [rbp-59h]
  _KTHREAD *v156; // [rsp+40h] [rbp-51h]
  __int64 v157; // [rsp+40h] [rbp-51h]
  volatile __int64 *v158; // [rsp+40h] [rbp-51h]
  unsigned __int64 *v159; // [rsp+40h] [rbp-51h]
  struct _KPRCB *v160; // [rsp+48h] [rbp-49h]
  signed int v161; // [rsp+50h] [rbp-41h]
  __int64 v162; // [rsp+50h] [rbp-41h]
  __int128 v163; // [rsp+58h] [rbp-39h] BYREF
  __int128 v164; // [rsp+68h] [rbp-29h] BYREF
  volatile signed __int64 *v165; // [rsp+78h] [rbp-19h]
  __int64 v166; // [rsp+80h] [rbp-11h] BYREF
  __int64 v167; // [rsp+88h] [rbp-9h] BYREF
  unsigned __int64 v168; // [rsp+90h] [rbp-1h] BYREF
  __int64 v169; // [rsp+98h] [rbp+7h]
  unsigned __int64 v170; // [rsp+A0h] [rbp+Fh]
  unsigned __int64 v171; // [rsp+F8h] [rbp+67h] BYREF
  struct _SINGLE_LIST_ENTRY *v172; // [rsp+100h] [rbp+6Fh]
  signed int v173; // [rsp+108h] [rbp+77h]
  unsigned __int64 v174; // [rsp+110h] [rbp+7Fh] BYREF

  v173 = (int)a3;
  v172 = a2;
  v171 = a1;
  v3 = a1;
  if ( *(char *)(a1 + 195) == (_DWORD)a3 )
    return 0;
  v163 = 0LL;
  v165 = 0LL;
  v164 = 0LL;
  v4 = 0;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        v5 = *(unsigned __int8 *)(v3 + 388);
        v6 = 0LL;
        v155 = 0LL;
        v7 = 0LL;
        LODWORD(v174) = v5;
        v8 = v5;
        if ( v5 == 5 )
          break;
        switch ( v5 )
        {
          case 1:
            v71 = *(unsigned int *)(v3 + 536);
            if ( (int)v71 >= 0 )
            {
              v155 = KiProcessorBlock[v71];
              KiAcquirePrcbLocksForIsolationUnit(v155, 0, (unsigned __int64 *)&v163 + 1);
              if ( *(_BYTE *)(v3 + 388) != 1 || *(_DWORD *)(v3 + 536) != (_DWORD)v71 )
                goto LABEL_267;
              v21 = (unsigned int)*(char *)(v3 + 195);
              StaticRescheduleContext = 0LL;
              v6 = (struct _KPRCB *)v155;
              v22 = v21;
              *(_QWORD *)&v163 = v155;
              v7 = 0LL;
              *(_QWORD *)&v164 = 0LL;
              CurrentPrcb = KeGetCurrentPrcb();
              v160 = CurrentPrcb;
              LODWORD(v174) = 0;
              v161 = v21;
LABEL_50:
              v46 = v8 - 1;
              if ( !v46 )
              {
                KiRemoveThreadFromAnyReadyQueue(v6, (__int64)v7, v3, v22);
                KiUpdateThreadPriority(0LL, v140, v3, v173, 0);
                KiPrepareReadyThreadForRescheduling(v3, (unsigned int)v173, (__int64 *)v172);
                v44 = 0;
                goto LABEL_104;
              }
              if ( v46 != 2 )
              {
                KiUpdateThreadPriority(0LL, v21, v3, v173, 0);
                v44 = 0;
                goto LABEL_104;
              }
              v47 = (AutoBoost *)KeGetCurrentPrcb();
              v48 = v173;
              v49 = v173;
              if ( (KiAbpGlobalState & 1) != 0 )
              {
                if ( (char)v173 > (char)v21 )
                {
                  if ( *(_BYTE *)(v3 + 792) )
                  {
                    v138 = (_QWORD *)(v3 + 808);
                    if ( *(_QWORD *)(v3 + 808) == 1LL )
                    {
                      v139 = (struct _KPRCB *)((char *)v47 + 37304);
                      if ( v47 != (AutoBoost *)-37304LL )
                      {
LABEL_313:
                        *v138 = *(_QWORD *)&v139->MxCsr;
                        *(_QWORD *)&v139->MxCsr = v138;
                        _InterlockedIncrement16((volatile signed __int16 *)(v3 + 868));
                        AutoBoost::KiAbpQueueAutoBoostDpc(v47, v139);
                        v49 = v48;
                      }
                    }
                  }
                }
              }
              else if ( (char)v173 > (char)v21 )
              {
                if ( *(_BYTE *)(v3 + 792) )
                {
                  v138 = (_QWORD *)(v3 + 808);
                  if ( *(_QWORD *)(v3 + 808) == 1LL )
                  {
                    v139 = (struct _KPRCB *)((char *)v47 + 37304);
                    if ( v47 != (AutoBoost *)-37304LL )
                      goto LABEL_313;
                  }
                }
              }
              *(_BYTE *)(v3 + 195) = v49;
              v50 = KiComputeThreadQos(v3);
              if ( v50 != *(unsigned __int8 *)(v3 + 516) )
                *(_BYTE *)(v3 + 516) = v50;
              v51 = 0LL;
              v52 = 0;
              v166 = v155;
              if ( ((*(_DWORD *)(v171 + 120) >> 1) & 1) != 0 )
              {
                if ( ((*(_DWORD *)(v171 + 120) >> 1) & 1) == 1 )
                {
                  v53 = *(unsigned __int8 **)(v155 + 36504);
                  v52 = *v53;
                  v51 = (struct _KPRCB **)(v53 + 8);
                }
                if ( !v52 )
                  goto LABEL_76;
              }
              else
              {
                v51 = (struct _KPRCB **)&v166;
                v52 = 1;
              }
              v54 = v171;
              v157 = v52;
              do
              {
                v55 = *v51;
                PriorityState = (unsigned __int8 *)(*v51)->PriorityState;
                v57 = *PriorityState;
                if ( (*(_BYTE *)(v54 + 2) & 4) != 0 )
                  v58 = KiQueryEffectivePriorityThread(v54, *v51) ^ v57;
                else
                  v58 = *(_BYTE *)(v54 + 195) ^ v57;
                v59 = (v57 ^ v58 & 0x7F) & 0x7F | ((unsigned __int8)(*(_DWORD *)(v54 + 120) >> 1) << 7);
                *PriorityState = v59;
                SchedulerAssist = (volatile signed __int32 *)v55->SchedulerAssist;
                if ( SchedulerAssist )
                {
                  v61 = (_KTHREAD *)v54 == v55->IdleThread ? KiVpThreadSystemWorkPriority : v59 & 0x7F;
                  v62 = (unsigned __int8)BYTE1(*SchedulerAssist);
                  if ( v61 != v62 )
                  {
                    if ( v61 <= v62 )
                      v63 = (v61 << 8) - (v62 << 8);
                    else
                      v63 = (v61 - v62) << 8;
                    _InterlockedAdd(SchedulerAssist, v63);
                  }
                }
                v64 = *(_DWORD *)(v54 + 80);
                v65 = v55->PriorityState;
                if ( v64 <= *(_DWORD *)(v54 + 84) )
                  v64 = *(_DWORD *)(v54 + 84);
                v67 = 64;
                if ( v64 < KiDynamicHeteroCpuPolicyExpectedCycles )
                  v67 = 0;
                v66 = v65[64].AllFields ^ (*(_BYTE *)(v54 + 516) ^ v65[64].AllFields) & 7;
                v65[64].AllFields = v67 | (v66 ^ (v66 ^ (8 * *(_BYTE *)(v54 + 517))) & 0x38) & 0xBF;
                KiUpdateThreadQosGroupingSummaries((__int64)v55);
                KiUpdateStandbyStealSummaryForStandbyChange((__int64)v55);
                ++v51;
                --v157;
              }
              while ( v157 );
              CurrentPrcb = v160;
LABEL_76:
              v3 = v171;
              if ( (*(_DWORD *)(v171 + 120) & 0x400000) != 0 )
              {
                v68 = *(volatile signed __int32 **)(v171 + 968);
                v69 = *(char *)(v171 + 195);
                v70 = (unsigned __int8)*v68;
                if ( v69 != v70 )
                  _InterlockedAdd(v68, v69 - v70);
              }
              if ( v173 >= v161 )
              {
                LODWORD(v174) = v173;
                v44 = 0;
              }
              else
              {
                v44 = 1;
              }
              goto LABEL_104;
            }
            v72 = (unsigned int)v71;
            LODWORD(v72) = v71 & 0x7FFFFFFF;
            v7 = *(volatile __int64 **)(KiProcessorBlock[v72] + 36488);
            v158 = v7;
            if ( (KiVelocityFlags & 0x200000) != 0 )
            {
              v165 = *(volatile signed __int64 **)(KiProcessorBlock[v72] + 36488);
              *((_QWORD *)&v164 + 1) = 0LL;
              v73 = _InterlockedExchange64(v7, (__int64)&v164 + 8);
              if ( !v73 )
                goto LABEL_84;
              KxWaitForLockOwnerShip((signed __int64)&v164 + 8, v73, (__int64)a3);
            }
            else
            {
              LODWORD(v174) = 0;
              v132 = (volatile signed __int32 *)v7;
              while ( _interlockedbittestandset64(v132, 0LL) )
              {
                do
                  KeYieldProcessorEx(&v174);
                while ( *(_QWORD *)v132 );
              }
              v3 = v171;
            }
            v7 = v158;
LABEL_84:
            if ( *(_BYTE *)(v3 + 388) == 1 && *(_DWORD *)(v3 + 536) == (_DWORD)v71 )
            {
              v6 = 0LL;
              v155 = 0LL;
              *(_QWORD *)&v163 = 0LL;
              *(_QWORD *)&v164 = v7;
LABEL_270:
              v21 = (unsigned int)*(char *)(v3 + 195);
              StaticRescheduleContext = 0LL;
              CurrentPrcb = KeGetCurrentPrcb();
              v22 = *(char *)(v3 + 195);
              v160 = CurrentPrcb;
              v161 = v22;
              LODWORD(v174) = 0;
              goto LABEL_50;
            }
            if ( (KiVelocityFlags & 0x200000) != 0 )
            {
              _m_prefetchw((char *)&v164 + 8);
              v74 = *((_QWORD *)&v164 + 1);
              if ( *((_QWORD *)&v164 + 1) )
              {
LABEL_89:
                *((_QWORD *)&v164 + 1) = 0LL;
                v75 = (unsigned __int8)v165;
                if ( ((v75 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v74 + 8), (__int64)v165)) & 4) != 0 )
                  KeWakeAddressAll();
              }
              else if ( (__int128 *)_InterlockedCompareExchange64(v165, 0LL, (signed __int64)&v164 + 8) != (__int128 *)((char *)&v164 + 8) )
              {
                v74 = KxWaitForLockChainValid((__int64 *)&v164 + 1, 0x140000000LL, (__int64)a3);
                goto LABEL_89;
              }
            }
            else
            {
              _InterlockedAnd64(v7, 0LL);
            }
            break;
          case 2:
            goto LABEL_226;
          case 3:
            v9 = *(unsigned int *)(v3 + 536);
            if ( (int)v9 >= 0 )
            {
              v155 = KiProcessorBlock[v9];
              v6 = (struct _KPRCB *)v155;
              *((_QWORD *)&v163 + 1) = v155 | 1;
              v10 = *(_BYTE **)(v155 + 36504);
              v11 = (__int64 *)(v10 + 8);
              if ( !*v10 )
                goto LABEL_14;
              v12 = (unsigned __int8)*v10;
              do
              {
                v13 = *v11;
                v14 = 0;
LABEL_11:
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 48), 0LL) )
                {
                  while ( 1 )
                  {
                    if ( (++v14 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
                    {
                      if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
                      {
LABEL_31:
                        HvlNotifyLongSpinWait(v14);
                        goto LABEL_20;
                      }
                      for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
                      {
                        v16 = KiProcessorBlock[i];
                        if ( (*(_BYTE *)(v16 + 35) & 1) != 0 )
                        {
                          v17 = *(_QWORD *)(v16 + 36600);
                          if ( !v17 || !*(_BYTE *)(v17 + 65) || !*(_BYTE *)(v17 + 64) )
                            goto LABEL_31;
                        }
                      }
                    }
                    _mm_pause();
LABEL_20:
                    if ( !*(_QWORD *)(v13 + 48) )
                      goto LABEL_11;
                  }
                }
                ++v11;
                --v12;
              }
              while ( v12 );
              v8 = v174;
              v7 = 0LL;
              v6 = (struct _KPRCB *)v155;
LABEL_14:
              if ( (_KTHREAD *)v3 == v6->NextThread )
              {
                *(_QWORD *)&v163 = v6;
                goto LABEL_305;
              }
              if ( *(_BYTE *)(v3 + 388) == 3 && *(_DWORD *)(v3 + 536) == (_DWORD)v9 )
                __fastfail(0x1Eu);
LABEL_267:
              KiReleasePrcbLocksForIsolationUnit((__int64 *)&v163 + 1);
            }
            break;
          default:
            goto LABEL_34;
        }
      }
      v18 = *(_BYTE *)(v3 + 112) & 7;
      if ( v18 == 1 )
        goto LABEL_34;
      if ( (unsigned __int8)(v18 - 3) <= 3u )
      {
        *(_QWORD *)&v163 = 0LL;
LABEL_305:
        *(_QWORD *)&v164 = 0LL;
        goto LABEL_270;
      }
      v8 = 2;
LABEL_226:
      v135 = *(unsigned int *)(v3 + 536);
    }
    while ( (int)v135 < 0 );
    v155 = KiProcessorBlock[v135];
    KiAcquirePrcbLocksForIsolationUnit(v155, 1, (unsigned __int64 *)&v163 + 1);
    v6 = (struct _KPRCB *)v155;
    if ( v3 == *(_QWORD *)(v155 + 8) )
      break;
    if ( *(_BYTE *)(v3 + 388) == 2 && *(_DWORD *)(v3 + 536) == (_DWORD)v135 )
      __fastfail(0x4Au);
    a3 = 0LL;
    LODWORD(v136) = 0;
    v174 = *((_QWORD *)&v163 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (BYTE8(v163) & 1) == 0 )
    {
      a3 = &v174;
      LODWORD(v136) = 1;
      do
      {
LABEL_233:
        v136 = (unsigned int)(v136 - 1);
        _InterlockedAnd64((volatile signed __int64 *)(a3[v136] + 48), 0LL);
      }
      while ( (_DWORD)v136 );
      goto LABEL_234;
    }
    if ( (BYTE8(v163) & 1) == 1 )
    {
      v137 = *(unsigned __int8 **)((*((_QWORD *)&v163 + 1) & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
      LODWORD(v136) = *v137;
      a3 = (unsigned __int64 *)(v137 + 8);
    }
    if ( (_DWORD)v136 )
      goto LABEL_233;
LABEL_234:
    *((_QWORD *)&v163 + 1) = 0LL;
  }
  v7 = 0LL;
LABEL_34:
  *(_QWORD *)&v163 = v6;
  StaticRescheduleContext = 0LL;
  *(_QWORD *)&v164 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v21 = (unsigned int)*(char *)(v3 + 195);
  v161 = *(char *)(v3 + 195);
  v22 = v161;
  v160 = CurrentPrcb;
  LODWORD(v174) = 0;
  if ( v8 != 2 )
    goto LABEL_50;
  NextThread = v6->NextThread;
  v24 = (AutoBoost *)KeGetCurrentPrcb();
  v25 = v173;
  v156 = NextThread;
  if ( (KiAbpGlobalState & 1) != 0 )
  {
    if ( (char)v173 > (char)v21 )
    {
      if ( *(_BYTE *)(v3 + 792) )
      {
        v133 = (_QWORD *)(v3 + 808);
        if ( *(_QWORD *)(v3 + 808) == 1LL )
        {
          v134 = (struct _KPRCB *)((char *)v24 + 37304);
          if ( v24 != (AutoBoost *)-37304LL )
            goto LABEL_308;
        }
      }
    }
  }
  else if ( (char)v173 > (char)v21 )
  {
    if ( *(_BYTE *)(v3 + 792) )
    {
      v133 = (_QWORD *)(v3 + 808);
      if ( *(_QWORD *)(v3 + 808) == 1LL )
      {
        v134 = (struct _KPRCB *)((char *)v24 + 37304);
        if ( v24 != (AutoBoost *)-37304LL )
        {
LABEL_308:
          *v133 = *(_QWORD *)&v134->MxCsr;
          *(_QWORD *)&v134->MxCsr = v133;
          _InterlockedIncrement16((volatile signed __int16 *)(v3 + 868));
          AutoBoost::KiAbpQueueAutoBoostDpc(v24, v134);
          v25 = v173;
        }
      }
    }
  }
  *(_BYTE *)(v3 + 195) = v25;
  v26 = KiComputeThreadQos(v3);
  if ( v26 != *(unsigned __int8 *)(v3 + 516) )
    *(_BYTE *)(v3 + 516) = v26;
  v27 = v155;
  if ( NextThread )
  {
    v44 = 0;
  }
  else
  {
    v28 = *(_DWORD *)(v3 + 120) >> 1;
    v167 = v155;
    if ( (v28 & 1) == 0 )
    {
      v31 = (struct _KPRCB **)&v167;
      v30 = 1;
      goto LABEL_42;
    }
    v29 = *(_BYTE **)(v155 + 36504);
    v30 = (unsigned __int8)*v29;
    v31 = (struct _KPRCB **)(v29 + 8);
    if ( *v29 )
    {
LABEL_42:
      v32 = v171;
      v33 = v30;
      do
      {
        v34 = *v31;
        v35 = (unsigned __int8 *)(*v31)->PriorityState;
        v36 = *v35;
        if ( (*(_BYTE *)(v32 + 2) & 4) != 0 )
          v37 = v36 ^ KiQueryEffectivePriorityThread(v32, *v31);
        else
          v37 = *(_BYTE *)(v32 + 195) ^ v36;
        v38 = (v36 ^ v37 & 0x7F) & 0x7F | ((unsigned __int8)(*(_DWORD *)(v32 + 120) >> 1) << 7);
        *v35 = v38;
        v39 = (volatile signed __int32 *)v34->SchedulerAssist;
        if ( v39 )
        {
          v152 = (_KTHREAD *)v32 == v34->IdleThread ? KiVpThreadSystemWorkPriority : v38 & 0x7F;
          v153 = (unsigned __int8)BYTE1(*v39);
          if ( v152 != v153 )
          {
            if ( v152 <= v153 )
              v154 = (v152 << 8) - (v153 << 8);
            else
              v154 = (v152 - v153) << 8;
            _InterlockedAdd(v39, v154);
          }
        }
        v40 = *(_DWORD *)(v32 + 80);
        StaticRescheduleContext = 0LL;
        v41 = v34->PriorityState;
        LODWORD(v174) = 0;
        v42 = v41[64].AllFields ^ (*(_BYTE *)(v32 + 516) ^ v41[64].AllFields) & 7;
        v43 = v42 ^ (v42 ^ (8 * *(_BYTE *)(v32 + 517))) & 0x38;
        if ( v40 <= *(_DWORD *)(v32 + 84) )
          v40 = *(_DWORD *)(v32 + 84);
        v44 = 0;
        if ( v40 < KiDynamicHeteroCpuPolicyExpectedCycles )
          v45 = 0;
        else
          v45 = 64;
        v41[64].AllFields = v45 | v43 & 0xBF;
        KiUpdateThreadQosGroupingSummaries((__int64)v34);
        KiUpdateStandbyStealSummaryForStandbyChange((__int64)v34);
        ++v31;
        --v33;
      }
      while ( v33 );
      CurrentPrcb = v160;
      NextThread = v156;
      v3 = v171;
      v27 = v155;
    }
    else
    {
      v44 = 0;
    }
    v22 = v161;
  }
  if ( (*(_DWORD *)(v3 + 120) & 0x400000) != 0 )
  {
    v76 = *(volatile signed __int32 **)(v3 + 968);
    v77 = *(char *)(v3 + 195);
    v78 = (unsigned __int8)*v76;
    if ( v77 != v78 )
      _InterlockedAdd(v76, v77 - v78);
  }
  if ( !NextThread )
  {
    if ( v173 >= v22 )
    {
      if ( v173 > v22 && *(_BYTE *)(v3 + 388) == 2 )
        LODWORD(v174) = v173;
    }
    else if ( *(_BYTE *)(v3 + 388) == 2 )
    {
      v44 = 1;
    }
    else if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v27 + 36488) + 8LL) | *(_DWORD *)(v27 + 33752)) >> (v173 + 1) )
    {
      *(_BYTE *)(v3 + 112) |= 0x10u;
    }
  }
LABEL_104:
  v79 = 0LL;
  v80 = KiProcessorBlock[*(unsigned int *)(v3 + 588)];
  v81 = *(_QWORD *)(v80 + 36480);
  if ( v81 )
  {
    v82 = *(unsigned __int8 *)(v80 + 208);
    v83 = *(_WORD **)(v3 + 576);
    if ( (unsigned __int16)v82 >= *v83 )
      v84 = 0LL;
    else
      v84 = *(_QWORD *)&v83[4 * v82 + 4];
    LOBYTE(v79) = (v81 & v84) == v81;
  }
  if ( (_DWORD)v79 != ((*(_DWORD *)(v3 + 120) >> 13) & 1) )
    _InterlockedXor((volatile signed __int32 *)(v3 + 120), 0x2000u);
  if ( !v44 )
  {
    v95 = 0;
    goto LABEL_129;
  }
  v85 = 0LL;
  StaticRescheduleContext = CurrentPrcb->StaticRescheduleContext;
  v86 = *((_QWORD *)&v163 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
  v159 = 0LL;
  v87 = BYTE8(v163) & 1;
  v170 = *((_QWORD *)&v163 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
  v169 = BYTE8(v163) & 1;
  v88 = 0;
  v168 = *((_QWORD *)&v163 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (BYTE8(v163) & 1) != 0 )
  {
    if ( v87 == 1 )
    {
      v89 = *(unsigned __int8 **)(v86 + 36504);
      v88 = *v89;
      v85 = (struct _KPRCB **)(v89 + 8);
      v159 = (unsigned __int64 *)(v89 + 8);
    }
    v173 = 0;
    v90 = 0;
    if ( !v88 )
      goto LABEL_115;
  }
  else
  {
    v85 = (struct _KPRCB **)&v168;
    v173 = 0;
    v159 = &v168;
    v88 = 1;
    v90 = 0;
  }
  v123 = (unsigned __int8 *)&StaticRescheduleContext->ProcessorEntries[0].32;
  v124 = v88;
  v162 = v88;
  do
  {
    LODWORD(v171) = v88;
    *((_OWORD *)v123 - 2) = 0LL;
    *((_OWORD *)v123 - 1) = 0LL;
    *(_QWORD *)v123 = 0LL;
    *((_QWORD *)v123 - 1) = -1LL;
    v123[4] = 63;
    v125 = *v85;
    *((_QWORD *)v123 - 4) = *v85;
    *((_QWORD *)v123 - 3) = 0LL;
    SharedReadyQueue = v125->SharedReadyQueue;
    if ( SharedReadyQueue )
    {
      if ( (v125->IdleState & 0x10) == 0
        || ((unsigned __int8)KeIsForceParkingEnabled(SharedReadyQueue) && (v125->IdleState & 0x20) != 0
          ? (v146 = ~*(_QWORD *)(v144 + 104))
          : (v146 = *(_QWORD *)(v144 + 80)),
            (v146 & *(_QWORD *)(v145 + 712)) == 0) )
      {
        *((_QWORD *)v123 - 3) = v125->SharedReadyQueue;
      }
    }
    CurrentThread = (__int64)v125->NextThread;
    *((_QWORD *)v123 - 2) = CurrentThread;
    if ( !CurrentThread )
    {
      CurrentThread = (__int64)v125->CurrentThread;
      *((_QWORD *)v123 - 2) = CurrentThread;
    }
    if ( v125->NextThread == (_KTHREAD *)CurrentThread )
    {
      *v123 |= 4u;
    }
    else
    {
      v128 = *v123;
      if ( v125 == KeGetCurrentPrcb() )
        v129 = v128 | 4;
      else
        v129 = v128 & 0xFB;
      *v123 = v129;
    }
    if ( (*(_DWORD *)(CurrentThread + 120) & 0x400000) != 0
      && !_interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
    {
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x400000) != 0
        && KiIsThreadStateControlledByProcessor(CurrentThread, (__int64)v125) )
      {
        KiUpdateVPBackingThreadPriority((struct _KTHREAD *)CurrentThread);
        v88 = v171;
        v85 = (struct _KPRCB **)v159;
        v124 = v162;
      }
      v90 = v173;
      *(_QWORD *)(CurrentThread + 64) = 0LL;
    }
    v130 = *v123 & 0xFE | ((v125->IdleState & 1) == 0);
    *v123 = v130;
    v131 = v130 ^ (v130 ^ (v125->PriorityState->AllFields >> 6)) & 2;
    *v123 = v131;
    if ( ((v131 >> 1) & 1) > v90 )
      v90 = (v131 >> 1) & 1;
    ++v85;
    v123 += 40;
    v173 = v90;
    --v124;
    v159 = (unsigned __int64 *)v85;
    v162 = v124;
  }
  while ( v124 );
  v86 = v170;
  v87 = v169;
  v160 = CurrentPrcb;
LABEL_115:
  StaticRescheduleContext->MaximumThreadIsolationWidth = v90;
  StaticRescheduleContext->IsolationWidth = v87;
  StaticRescheduleContext->ProcessorCount = v88;
  if ( v87 )
    v91 = *(_BYTE *)(*(_QWORD *)(v86 + 36504) + 1LL);
  else
    v91 = 0;
  StaticRescheduleContext->ScanStart = v91;
  if ( v90 )
  {
    v147 = 0LL;
    for ( j = 0; j < v88; ++j )
    {
      v149 = &StaticRescheduleContext->ProcessorCount + 40 * j;
      if ( *((_QWORD *)v149 + 4) != *(_QWORD *)(*((_QWORD *)v149 + 2) + 36544LL) )
      {
        v147 = v149 + 16;
        break;
      }
    }
    if ( v88 )
    {
      v150 = (unsigned __int8 *)&StaticRescheduleContext->ProcessorEntries[0].32;
      v151 = v88;
      do
      {
        if ( v150 - 32 != v147 )
        {
          *((_QWORD *)v150 - 2) = *((_QWORD *)v147 + 2);
          *v150 = v147[32] | 0x20;
        }
        v150 += 40;
        --v151;
      }
      while ( v151 );
    }
  }
  v92 = 0LL;
  for ( k = 0; k < StaticRescheduleContext->ProcessorCount; ++k )
  {
    if ( StaticRescheduleContext->ProcessorEntries[k].Prcb == (_KPRCB *)v155 )
    {
      v92 = (__int64)&StaticRescheduleContext->ProcessorEntries[k];
      break;
    }
  }
  v94 = v172;
  *(_BYTE *)(v92 + 34) |= 2u;
  KiSearchForNewThreadsForRescheduleContext(&StaticRescheduleContext->ProcessorCount, v94);
  v95 = 0;
  v96 = 0;
  if ( (WORD2(xmmword_140FC0C10) & 0x400) != 0 )
    v96 = 2;
  for ( m = 0; m < StaticRescheduleContext->ProcessorCount; ++m )
    v95 |= KiCommitRescheduleContextEntry(
             (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * m + 8 * m),
             CurrentPrcb,
             v96,
             v94);
  if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
  {
    CoreControlBlock = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
    if ( ++CoreControlBlock->ScanStartIndex >= CoreControlBlock->ProcessorCount )
      CoreControlBlock->ScanStartIndex = 0;
  }
LABEL_129:
  if ( !(_QWORD)v163 )
    goto LABEL_136;
  v81 = 0LL;
  v79 = 0LL;
  v171 = *((_QWORD *)&v163 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (BYTE8(v163) & 1) != 0 )
  {
    if ( (BYTE8(v163) & 1) == 1 )
    {
      v99 = *(unsigned __int8 **)((*((_QWORD *)&v163 + 1) & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
      v79 = *v99;
      v81 = (__int64)(v99 + 8);
    }
    if ( !(_DWORD)v79 )
      goto LABEL_135;
  }
  else
  {
    v81 = (__int64)&v171;
    LODWORD(v79) = 1;
  }
  do
  {
    v79 = (unsigned int)(v79 - 1);
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v81 + 8 * v79) + 48LL), 0LL);
  }
  while ( (_DWORD)v79 );
LABEL_135:
  *((_QWORD *)&v163 + 1) = 0LL;
LABEL_136:
  if ( (_QWORD)v164 )
  {
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      _m_prefetchw((char *)&v164 + 8);
      v100 = *((_QWORD *)&v164 + 1);
      if ( *((_QWORD *)&v164 + 1) )
        goto LABEL_141;
      if ( (__int128 *)_InterlockedCompareExchange64(v165, 0LL, (signed __int64)&v164 + 8) != (__int128 *)((char *)&v164 + 8) )
      {
        v100 = KxWaitForLockChainValid((__int64 *)&v164 + 1, v79, v81);
LABEL_141:
        *((_QWORD *)&v164 + 1) = 0LL;
        v101 = (unsigned __int8)v165;
        if ( ((v101 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v100 + 8), (__int64)v165)) & 4) != 0 )
          KeWakeAddressAll();
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)v164, 0LL);
    }
  }
  if ( v95 )
  {
    if ( StaticRescheduleContext->ProcessorCount )
    {
      while ( 1 )
      {
        v102 = StaticRescheduleContext->ProcessorEntries[v4].___u6[0];
        Prcb = (__int64)StaticRescheduleContext->ProcessorEntries[v4].Prcb;
        if ( (v102 & 0x10) != 0 )
        {
          TargetType = CurrentPrcb->DeferredDispatchInterrupts.TargetType;
          if ( !TargetType )
            goto LABEL_149;
          if ( TargetType == 1 )
          {
            SingleTargetIndex = CurrentPrcb->DeferredDispatchInterrupts.SingleTargetIndex;
            if ( SingleTargetIndex == *(_DWORD *)(Prcb + 36) )
              goto LABEL_150;
            CurrentPrcb->DeferredDispatchInterrupts.TargetType = 2;
            v108 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + SingleTargetIndex);
            v81 = v108 & 0x3F;
            v109 = v108 >> 6;
            if ( CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Count <= (unsigned int)v109 )
            {
              if ( CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v109 )
              {
                CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v109 + 1;
                goto LABEL_165;
              }
            }
            else
            {
LABEL_165:
              v110 = (char *)CurrentPrcb + 8 * v109;
              v111 = *((_QWORD *)v110 + 1725);
              _bittestandset64(&v111, (unsigned int)v81);
              *((_QWORD *)v110 + 1725) = v111;
            }
          }
          v112 = *(unsigned __int8 *)(Prcb + 208);
          v113 = *(_QWORD *)(Prcb + 200);
          if ( CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v112 )
            goto LABEL_174;
          goto LABEL_167;
        }
        if ( (v102 & 8) == 0 || !*(_BYTE *)(Prcb + 7) )
          goto LABEL_150;
        v104 = CurrentPrcb->DeferredDispatchInterrupts.TargetType;
        if ( !v104 )
        {
LABEL_149:
          CurrentPrcb->DeferredDispatchInterrupts.TargetType = 1;
          CurrentPrcb->DeferredDispatchInterrupts.SingleTargetIndex = *(_DWORD *)(Prcb + 36);
          goto LABEL_150;
        }
        if ( v104 == 1 )
        {
          v114 = CurrentPrcb->DeferredDispatchInterrupts.SingleTargetIndex;
          if ( v114 == *(_DWORD *)(Prcb + 36) )
            goto LABEL_150;
          CurrentPrcb->DeferredDispatchInterrupts.TargetType = 2;
          v115 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v114);
          v81 = v115 & 0x3F;
          v116 = v115 >> 6;
          if ( CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned int)v116 )
            goto LABEL_172;
          if ( CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v116 )
            break;
        }
LABEL_173:
        v112 = *(unsigned __int8 *)(Prcb + 208);
        v113 = *(_QWORD *)(Prcb + 200);
        if ( CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v112 )
          goto LABEL_174;
LABEL_167:
        if ( CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned __int16)v112 )
        {
          CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v112 + 1;
LABEL_174:
          CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v112] |= v113;
        }
LABEL_150:
        if ( (StaticRescheduleContext->ProcessorEntries[v4].___u6[0] & 2) != 0 )
          EtwTraceScheduleThread((__int64)StaticRescheduleContext->ProcessorEntries[v4].NewThread, Prcb, 0LL);
        if ( (StaticRescheduleContext->ProcessorEntries[v4].___u6[0] & 4) != 0 )
        {
          if ( *(_QWORD *)(Prcb + 36600) )
          {
            if ( CurrentPrcb->SchedulerAssist )
            {
              if ( CurrentPrcb != (struct _KPRCB *)Prcb )
              {
                v119 = **(_DWORD **)(Prcb + 36600);
                if ( (v119 & 0x100000) != 0
                  || (**(_DWORD **)(Prcb + 36600) & 0x40000) != 0
                  && (unsigned __int8)v119 < StaticRescheduleContext->ProcessorEntries[v4].KickPriority )
                {
                  v120 = HvlpVirtualProcessorsIdentityMapped == 0;
                  v121 = CurrentPrcb->SchedulerAssist;
                  v121[3] = 2;
                  v122 = *(unsigned int *)(Prcb + 36);
                  if ( v120 )
                  {
                    CurrentPrcb = v160;
                    LODWORD(v122) = (unsigned __int8)byte_140FC71C1[2 * (unsigned int)v122] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v122] << 6);
                  }
                  v121[2] = v122;
                  if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
                    EtwTraceXSchedulerPriorityKickSend(*(unsigned int *)(Prcb + 36), 2LL, v81);
                  __writemsr(0x400000C2u, (unsigned int)v122);
                }
              }
            }
          }
        }
        if ( (StaticRescheduleContext->ProcessorEntries[v4].___u6[0] & 1) != 0 )
          _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[v4].NewThread->KeReferenceCount);
        if ( ++v4 >= (unsigned int)StaticRescheduleContext->ProcessorCount )
          goto LABEL_157;
      }
      CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v116 + 1;
LABEL_172:
      v117 = (char *)CurrentPrcb + 8 * v116;
      v118 = *((_QWORD *)v117 + 1725);
      _bittestandset64(&v118, (unsigned int)v81);
      *((_QWORD *)v117 + 1725) = v118;
      goto LABEL_173;
    }
LABEL_157:
    KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
  }
  if ( (int)v174 > 0 )
  {
    if ( *(_QWORD *)(v155 + 36600) )
    {
      if ( CurrentPrcb->SchedulerAssist )
      {
        if ( CurrentPrcb != (struct _KPRCB *)v155 )
        {
          v141 = **(_DWORD **)(v155 + 36600);
          if ( (v141 & 0x100000) != 0
            || (**(_DWORD **)(v155 + 36600) & 0x40000) != 0 && (unsigned __int8)v141 < (int)v174 )
          {
            v120 = HvlpVirtualProcessorsIdentityMapped == 0;
            v142 = CurrentPrcb->SchedulerAssist;
            v142[3] = 2;
            v143 = *(unsigned int *)(v155 + 36);
            if ( v120 )
              LODWORD(v143) = (unsigned __int8)byte_140FC71C1[2 * (unsigned int)v143] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v143] << 6);
            v142[2] = v143;
            if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
              EtwTraceXSchedulerPriorityKickSend(*(unsigned int *)(v155 + 36), 2LL, v155);
            __writemsr(0x400000C2u, (unsigned int)v143);
          }
        }
      }
    }
  }
  return 1;
}
