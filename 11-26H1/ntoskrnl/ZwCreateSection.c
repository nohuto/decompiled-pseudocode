/*
 * XREFs of ZwCreateSection @ 0x140728900
 * Callers:
 *     CmSiCreateSectionForFile @ 0x1404C9D04 (CmSiCreateSectionForFile.c)
 *     LdrpMapResourceFile @ 0x14061B4E0 (LdrpMapResourceFile.c)
 *     DifZwCreateSectionWrapper @ 0x1406A5760 (DifZwCreateSectionWrapper.c)
 *     RtlFileMapMapView @ 0x1407197BC (RtlFileMapMapView.c)
 *     IopIsNotNativeDriverImage @ 0x1407979BC (IopIsNotNativeDriverImage.c)
 *     ExInitializeLeapSecondData @ 0x14083B934 (ExInitializeLeapSecondData.c)
 *     SLUpdateLicenseDataInternal @ 0x14083F9C8 (SLUpdateLicenseDataInternal.c)
 *     CMFReadCompressedSegment @ 0x140848D94 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140849290 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140850E18 (ApiSetpLoadSchemaImage.c)
 *     KsepSdbMapToMemory @ 0x1409D65BC (KsepSdbMapToMemory.c)
 *     PiInitializeDDB @ 0x140A38F80 (PiInitializeDDB.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A7FF48 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140A80900 (ExpQueryElamCertInfo.c)
 *     NtGetNlsSectionPtr @ 0x140A9B7D0 (NtGetNlsSectionPtr.c)
 *     ExpGetGlobalLocaleSection @ 0x140AD163C (ExpGetGlobalLocaleSection.c)
 *     CmFcpManagerCreateSection @ 0x140B3D748 (CmFcpManagerCreateSection.c)
 *     AslpFileLargeMapCreate @ 0x140B6CF80 (AslpFileLargeMapCreate.c)
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
