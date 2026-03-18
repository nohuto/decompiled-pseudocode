/*
 * XREFs of KiSynchronizeUserIsolationDomainEntry @ 0x140402A00
 * Callers:
 *     NtContinueEx @ 0x1407273F0 (NtContinueEx.c)
 *     NtRaiseException @ 0x1407278B0 (NtRaiseException.c)
 *     KiCallUserMode @ 0x140728580 (KiCallUserMode.c)
 *     KxStartUserThread @ 0x140729310 (KxStartUserThread.c)
 *     KiChainedDispatch @ 0x140729970 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x14072A050 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x14072A440 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14072A830 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x14072AC20 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x14072B010 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x14072BC20 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x14072C480 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x14072DEA0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x14072E2A0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x14072E7F0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x14072EF70 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x14072F700 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x140731220 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1407347C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x140734F00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140737080 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x140738800 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140739380 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140739B00 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x14073B680 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x14073CA80 (KiFastFailDispatch.c)
 *     KiDispatchUserModeEvent @ 0x140C5D200 (KiDispatchUserModeEvent.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
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
