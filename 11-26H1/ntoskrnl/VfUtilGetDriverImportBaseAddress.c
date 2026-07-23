/*
 * XREFs of VfUtilGetDriverImportBaseAddress @ 0x140C277C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     VfIsVerifierEnabled @ 0x1404F5560 (VfIsVerifierEnabled.c)
 */

PVOID __fastcall VfUtilGetDriverImportBaseAddress(PVOID BaseOfImage, PULONG Size)
{
  if ( (unsigned int)VfIsVerifierEnabled() && BaseOfImage && Size )
    return RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xCu, Size);
  else
    return 0LL;
}
