/*
 * XREFs of KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00
 * Callers:
 *     NtContinueEx @ 0x14072BFC0 (NtContinueEx.c)
 *     NtRaiseException @ 0x14072C480 (NtRaiseException.c)
 *     KiCallUserMode @ 0x14072D150 (KiCallUserMode.c)
 *     KxStartUserThread @ 0x14072DEE0 (KxStartUserThread.c)
 *     KiChainedDispatch @ 0x14072E540 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x14072EC20 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x14072F010 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14072F400 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x14072F7F0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x14072FBE0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1407307F0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140731050 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140732A70 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140732E70 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1407333C0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140733B40 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1407342D0 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x140735DF0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1407393C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x140739B00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14073BC80 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14073D400 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x14073DF80 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x14073E700 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140740280 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140741680 (KiFastFailDispatch.c)
 *     KiDispatchUserModeEvent @ 0x140C63200 (KiDispatchUserModeEvent.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiSynchronizeUserIsolationDomainEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 CoreControlBlockIndex; // r14
  _KCORE_CONTROL_BLOCK_SHADOW *CoreControlBlockShadow; // rbx
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *NextIsolationDomain; // rax
  unsigned int v9; // ebp
  struct _LIST_ENTRY *v10; // rax
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *v14; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  bool v16; // r8
  unsigned int v17; // edi
  unsigned __int32 v18; // eax
  __int64 v19; // rdx
  unsigned __int32 v20; // ett

  CurrentPrcb = KeGetCurrentPrcb();
  CoreControlBlockIndex = CurrentPrcb->CoreControlBlockIndex;
  CoreControlBlockShadow = CurrentPrcb->CoreControlBlock->CoreControlBlockShadow;
  Flink = CurrentPrcb->CurrentThread[1].SavedApcState.ApcListHead[0].Flink;
  if ( !Flink )
    return 0LL;
  if ( CoreControlBlockShadow->TotalProcessors == 1 )
  {
    CoreControlBlockShadow->CurrentIsolationDomain = (volatile unsigned __int64)Flink;
    return 0LL;
  }
  NextIsolationDomain = (struct _LIST_ENTRY *)CoreControlBlockShadow->NextIsolationDomain;
  if ( NextIsolationDomain != (struct _LIST_ENTRY *)1 && NextIsolationDomain != Flink )
    goto LABEL_22;
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)CoreControlBlockShadow, 0LL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v9);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( CoreControlBlockShadow->Lock );
  }
  v10 = (struct _LIST_ENTRY *)CoreControlBlockShadow->NextIsolationDomain;
  if ( v10 == (struct _LIST_ENTRY *)1 )
  {
    CoreControlBlockShadow->NextIsolationDomain = (volatile unsigned __int64)Flink;
LABEL_12:
    if ( CoreControlBlockShadow->TotalProcessors == ++CoreControlBlockShadow->NewDomainProcessors
                                                  + CoreControlBlockShadow->IdleProcessors )
    {
      CoreControlBlockShadow->CurrentIsolationDomain = CoreControlBlockShadow->NextIsolationDomain;
      CoreControlBlockShadow->NewDomainProcessors = 0;
      CoreControlBlockShadow->NextIsolationDomain = 1LL;
      _InterlockedAnd64((volatile signed __int64 *)CoreControlBlockShadow, 0LL);
      return 0LL;
    }
    CoreControlBlockShadow->ProcessorStates[CoreControlBlockIndex].AllState = 2;
    _InterlockedAnd64((volatile signed __int64 *)CoreControlBlockShadow, 0LL);
    LOBYTE(a2) = 0;
    LODWORD(a4) = 0;
    do
    {
      if ( (struct _LIST_ENTRY *)CoreControlBlockShadow->CurrentIsolationDomain == Flink )
        goto LABEL_15;
      _mm_pause();
      a4 = (unsigned int)(a4 + 1);
      v16 = (unsigned int)a4 > 0x1388;
      if ( CurrentPrcb->NextThread )
        v16 = 1;
    }
    while ( !CurrentPrcb->DpcRequestSummary && !v16 );
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)CoreControlBlockShadow, 0LL) )
    {
      do
      {
        if ( (++v17 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v17);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( CoreControlBlockShadow->Lock );
    }
    a2 = 1LL;
    if ( (struct _LIST_ENTRY *)CoreControlBlockShadow->CurrentIsolationDomain == Flink )
    {
LABEL_15:
      CoreControlBlockShadow->ProcessorStates[CoreControlBlockIndex].AllState = 0;
      if ( (_BYTE)a2 )
        _InterlockedAnd64((volatile signed __int64 *)CoreControlBlockShadow, 0LL);
      return 0LL;
    }
    if ( CoreControlBlockShadow->NewDomainProcessors-- == 1 )
      CoreControlBlockShadow->NextIsolationDomain = 1LL;
    CoreControlBlockShadow->ProcessorStates[CoreControlBlockIndex].AllState = 0;
    goto LABEL_21;
  }
  if ( v10 == Flink )
    goto LABEL_12;
LABEL_21:
  _InterlockedAnd64((volatile signed __int64 *)CoreControlBlockShadow, 0LL);
LABEL_22:
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1 )
    __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 1;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  v14 = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)v14->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v18 = *SchedulerAssist;
    do
    {
      v19 = v18;
      LODWORD(v19) = v18 & 0xFFDFFFFF;
      v20 = v18;
      v18 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v18 & 0xFFDFFFFF, v18);
    }
    while ( v20 != v18 );
    if ( (v18 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v14, v19, SchedulerAssist, a4);
  }
  _enable();
  _mm_pause();
  _disable();
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return 1LL;
}
