/*
 * XREFs of HalpBlkFatalErrorHalt @ 0x140C82910
 * Callers:
 *     HalpBlkHandleMachineCheckAbort @ 0x140C82400 (HalpBlkHandleMachineCheckAbort.c)
 *     HalpBlkMceFastForward @ 0x140C82510 (HalpBlkMceFastForward.c)
 *     HalpBlkDivideErrorFault @ 0x140C82A00 (HalpBlkDivideErrorFault.c)
 *     HalpBlkDebugExceptionTrap @ 0x140C82A80 (HalpBlkDebugExceptionTrap.c)
 *     HalpBlkBreakpointTrap @ 0x140C82B00 (HalpBlkBreakpointTrap.c)
 *     HalpBlkOverflowTrap @ 0x140C82B80 (HalpBlkOverflowTrap.c)
 *     HalpBlkBoundRangeExceededFault @ 0x140C82C00 (HalpBlkBoundRangeExceededFault.c)
 *     HalpBlkInvalidOpcodeFault @ 0x140C82C80 (HalpBlkInvalidOpcodeFault.c)
 *     HalpBlkDeviceNotAvailableFault @ 0x140C82D00 (HalpBlkDeviceNotAvailableFault.c)
 *     HalpBlkDoubleFaultAbort @ 0x140C82D80 (HalpBlkDoubleFaultAbort.c)
 *     HalpBlkCoprocessorSegmentOverrunFault @ 0x140C82E00 (HalpBlkCoprocessorSegmentOverrunFault.c)
 *     HalpBlkInvalidTssFault @ 0x140C82E80 (HalpBlkInvalidTssFault.c)
 *     HalpBlkSegmentNotPresentFault @ 0x140C82F00 (HalpBlkSegmentNotPresentFault.c)
 *     HalpBlkStackSegmentFault @ 0x140C82F80 (HalpBlkStackSegmentFault.c)
 *     HalpBlkGeneralProtectionFault @ 0x140C83000 (HalpBlkGeneralProtectionFault.c)
 *     HalpBlkPageFault @ 0x140C83080 (HalpBlkPageFault.c)
 *     HalpBlkFloatingPointErrorFault @ 0x140C83100 (HalpBlkFloatingPointErrorFault.c)
 *     HalpBlkAlignmentFault @ 0x140C83180 (HalpBlkAlignmentFault.c)
 *     HalpBlkFloatingPointFault @ 0x140C83200 (HalpBlkFloatingPointFault.c)
 *     HalpBlkVirtualizationFault @ 0x140C83280 (HalpBlkVirtualizationFault.c)
 *     HalpBlkReservedVector21 @ 0x140C83300 (HalpBlkReservedVector21.c)
 *     HalpBlkReservedVector22 @ 0x140C83380 (HalpBlkReservedVector22.c)
 *     HalpBlkReservedVector23 @ 0x140C83400 (HalpBlkReservedVector23.c)
 *     HalpBlkReservedVector24 @ 0x140C83480 (HalpBlkReservedVector24.c)
 *     HalpBlkReservedVector25 @ 0x140C83500 (HalpBlkReservedVector25.c)
 *     HalpBlkReservedVector26 @ 0x140C83580 (HalpBlkReservedVector26.c)
 *     HalpBlkReservedVector27 @ 0x140C83600 (HalpBlkReservedVector27.c)
 *     HalpBlkReservedVector28 @ 0x140C83680 (HalpBlkReservedVector28.c)
 *     HalpBlkReservedVector29 @ 0x140C83700 (HalpBlkReservedVector29.c)
 *     HalpBlkReservedVector30 @ 0x140C83780 (HalpBlkReservedVector30.c)
 *     HalpBlkReservedVector31 @ 0x140C83800 (HalpBlkReservedVector31.c)
 *     HalpBlkNmiInterrupt @ 0x140C83D00 (HalpBlkNmiInterrupt.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn HalpBlkFatalErrorHalt(unsigned __int8 a1, unsigned __int64 a2)
{
  __writegsbyte(0x70u, a1);
  _mm_sfence();
  __writegsqword(0x78u, a2);
  _disable();
  __halt();
}
