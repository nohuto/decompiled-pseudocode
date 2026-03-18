/*
 * XREFs of RtlStringCchPrintfW @ 0x14003E918
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x1400214B0 (PciConfigSpaceHandlerWorker.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x14003A130 (ACPIGetConvertToInstanceIDWide.c)
 *     LinkNodeCrackPrt @ 0x140045E80 (LinkNodeCrackPrt.c)
 *     ACPIGetConvertToSerialIDWide @ 0x1400611D0 (ACPIGetConvertToSerialIDWide.c)
 *     LogInErrorLog @ 0x1400703D8 (LogInErrorLog.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1400ACFC4 (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x14003EB40 (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  if ( cchDest - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerW(pszDest, cchDest, 0LL, pszFormat, va);
  result = -1073741811;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
