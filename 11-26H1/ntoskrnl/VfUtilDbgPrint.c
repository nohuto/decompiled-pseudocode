/*
 * XREFs of VfUtilDbgPrint @ 0x140532380
 * Callers:
 *     VfDifCaptureDriverEntry @ 0x1403C1800 (VfDifCaptureDriverEntry.c)
 *     VfDifCaptureIoCallbacks @ 0x1403C186C (VfDifCaptureIoCallbacks.c)
 *     VfClearVerifierSettings @ 0x140643E50 (VfClearVerifierSettings.c)
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x14064927C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140649300 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140649394 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140649438 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x140C27350 (VfNotifyVerifierOfEvent.c)
 *     VfUtilPrintCheckinString @ 0x140C27A20 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x140C28300 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140C283A0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140C28670 (ViGenericVerifyNewIrp.c)
 *     ViAdapterCallback @ 0x140C2BC10 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x140C2CAE4 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x140C2D32C (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x140C2DD00 (ViSpecialAllocateCommonBuffer.c)
 *     ViXdvDriverLoadImage @ 0x140C2E5CC (ViXdvDriverLoadImage.c)
 *     VfIoDeleteDevice @ 0x140C366D0 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140C36800 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140C3797C (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140C37A14 (VfErrorReport8.c)
 *     ViErrorDisplayDescription @ 0x140C37AE8 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140C37B38 (ViErrorFinishReport.c)
 *     ViDeadlockPreprocessOptions @ 0x140C3DDD0 (ViDeadlockPreprocessOptions.c)
 *     VfPnpDumpIrpStack @ 0x140C40620 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x140C41110 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x140C413D0 (VfWmiDumpIrpStack.c)
 *     VerifierNtCreateFile @ 0x140C45EE0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140C46090 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140C461E0 (VerifierNtWriteFile.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140C46D90 (ViCtxCheckAndReleaseIsrState.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14039933C (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal((int)&File, 101, 0, (int)a1, va, 1);
}
