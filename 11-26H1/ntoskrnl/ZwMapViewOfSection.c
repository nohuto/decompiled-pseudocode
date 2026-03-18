/*
 * XREFs of ZwMapViewOfSection @ 0x1407238F0
 * Callers:
 *     CmSiMapViewOfSection @ 0x1404CB754 (CmSiMapViewOfSection.c)
 *     DifZwMapViewOfSectionWrapper @ 0x1406AA370 (DifZwMapViewOfSectionWrapper.c)
 *     RtlFileMapMapView @ 0x140714ACC (RtlFileMapMapView.c)
 *     IopIsNotNativeDriverImage @ 0x140794E8C (IopIsNotNativeDriverImage.c)
 *     CMFReadCompressedSegment @ 0x140843904 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140843E00 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14084AB08 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x1409E2CD8 (AslpFileLargeMapCreate.c)
 *     PiInitializeDDB @ 0x140A25EE0 (PiInitializeDDB.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A77228 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140A77E5C (ExpQueryElamCertInfo.c)
 *     EmpMapPhysicalAddress @ 0x140CB7B1C (EmpMapPhysicalAddress.c)
 *     CmpSetSystemBiosInformation @ 0x140CED418 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140CED7B0 (CmpSetVideoBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle, ProcessHandle);
}
