/*
 * XREFs of KiCopyCounters @ 0x1405F3410
 * Callers:
 *     NtContinueEx @ 0x1407273F0 (NtContinueEx.c)
 *     NtRaiseException @ 0x1407278B0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
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
 *     KiNmiInterruptStart @ 0x140733AC0 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x1407347C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x140734F00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140737080 (KiPageFault.c)
 *     KiMcheckAbort @ 0x140738080 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x140738800 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140739380 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140739B00 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x14073B680 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x14073CA80 (KiFastFailDispatch.c)
 *     KiDispatchUserModeEvent @ 0x140C5D200 (KiDispatchUserModeEvent.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCopyCountersWorker @ 0x1407BAFAC (KiCopyCountersWorker.c)
 */

struct _KPRCB *__fastcall KiCopyCounters(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  int v9; // eax
  int v10; // edx
  int v11; // r8d
  struct _KPRCB *result; // rax

  v1 = *(_QWORD *)(a1 + 360);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1 )
    __writecr8(1uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
  do
  {
    v4 = *(_QWORD *)(a1 + 72);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v7 = *SchedulerAssist;
      do
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange(SchedulerAssist, v7 & 0xFFDFFFFF, v7);
      }
      while ( v8 != v7 );
      if ( (v7 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v9 = KiCopyCountersWorker(a1, v1);
    _disable();
  }
  while ( !v9 && v4 != *(_QWORD *)(a1 + 72) );
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  result = KeGetCurrentPrcb();
  if ( (result->PairRegister & 2) != 0 )
    return (struct _KPRCB *)KiUpdateStibpPairing(0LL, v10, v11);
  return result;
}
