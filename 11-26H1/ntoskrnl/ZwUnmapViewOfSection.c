/*
 * XREFs of ZwUnmapViewOfSection @ 0x140723930
 * Callers:
 *     CmSiUnmapViewOfSection @ 0x1404D6B90 (CmSiUnmapViewOfSection.c)
 *     DifZwUnmapViewOfSectionWrapper @ 0x1406BEA00 (DifZwUnmapViewOfSectionWrapper.c)
 *     RtlFileMapFree @ 0x140714A50 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x140714ACC (RtlFileMapMapView.c)
 *     IopIsNotNativeDriverImage @ 0x140794E8C (IopIsNotNativeDriverImage.c)
 *     CMFReadCompressedSegment @ 0x140843904 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140843E00 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x14084A5E4 (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x14088FAEC (AslpFilePartialViewFree.c)
 *     PiReleaseDDB @ 0x140A25E84 (PiReleaseDDB.c)
 *     PiInitializeDDB @ 0x140A25EE0 (PiInitializeDDB.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A77228 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140A77E5C (ExpQueryElamCertInfo.c)
 *     CmpSetSystemBiosInformation @ 0x140CED418 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140CED7B0 (CmpSetVideoBiosInformation.c)
 *     EmpCacheBiosDate @ 0x140D080CC (EmpCacheBiosDate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress);
}
