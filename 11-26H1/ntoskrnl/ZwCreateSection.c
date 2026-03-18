/*
 * XREFs of ZwCreateSection @ 0x140723D30
 * Callers:
 *     CmSiCreateSectionForFile @ 0x1404D02D4 (CmSiCreateSectionForFile.c)
 *     LdrpMapResourceFile @ 0x140618490 (LdrpMapResourceFile.c)
 *     DifZwCreateSectionWrapper @ 0x1406A1B80 (DifZwCreateSectionWrapper.c)
 *     RtlFileMapMapView @ 0x140714ACC (RtlFileMapMapView.c)
 *     IopIsNotNativeDriverImage @ 0x140794E8C (IopIsNotNativeDriverImage.c)
 *     ExInitializeLeapSecondData @ 0x1408356F4 (ExInitializeLeapSecondData.c)
 *     SLUpdateLicenseDataInternal @ 0x140839788 (SLUpdateLicenseDataInternal.c)
 *     CMFReadCompressedSegment @ 0x140843904 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140843E00 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14084AB08 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x1409E2CD8 (AslpFileLargeMapCreate.c)
 *     KsepSdbMapToMemory @ 0x1409E6578 (KsepSdbMapToMemory.c)
 *     PiInitializeDDB @ 0x140A25EE0 (PiInitializeDDB.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A77228 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140A77E5C (ExpQueryElamCertInfo.c)
 *     NtGetNlsSectionPtr @ 0x140A97650 (NtGetNlsSectionPtr.c)
 *     ExpGetGlobalLocaleSection @ 0x140AD41DC (ExpGetGlobalLocaleSection.c)
 *     CmFcpManagerCreateSection @ 0x140B3B4C8 (CmFcpManagerCreateSection.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle, *(_QWORD *)&DesiredAccess);
}
