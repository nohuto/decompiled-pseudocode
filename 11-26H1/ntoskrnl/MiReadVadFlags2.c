/*
 * XREFs of MiReadVadFlags2 @ 0x14047A070
 * Callers:
 *     MiImageVadHotPatchEligible @ 0x140870654 (MiImageVadHotPatchEligible.c)
 *     MiProcessPatchImageCfg @ 0x140873D98 (MiProcessPatchImageCfg.c)
 *     MiQueryImageInfo @ 0x14091F6D4 (MiQueryImageInfo.c)
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14095D738 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiMapAllImageScpPages @ 0x140962E18 (MiMapAllImageScpPages.c)
 *     NtUnmapViewOfSectionEx @ 0x1409C38B0 (NtUnmapViewOfSectionEx.c)
 *     MiUnmapVad @ 0x1409C3B30 (MiUnmapVad.c)
 *     MiUnmapViewOfSection @ 0x1409C3C30 (MiUnmapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1409C3E60 (NtUnmapViewOfSection.c)
 *     MiUnmapViewOfSectionPrepare @ 0x1409C40F0 (MiUnmapViewOfSectionPrepare.c)
 *     MiFillMapFileInfo @ 0x1409C6BC8 (MiFillMapFileInfo.c)
 *     MiSectionProtectGetCharges @ 0x1409C6FE0 (MiSectionProtectGetCharges.c)
 *     MiCopyToCfgBitMap @ 0x1409C8560 (MiCopyToCfgBitMap.c)
 *     MiHandleInsertedImageVad @ 0x1409CDFA4 (MiHandleInsertedImageVad.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140A7CF90 (MmEnumerateAddressSpaceAndReferenceImages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReadVadFlags2(__int64 a1)
{
  return *(unsigned int *)(a1 + 72);
}
