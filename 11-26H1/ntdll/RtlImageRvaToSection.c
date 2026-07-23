/*
 * XREFs of RtlImageRvaToSection @ 0x1800C92E0
 * Callers:
 *     RtlImageRvaToVa @ 0x1800C9250 (RtlImageRvaToVa.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18010C960 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     <none>
 */

PIMAGE_SECTION_HEADER __cdecl RtlImageRvaToSection(PIMAGE_NT_HEADERS NtHeaders, PVOID BaseOfImage, ULONG Rva)
{
  _IMAGE_SECTION_HEADER *v3; // r10
  unsigned int i; // eax
  ULONG VirtualAddress; // edx

  v3 = (_IMAGE_SECTION_HEADER *)((char *)&NtHeaders->OptionalHeader + NtHeaders->FileHeader.SizeOfOptionalHeader);
  for ( i = 0; ; ++i )
  {
    if ( i >= NtHeaders->FileHeader.NumberOfSections )
      return 0LL;
    VirtualAddress = v3->VirtualAddress;
    if ( Rva >= VirtualAddress && Rva < v3->SizeOfRawData + VirtualAddress )
      break;
    ++v3;
  }
  return v3;
}
