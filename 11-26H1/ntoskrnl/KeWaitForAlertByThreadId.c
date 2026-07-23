/*
 * XREFs of KeWaitForAlertByThreadId @ 0x140223DF0
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     RtlpRunOnceWaitForInit @ 0x14080ED68 (RtlpRunOnceWaitForInit.c)
 *     NtWaitForAlertByThreadId @ 0x140A73250 (NtWaitForAlertByThreadId.c)
 * Callees:
 *     KiRcuCheckQuiescent @ 0x1402237A0 (KiRcuCheckQuiescent.c)
 *     KiCommitThreadWait @ 0x140224340 (KiCommitThreadWait.c)
 *     ?KiAbpPostWaitUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z @ 0x140224810 (-KiAbpPostWaitUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z.c)
 *     KiDeliverApc @ 0x140245350 (KiDeliverApc.c)
 *     KiFastExitThreadWait @ 0x1402459A0 (KiFastExitThreadWait.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiPerformWaitDeferredWork @ 0x1403F08D0 (KiPerformWaitDeferredWork.c)
 *     ?KiAbpUmPreWait@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z @ 0x1404798C0 (-KiAbpUmPreWait@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z.c)
 *     ?KiAbpUmPostWait@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z @ 0x140486F44 (-KiAbpUmPostWait@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeWaitForAlertByThreadId(char a1, __int64 a2, struct _KTHREAD *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v6; // r12d
  char *SchedulerSharedSystemSlot; // r9
  unsigned int i; // ecx
  __int64 v9; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  int v12; // ebx
  void *v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r15
  unsigned __int64 WaitIrql; // rbp
  unsigned int v18; // esi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // esi
  __int64 ThreadTimerDelay; // rdx
  unsigned __int8 v25; // si
  unsigned __int8 CurrentIrql; // bp
  unsigned __int32 v27; // eax
  __int64 v28; // rdx
  unsigned __int32 v29; // ett
  int v30; // eax
  unsigned __int64 v31; // [rsp+30h] [rbp-48h]
  __int64 v32; // [rsp+38h] [rbp-40h] BYREF
  int v35; // [rsp+98h] [rbp+20h]
  __int64 v36; // [rsp+98h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v31 = 0LL;
  v35 = 0;
  if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u) )
    return 257LL;
  if ( a2 && !*(_QWORD *)a2 )
    return 258LL;
  v6 = 1;
  if ( a3 && a1 == 1 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      _disable();
      SchedulerSharedSystemSlot = (char *)CurrentThread->SchedulerSharedSystemSlot;
      if ( SchedulerSharedSystemSlot )
      {
        for ( i = 0; i < 8; ++i )
        {
          v9 = 8LL * i;
          v36 = *(_QWORD *)&SchedulerSharedSystemSlot[v9];
          if ( a3 == (struct _KTHREAD *)(v36 & 0x7FFFFFFFFFFFFFFCLL) )
          {
            LOBYTE(v36) = v36 | 1;
            *(_QWORD *)&SchedulerSharedSystemSlot[v9] = v36;
            break;
          }
        }
      }
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v27 = *SchedulerAssist;
        do
        {
          v28 = v27;
          LODWORD(v28) = v27 & 0xFFDFFFFF;
          v29 = v27;
          v27 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v27 & 0xFFDFFFFF, v27);
        }
        while ( v29 != v27 );
        if ( (v27 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v28, SchedulerAssist, SchedulerSharedSystemSlot);
      }
      _enable();
    }
    else
    {
      LegacyAutoBoost::KiAbpUmPreWait((LegacyAutoBoost *)CurrentThread, a3, a3);
    }
    v35 = 1;
  }
  v12 = 0;
  if ( _bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    v12 = (2 * (_bittestandreset((signed __int32 *)&CurrentThread->116, 0x10u) & 1)) | 1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  KiRcuCheckQuiescent((__int64)KeGetCurrentPrcb());
  v14 = 0xFFFFF780000003B0uLL;
  v15 = 0xFFFFF78000000008uLL;
  if ( a2 )
  {
    if ( *(int *)(a2 + 4) < 0 )
    {
      v6 = 2;
      v16 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - *(_QWORD *)a2 - MEMORY[0xFFFFF780000003B0];
    }
    else
    {
      v16 = *(_QWORD *)a2;
    }
    v31 = v16;
  }
  else
  {
    v6 = 0;
  }
  while ( 1 )
  {
    v32 = 0LL;
    WaitIrql = CurrentThread->WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      v18 = 0;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = a1;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14, v15, v13) )
          {
            HvlNotifyLongSpinWait(v18);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || (_BYTE)WaitIrql )
        break;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 1LL);
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      v14 = KeGetCurrentIrql();
      if ( (_BYTE)v14 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v14, 2LL);
      CurrentThread->WaitIrql = 0;
    }
    if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && a1 )
      break;
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = 37;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u) )
    {
      v22 = 257;
LABEL_80:
      CurrentThread->WaitReason = 0;
      KiFastExitThreadWait(KeGetCurrentPrcb(), (ULONG_PTR)CurrentThread);
      goto LABEL_46;
    }
    v19 = v31;
    if ( v6 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v20 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v19 = v31;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v19 = v31 + ThreadTimerDelay;
      }
    }
    else
    {
      if ( !v6 )
        goto LABEL_45;
      if ( !v31 )
        goto LABEL_81;
      v20 = MEMORY[0xFFFFF78000000014];
    }
    if ( v20 > v19 )
    {
LABEL_81:
      v22 = 258;
      goto LABEL_80;
    }
LABEL_45:
    CurrentThread->WaitBlock[0].Object = a3;
    CurrentThread->WaitBlockFill4[17] = 5;
    CurrentThread->WaitBlockCount = 1;
    v21 = KiCommitThreadWait((LegacyAutoBoost *)CurrentThread, v12, 0LL);
    v12 = 0;
    v22 = v21;
    CurrentThread->WaitReason = 0;
    if ( v21 != 256 )
      goto LABEL_46;
    v25 = KeGetCurrentIrql();
    if ( v25 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v15) = 2;
      KiRaiseIrqlProcessIrqlFlags(v25, v15);
    }
    CurrentThread->WaitIrql = v25;
  }
  v32 = 0LL;
  v30 = KiPerformWaitDeferredWork((ULONG_PTR)CurrentThread);
  CurrentThread->ThreadLock = 0LL;
  if ( v30 )
  {
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v32, (unsigned __int8)WaitIrql);
    v22 = 192;
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)WaitIrql);
    __writecr8(WaitIrql);
    v22 = 192;
  }
LABEL_46:
  if ( v35 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostWaitUserMode((AutoBoost *)CurrentThread, a3, v13);
    else
      LegacyAutoBoost::KiAbpUmPostWait((struct _KLOCK_ENTRY *)CurrentThread, a3, v13);
  }
  return v22;
}
