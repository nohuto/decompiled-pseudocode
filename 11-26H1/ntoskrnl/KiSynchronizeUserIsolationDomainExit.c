/*
 * XREFs of KiSynchronizeUserIsolationDomainExit @ 0x14043EB60
 * Callers:
 *     KyStartUserThread @ 0x14072DB60 (KyStartUserThread.c)
 *     KxIsrLinkage @ 0x1407307F0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140731050 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x1407318A0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140731C30 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140731FC0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140732350 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1407326E0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1407333C0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140733B40 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1407342D0 (KiIpiInterrupt.c)
 *     KiDivideErrorFault @ 0x140737D00 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x140738240 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x140738C80 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x140739040 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x1407393C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x140739B00 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x14073A200 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14073A600 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14073A980 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14073AD40 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14073B100 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x14073B500 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x14073B8C0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x14073BC80 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14073C500 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x14073C900 (KiAlignmentFault.c)
 *     KxMcheckAlternateReturn @ 0x14073D400 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x14073DB40 (KiXmmException.c)
 *     KiVirtualizationException @ 0x14073DF80 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x14073E700 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x14073EEC0 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x14073F2C0 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x14073F680 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x14073FD00 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x140740280 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140C60E40 (KiSystemCall32Shadow.c)
 *     KiDispatchUserModeEvent @ 0x140C63200 (KiDispatchUserModeEvent.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSendSoftwareInterrupt @ 0x14043EC90 (KiSendSoftwareInterrupt.c)
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
