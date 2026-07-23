/*
 * XREFs of KiBugCheckDispatch @ 0x1407410C0
 * Callers:
 *     KxIsrLinkage @ 0x1407307F0 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x1407386C0 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x1407393C0 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x14073A200 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14073A600 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14073A980 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14073AD40 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14073B100 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x14073BC80 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14073C500 (KiFloatingErrorFault.c)
 *     KiXmmException @ 0x14073DB40 (KiXmmException.c)
 *     KiVirtualizationException @ 0x14073DF80 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x14073E700 (KiControlProtectionFault.c)
 *     KiSystemServiceHandler @ 0x140740100 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x140740280 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x140741680 (KiFastFailDispatch.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
