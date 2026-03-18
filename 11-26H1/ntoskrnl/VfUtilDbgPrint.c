/*
 * XREFs of VfUtilDbgPrint @ 0x14052FE80
 * Callers:
 *     VfDifCaptureDriverEntry @ 0x1403B7900 (VfDifCaptureDriverEntry.c)
 *     VfDifCaptureIoCallbacks @ 0x1403B796C (VfDifCaptureIoCallbacks.c)
 *     VfClearVerifierSettings @ 0x140640270 (VfClearVerifierSettings.c)
 *     VfReportIssueWithOptions @ 0x140645558 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x14064569C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140645720 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1406457B4 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140645858 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x140C21340 (VfNotifyVerifierOfEvent.c)
 *     VfUtilPrintCheckinString @ 0x140C21A10 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x140C222F0 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140C22390 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140C22660 (ViGenericVerifyNewIrp.c)
 *     ViAdapterCallback @ 0x140C25C00 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x140C26AD4 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x140C2731C (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x140C27CF0 (ViSpecialAllocateCommonBuffer.c)
 *     ViXdvDriverLoadImage @ 0x140C285C4 (ViXdvDriverLoadImage.c)
 *     VfIoDeleteDevice @ 0x140C306C0 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140C307F0 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140C3196C (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140C31A04 (VfErrorReport8.c)
 *     ViErrorDisplayDescription @ 0x140C31AD8 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140C31B28 (ViErrorFinishReport.c)
 *     ViDeadlockPreprocessOptions @ 0x140C37DC0 (ViDeadlockPreprocessOptions.c)
 *     VfPnpDumpIrpStack @ 0x140C3A610 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x140C3B100 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x140C3B3C0 (VfWmiDumpIrpStack.c)
 *     VerifierNtCreateFile @ 0x140C3FED0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140C40080 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140C401D0 (VerifierNtWriteFile.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140C40D80 (ViCtxCheckAndReleaseIsrState.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1403975BC (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal((int)&File, 101, 0, (int)a1, va, 1);
}
