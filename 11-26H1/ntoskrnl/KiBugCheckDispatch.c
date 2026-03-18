/*
 * XREFs of KiBugCheckDispatch @ 0x14073C4C0
 * Callers:
 *     KxIsrLinkage @ 0x14072BC20 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x140733AC0 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x1407347C0 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x140735600 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x140735A00 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x140735D80 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x140736140 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x140736500 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x140737080 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x140737900 (KiFloatingErrorFault.c)
 *     KiXmmException @ 0x140738F40 (KiXmmException.c)
 *     KiVirtualizationException @ 0x140739380 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140739B00 (KiControlProtectionFault.c)
 *     KiSystemServiceHandler @ 0x14073B500 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x14073B680 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x14073CA80 (KiFastFailDispatch.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
