/*
 * XREFs of ZwCreateSection @ 0x14069BA80
 * Callers:
 *     CmSiCreateSectionForFile @ 0x140495014 (CmSiCreateSectionForFile.c)
 *     LdrpMapResourceFile @ 0x1405DB9FC (LdrpMapResourceFile.c)
 *     DifZwCreateSectionWrapper @ 0x140632240 (DifZwCreateSectionWrapper.c)
 *     RtlFileMapMapView @ 0x14068B394 (RtlFileMapMapView.c)
 *     IopIsNotNativeDriverImage @ 0x1407064F4 (IopIsNotNativeDriverImage.c)
 *     ExpQueryElamCertInfo @ 0x1407A5834 (ExpQueryElamCertInfo.c)
 *     ExInitializeLeapSecondData @ 0x1407A6790 (ExInitializeLeapSecondData.c)
 *     SLUpdateLicenseDataInternal @ 0x1407AAD54 (SLUpdateLicenseDataInternal.c)
 *     CMFReadCompressedSegment @ 0x1407B3DE0 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1407B42D0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1407BA474 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x1408008A0 (AslpFileLargeMapCreate.c)
 *     KsepSdbMapToMemory @ 0x14082B4A8 (KsepSdbMapToMemory.c)
 *     ExpGetGlobalLocaleSection @ 0x1408FA174 (ExpGetGlobalLocaleSection.c)
 *     NtGetNlsSectionPtr @ 0x1408FB050 (NtGetNlsSectionPtr.c)
 *     PiInitializeDDB @ 0x1409AF8CC (PiInitializeDDB.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A6BEE8 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     CmFcpManagerCreateSection @ 0x140ABC9D8 (CmFcpManagerCreateSection.c)
 * Callees:
 *     <none>
 */

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
  return KiServiceInternal(SectionHandle);
}
