/*
 * XREFs of ZwQueryInformationFile @ 0x140723610
 * Callers:
 *     CmpAdjustFileCFSafety @ 0x1404EAA58 (CmpAdjustFileCFSafety.c)
 *     DbgkCaptureLiveKernelDump @ 0x1405B4278 (DbgkCaptureLiveKernelDump.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405C7D7C (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x1405D2D58 (IopLiveDumpValidateDumpFileHandle.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x1405D6938 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwQueryInformationFileWrapper @ 0x1406B13C0 (DifZwQueryInformationFileWrapper.c)
 *     RtlFileMapMapView @ 0x140714ACC (RtlFileMapMapView.c)
 *     IopFileUtilClearAttributes @ 0x1407B43A0 (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x1407C589C (PfpQueryFileExtentsRequest.c)
 *     PopLoadFileInMemory @ 0x1407C8C88 (PopLoadFileInMemory.c)
 *     PopCreateHiberFile @ 0x1407CFB0C (PopCreateHiberFile.c)
 *     PopZeroHiberFile @ 0x1407D0EAC (PopZeroHiberFile.c)
 *     CMFGetFileSizeEx @ 0x1408437D4 (CMFGetFileSizeEx.c)
 *     CmpInitHiveFromFile @ 0x1408B48B4 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x1408B51B0 (CmpOpenHiveFile.c)
 *     CmpCmdHiveClose @ 0x1408B81BC (CmpCmdHiveClose.c)
 *     AslFileMappingCreate @ 0x1409E3894 (AslFileMappingCreate.c)
 *     EtwpUpdateFileHeader @ 0x140A16280 (EtwpUpdateFileHeader.c)
 *     CmpGetFileSize @ 0x140ACDEC4 (CmpGetFileSize.c)
 *     KsepShimDatabaseTime @ 0x140AFDC8C (KsepShimDatabaseTime.c)
 *     PopValidateHiberFileSize @ 0x140B01614 (PopValidateHiberFileSize.c)
 *     EtwpRealtimeRestoreState @ 0x140B5391C (EtwpRealtimeRestoreState.c)
 *     EmInitSystem @ 0x140D07BB4 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock);
}
