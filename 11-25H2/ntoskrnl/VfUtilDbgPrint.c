/*
 * XREFs of VfUtilDbgPrint @ 0x1406042DC
 * Callers:
 *     VfDifCaptureIoCallbacks @ 0x14049F4E8 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x14049F548 (VfDifCaptureDriverEntry.c)
 *     VfClearVerifierSettings @ 0x140603DE0 (VfClearVerifierSettings.c)
 *     VfReportIssueWithOptions @ 0x140606474 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x1406065B4 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140606638 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1406066CC (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140606770 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x140B72EC0 (VfNotifyVerifierOfEvent.c)
 *     VfUtilPrintCheckinString @ 0x140B73504 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x140B73F10 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140B73FC0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140B74290 (ViGenericVerifyNewIrp.c)
 *     ViAdapterCallback @ 0x140B77B70 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x140B78A00 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x140B7923C (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x140B79BE0 (ViSpecialAllocateCommonBuffer.c)
 *     ViXdvDriverLoadImage @ 0x140B7A9D0 (ViXdvDriverLoadImage.c)
 *     VfIoDeleteDevice @ 0x140B8224C (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140B8237C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140B834E0 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140B83578 (VfErrorReport8.c)
 *     ViErrorDisplayDescription @ 0x140B8364C (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140B8369C (ViErrorFinishReport.c)
 *     ViDeadlockPreprocessOptions @ 0x140B89BE4 (ViDeadlockPreprocessOptions.c)
 *     VerifierNtCreateFile @ 0x140B910D0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140B91280 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140B913D0 (VerifierNtWriteFile.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140B91F70 (ViCtxCheckAndReleaseIsrState.c)
 *     VfPnpDumpIrpStack @ 0x140B95340 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x140B95E30 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x140B960F0 (VfWmiDumpIrpStack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1403A9714 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal((int)&File, 101, 0, (int)a1, va, 1);
}
