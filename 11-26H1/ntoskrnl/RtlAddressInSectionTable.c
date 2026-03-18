/*
 * XREFs of RtlAddressInSectionTable @ 0x14040E484
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14040E000 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x14040E1A0 (RtlpImageDirectoryEntryToData32.c)
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140A879B0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x14040E4E0 (RtlSectionTableFromVirtualAddress.c)
 */

unsigned __int64 __fastcall RtlAddressInSectionTable(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  unsigned __int64 result; // rax

  v3 = (unsigned int)a3;
  v5 = RtlSectionTableFromVirtualAddress(a1, a2, a3);
  if ( !v5 )
    return 0LL;
  result = v3 + a2 + *(unsigned int *)(v5 + 20) - (unsigned __int64)*(unsigned int *)(v5 + 12);
  if ( a2 < 0x7FFFFFFF0000LL && result >= 0x7FFFFFFF0000LL )
    return 0LL;
  return result;
}
