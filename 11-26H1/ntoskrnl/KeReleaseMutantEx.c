/*
 * XREFs of KeReleaseMutantEx @ 0x1403DD130
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140264300 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     WmipDeregisterRegEntry @ 0x1403B6EF0 (WmipDeregisterRegEntry.c)
 *     WmipReceiveNotifications @ 0x1403DB2FC (WmipReceiveNotifications.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403DBD20 (NtSignalAndWaitForSingleObject.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1403DC3A8 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1403DCE10 (LdrpGetFromMUIMemCache.c)
 *     WmipFindRegEntryByProviderId @ 0x1403DD004 (WmipFindRegEntryByProviderId.c)
 *     KeReleaseMutant @ 0x1403DD0B0 (KeReleaseMutant.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     WmipFindRegEntryByDevice @ 0x1404961EC (WmipFindRegEntryByDevice.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1404A7338 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x1404B2744 (LdrUnloadAlternateResourceModuleEx.c)
 *     WmipBuildTraceDeviceList @ 0x1404CDEFC (WmipBuildTraceDeviceList.c)
 *     WmiQueryTraceProviderCount @ 0x1404D7CF0 (WmiQueryTraceProviderCount.c)
 *     WmipAllocRegEntry @ 0x1404E79BC (WmipAllocRegEntry.c)
 *     NtReleaseMutant @ 0x140A65040 (NtReleaseMutant.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiExitDispatcher @ 0x140246C20 (KiExitDispatcher.c)
 *     KeAbPreWakeupThread @ 0x14026A2B4 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x1402735B4 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x140274E80 (KiInsertQueueInternal.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     PsGetSessionIdEx @ 0x14030B820 (PsGetSessionIdEx.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1403DD59C (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall KeReleaseMutantEx(struct _KTHREAD *a1, __int64 a2, __int64 a3, LONG *a4)
{
  __int64 *CurrentThread; // r15
  unsigned int v5; // r14d
  __int64 *InitialStack; // r12
  char v7; // bp
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rdi
  LONG SignalState; // r13d
  char v12; // r14
  char v13; // di
  __int64 result; // rax
  unsigned int v15; // esi
  struct _KTHREAD **SListFaultAddress; // rdx
  struct _KTHREAD **QuantumTarget; // rcx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v20; // rdx
  __int64 v21; // rax
  struct _LIST_ENTRY *Blink; // rcx
  char v23; // cl
  char v24; // al
  bool v25; // zf
  LONG v26; // eax
  char v27; // al
  bool v28; // cl
  bool v29; // r14
  __int64 v30; // rdx
  LONG v31; // eax
  struct _SINGLE_LIST_ENTRY *Next; // rax
  unsigned int SessionId; // eax
  int v34; // [rsp+30h] [rbp-78h]
  AutoBoost *v35; // [rsp+38h] [rbp-70h] BYREF
  LONG LockNV; // [rsp+40h] [rbp-68h]
  unsigned __int8 v37; // [rsp+B0h] [rbp+8h]
  struct _LIST_ENTRY *v38; // [rsp+B0h] [rbp+8h]
  char v39; // [rsp+B0h] [rbp+8h]
  unsigned int v40; // [rsp+B8h] [rbp+10h]
  bool v41; // [rsp+C0h] [rbp+18h]

  v40 = a2;
  CurrentThread = (__int64 *)KeGetCurrentThread();
  v5 = 0;
  v34 = 0;
  InitialStack = 0LL;
  v35 = 0LL;
  v7 = a3;
  CurrentIrql = KeGetCurrentIrql();
  v37 = CurrentIrql;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( _interlockedbittestandset(&a1->Header.Lock, 7u) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v5);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (a1->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&a1->Header.Lock, 7u) );
  }
  SignalState = a1->Header.SignalState;
  if ( (v7 & 1) != 0 )
  {
    v12 = 1;
    a1->Header.SignalState = 1;
    LOBYTE(a1->StackLimit) |= 1u;
  }
  else
  {
    v12 = 0;
    if ( a1->InitialStack != CurrentThread || a1->Header.Size != CurrentPrcb->DpcRoutineActive )
    {
      v13 = (__int64)a1->StackLimit & 1;
      _InterlockedAnd(&a1->Header.Lock, 0xFFFFFF7F);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      result = 128LL;
      if ( !v13 )
        result = 3221225542LL;
      if ( (v7 & 4) != 0 )
        RtlRaiseStatus(result);
      return result;
    }
    a1->Header.SignalState = SignalState + 1;
  }
  if ( a1->Header.SignalState == 1 && SignalState <= 0 )
  {
    v15 = 0;
    LockNV = a1->Header.LockNV;
    BYTE2(LockNV) = 0;
    a1->Header.LockNV = LockNV;
    InitialStack = (__int64 *)a1->InitialStack;
    v34 = BYTE1(a1->StackLimit);
    while ( _interlockedbittestandset64((volatile signed __int32 *)InitialStack + 16, 0LL) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v15);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( InitialStack[8] );
    }
    SListFaultAddress = (struct _KTHREAD **)a1->SListFaultAddress;
    QuantumTarget = (struct _KTHREAD **)a1->QuantumTarget;
    CurrentIrql = v37;
    if ( SListFaultAddress[1] != (struct _KTHREAD *)&a1->SListFaultAddress
      || *QuantumTarget != (struct _KTHREAD *)&a1->SListFaultAddress )
    {
LABEL_42:
      __fastfail(3u);
    }
    *QuantumTarget = (struct _KTHREAD *)SListFaultAddress;
    p_WaitListHead = &a1->Header.WaitListHead;
    SListFaultAddress[1] = (struct _KTHREAD *)QuantumTarget;
    InitialStack[8] = 0LL;
    Flink = a1->Header.WaitListHead.Flink;
    a1->InitialStack = 0LL;
    while ( Flink != p_WaitListHead )
    {
      v20 = Flink->Flink;
      v21 = (__int64)Flink;
      Blink = Flink->Blink;
      v38 = v20;
      if ( v20->Blink != (struct _LIST_ENTRY *)v21 || Blink->Flink != (struct _LIST_ENTRY *)v21 )
        goto LABEL_42;
      Blink->Flink = v20;
      v20->Blink = Blink;
      v23 = *(_BYTE *)(v21 + 16);
      if ( v23 == 1 )
      {
        v24 = KiTryUnwaitThread((__int64)CurrentPrcb, v21, *(unsigned __int16 *)(v21 + 18), &v35);
        Flink = v38;
        v25 = v24 == 0;
        p_WaitListHead = &a1->Header.WaitListHead;
        if ( !v25 )
        {
          v26 = a1->Header.SignalState - 1;
          a1->Header.SignalState = v26;
          if ( !v26 )
            break;
          p_WaitListHead = &a1->Header.WaitListHead;
        }
      }
      else if ( v23 == 2 )
      {
        *(_BYTE *)(v21 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v21 + 24), (_QWORD *)v21, a3);
        v31 = a1->Header.SignalState - 1;
        a1->Header.SignalState = v31;
        if ( !v31 )
          break;
        Flink = v38;
        p_WaitListHead = &a1->Header.WaitListHead;
      }
      else
      {
        if ( v23 == 4 )
        {
          *(_BYTE *)(v21 + 17) = 5;
          a1->Header.SignalState = 0;
          KiInsertQueueDpc(*(_QWORD *)(v21 + 24), (__int64)a1, v21, 0LL, 0);
        }
        else
        {
          KiTryUnwaitThread((__int64)CurrentPrcb, v21, 256LL, 0LL);
        }
        Flink = v38;
        p_WaitListHead = &a1->Header.WaitListHead;
      }
    }
    v27 = (__int64)a1->StackLimit & 2;
    v39 = v27;
    v28 = v27 != 0;
    v41 = v27 != 0;
    _InterlockedAnd(&a1->Header.Lock, 0xFFFFFF7F);
    if ( v12 )
    {
      KiAcquireReleaseObjectRundownLockExclusive(a1);
      v27 = v39;
      v28 = v41;
    }
    v29 = v28;
    if ( v27 )
    {
      if ( v35 )
      {
        Next = CurrentPrcb->DeferredReadyListHead.Next;
        if ( Next )
        {
          if ( v35 == (AutoBoost *)&Next[-27] )
          {
            KeAbPreWakeupThread(v35, a1, v35);
            v29 = v41;
          }
        }
      }
    }
  }
  else
  {
    _InterlockedAnd(&a1->Header.Lock, 0xFFFFFF7F);
    v29 = 0;
  }
  KiExitDispatcher((__int64)CurrentPrcb, (v7 & 2) != 0 ? 3 : 0, 1u, v40, CurrentIrql);
  if ( v29 )
  {
    if ( InitialStack != CurrentThread )
    {
      SessionId = PsGetSessionIdEx(CurrentThread[23]);
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)a1, SessionId, 1uLL);
    }
    KeAbPostRelease((unsigned __int64)a1);
  }
  if ( v34 )
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v30);
  if ( a4 )
    *a4 = SignalState;
  return 0LL;
}
