/*
 * XREFs of RtlStringCbPrintfA @ 0x140578AF8
 * Callers:
 *     RtlpVerCompare @ 0x14048F854 (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x1405EACFC (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x14064927C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140649300 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140649394 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140649438 (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x140C056F0 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140C283A0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140C28670 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140C366D0 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140C36800 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140C3797C (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140C37A14 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140C45EE0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140C46090 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140C461E0 (VerifierNtWriteFile.c)
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 *     InitLoadDebuggerSymbols @ 0x140CB1450 (InitLoadDebuggerSymbols.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     RamdiskCreateSymbolicLink @ 0x140D09F60 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x140578E58 (RtlStringVPrintfWorkerA.c)
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
