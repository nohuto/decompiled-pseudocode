/*
 * XREFs of LdrpCorFixupImage @ 0x1801002AC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     LdrpCompleteMapModule @ 0x18011C230 (LdrpCompleteMapModule.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 *     ZwProtectVirtualMemory @ 0x18015F840 (ZwProtectVirtualMemory.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __fastcall LdrpCorFixupImage(PVOID BaseOfImage)
{
  _BYTE *v1; // rax
  PIMAGE_NT_HEADERS v2; // rdi
  unsigned __int64 *p_SizeOfHeapCommit; // r14
  char *v4; // rsi
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  unsigned int SizeOfHeapReserve_high; // eax
  unsigned __int16 Machine; // ax
  ULONG_PTR RegionSize[3]; // [rsp+30h] [rbp-18h] BYREF
  PVOID BaseOfImagea; // [rsp+80h] [rbp+38h] BYREF
  ULONG NewProtect; // [rsp+88h] [rbp+40h] BYREF
  ULONG Size; // [rsp+90h] [rbp+48h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+98h] [rbp+50h] BYREF

  BaseOfImagea = BaseOfImage;
  NewProtect = 0;
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  v1 = RtlImageDirectoryEntryToData(BaseOfImagea, 1u, 0xEu, &Size);
  v2 = OutHeaders;
  if ( OutHeaders->OptionalHeader.Magic != 267 || OutHeaders->FileHeader.Machine != 332 || (v1[16] & 2) != 0 )
  {
    Machine = OutHeaders->FileHeader.Machine;
    if ( Machine < MEMORY[0x7FFE002C] || Machine > MEMORY[0x7FFE002E] )
      return -1073741701;
    else
      return 0;
  }
  p_SizeOfHeapCommit = &OutHeaders->OptionalHeader.SizeOfHeapCommit;
  v4 = (char *)&OutHeaders->OptionalHeader
     + 32 * OutHeaders->FileHeader.NumberOfSections
     + 8 * OutHeaders->FileHeader.NumberOfSections
     + OutHeaders->FileHeader.SizeOfOptionalHeader;
  RegionSize[0] = 4096LL;
  if ( (unsigned __int64)(v4 - (_BYTE *)BaseOfImagea + 16) > 0x1000 )
    return -1073741701;
  result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseOfImagea, RegionSize, 4u, &NewProtect);
  v6 = result;
  if ( result >= 0 )
  {
    memmove(v2->OptionalHeader.DataDirectory, &v2->OptionalHeader.SizeOfHeapCommit, v4 - (char *)p_SizeOfHeapCommit);
    SizeOfHeapReserve_high = HIDWORD(v2->OptionalHeader.SizeOfHeapReserve);
    v2->FileHeader.SizeOfOptionalHeader += 16;
    v2->OptionalHeader.NumberOfRvaAndSizes = SizeOfHeapReserve_high;
    v2->OptionalHeader.LoaderFlags = v2->OptionalHeader.SizeOfHeapReserve;
    *p_SizeOfHeapCommit = HIDWORD(v2->OptionalHeader.SizeOfStackCommit);
    v2->OptionalHeader.SizeOfHeapReserve = LODWORD(v2->OptionalHeader.SizeOfStackCommit);
    v2->OptionalHeader.SizeOfStackCommit = HIDWORD(v2->OptionalHeader.SizeOfStackReserve);
    v2->OptionalHeader.SizeOfStackReserve = LODWORD(v2->OptionalHeader.SizeOfStackReserve);
    v2->OptionalHeader.ImageBase = HIDWORD(v2->OptionalHeader.ImageBase);
    v2->OptionalHeader.Magic = 523;
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseOfImagea, RegionSize, NewProtect, &NewProtect);
    return v6;
  }
  return result;
}
