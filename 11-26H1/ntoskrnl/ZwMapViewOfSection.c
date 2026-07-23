/*
 * XREFs of ZwMapViewOfSection @ 0x1407284C0
 * Callers:
 *     CmSiMapViewOfSection @ 0x1404C5184 (CmSiMapViewOfSection.c)
 *     DifZwMapViewOfSectionWrapper @ 0x1406ADF50 (DifZwMapViewOfSectionWrapper.c)
 *     RtlFileMapMapView @ 0x1407197BC (RtlFileMapMapView.c)
 *     IopIsNotNativeDriverImage @ 0x1407979BC (IopIsNotNativeDriverImage.c)
 *     CMFReadCompressedSegment @ 0x140848D94 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140849290 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140850E18 (ApiSetpLoadSchemaImage.c)
 *     PiInitializeDDB @ 0x140A38F80 (PiInitializeDDB.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A7FF48 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140A80900 (ExpQueryElamCertInfo.c)
 *     AslpFileLargeMapCreate @ 0x140B6CF80 (AslpFileLargeMapCreate.c)
 *     EmpMapPhysicalAddress @ 0x140CBDB60 (EmpMapPhysicalAddress.c)
 *     CmpSetSystemBiosInformation @ 0x140CF371C (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140CF3AB4 (CmpSetVideoBiosInformation.c)
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
  return KiServiceInternal(SectionHandle);
}
