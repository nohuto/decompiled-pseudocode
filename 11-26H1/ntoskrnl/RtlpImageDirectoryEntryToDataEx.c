/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x14042AF30
 * Callers:
 *     RtlCaptureRetpolineImportRvas @ 0x140429D68 (RtlCaptureRetpolineImportRvas.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x140504DE0 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData32 @ 0x14042B0D0 (RtlpImageDirectoryEntryToData32.c)
 *     RtlAddressInSectionTable @ 0x14042B3B4 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 BaseOfImage,
        char a2,
        unsigned __int16 a3,
        unsigned int *a4,
        _QWORD *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v7; // r10
  _IMAGE_NT_HEADERS64 *NtHeaders; // r9
  unsigned __int16 Magic; // ax
  __int64 v11; // rax
  __int64 VirtualAddress; // r8
  char v14; // dl
  PVOID v15; // rax
  unsigned int v16; // ecx

  v5 = 0;
  v7 = BaseOfImage & 1;
  *a5 = 0LL;
  if ( (BaseOfImage & 2) != 0 || (BaseOfImage & 1) != 0 )
  {
    BaseOfImage &= 0xFFFFFFFFFFFFFFFCuLL;
    v14 = 0;
    if ( !v7 )
      v14 = a2;
    a2 = v14;
  }
  if ( BaseOfImage - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)BaseOfImage != 23117 )
    return (unsigned int)-1073741701;
  NtHeaders = (_IMAGE_NT_HEADERS64 *)(BaseOfImage + *(unsigned int *)(BaseOfImage + 60));
  if ( (unsigned __int64)NtHeaders < BaseOfImage
    || BaseOfImage < 0x7FFFFFFF0000LL
    && ((unsigned __int64)&NtHeaders[1] > 0x7FFFFFFF0000LL || &NtHeaders[1] <= NtHeaders) )
  {
    return (unsigned int)-1073741701;
  }
  if ( NtHeaders->Signature != 17744 )
    return (unsigned int)-1073741701;
  if ( NtHeaders )
  {
    Magic = NtHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
      return (unsigned int)RtlpImageDirectoryEntryToData32((PVOID)BaseOfImage, NtHeaders, (__int64)a5);
    if ( Magic == 523 && a3 < NtHeaders->OptionalHeader.NumberOfRvaAndSizes )
    {
      v11 = a3;
      VirtualAddress = NtHeaders->OptionalHeader.DataDirectory[a3].VirtualAddress;
      if ( !(_DWORD)VirtualAddress )
        return (unsigned int)-1073741822;
      if ( BaseOfImage >= 0x7FFFFFFF0000LL
        || VirtualAddress + BaseOfImage <= 0x7FFFFFFF0000LL && VirtualAddress + BaseOfImage > BaseOfImage )
      {
        *a4 = NtHeaders->OptionalHeader.DataDirectory[v11].Size;
        if ( a2 || (unsigned int)VirtualAddress < NtHeaders->OptionalHeader.SizeOfHeaders )
        {
          *a5 = VirtualAddress + BaseOfImage;
        }
        else
        {
          v15 = RtlAddressInSectionTable(NtHeaders, (PVOID)BaseOfImage, VirtualAddress);
          v16 = 0;
          *a5 = v15;
          if ( !v15 )
            return (unsigned int)-1073741811;
          return v16;
        }
        return v5;
      }
    }
    return (unsigned int)-1073741811;
  }
  return v5;
}
