/*
 * XREFs of KiCheckForThreadDispatch @ 0x14037E820
 * Callers:
 *     KeSetIdealProcessorThreadEx @ 0x140204930 (KeSetIdealProcessorThreadEx.c)
 *     KiFastReadyThread @ 0x140230B78 (KiFastReadyThread.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KiFastExitThreadWait @ 0x1402459A0 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x1402470E0 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x1402478E0 (KiSatisfyThreadWait.c)
 *     ExpUpdateTimerConfiguration @ 0x14037BB10 (ExpUpdateTimerConfiguration.c)
 *     KeGenericProcessorCallback @ 0x14037BD24 (KeGenericProcessorCallback.c)
 *     PopFxActivateComponent @ 0x14037C8F0 (PopFxActivateComponent.c)
 *     ?KiAbpThreadUnboostCpuPriority@AutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14037CDD0 (-KiAbpThreadUnboostCpuPriority@AutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x14037D0A0 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     KeSetPriorityBoost @ 0x14037D350 (KeSetPriorityBoost.c)
 *     KiReadyOutSwappedThreads @ 0x14037D574 (KiReadyOutSwappedThreads.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     PspRevertContainerImpersonation @ 0x14037F6B0 (PspRevertContainerImpersonation.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1403971A0 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     KiFlushQueuedDpcsWorker @ 0x1404EB770 (KiFlushQueuedDpcsWorker.c)
 * Callees:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x140226CD0 (KiCaptureTotalCyclesCurrentThread.c)
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiAbProcessPostContextSwitch @ 0x14023D3E0 (KiAbProcessPostContextSwitch.c)
 *     KiAbProcessPreContextSwitch @ 0x14023F810 (KiAbProcessPreContextSwitch.c)
 *     KiDeliverApc @ 0x140245350 (KiDeliverApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x140312BC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiSwapContext @ 0x140734AA0 (KiSwapContext.c)
 */

void __fastcall KiCheckForThreadDispatch(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v5; // rbp
  bool v6; // zf
  __int64 NextThread; // rdi
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  struct _KTHREAD *v10; // rdx
  bool v11; // al
  __int64 v12; // r8
  int v13; // edx
  bool v14; // r9
  unsigned int v15; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+24h] [rbp-34h]
  unsigned __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = (unsigned __int8)a2;
  CurrentPrcb = (struct _KPRCB *)a1;
  v17 = 0LL;
  if ( (unsigned __int8)a2 >= 2u )
  {
    if ( v2 && !*(_BYTE *)(a1 + 14522) )
    {
      if ( !a1 )
        CurrentPrcb = KeGetCurrentPrcb();
      if ( CurrentPrcb->NestingLevel )
      {
        CurrentPrcb->InterruptRequest = 1;
      }
      else
      {
        v16 = 0LL;
        if ( (KiTrapFeatures & 0x10) != 0 )
        {
          v11 = HalpDisableInterrupts();
          v13 = *(_DWORD *)(v12 + 168);
          v14 = v11;
          *(_DWORD *)(v12 + 168) = v13 | 4;
          if ( !v13 )
            __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
          if ( v14 )
            _enable();
        }
        v15 = 5;
        HalpInterruptSendIpi(&v15, 0x2Fu);
      }
    }
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( v2 )
    {
      KiAbProcessPreContextSwitch(*(struct _KLOCK_ENTRY **)(a1 + 8), a2);
      KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 0, &v17);
      NextThread = (__int64)CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      KiCaptureTotalCyclesCurrentThread((__int64)CurrentPrcb, v5, v8, v9);
      KiUpdatePriorityMatrixForRunningTransition((__int64)CurrentPrcb, NextThread);
      *(_BYTE *)(v5 + 643) = 32;
      *(_BYTE *)(v5 + 390) = v3;
      KiQueueReadyThread(CurrentPrcb, (unsigned __int64)&v17, v5, 0);
      LOBYTE(NextThread) = KiSwapContext(v5, NextThread, (unsigned __int8)v3);
      KiAbProcessPostContextSwitch(v5, v10);
      v6 = (_BYTE)NextThread == 0;
    }
    else
    {
      v6 = (*(_DWORD *)(v5 + 116) & 0x40) == 0;
    }
    if ( !v6 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 1u);
      __writecr8(1uLL);
      *(_DWORD *)(v5 + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
    __writecr8(v3);
  }
}
