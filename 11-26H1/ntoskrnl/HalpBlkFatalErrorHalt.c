/*
 * XREFs of HalpBlkFatalErrorHalt @ 0x140C7C910
 * Callers:
 *     HalpBlkHandleMachineCheckAbort @ 0x140C7C400 (HalpBlkHandleMachineCheckAbort.c)
 *     HalpBlkMceFastForward @ 0x140C7C510 (HalpBlkMceFastForward.c)
 *     HalpBlkDivideErrorFault @ 0x140C7CA00 (HalpBlkDivideErrorFault.c)
 *     HalpBlkDebugExceptionTrap @ 0x140C7CA80 (HalpBlkDebugExceptionTrap.c)
 *     HalpBlkBreakpointTrap @ 0x140C7CB00 (HalpBlkBreakpointTrap.c)
 *     HalpBlkOverflowTrap @ 0x140C7CB80 (HalpBlkOverflowTrap.c)
 *     HalpBlkBoundRangeExceededFault @ 0x140C7CC00 (HalpBlkBoundRangeExceededFault.c)
 *     HalpBlkInvalidOpcodeFault @ 0x140C7CC80 (HalpBlkInvalidOpcodeFault.c)
 *     HalpBlkDeviceNotAvailableFault @ 0x140C7CD00 (HalpBlkDeviceNotAvailableFault.c)
 *     HalpBlkDoubleFaultAbort @ 0x140C7CD80 (HalpBlkDoubleFaultAbort.c)
 *     HalpBlkCoprocessorSegmentOverrunFault @ 0x140C7CE00 (HalpBlkCoprocessorSegmentOverrunFault.c)
 *     HalpBlkInvalidTssFault @ 0x140C7CE80 (HalpBlkInvalidTssFault.c)
 *     HalpBlkSegmentNotPresentFault @ 0x140C7CF00 (HalpBlkSegmentNotPresentFault.c)
 *     HalpBlkStackSegmentFault @ 0x140C7CF80 (HalpBlkStackSegmentFault.c)
 *     HalpBlkGeneralProtectionFault @ 0x140C7D000 (HalpBlkGeneralProtectionFault.c)
 *     HalpBlkPageFault @ 0x140C7D080 (HalpBlkPageFault.c)
 *     HalpBlkFloatingPointErrorFault @ 0x140C7D100 (HalpBlkFloatingPointErrorFault.c)
 *     HalpBlkAlignmentFault @ 0x140C7D180 (HalpBlkAlignmentFault.c)
 *     HalpBlkFloatingPointFault @ 0x140C7D200 (HalpBlkFloatingPointFault.c)
 *     HalpBlkVirtualizationFault @ 0x140C7D280 (HalpBlkVirtualizationFault.c)
 *     HalpBlkReservedVector21 @ 0x140C7D300 (HalpBlkReservedVector21.c)
 *     HalpBlkReservedVector22 @ 0x140C7D380 (HalpBlkReservedVector22.c)
 *     HalpBlkReservedVector23 @ 0x140C7D400 (HalpBlkReservedVector23.c)
 *     HalpBlkReservedVector24 @ 0x140C7D480 (HalpBlkReservedVector24.c)
 *     HalpBlkReservedVector25 @ 0x140C7D500 (HalpBlkReservedVector25.c)
 *     HalpBlkReservedVector26 @ 0x140C7D580 (HalpBlkReservedVector26.c)
 *     HalpBlkReservedVector27 @ 0x140C7D600 (HalpBlkReservedVector27.c)
 *     HalpBlkReservedVector28 @ 0x140C7D680 (HalpBlkReservedVector28.c)
 *     HalpBlkReservedVector29 @ 0x140C7D700 (HalpBlkReservedVector29.c)
 *     HalpBlkReservedVector30 @ 0x140C7D780 (HalpBlkReservedVector30.c)
 *     HalpBlkReservedVector31 @ 0x140C7D800 (HalpBlkReservedVector31.c)
 *     HalpBlkNmiInterrupt @ 0x140C7DD00 (HalpBlkNmiInterrupt.c)
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
