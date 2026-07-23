/*
 * XREFs of ZwUnmapViewOfSection @ 0x140728500
 * Callers:
 *     CmSiUnmapViewOfSection @ 0x1404D0360 (CmSiUnmapViewOfSection.c)
 *     DifZwUnmapViewOfSectionWrapper @ 0x1406C25E0 (DifZwUnmapViewOfSectionWrapper.c)
 *     RtlFileMapFree @ 0x140719740 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x1407197BC (RtlFileMapMapView.c)
 *     IopIsNotNativeDriverImage @ 0x1407979BC (IopIsNotNativeDriverImage.c)
 *     CMFReadCompressedSegment @ 0x140848D94 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140849290 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x1408508F4 (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x140895EE8 (AslpFilePartialViewFree.c)
 *     PiReleaseDDB @ 0x140A38F24 (PiReleaseDDB.c)
 *     PiInitializeDDB @ 0x140A38F80 (PiInitializeDDB.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A7FF48 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140A80900 (ExpQueryElamCertInfo.c)
 *     CmpSetSystemBiosInformation @ 0x140CF371C (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140CF3AB4 (CmpSetVideoBiosInformation.c)
 *     EmpCacheBiosDate @ 0x140D0E39C (EmpCacheBiosDate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
