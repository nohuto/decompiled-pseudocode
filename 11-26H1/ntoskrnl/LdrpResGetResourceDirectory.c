/*
 * XREFs of LdrpResGetResourceDirectory @ 0x140AABB84
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1403DDCD8 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlImageNtHeaderEx @ 0x140463C90 (RtlImageNtHeaderEx.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x14077EC74 (LdrpSectionTableFromVirtualAddress.c)
 */

NTSTATUS __fastcall LdrpResGetResourceDirectory(
        unsigned __int64 BaseOfImage,
        ULONG64 Size,
        __int16 a3,
        unsigned __int64 *a4,
        PIMAGE_NT_HEADERS *a5)
{
  unsigned __int64 v5; // rdi
  int v6; // ebx
  char v7; // r14
  bool v8; // r15
  int v9; // r12d
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v11; // r13
  unsigned __int16 Magic; // ax
  unsigned int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned int *v20; // rax
  unsigned __int64 v21; // r8
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // [rsp+20h] [rbp-168h]
  __int128 v25; // [rsp+90h] [rbp-F8h]
  __int128 v26; // [rsp+B0h] [rbp-D8h]
  __int128 v27; // [rsp+C0h] [rbp-C8h]
  __int128 v28; // [rsp+D0h] [rbp-B8h]
  __int128 v29; // [rsp+E0h] [rbp-A8h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+190h] [rbp+8h] BYREF
  __int64 v31; // [rsp+198h] [rbp+10h]
  unsigned __int64 *v32; // [rsp+1A8h] [rbp+20h]

  v32 = a4;
  v31 = Size;
  v5 = BaseOfImage;
  v6 = 0;
  OutHeaders = 0LL;
  v7 = 1;
  v8 = 1;
  if ( !BaseOfImage || !a4 || !a5 )
    return -1073741811;
  if ( (BaseOfImage & 2) != 0 || (BaseOfImage & 1) != 0 )
  {
    v5 = BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL;
    v8 = !(BaseOfImage & 1);
  }
  v9 = a3 & 0x1000;
  result = RtlImageNtHeaderEx(v9 == 0, (PVOID)v5, Size, &OutHeaders);
  if ( result >= 0 )
  {
    v11 = OutHeaders;
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      v25 = *(_OWORD *)&OutHeaders->OptionalHeader.MajorSubsystemVersion;
      v26 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfStackCommit;
      v27 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit;
      v28 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      v29 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
    }
    else
    {
      if ( Magic != 523 )
        return -1073741701;
      v25 = *(_OWORD *)&OutHeaders->OptionalHeader.MajorSubsystemVersion;
      v26 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfStackCommit;
      v27 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit;
      v28 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      v29 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
      v7 = 0;
    }
    v13 = HIDWORD(v27);
    if ( v7 )
      v13 = HIDWORD(v26);
    if ( v13 <= 2 )
      return -1073741687;
    v14 = (unsigned int)v29;
    if ( v7 )
      v14 = (unsigned int)v28;
    if ( !(_DWORD)v14 )
      return -1073741687;
    v15 = (unsigned int)v14;
    if ( MmIsUserAddress(v5) && (v14 + v5 <= v5 || v14 + v5 > 0x7FFFFFFF0000LL) )
      return -1073741701;
    if ( v8 || (unsigned int)v14 < HIDWORD(v25) )
    {
      v17 = v14 + v5;
      if ( v14 + v5 < v5 )
        return -1073741701;
      v18 = v31;
    }
    else
    {
      v24 = v14;
      v18 = v31;
      v20 = (unsigned int *)LdrpSectionTableFromVirtualAddress(v5, v31, (__int64)v11, v16, v24, v9 != 0, 0);
      if ( !v20 )
        return -1073741701;
      if ( !v20[4] )
        return -1073741687;
      v17 = v5 + v15 + v20[5] - (unsigned __int64)v20[3];
    }
    if ( !v17 )
      return -1073741687;
    if ( v9 )
    {
      if ( v17 <= v5 )
        return -1073741701;
      v21 = (v5 & 0xFFFFFFFFFFFFFFFCuLL) + v18;
      if ( v17 + 16 > v21 )
        return -1073741701;
      v22 = *(unsigned __int16 *)(v17 + 12);
      v23 = *(unsigned __int16 *)(v17 + 14);
      if ( !__PAIR32__(v23, v22) )
        return -1073741686;
      if ( v17 + 8LL * (unsigned int)(v22 + v23) > v21 )
        return -1073741701;
    }
    *v32 = v17;
    *a5 = v11;
    return v6;
  }
  return result;
}
