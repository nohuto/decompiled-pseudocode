/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x1800C77C0
 * Callers:
 *     LdrpLocateMrdata @ 0x180078E60 (LdrpLocateMrdata.c)
 * Callees:
 *     <none>
 */

PIMAGE_SECTION_HEADER __cdecl RtlSectionTableFromVirtualAddress(
        PIMAGE_NT_HEADERS NtHeaders,
        PVOID BaseOfImage,
        ULONG VirtualAddress)
{
  PIMAGE_SECTION_HEADER result; // rax
  unsigned int i; // r9d
  ULONG v5; // edx

  result = (PIMAGE_SECTION_HEADER)((char *)&NtHeaders->OptionalHeader + NtHeaders->FileHeader.SizeOfOptionalHeader);
  for ( i = 0; i < NtHeaders->FileHeader.NumberOfSections; ++i )
  {
    v5 = result->VirtualAddress;
    if ( VirtualAddress >= v5 && VirtualAddress < result->SizeOfRawData + v5 )
      return result;
    ++result;
  }
  return 0LL;
}
