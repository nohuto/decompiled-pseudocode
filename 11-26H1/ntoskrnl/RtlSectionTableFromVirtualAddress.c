/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x14042B410
 * Callers:
 *     KeQueryKvaShadowRegion @ 0x14042A2B0 (KeQueryKvaShadowRegion.c)
 *     RtlAddressInSectionTable @ 0x14042B3B4 (RtlAddressInSectionTable.c)
 *     KiLockExtendedServiceTable @ 0x140542A48 (KiLockExtendedServiceTable.c)
 *     KiShadowKernelSectionByAddress @ 0x1405F9C1C (KiShadowKernelSectionByAddress.c)
 *     KiUnshadowKernelSectionByAddress @ 0x1405F9C94 (KiUnshadowKernelSectionByAddress.c)
 *     KiTpIsSupportedKernelTracepointLocation @ 0x1407BF4E4 (KiTpIsSupportedKernelTracepointLocation.c)
 *     EtwpIsValidImageAddress @ 0x140A35B30 (EtwpIsValidImageAddress.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140A8EAE0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     KiVerifyXcpt15 @ 0x140C863F0 (KiVerifyXcpt15.c)
 *     CcInitializeBcbProfiler @ 0x140C86424 (CcInitializeBcbProfiler.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     <none>
 */

PIMAGE_SECTION_HEADER __cdecl RtlSectionTableFromVirtualAddress(
        PIMAGE_NT_HEADERS NtHeaders,
        PVOID BaseOfImage,
        ULONG VirtualAddress)
{
  unsigned int v3; // edx
  __int64 NumberOfSections; // rax
  _IMAGE_SECTION_HEADER *v5; // r9
  unsigned int v6; // r10d
  ULONG v7; // ecx
  __int64 v9; // rcx
  unsigned __int64 Name; // rax

  v3 = 0;
  NumberOfSections = NtHeaders->FileHeader.NumberOfSections;
  v5 = (_IMAGE_SECTION_HEADER *)((char *)&NtHeaders->OptionalHeader + NtHeaders->FileHeader.SizeOfOptionalHeader);
  v6 = NtHeaders->FileHeader.NumberOfSections;
  if ( (unsigned __int64)NtHeaders < 0x7FFFFFFF0000LL )
  {
    v9 = 40 * NumberOfSections;
    Name = (unsigned __int64)v5[NumberOfSections].Name;
    if ( Name <= (unsigned __int64)v5 )
    {
      if ( !v9 && Name < 0x7FFFFFFF0000LL )
        goto LABEL_2;
    }
    else if ( Name <= 0x7FFFFFFF0000LL )
    {
      goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    while ( v3 < v6 )
    {
      v7 = v5->VirtualAddress;
      if ( VirtualAddress >= v7 && VirtualAddress < v5->SizeOfRawData + v7 )
        return v5;
      ++v5;
      ++v3;
    }
  }
  return 0LL;
}
