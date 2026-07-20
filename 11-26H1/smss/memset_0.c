/*
 * XREFs of memset_0 @ 0x14001E843
 * Callers:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     SmscMain @ 0x140001E10 (SmscMain.c)
 *     SmscpExecuteInitialCommand @ 0x140002CA0 (SmscpExecuteInitialCommand.c)
 *     SmpStartCsr @ 0x1400032A0 (SmpStartCsr.c)
 *     SmpReleaseControlBlock @ 0x140003C60 (SmpReleaseControlBlock.c)
 *     SmpAllocateControlBlock @ 0x140003E10 (SmpAllocateControlBlock.c)
 *     SmscpLoadSubSystem @ 0x140004C90 (SmscpLoadSubSystem.c)
 *     SmpExecuteImage @ 0x140005010 (SmpExecuteImage.c)
 *     SmpApiCallback @ 0x140005930 (SmpApiCallback.c)
 *     SmpHandleConnectionRequest @ 0x1400060A0 (SmpHandleConnectionRequest.c)
 *     SmpExecPgm @ 0x140006990 (SmpExecPgm.c)
 *     SmpSbCreateSession @ 0x140006E70 (SmpSbCreateSession.c)
 *     SmpGetProcessMuSessionId @ 0x140007730 (SmpGetProcessMuSessionId.c)
 *     SmLogFailureInt @ 0x140007A08 (SmLogFailureInt.c)
 *     SmpUpdatePagefileUsageCallback @ 0x140007C40 (SmpUpdatePagefileUsageCallback.c)
 *     SmExecPgmEx @ 0x140009390 (SmExecPgmEx.c)
 *     SmpSelectNodeNumber @ 0x140009640 (SmpSelectNodeNumber.c)
 *     SmpSaveOldPageFiles @ 0x140009C20 (SmpSaveOldPageFiles.c)
 *     RtlStringCbPrintfExW @ 0x14000B5BC (RtlStringCbPrintfExW.c)
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x14000F1C0 (SmpComputeDesiredPfSizeBasedOnHistory.c)
 *     SmpEnableCachingOnDedicatedMemoryWorker @ 0x1400109AC (SmpEnableCachingOnDedicatedMemoryWorker.c)
 *     SmpPagefileInitialize @ 0x140010F40 (SmpPagefileInitialize.c)
 *     SmpCheckForCrashDump @ 0x140011618 (SmpCheckForCrashDump.c)
 *     SmpQuerySameVolume @ 0x1400125CC (SmpQuerySameVolume.c)
 *     SmpSavePageFile @ 0x140012AB8 (SmpSavePageFile.c)
 *     RtlStringExHandleOtherFlagsW @ 0x140012F44 (RtlStringExHandleOtherFlagsW.c)
 *     SmpInit @ 0x140014CEC (SmpInit.c)
 *     SmpLoadDataFromRegistry @ 0x1400159FC (SmpLoadDataFromRegistry.c)
 *     SmpLoadSubSystem @ 0x1400169E8 (SmpLoadSubSystem.c)
 *     SmpRenameTargetFile @ 0x1400177D8 (SmpRenameTargetFile.c)
 *     SmpRunSecureKernelTrustlets @ 0x140017AB0 (SmpRunSecureKernelTrustlets.c)
 *     SmpStartServerSilo @ 0x140018B00 (SmpStartServerSilo.c)
 *     SmpCreateInitialSession @ 0x140018CD0 (SmpCreateInitialSession.c)
 *     SmscpNotifySmOfFailure @ 0x1400194D8 (SmscpNotifySmOfFailure.c)
 *     GetLongPathNameW @ 0x14001C804 (GetLongPathNameW.c)
 *     BasepGetFileRedirectionStatus @ 0x14001CE74 (BasepGetFileRedirectionStatus.c)
 *     InternalFindFirstFileExW @ 0x14001D704 (InternalFindFirstFileExW.c)
 *     NtPnpGetObjectProperty @ 0x14001E188 (NtPnpGetObjectProperty.c)
 *     NtPnpInitializeInputPropertyData @ 0x14001E31C (NtPnpInitializeInputPropertyData.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
