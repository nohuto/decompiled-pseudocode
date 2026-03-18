/*
 * XREFs of KiFlushSoftwareInterruptBatch @ 0x1402436D0
 * Callers:
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14021E510 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiQueueReadyThread @ 0x140223650 (KiQueueReadyThread.c)
 *     KiSoftParkElectionDpcRoutine @ 0x14022A460 (KiSoftParkElectionDpcRoutine.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14022B26C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiAttemptToStealStandbyThread @ 0x14022B800 (KiAttemptToStealStandbyThread.c)
 *     KiHandleDeferredPreemption @ 0x14022E730 (KiHandleDeferredPreemption.c)
 *     KiEnterLongDpcProcessing @ 0x14022EA74 (KiEnterLongDpcProcessing.c)
 *     KiDeferredReadyThread @ 0x14022F370 (KiDeferredReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14022FA60 (KiDeferGroupSchedulingPreemption.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140237654 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeYieldExecution @ 0x1402387B0 (KeYieldExecution.c)
 *     KeSetActualBasePriorityThread @ 0x140239560 (KeSetActualBasePriorityThread.c)
 *     KiDirectSwitchThread @ 0x140239BE0 (KiDirectSwitchThread.c)
 *     KiProcessThreadWaitList @ 0x14023BDB0 (KiProcessThreadWaitList.c)
 *     KiAbProcessPreContextSwitch @ 0x14023DEB0 (KiAbProcessPreContextSwitch.c)
 *     KiSearchForNewThread @ 0x14023E3D0 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1402404D0 (KiSearchForNewThreadsOnTarget.c)
 *     KiFastExitThreadWait @ 0x140244040 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x140245780 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x140245F80 (KiSatisfyThreadWait.c)
 *     KiRemoveBoostThread @ 0x1402742E0 (KiRemoveBoostThread.c)
 *     KiInswapAndReadyThread @ 0x1402C6944 (KiInswapAndReadyThread.c)
 *     KiExecuteAllDpcs @ 0x14032DD00 (KiExecuteAllDpcs.c)
 *     KiReadyDeferredReadyList @ 0x14032F930 (KiReadyDeferredReadyList.c)
 *     KiQuantumEnd @ 0x140331070 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140332850 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140333210 (KiGroupSchedulingGenerationEnd.c)
 *     KiParkCurrentProcessor @ 0x1403346DC (KiParkCurrentProcessor.c)
 *     ?KiAbpDeferredProcessingWorker@AutoBoost@@YAXPEAU_KDPC@@PEAX11@Z @ 0x140375320 (-KiAbpDeferredProcessingWorker@AutoBoost@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     PopFxActivateComponent @ 0x14037AB40 (PopFxActivateComponent.c)
 *     ?KiAbpThreadUnboostCpuPriority@AutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14037B020 (-KiAbpThreadUnboostCpuPriority@AutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x14037B2F0 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     KeSetPriorityBoost @ 0x14037B5A0 (KeSetPriorityBoost.c)
 *     KiReadyOutSwappedThreads @ 0x14037B7C4 (KiReadyOutSwappedThreads.c)
 *     KiProcessDeferredReadyList @ 0x14037C920 (KiProcessDeferredReadyList.c)
 *     PspRevertContainerImpersonation @ 0x14037D900 (PspRevertContainerImpersonation.c)
 *     KiSetPriorityThread @ 0x14037F250 (KiSetPriorityThread.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x140395420 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1404D3414 (KiAdjustCoreIsolationReasonThread.c)
 *     KiApplyForegroundBoostThread @ 0x140521D48 (KiApplyForegroundBoostThread.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405EB014 (KiFinalizeCoreControlBlockAssignment.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405F8980 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140230DF0 (HalpInterruptSendIpi.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403EF310 (KeRemoveProcessorAffinityEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     PoInitiateProcessorWake @ 0x1406014A0 (PoInitiateProcessorWake.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
                v21 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                      + 64 * v19
                      + (unsigned __int8)v20);
                v23 = v21;
                if ( (_DWORD)v21 == Number )
                  goto LABEL_35;
                if ( (*(_DWORD *)(*((_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink->Flink
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
