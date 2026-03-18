/*
 * XREFs of KiCheckForThreadDispatch @ 0x14037CA70
 * Callers:
 *     KeSetIdealProcessorThreadEx @ 0x140204850 (KeSetIdealProcessorThreadEx.c)
 *     KiFastReadyThread @ 0x14022F1E8 (KiFastReadyThread.c)
 *     KeSetActualBasePriorityThread @ 0x140239560 (KeSetActualBasePriorityThread.c)
 *     KiFastExitThreadWait @ 0x140244040 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x140245780 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x140245F80 (KiSatisfyThreadWait.c)
 *     ExpUpdateTimerConfiguration @ 0x140379D60 (ExpUpdateTimerConfiguration.c)
 *     KeGenericProcessorCallback @ 0x140379F74 (KeGenericProcessorCallback.c)
 *     PopFxActivateComponent @ 0x14037AB40 (PopFxActivateComponent.c)
 *     ?KiAbpThreadUnboostCpuPriority@AutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14037B020 (-KiAbpThreadUnboostCpuPriority@AutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x14037B2F0 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     KeSetPriorityBoost @ 0x14037B5A0 (KeSetPriorityBoost.c)
 *     KiReadyOutSwappedThreads @ 0x14037B7C4 (KiReadyOutSwappedThreads.c)
 *     KiProcessDeferredReadyList @ 0x14037C920 (KiProcessDeferredReadyList.c)
 *     PspRevertContainerImpersonation @ 0x14037D900 (PspRevertContainerImpersonation.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x140395420 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     KiFlushQueuedDpcsWorker @ 0x1404F2190 (KiFlushQueuedDpcsWorker.c)
 * Callees:
 *     KiQueueReadyThread @ 0x140223650 (KiQueueReadyThread.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x140225340 (KiCaptureTotalCyclesCurrentThread.c)
 *     HalpInterruptSendIpi @ 0x140230DF0 (HalpInterruptSendIpi.c)
 *     KiAbProcessPostContextSwitch @ 0x14023BA80 (KiAbProcessPostContextSwitch.c)
 *     KiAbProcessPreContextSwitch @ 0x14023DEB0 (KiAbProcessPreContextSwitch.c)
 *     KiDeliverApc @ 0x1402439F0 (KiDeliverApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402BBDD0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HalpDisableInterrupts @ 0x1402C7D00 (HalpDisableInterrupts.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x1402C7F20 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiSwapContext @ 0x14072FED0 (KiSwapContext.c)
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
