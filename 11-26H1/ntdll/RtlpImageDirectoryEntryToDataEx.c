/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x18002FF90
 * Callers:
 *     RtlComputeImportTableHash @ 0x180121820 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x180076C30 (RtlAddressInSectionTable.c)
 */

NTSTATUS __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 BaseOfImage,
        char a2,
        unsigned __int16 a3,
        unsigned int *a4,
        PIMAGE_NT_HEADERS OutHeaders)
{
  PIMAGE_NT_HEADERS v5; // r14
  int v6; // ebx
  __int64 v7; // rsi
  unsigned __int64 v8; // r10
  char v9; // bp
  char *v11; // rdi
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v13; // r9
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rcx
  char *v16; // rax
  __int64 v17; // r10
  unsigned int v18; // r8d
  unsigned int NumberOfSections; // r11d
  _DWORD *v20; // rdx
  char v21; // r9
  unsigned int v22; // ecx
  char *v23; // rax
  char v24; // cl
  int v25; // ecx

  v5 = OutHeaders;
  v6 = 0;
  v7 = a3;
  v8 = BaseOfImage & 1;
  v9 = a2;
  OutHeaders = 0LL;
  *(_QWORD *)&v5->Signature = 0LL;
  v11 = (char *)BaseOfImage;
  if ( (BaseOfImage & 2) != 0 || (BaseOfImage & 1) != 0 )
  {
    v11 = (char *)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v24 = 0;
    if ( !v8 )
      v24 = a2;
    v9 = v24;
  }
  result = RtlImageNtHeaderEx(1u, v11, 0LL, &OutHeaders);
  v13 = OutHeaders;
  if ( OutHeaders )
  {
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      if ( (unsigned int)v7 < HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) )
      {
        v17 = *((unsigned int *)&OutHeaders->OptionalHeader.SizeOfHeapCommit + 2 * v7);
        if ( !(_DWORD)v17 )
          return -1073741822;
        *a4 = *((_DWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit + 2 * v7 + 1);
        if ( v9 || (unsigned int)v17 < v13->OptionalHeader.SizeOfHeaders )
        {
          *(_QWORD *)&v5->Signature = &v11[v17];
          return v6;
        }
        v18 = 0;
        NumberOfSections = v13->FileHeader.NumberOfSections;
        v20 = (_DWORD *)((char *)&v13->OptionalHeader.Magic + v13->FileHeader.SizeOfOptionalHeader);
        v21 = 0;
        while ( v18 < NumberOfSections )
        {
          v22 = v20[3];
          if ( (unsigned int)v17 >= v22 && (unsigned int)v17 < v20[4] + v22 )
          {
            v21 = 1;
            break;
          }
          v20 += 10;
          ++v18;
        }
        if ( !v21 )
          v20 = 0LL;
        if ( !v20 )
        {
          *(_QWORD *)&v5->Signature = 0LL;
          return -1073741811;
        }
        v23 = &v11[(unsigned int)v20[5] - (unsigned __int64)(unsigned int)v20[3]];
        *(_QWORD *)&v5->Signature = &v23[v17];
        if ( &v23[v17] )
          return v6;
      }
    }
    else if ( Magic == 523 && (unsigned int)v7 < OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[v7].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        *a4 = OutHeaders->OptionalHeader.DataDirectory[v7].Size;
        if ( v9 || (unsigned int)VirtualAddress < v13->OptionalHeader.SizeOfHeaders )
        {
          v16 = &v11[VirtualAddress];
        }
        else
        {
          v16 = (char *)RtlAddressInSectionTable(v13, v11, VirtualAddress);
          v25 = 0;
          if ( !v16 )
            v25 = -1073741811;
          v6 = v25;
        }
        *(_QWORD *)&v5->Signature = v16;
        return v6;
      }
      return -1073741822;
    }
    return -1073741811;
  }
  return result;
}
