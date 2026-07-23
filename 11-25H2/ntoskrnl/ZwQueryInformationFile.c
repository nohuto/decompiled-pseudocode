/*
 * XREFs of ZwQueryInformationFile @ 0x14069B360
 * Callers:
 *     CmpAdjustFileCFSafety @ 0x1404F2264 (CmpAdjustFileCFSafety.c)
 *     DbgkCaptureLiveKernelDump @ 0x14057B7B8 (DbgkCaptureLiveKernelDump.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x14058ED8C (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x14059AE5C (IopLiveDumpValidateDumpFileHandle.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14059E624 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwQueryInformationFileWrapper @ 0x140639020 (DifZwQueryInformationFileWrapper.c)
 *     RtlFileMapMapView @ 0x14068B394 (RtlFileMapMapView.c)
 *     BiLogFileOwnerProcess @ 0x14068C42C (BiLogFileOwnerProcess.c)
 *     IopFileUtilClearAttributes @ 0x14072953C (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x140739C28 (PfpQueryFileExtentsRequest.c)
 *     PopLoadFileInMemory @ 0x14073D3E4 (PopLoadFileInMemory.c)
 *     PopCreateHiberFile @ 0x140745C64 (PopCreateHiberFile.c)
 *     PopZeroHiberFile @ 0x14074724C (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x14078B380 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x14078C220 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x1407B3CB0 (CMFGetFileSizeEx.c)
 *     CmpCmdHiveClose @ 0x140885694 (CmpCmdHiveClose.c)
 *     CmpInitHiveFromFile @ 0x14090E4F0 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x14090F91C (CmpOpenHiveFile.c)
 *     EtwpUpdateFileHeader @ 0x140991CA0 (EtwpUpdateFileHeader.c)
 *     CmpGetFileSize @ 0x1409F9ABC (CmpGetFileSize.c)
 *     KsepShimDatabaseTime @ 0x140A6049C (KsepShimDatabaseTime.c)
 *     AslFileMappingCreate @ 0x140A75D30 (AslFileMappingCreate.c)
 *     PopValidateHiberFileSize @ 0x140A764E8 (PopValidateHiberFileSize.c)
 *     EtwpRealtimeRestoreState @ 0x140AA9764 (EtwpRealtimeRestoreState.c)
 *     EmInitSystem @ 0x140C4F21C (EmInitSystem.c)
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
  return KiServiceInternal(FileHandle);
}
