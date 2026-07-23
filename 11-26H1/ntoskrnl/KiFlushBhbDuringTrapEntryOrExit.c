/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80
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
 *     KiSystemService @ 0x14073FA40 (KiSystemService.c)
 *     KiSystemCall32 @ 0x14073FD00 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x140740280 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140C60E40 (KiSystemCall32Shadow.c)
 *     KiSystemCall64Shadow @ 0x140C61200 (KiSystemCall64Shadow.c)
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
