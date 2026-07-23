/*
 * XREFs of LdrRelocateImageWithBias @ 0x1800D5304
 * Callers:
 *     LdrpProtectAndRelocateImage @ 0x1800D5034 (LdrpProtectAndRelocateImage.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 *     LdrProcessRelocationBlockLongLong @ 0x1800D5400 (LdrProcessRelocationBlockLongLong.c)
 */

NTSTATUS __cdecl LdrRelocateImageWithBias(
        PVOID NewBase,
        LONGLONG Bias,
        PSTR LoaderName,
        NTSTATUS Success,
        NTSTATUS Conflict,
        NTSTATUS Invalid)
{
  NTSTATUS v6; // ebx
  PIMAGE_NT_HEADERS v8; // rdi
  unsigned __int64 ImageBase_high; // rbp
  _DWORD *v10; // rcx
  ULONG v11; // esi
  int v12; // eax
  PIMAGE_NT_HEADERS v14; // [rsp+70h] [rbp+18h] BYREF
  ULONG Size; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  Size = 0;
  v14 = 0LL;
  if ( RtlImageNtHeaderEx(1u, NewBase, 0LL, &v14) < 0 )
    return -1073741701;
  v8 = v14;
  if ( v14->OptionalHeader.Magic == 267 )
  {
    ImageBase_high = HIDWORD(v14->OptionalHeader.ImageBase);
    goto LABEL_5;
  }
  if ( v14->OptionalHeader.Magic != 523 )
    return -1073741701;
  ImageBase_high = v14->OptionalHeader.ImageBase;
LABEL_5:
  v10 = RtlImageDirectoryEntryToData(NewBase, 1u, 5u, &Size);
  if ( !v10 )
    return (v8->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
  v11 = Size;
  if ( !Size )
    return (v8->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
  while ( v11 )
  {
    v12 = v10[1];
    v11 -= v12;
    v10 = (_DWORD *)LdrProcessRelocationBlockLongLong(
                      v8->FileHeader.Machine,
                      (int)NewBase + *v10,
                      (unsigned int)(v12 - 8) >> 1,
                      (int)v10 + 8,
                      (__int64)NewBase - ImageBase_high);
    if ( !v10 )
      return -1073741701;
  }
  return v6;
}
