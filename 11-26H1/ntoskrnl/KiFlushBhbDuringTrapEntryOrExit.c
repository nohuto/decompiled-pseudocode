/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80
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
 *     KiSystemService @ 0x14073AE40 (KiSystemService.c)
 *     KiSystemCall32 @ 0x14073B100 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x14073B680 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140C5AE40 (KiSystemCall32Shadow.c)
 *     KiSystemCall64Shadow @ 0x140C5B200 (KiSystemCall64Shadow.c)
 * Callees:
 *     <none>
 */

char KiFlushBhbDuringTrapEntryOrExit()
{
  char result; // al

  result = KeGetPcr()->Prcb.BpbFeatures.AllFlags & 0x30;
  switch ( result )
  {
    case 16:
      return KiFlushBhbDuringTrapEntryOrExitPreAlderLake();
    case 32:
      return KiFlushBhbDuringTrapEntryOrExitAlderLake();
    case 48:
      return KiFlushBhbDuringTrapEntryOrExitTsx();
  }
  __debugbreak();
  return result;
}
