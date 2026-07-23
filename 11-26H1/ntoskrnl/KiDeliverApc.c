/*
 * XREFs of KiDeliverApc @ 0x140245350
 * Callers:
 *     KeRemoveQueueEx @ 0x1402224F0 (KeRemoveQueueEx.c)
 *     KeWaitForAlertByThreadId @ 0x140223DF0 (KeWaitForAlertByThreadId.c)
 *     KiHandleDeferredPreemption @ 0x1402300C0 (KiHandleDeferredPreemption.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     KiFastExitThreadWait @ 0x1402459A0 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x1402470E0 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x1402478E0 (KiSatisfyThreadWait.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     KiCheckForThreadDispatch @ 0x14037E820 (KiCheckForThreadDispatch.c)
 *     KiBeginThreadWait @ 0x1403CC710 (KiBeginThreadWait.c)
 *     KiContinueEx @ 0x1403D8880 (KiContinueEx.c)
 *     KeRemovePriQueue @ 0x1403EF700 (KeRemovePriQueue.c)
 *     KiApcInterrupt @ 0x140731050 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeTestAlertThread @ 0x1403DA1E0 (KeTestAlertThread.c)
 *     KiInitializeUserApc @ 0x14043ED48 (KiInitializeUserApc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

_KTRAP_FRAME *__fastcall KiDeliverApc(char a1, struct _LIST_ENTRY *SegCs, _KTRAP_FRAME *a3)
{
  int v3; // esi
  void *Rip; // rax
  struct _KTHREAD *CurrentThread; // rbx
  _KTRAP_FRAME *result; // rax
  ULONG_PTR Process; // r12
  $241382875694CED3D471BC5892DE3337 *v9; // r14
  __int64 CurrentIrql; // rcx
  unsigned int v11; // edi
  struct _LIST_ENTRY *v12; // rdi
  struct _LIST_ENTRY *v13; // rcx
  struct _LIST_ENTRY *v14; // rax
  __int64 v15; // rcx
  ULONG_PTR v16; // r8
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *v18; // rax
  _LIST_ENTRY *v19; // r14
  int v20; // r13d
  __int64 v21; // rcx
  unsigned int v22; // edi
  unsigned __int8 UserApcPendingAll; // r15
  __int64 (__fastcall *v24)(int, int, int, int, __int64); // rdx
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *v26; // rdi
  __int64 (__fastcall *v27)(int, int, int, int, __int64); // rax
  bool v28; // zf
  int v29; // r9d
  char v30; // dl
  _LIST_ENTRY *v31; // rax
  struct _LIST_ENTRY *v32; // r8
  unsigned __int8 v33; // al
  __int64 v34; // rcx
  unsigned __int8 v35; // al
  _LIST_ENTRY *j; // rcx
  signed __int32 v37[8]; // [rsp+0h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-50h]
  struct _LIST_ENTRY *v39; // [rsp+40h] [rbp-30h]
  struct _LIST_ENTRY *Blink; // [rsp+48h] [rbp-28h] BYREF
  _KTRAP_FRAME *v41; // [rsp+50h] [rbp-20h]
  struct _LIST_ENTRY *v42; // [rsp+58h] [rbp-18h]
  int v43; // [rsp+A8h] [rbp+38h]
  struct _LIST_ENTRY *Flink; // [rsp+B0h] [rbp+40h] BYREF
  struct _LIST_ENTRY *v45; // [rsp+B8h] [rbp+48h] BYREF

  v43 = (int)SegCs;
  v3 = (int)a3;
  Blink = 0LL;
  Flink = 0LL;
  v39 = 0LL;
  v45 = 0LL;
  if ( a3 )
  {
    SegCs = (struct _LIST_ENTRY *)a3->SegCs;
    Rip = (void *)a3->Rip;
    if ( (_WORD)SegCs == 51 )
    {
      if ( Rip > stru_140FC11F0.KernelShadowStack
        && (unsigned __int64)Rip <= stru_140FC11F0.InGlobalUpdateVpThreadPriorityList )
      {
        a3->Rip = (unsigned __int64)stru_140FC11F0.KernelShadowStack;
      }
    }
    else if ( (_WORD)SegCs == 16 && Rip > &ExpInterlockedPopEntrySListResume && Rip <= &ExpInterlockedPopEntrySListEnd )
    {
      a3->Rax |= 0x10000uLL;
    }
  }
  CurrentThread = KeGetCurrentThread();
  result = CurrentThread->TrapFrame;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  v41 = result;
  CurrentThread->TrapFrame = a3;
  CurrentThread->ApcState.KernelApcPending = 0;
  if ( !CurrentThread->SpecialApcDisable )
  {
    _InterlockedOr(v37, 0);
    v9 = &CurrentThread->152;
    while ( 1 )
    {
      if ( ($241382875694CED3D471BC5892DE3337 *)v9->ApcState.ApcListHead[0].Flink == v9 )
        goto LABEL_36;
      CurrentIrql = KeGetCurrentIrql();
      if ( (_BYTE)CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(SegCs) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, SegCs);
      }
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v11 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentIrql, SegCs, a3) )
          {
            HvlNotifyLongSpinWait(v11);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      SegCs = v9->ApcState.ApcListHead[0].Flink;
      if ( ($241382875694CED3D471BC5892DE3337 *)v9->ApcState.ApcListHead[0].Flink == v9 )
        break;
      CurrentThread->ApcState.KernelApcPending = 0;
      v12 = SegCs - 1;
      _m_prefetchw(&SegCs[-1]);
      Flink = SegCs[2].Flink;
      Blink = SegCs[2].Blink;
      v39 = SegCs[3].Flink;
      v45 = SegCs[3].Blink;
      if ( Flink )
      {
        if ( CurrentThread->ApcState.InProgressFlags || CurrentThread->KernelApcDisable )
        {
          CurrentThread->ThreadLock = 0LL;
          if ( KiIrqlFlags )
          {
            LOBYTE(SegCs) = 1;
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), SegCs);
          }
          __writecr8(1uLL);
          goto LABEL_37;
        }
        v13 = SegCs->Flink;
        if ( SegCs->Flink->Blink != SegCs )
          goto LABEL_52;
        v14 = SegCs->Blink;
        if ( v14->Flink != SegCs )
          goto LABEL_52;
        v14->Flink = v13;
        v13->Blink = v14;
        BYTE2(v12[5].Flink) = 0;
        CurrentThread->ThreadLock = 0LL;
        if ( KiIrqlFlags )
        {
          LOBYTE(SegCs) = 1;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), SegCs);
        }
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags = 1;
        BugCheckParameter4 = (ULONG_PTR)&v45;
        guard_dispatch_icall_no_overrides(v12, &Flink, &Blink);
        if ( Flink )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0LL);
          __writecr8(0LL);
          guard_dispatch_icall_no_overrides(Blink, v39, v45);
          v15 = KeGetCurrentIrql();
          if ( (_BYTE)v15 != 1 )
            __writecr8(1uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(SegCs) = 1;
            KiRaiseIrqlProcessIrqlFlags(v15, SegCs);
          }
        }
        CurrentThread->ApcState.InProgressFlags = 0;
      }
      else
      {
        v17 = SegCs->Flink;
        if ( SegCs->Flink->Blink != SegCs )
          goto LABEL_52;
        v18 = SegCs->Blink;
        if ( v18->Flink != SegCs )
          goto LABEL_52;
        v18->Flink = v17;
        v17->Blink = v18;
        BYTE2(v12[5].Flink) = 0;
        CurrentThread->ThreadLock = 0LL;
        if ( KiIrqlFlags )
        {
          LOBYTE(SegCs) = 1;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), SegCs);
        }
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags |= 2u;
        BugCheckParameter4 = (ULONG_PTR)&v45;
        guard_dispatch_icall_no_overrides(v12, &Flink, &Blink);
        CurrentThread->ApcState.InProgressFlags &= ~2u;
      }
    }
    CurrentThread->ThreadLock = 0LL;
    if ( KiIrqlFlags )
    {
      LOBYTE(SegCs) = 1;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), SegCs);
    }
    __writecr8(1uLL);
LABEL_36:
    if ( a1 == 1 )
    {
      v19 = &CurrentThread->ApcState.ApcListHead[1];
      if ( v19->Flink != v19 )
      {
        v42 = 0LL;
        v20 = 0;
        Flink = 0LL;
        Blink = 0LL;
        v39 = 0LL;
        v45 = 0LL;
        v21 = KeGetCurrentIrql();
        if ( (_BYTE)v21 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(SegCs) = 2;
          KiRaiseIrqlProcessIrqlFlags(v21, SegCs);
        }
        v22 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v22 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v21, SegCs, a3) )
            {
              HvlNotifyLongSpinWait(v22);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( CurrentThread->ThreadLock );
        }
        UserApcPendingAll = CurrentThread->ApcState.UserApcPendingAll;
        v24 = KeSpecialUserApcKernelRoutine;
        CurrentThread->ApcState.UserApcPendingAll = UserApcPendingAll & 0xFD;
        for ( i = v19->Flink; ; i = i->Flink )
        {
          v26 = 0LL;
          if ( i == v19 )
            goto LABEL_74;
          v26 = i - 1;
          _m_prefetchw(&i[-1]);
          v27 = (__int64 (__fastcall *)(int, int, int, int, __int64))i[1].Flink;
          v28 = v27 == KeSpecialUserApcKernelRoutine;
          if ( v27 == KeSpecialUserApcKernelRoutine )
            goto LABEL_67;
          if ( (UserApcPendingAll & 2) != 0 )
            break;
        }
        v28 = v27 == KeSpecialUserApcKernelRoutine;
LABEL_67:
        v24 = (__int64 (__fastcall *)(int, int, int, int, __int64))BYTE1(v26->Flink);
        v42 = i[1].Flink;
        v29 = 2;
        if ( !v28 )
          v29 = 0;
        Flink = v26[3].Flink;
        v30 = (unsigned __int8)v24 & 1;
        Blink = v26[3].Blink;
        v39 = v26[4].Flink;
        v45 = v26[4].Blink;
        v31 = i->Flink;
        if ( i->Flink->Blink != i || (v32 = i->Blink, v32->Flink != i) )
LABEL_52:
          __fastfail(3u);
        v32->Flink = v31;
        v20 = v29 | 4;
        v31->Blink = v32;
        BYTE2(v26[5].Flink) = 0;
        v33 = CurrentThread->ApcState.UserApcPendingAll;
        if ( !v30 )
          v20 = v29;
        if ( (v33 & 1) != 0 )
        {
          v35 = v33 & 0xFE;
          v24 = KeSpecialUserApcKernelRoutine;
          CurrentThread->ApcState.UserApcPendingAll = v35;
          for ( j = v19->Flink; j != v19; j = j->Flink )
          {
            if ( (__int64 (__fastcall *)(int, int, int, int, __int64))j[1].Flink == KeSpecialUserApcKernelRoutine )
            {
              CurrentThread->ApcState.UserApcPendingAll = v35 | 1;
              break;
            }
          }
        }
LABEL_74:
        CurrentThread->ThreadLock = 0LL;
        if ( KiIrqlFlags )
        {
          LOBYTE(v24) = 1;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v24);
        }
        __writecr8(1uLL);
        if ( v26 )
        {
          BugCheckParameter4 = (ULONG_PTR)&v45;
          guard_dispatch_icall_no_overrides(v26, &Flink, &Blink);
          if ( Flink )
          {
            if ( (UserApcPendingAll & 2) != 0 )
              v20 |= 1u;
          }
          else if ( (UserApcPendingAll & 2) != 0 )
          {
            LOBYTE(v34) = 1;
            KeTestAlertThread(v34);
            goto LABEL_37;
          }
          KiInitializeUserApc(v43, v3, (_DWORD)Flink, (_DWORD)Blink, (__int64)v39, (__int64)v45, v20);
        }
      }
    }
LABEL_37:
    result = v41;
  }
  v16 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( v16 != Process )
    KeBugCheckEx(5u, Process, v16, CurrentThread->ApcStateIndex, KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  CurrentThread->TrapFrame = result;
  return result;
}
