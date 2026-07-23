/*
 * XREFs of KiFlushSoftwareInterruptBatch @ 0x140245030
 * Callers:
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14021FEA0 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiSoftParkElectionDpcRoutine @ 0x14022BDF0 (KiSoftParkElectionDpcRoutine.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14022CBFC (KiRescheduleThreadAfterAffinityChange.c)
 *     KiAttemptToStealStandbyThread @ 0x14022D190 (KiAttemptToStealStandbyThread.c)
 *     KiHandleDeferredPreemption @ 0x1402300C0 (KiHandleDeferredPreemption.c)
 *     KiEnterLongDpcProcessing @ 0x140230404 (KiEnterLongDpcProcessing.c)
 *     KiDeferredReadyThread @ 0x140230D00 (KiDeferredReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402313F0 (KiDeferGroupSchedulingPreemption.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140238FB4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiProcessThreadWaitList @ 0x14023D710 (KiProcessThreadWaitList.c)
 *     KiAbProcessPreContextSwitch @ 0x14023F810 (KiAbProcessPreContextSwitch.c)
 *     KiSearchForNewThread @ 0x14023FD30 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 *     KiFastExitThreadWait @ 0x1402459A0 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x1402470E0 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x1402478E0 (KiSatisfyThreadWait.c)
 *     KiRemoveBoostThread @ 0x140273850 (KiRemoveBoostThread.c)
 *     KiInswapAndReadyThread @ 0x1403115E4 (KiInswapAndReadyThread.c)
 *     KiExecuteAllDpcs @ 0x14032FD30 (KiExecuteAllDpcs.c)
 *     KiReadyDeferredReadyList @ 0x140331960 (KiReadyDeferredReadyList.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140334880 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140335240 (KiGroupSchedulingGenerationEnd.c)
 *     KiParkCurrentProcessor @ 0x14033670C (KiParkCurrentProcessor.c)
 *     ?KiAbpDeferredProcessingWorker@AutoBoost@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1403770D0 (-KiAbpDeferredProcessingWorker@AutoBoost@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     PopFxActivateComponent @ 0x14037C8F0 (PopFxActivateComponent.c)
 *     ?KiAbpThreadUnboostCpuPriority@AutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14037CDD0 (-KiAbpThreadUnboostCpuPriority@AutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x14037D0A0 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     KeSetPriorityBoost @ 0x14037D350 (KeSetPriorityBoost.c)
 *     KiReadyOutSwappedThreads @ 0x14037D574 (KiReadyOutSwappedThreads.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     PspRevertContainerImpersonation @ 0x14037F6B0 (PspRevertContainerImpersonation.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1403971A0 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1404CCC84 (KiAdjustCoreIsolationReasonThread.c)
 *     KiApplyForegroundBoostThread @ 0x1405243B4 (KiApplyForegroundBoostThread.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405ED984 (KiFinalizeCoreControlBlockAssignment.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405FB3A0 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeRemoveProcessorAffinityEx @ 0x140453E40 (KeRemoveProcessorAffinityEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     PoInitiateProcessorWake @ 0x140603F50 (PoInitiateProcessorWake.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiFlushSoftwareInterruptBatch(char *a1)
{
  __int64 result; // rax
  char v3; // r8
  unsigned int v4; // edx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int16 *v6; // r14
  unsigned int v7; // edi
  struct _KPRCB *v8; // rax
  __int64 v9; // rdx
  unsigned __int16 v10; // r15
  unsigned __int16 i; // cx
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // cx
  __int64 v14; // rax
  unsigned __int8 CurrentIrql; // r12
  unsigned int Number; // edi
  char v17; // dl
  unsigned __int64 v18; // r15
  unsigned __int16 v19; // r13
  unsigned __int64 v20; // rdx
  __int64 v21; // rdx
  char v22; // [rsp+28h] [rbp-E0h]
  unsigned int v23; // [rsp+2Ch] [rbp-DCh]
  unsigned int v24; // [rsp+30h] [rbp-D8h]
  _BYTE v25[20]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v27[33]; // [rsp+60h] [rbp-A8h] BYREF

  result = (unsigned __int8)a1[1];
  if ( (_BYTE)result )
  {
    if ( (_BYTE)result == 1 )
    {
      v3 = *a1;
      v4 = 31;
      CurrentPrcb = KeGetCurrentPrcb();
      *(_DWORD *)&v25[8] = *((_DWORD *)a1 + 1);
      *(_QWORD *)v25 = 6LL;
      *(_QWORD *)&v25[12] = 0LL;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      if ( v3 != 1 )
        v4 = 47;
      result = HalpInterruptSendIpi((unsigned int *)v25, v4);
      v6 = (unsigned __int16 *)(a1 + 8);
    }
    else
    {
      v6 = (unsigned __int16 *)(a1 + 8);
      v7 = 31;
      if ( *a1 != 1 )
        v7 = 47;
      v8 = KeGetCurrentPrcb();
      v24 = v7;
      *(_OWORD *)v25 = 0LL;
      ++v8->SynchCounters.IpiSendSoftwareInterruptCount;
      *(_DWORD *)&v25[16] = 0;
      memset_0(v27, 0, 0x100uLL);
      v26 = 2097153LL;
      result = (__int64)memset_0(v27, 0, 0x100uLL);
      if ( v6 )
      {
        v10 = *v6;
        for ( i = 0; i < v10; ++i )
        {
          result = i;
          if ( *(_QWORD *)&v6[4 * i + 4] )
          {
            v12 = WORD1(v26);
            v13 = 0;
            HIDWORD(v26) = 0;
            if ( v10 > WORD1(v26) )
              v10 = WORD1(v26);
            LOWORD(v26) = v10;
            if ( v10 )
            {
              memmove(v27, v6 + 4, 8LL * v10);
              v12 = WORD1(v26);
              v13 = v10;
            }
            if ( v13 < v12 )
            {
              do
              {
                v14 = v13++;
                v27[v14] = 0LL;
              }
              while ( v13 < WORD1(v26) );
            }
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql != 15 )
              __writecr8(0xFuLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v9) = 15;
              KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v9);
            }
            Number = KeGetPcr()->Prcb.Number;
            v17 = 0;
            v18 = v27[0];
            v19 = 0;
LABEL_28:
            v22 = v17;
            while ( 1 )
            {
              while ( v18 )
              {
                _BitScanForward64(&v20, v18);
                v18 &= ~(1LL << v20);
                v21 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v19].Flink
                      + (unsigned __int8)v20);
                v23 = v21;
                if ( (_DWORD)v21 == Number )
                  goto LABEL_35;
                if ( (*(_DWORD *)(*((_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink->Flink
                                  + v21)
                                + 228LL) & 1) == 0 )
                {
                  v17 = 1;
                  goto LABEL_28;
                }
                if ( (unsigned __int8)PoInitiateProcessorWake((unsigned int)v21) )
                {
LABEL_35:
                  v17 = 1;
                  goto LABEL_28;
                }
                KeRemoveProcessorAffinityEx(&v26, v23);
                v17 = v22;
              }
              if ( ++v19 >= (unsigned int)(unsigned __int16)v26 )
                break;
              v18 = v27[v19];
            }
            if ( v17 )
            {
              *(_DWORD *)v25 = 2;
              *(_QWORD *)&v25[8] = &v26;
              HalpInterruptSendIpi((unsigned int *)v25, v24);
            }
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            result = CurrentIrql;
            __writecr8(CurrentIrql);
            break;
          }
        }
      }
    }
    if ( a1[1] == 2 )
    {
      *(_QWORD *)v6 = 2097153LL;
      result = (__int64)memset_0(v6 + 4, 0, 0x100uLL);
    }
    a1[1] = 0;
    *((_DWORD *)a1 + 1) = 0xFFFF;
  }
  return result;
}
