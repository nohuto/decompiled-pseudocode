/*
 * XREFs of RtlStringCchPrintfW @ 0x1400452E4
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x140042268 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Counter_CreateCommonBufferInstance @ 0x14007EA00 (Counter_CreateCommonBufferInstance.c)
 *     Counter_CreateInterrupterInstance @ 0x14007EB00 (Counter_CreateInterrupterInstance.c)
 *     Counter_CreateTransferRingInstance @ 0x140081C54 (Counter_CreateTransferRingInstance.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x140045330 (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  if ( cchDest - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerW(pszDest, cchDest, (size_t *)pszFormat, pszFormat, va);
  result = -1073741811;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
