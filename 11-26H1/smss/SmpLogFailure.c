/*
 * XREFs of SmpLogFailure @ 0x14000D404
 * Callers:
 *     wmain @ 0x140001618 (wmain.c)
 *     SmscMain @ 0x140001E10 (SmscMain.c)
 *     SmscpLoadSubSystemsForMuSession @ 0x140002770 (SmscpLoadSubSystemsForMuSession.c)
 *     SmscpExecuteInitialCommand @ 0x140002CA0 (SmscpExecuteInitialCommand.c)
 *     SmpStartCsr @ 0x1400032A0 (SmpStartCsr.c)
 *     SmpAllocateControlBlock @ 0x140003E10 (SmpAllocateControlBlock.c)
 *     SmscpLoadSubSystem @ 0x140004C90 (SmscpLoadSubSystem.c)
 *     SmpWaitForSingleSubSys @ 0x140005610 (SmpWaitForSingleSubSys.c)
 *     SmpHandleConnectionRequest @ 0x1400060A0 (SmpHandleConnectionRequest.c)
 *     SmpExecPgm @ 0x140006990 (SmpExecPgm.c)
 *     SmpSbCreateSession @ 0x140006E70 (SmpSbCreateSession.c)
 *     SmpInitializeKnownDllsInternal @ 0x1400088B0 (SmpInitializeKnownDllsInternal.c)
 *     SmpConfigureSharedSessionData @ 0x14000A020 (SmpConfigureSharedSessionData.c)
 *     SmpTranslateSystemPartitionInformation @ 0x14000BE7C (SmpTranslateSystemPartitionInformation.c)
 *     SmpBuildFilesStringFromList @ 0x14000D300 (SmpBuildFilesStringFromList.c)
 *     SmpInitializeManagedPagefileSupport @ 0x14000E6D8 (SmpInitializeManagedPagefileSupport.c)
 *     SmpAsyncMemoryConfiguration @ 0x14000ED40 (SmpAsyncMemoryConfiguration.c)
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x14000F1C0 (SmpComputeDesiredPfSizeBasedOnHistory.c)
 *     SmpCreatePagefileOnVolume @ 0x14000F6B8 (SmpCreatePagefileOnVolume.c)
 *     SmpCreatePagingFileDescriptor @ 0x14000FA78 (SmpCreatePagingFileDescriptor.c)
 *     SmpCreatePagingFiles @ 0x14000FD28 (SmpCreatePagingFiles.c)
 *     SmpCreateVolumeDescriptor @ 0x14000FF10 (SmpCreateVolumeDescriptor.c)
 *     SmpCreateVolumeDescriptors @ 0x140010258 (SmpCreateVolumeDescriptors.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x1400103C0 (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpDeletePagingFile @ 0x1400108B8 (SmpDeletePagingFile.c)
 *     SmpPagefileInitialize @ 0x140010F40 (SmpPagefileInitialize.c)
 *     SmpParseSwapOrPageFileArguments @ 0x140011204 (SmpParseSwapOrPageFileArguments.c)
 *     SmpRecordCreatedPageFiles @ 0x140011318 (SmpRecordCreatedPageFiles.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x140013FA0 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpFinishPFROLogging @ 0x1400146C4 (SmpFinishPFROLogging.c)
 *     SmpInit @ 0x140014CEC (SmpInit.c)
 *     SmpInitializeKnownDllsAsync @ 0x1400156E0 (SmpInitializeKnownDllsAsync.c)
 *     SmpInitializeKnownDllsWorker @ 0x140015810 (SmpInitializeKnownDllsWorker.c)
 *     SmpLoadDataFromRegistry @ 0x1400159FC (SmpLoadDataFromRegistry.c)
 *     SmpLoadSubSystem @ 0x1400169E8 (SmpLoadSubSystem.c)
 *     SmpLogPFROError @ 0x140016BF0 (SmpLogPFROError.c)
 *     SmpOpenKnownDllsHandles @ 0x140016EC0 (SmpOpenKnownDllsHandles.c)
 *     SmpReplaceSystemHiveOnSoftReboot @ 0x140017924 (SmpReplaceSystemHiveOnSoftReboot.c)
 *     SmpSetCoreProcessIds @ 0x14001893C (SmpSetCoreProcessIds.c)
 *     SmpAdoptJob @ 0x140018A50 (SmpAdoptJob.c)
 *     SmpStartServerSilo @ 0x140018B00 (SmpStartServerSilo.c)
 *     SmpCreateInitialSession @ 0x140018CD0 (SmpCreateInitialSession.c)
 * Callees:
 *     SmpInternalLogFailure @ 0x140005424 (SmpInternalLogFailure.c)
 *     memset_0 @ 0x14001E843 (memset_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

_OWORD *__fastcall SmpLogFailure(__int64 a1, int a2, int a3)
{
  _BYTE v7[224]; // [rsp+20h] [rbp-F8h] BYREF

  memset_0(v7, 0, sizeof(v7));
  return SmpInternalLogFailure(a1, a2, a3, (__int64)v7);
}
