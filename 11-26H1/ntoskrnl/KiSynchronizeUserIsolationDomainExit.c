/*
 * XREFs of KiSynchronizeUserIsolationDomainExit @ 0x140446060
 * Callers:
 *     KyStartUserThread @ 0x140728F90 (KyStartUserThread.c)
 *     KxIsrLinkage @ 0x14072BC20 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x14072C480 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x14072CCD0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x14072D060 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x14072D3F0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x14072D780 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x14072DB10 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x14072E7F0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x14072EF70 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x14072F700 (KiIpiInterrupt.c)
 *     KiDivideErrorFault @ 0x140733100 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x140733640 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x140734080 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x140734440 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x1407347C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x140734F00 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x140735600 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x140735A00 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x140735D80 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x140736140 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x140736500 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x140736900 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x140736CC0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x140737080 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x140737900 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x140737D00 (KiAlignmentFault.c)
 *     KxMcheckAlternateReturn @ 0x140738800 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x140738F40 (KiXmmException.c)
 *     KiVirtualizationException @ 0x140739380 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140739B00 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x14073A2C0 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x14073A6C0 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x14073AA80 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x14073B100 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x14073B680 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140C5AE40 (KiSystemCall32Shadow.c)
 *     KiDispatchUserModeEvent @ 0x140C5D200 (KiDispatchUserModeEvent.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSendSoftwareInterrupt @ 0x140446190 (KiSendSoftwareInterrupt.c)
 */

_KCORE_CONTROL_BLOCK *__fastcall KiSynchronizeUserIsolationDomainExit(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _KCORE_CONTROL_BLOCK *result; // rax
  __int64 CoreControlBlockIndex; // rsi
  _KCORE_CONTROL_BLOCK_SHADOW *CoreControlBlockShadow; // rbx
  unsigned int v6; // edi
  __int64 i; // rdi

  CurrentPrcb = KeGetCurrentPrcb();
  result = CurrentPrcb->CoreControlBlock;
  CoreControlBlockIndex = CurrentPrcb->CoreControlBlockIndex;
  CoreControlBlockShadow = result->CoreControlBlockShadow;
  if ( CoreControlBlockShadow->CurrentIsolationDomain )
  {
    if ( CoreControlBlockShadow->TotalProcessors == 1 )
    {
      CoreControlBlockShadow->CurrentIsolationDomain = 0LL;
    }
    else
    {
      v6 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)CoreControlBlockShadow, 0LL) )
      {
        do
        {
          if ( (++v6 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v6);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CoreControlBlockShadow->Lock );
      }
      if ( CoreControlBlockShadow->NextIsolationDomain == 1 )
        CoreControlBlockShadow->NextIsolationDomain = 0LL;
      ++CoreControlBlockShadow->NewDomainProcessors;
      result = (_KCORE_CONTROL_BLOCK *)CoreControlBlockShadow->TotalProcessors;
      if ( (_DWORD)result == CoreControlBlockShadow->NewDomainProcessors + CoreControlBlockShadow->IdleProcessors )
      {
        CoreControlBlockShadow->CurrentIsolationDomain = 0LL;
        CoreControlBlockShadow->NewDomainProcessors = 0;
        CoreControlBlockShadow->NextIsolationDomain = 1LL;
        _InterlockedAnd64((volatile signed __int64 *)CoreControlBlockShadow, 0LL);
      }
      else
      {
        CoreControlBlockShadow->ProcessorStates[CoreControlBlockIndex].AllState = 2;
        _InterlockedAnd64((volatile signed __int64 *)CoreControlBlockShadow, 0LL);
        for ( i = 0LL; (unsigned int)i < CoreControlBlockShadow->TotalProcessors; i = (unsigned int)(i + 1) )
        {
          if ( (CoreControlBlockShadow->ProcessorStates[i].AllState & 3) == 0 )
          {
            LOBYTE(a2) = 1;
            KiSendSoftwareInterrupt(LODWORD(CoreControlBlockShadow->InterruptTargets[i]), a2);
          }
        }
        while ( 1 )
        {
          result = (_KCORE_CONTROL_BLOCK *)CoreControlBlockShadow->CurrentIsolationDomain;
          if ( !result )
            break;
          _mm_pause();
        }
        CoreControlBlockShadow->ProcessorStates[CoreControlBlockIndex].AllState = 0;
      }
    }
  }
  return result;
}
