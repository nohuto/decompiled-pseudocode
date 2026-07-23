/*
 * XREFs of ZwMapViewOfSection @ 0x14069B640
 * Callers:
 *     CmSiMapViewOfSection @ 0x14048D57C (CmSiMapViewOfSection.c)
 *     DifZwMapViewOfSectionWrapper @ 0x140634D40 (DifZwMapViewOfSectionWrapper.c)
 *     RtlFileMapMapView @ 0x14068B394 (RtlFileMapMapView.c)
 *     IopIsNotNativeDriverImage @ 0x1407064F4 (IopIsNotNativeDriverImage.c)
 *     ExpQueryElamCertInfo @ 0x1407A5834 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1407B3DE0 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1407B42D0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1407BA474 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x1408008A0 (AslpFileLargeMapCreate.c)
 *     PiInitializeDDB @ 0x1409AF8CC (PiInitializeDDB.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A6BEE8 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     EmpMapPhysicalAddress @ 0x140C06D94 (EmpMapPhysicalAddress.c)
 *     CmpSetSystemBiosInformation @ 0x140C387E4 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140C38B84 (CmpSetVideoBiosInformation.c)
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
