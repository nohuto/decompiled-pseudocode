/*
 * XREFs of RtlStringCbPrintfA @ 0x140576648
 * Callers:
 *     RtlpVerCompare @ 0x140495D04 (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x1405E838C (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x14064569C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140645720 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1406457B4 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140645858 (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x140BFF4E0 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140C22390 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140C22660 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140C306C0 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140C307F0 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140C3196C (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140C31A04 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140C3FED0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140C40080 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140C401D0 (VerifierNtWriteFile.c)
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     InitLoadDebuggerSymbols @ 0x140CAB410 (InitLoadDebuggerSymbols.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 *     RamdiskCreateSymbolicLink @ 0x140D03C90 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x1405769A8 (RtlStringVPrintfWorkerA.c)
 */

NTSTATUS RtlStringCbPrintfA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  if ( cbDest - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerA(pszDest, cbDest, 0LL, pszFormat, va);
  result = -1073741811;
  if ( cbDest )
    *pszDest = 0;
  return result;
}
