/*
 * XREFs of RtlAddressInSectionTable @ 0x14042B3B4
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14042AF30 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x14042B0D0 (RtlpImageDirectoryEntryToData32.c)
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140A8EAE0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x14042B410 (RtlSectionTableFromVirtualAddress.c)
 */

PVOID __cdecl RtlAddressInSectionTable(PIMAGE_NT_HEADERS NtHeaders, PVOID BaseOfImage, ULONG VirtualAddress)
{
  __int64 v3; // rdi
  PIMAGE_SECTION_HEADER v5; // rax
  PVOID result; // rax

  v3 = VirtualAddress;
  v5 = RtlSectionTableFromVirtualAddress(NtHeaders, BaseOfImage, VirtualAddress);
  if ( !v5 )
    return 0LL;
  result = (char *)BaseOfImage + v5->PointerToRawData - (unsigned __int64)v5->VirtualAddress + v3;
  if ( (unsigned __int64)BaseOfImage < 0x7FFFFFFF0000LL && (unsigned __int64)result >= 0x7FFFFFFF0000LL )
    return 0LL;
  return result;
}
