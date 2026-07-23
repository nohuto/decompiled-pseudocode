/*
 * XREFs of EtwpIsValidImageAddress @ 0x140A35B30
 * Callers:
 *     EtwpFindDebugId @ 0x140A358B8 (EtwpFindDebugId.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x14042B410 (RtlSectionTableFromVirtualAddress.c)
 *     MmIsKernelAddress @ 0x14044F260 (MmIsKernelAddress.c)
 */

bool __fastcall EtwpIsValidImageAddress(
        PIMAGE_NT_HEADERS NtHeaders,
        PVOID BaseOfImage,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  unsigned __int64 v6; // rdi
  bool result; // al
  PIMAGE_SECTION_HEADER v9; // rax

  v6 = a4 - (_QWORD)BaseOfImage;
  result = 0;
  if ( a4 >= (unsigned __int64)BaseOfImage && a4 + a5 >= a4 && a4 + a5 <= (unsigned __int64)BaseOfImage + a3 )
  {
    if ( !MmIsKernelAddress((unsigned __int64)BaseOfImage) )
      return 1;
    v9 = RtlSectionTableFromVirtualAddress(NtHeaders, BaseOfImage, v6);
    if ( v9 )
    {
      if ( v6 + a5 <= v9->VirtualAddress + v9->SizeOfRawData && (v9->Characteristics & 0x2000000) == 0 )
        return 1;
    }
  }
  return result;
}
