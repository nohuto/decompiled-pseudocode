/*
 * XREFs of ZwUnmapViewOfSection @ 0x14069B680
 * Callers:
 *     CmSiUnmapViewOfSection @ 0x1404996D0 (CmSiUnmapViewOfSection.c)
 *     RtlFileMapFree @ 0x1404B56A8 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x14068B394 (RtlFileMapMapView.c)
 *     IopIsNotNativeDriverImage @ 0x1407064F4 (IopIsNotNativeDriverImage.c)
 *     ExpQueryElamCertInfo @ 0x1407A5834 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1407B3DE0 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1407B42D0 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x1407B9F34 (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x140800B60 (AslpFilePartialViewFree.c)
 *     PiInitializeDDB @ 0x1409AF8CC (PiInitializeDDB.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A6BEE8 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     PiReleaseDDB @ 0x140A960AC (PiReleaseDDB.c)
 *     CmpSetSystemBiosInformation @ 0x140C387E4 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140C38B84 (CmpSetVideoBiosInformation.c)
 *     EmpCacheBiosDate @ 0x140C4E024 (EmpCacheBiosDate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
