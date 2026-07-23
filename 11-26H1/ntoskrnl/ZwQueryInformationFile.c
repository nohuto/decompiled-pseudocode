/*
 * XREFs of ZwQueryInformationFile @ 0x1407281E0
 * Callers:
 *     CmpAdjustFileCFSafety @ 0x1404E3E08 (CmpAdjustFileCFSafety.c)
 *     DbgkCaptureLiveKernelDump @ 0x1405B6A88 (DbgkCaptureLiveKernelDump.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405CA64C (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x1405D5548 (IopLiveDumpValidateDumpFileHandle.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x1405D9128 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwQueryInformationFileWrapper @ 0x1406B4FA0 (DifZwQueryInformationFileWrapper.c)
 *     RtlFileMapMapView @ 0x1407197BC (RtlFileMapMapView.c)
 *     IopFileUtilClearAttributes @ 0x1407B7400 (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x1407C88FC (PfpQueryFileExtentsRequest.c)
 *     PopLoadFileInMemory @ 0x1407CBD28 (PopLoadFileInMemory.c)
 *     PopCreateHiberFile @ 0x1407D2BAC (PopCreateHiberFile.c)
 *     PopZeroHiberFile @ 0x1407D3F4C (PopZeroHiberFile.c)
 *     CMFGetFileSizeEx @ 0x140848C64 (CMFGetFileSizeEx.c)
 *     CmpInitHiveFromFile @ 0x1408BAE88 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x1408BB784 (CmpOpenHiveFile.c)
 *     CmpCmdHiveClose @ 0x1408BE78C (CmpCmdHiveClose.c)
 *     EtwpUpdateFileHeader @ 0x140A15D84 (EtwpUpdateFileHeader.c)
 *     AslFileMappingCreate @ 0x140A37E7C (AslFileMappingCreate.c)
 *     CmpGetFileSize @ 0x140AD0104 (CmpGetFileSize.c)
 *     KsepShimDatabaseTime @ 0x140AFFCFC (KsepShimDatabaseTime.c)
 *     PopValidateHiberFileSize @ 0x140B03344 (PopValidateHiberFileSize.c)
 *     EtwpRealtimeRestoreState @ 0x140B561BC (EtwpRealtimeRestoreState.c)
 *     EmInitSystem @ 0x140D0DE84 (EmInitSystem.c)
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
