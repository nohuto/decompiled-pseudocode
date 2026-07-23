/*
 * XREFs of RtlGetImageFileMachines @ 0x18002F2C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18002EAB0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlFreeAnsiString @ 0x1800410A0 (RtlFreeAnsiString.c)
 *     RtlAddressInSectionTable @ 0x180076C30 (RtlAddressInSectionTable.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     RtlpFilterCorruptedModuleException @ 0x18013AE8C (RtlpFilterCorruptedModuleException.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenFile @ 0x18015F4A0 (NtOpenFile.c)
 *     NtCreateSection @ 0x18015F780 (NtCreateSection.c)
 *     NtQuerySection @ 0x18015F860 (NtQuerySection.c)
 *     ZwMapViewOfSectionEx @ 0x180161210 (ZwMapViewOfSectionEx.c)
 *     NtUnmapViewOfSectionEx @ 0x180162A30 (NtUnmapViewOfSectionEx.c)
 */

NTSTATUS __cdecl RtlGetImageFileMachines(PCWSTR FileName, PUSHORT FileMachines)
{
  size_t v3; // rax
  int v4; // eax
  __int16 v5; // dx
  int v6; // eax
  char *v7; // rdi
  DWORD v8; // edi
  bool v9; // zf
  DWORD v10; // edi
  DWORD v11; // edi
  DWORD v12; // edi
  unsigned int Size; // r14d
  ULONG_PTR SizeOfImage; // r15
  bool v15; // r12
  char *v16; // rsi
  NTSTATUS v17; // edx
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rax
  char *v20; // rax
  __int64 v21; // r10
  _DWORD *v22; // rdx
  unsigned int NumberOfSections; // r11d
  unsigned int i; // r8d
  unsigned int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int Section; // [rsp+50h] [rbp-148h]
  HANDLE FileHandle; // [rsp+70h] [rbp-128h] BYREF
  PIMAGE_NT_HEADERS NtHeaders; // [rsp+78h] [rbp-120h] BYREF
  __int64 v32; // [rsp+80h] [rbp-118h]
  PVOID BaseAddress; // [rsp+88h] [rbp-110h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+90h] [rbp-108h] BYREF
  _DWORD *v35; // [rsp+98h] [rbp-100h]
  __int128 v36; // [rsp+A0h] [rbp-F8h] BYREF
  __m128i v37; // [rsp+B0h] [rbp-E8h] BYREF
  MEM_EXTENDED_PARAMETER ExtendedParameters; // [rsp+C0h] [rbp-D8h] BYREF
  unsigned __int64 v39; // [rsp+D0h] [rbp-C8h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-C0h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+108h] [rbp-90h] BYREF
  _BYTE SectionInformation[48]; // [rsp+120h] [rbp-78h] BYREF
  __int128 v43; // [rsp+150h] [rbp-48h]
  PVOID BaseOfImage; // [rsp+1A8h] [rbp+10h] BYREF
  HANDLE SectionHandle; // [rsp+1B0h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+1B8h] [rbp+20h] BYREF

  v36 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  memset(SectionInformation, 0, sizeof(SectionInformation));
  v43 = 0LL;
  ExtendedParameters = 0LL;
  BaseAddress = 0LL;
  BaseOfImage = 0LL;
  ViewSize = 0LL;
  *(_DWORD *)FileMachines = 0;
  v32 = 0LL;
  v37.m128i_i64[0] = 0LL;
  v37.m128i_i64[1] = (__int64)FileName;
  if ( FileName )
  {
    v3 = wcslen(FileName);
    v32 = v3;
    if ( v3 > 0x7FFE )
    {
      v4 = -1073741562;
      goto LABEL_5;
    }
    v32 = 2 * v3;
    v37.m128i_i16[0] = 2 * v3;
    v37.m128i_i16[1] = 2 * v3 + 2;
  }
  v4 = RtlpDosPathNameToRelativeNtPathName(0, &v37, 0LL, (unsigned __int16 *)&v36, 0LL, 0LL, 0LL);
LABEL_5:
  Section = v4;
  if ( v4 < 0 )
    goto LABEL_17;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v36;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Section = NtOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  if ( Section < 0 )
    goto LABEL_17;
  Section = NtCreateSection(&SectionHandle, 5u, 0LL, 0LL, 2u, 0x11000000u, FileHandle);
  if ( Section < 0 )
    goto LABEL_17;
  Section = NtQuerySection(SectionHandle, SectionImageInformation, SectionInformation, 0x40uLL, 0LL);
  if ( Section < 0 )
    goto LABEL_17;
  v5 = v43;
  switch ( (unsigned __int16)v43 )
  {
    case 0x14Cu:
      *(_DWORD *)FileMachines |= 1u;
      break;
    case 0x1C4u:
      *(_DWORD *)FileMachines |= 4u;
      break;
    case 0x8664u:
      *(_DWORD *)FileMachines |= 2u;
      break;
    case 0xAA64u:
      *(_DWORD *)FileMachines |= 8u;
      break;
  }
  if ( (BYTE3(v43) & 2) != 0 && (BYTE3(v43) & 1) != 0 && v5 == 332 )
  {
    *(_DWORD *)FileMachines |= 4u;
    v6 = *(_DWORD *)FileMachines | 2;
    *(_DWORD *)FileMachines = v6;
    *(_DWORD *)FileMachines = v6 | 8;
LABEL_17:
    v7 = (char *)BaseOfImage;
    goto LABEL_91;
  }
  v8 = 43620;
  v9 = v5 == -31132;
  if ( v5 == -31132 )
    goto LABEL_21;
  if ( v5 == -21916 )
  {
    v9 = 0;
LABEL_21:
    if ( !v9 )
      v8 = 34404;
    ExtendedParameters.0 = (MEM_EXTENDED_PARAMETER::$373F0C482CA2C07D4A7B2B94C5EA8081)(*(_QWORD *)&ExtendedParameters.0 & 0xFFFFFFFFFFFFFF00uLL | 6);
    ExtendedParameters.ULong = v8;
    if ( ZwMapViewOfSectionEx(
           SectionHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           &ViewSize,
           0,
           2u,
           &ExtendedParameters,
           1u) >= 0 )
    {
      v10 = v8 - 332;
      if ( v10 )
      {
        v11 = v10 - 120;
        if ( v11 )
        {
          v12 = v11 - 33952;
          if ( v12 )
          {
            if ( v12 == 9216 )
              *(_DWORD *)FileMachines |= 8u;
          }
          else
          {
            *(_DWORD *)FileMachines |= 2u;
          }
        }
        else
        {
          *(_DWORD *)FileMachines |= 4u;
        }
      }
      else
      {
        *(_DWORD *)FileMachines |= 1u;
      }
      NtUnmapViewOfSectionEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, 0);
    }
  }
  if ( (*(_BYTE *)FileMachines & 2) == 0 )
    goto LABEL_17;
  Size = 0;
  Section = ZwMapViewOfSectionEx(
              SectionHandle,
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              &BaseOfImage,
              0LL,
              &ViewSize,
              0,
              2u,
              0LL,
              0);
  if ( Section < 0 )
    goto LABEL_17;
  Section = 0;
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  v7 = (char *)BaseOfImage;
  if ( &OutHeaders[1] > (_IMAGE_NT_HEADERS64 *)((char *)BaseOfImage + ViewSize)
    || (char *)BaseOfImage + ViewSize <= BaseOfImage
    || OutHeaders < BaseOfImage
    || &OutHeaders[1] <= OutHeaders )
  {
    goto LABEL_49;
  }
  if ( OutHeaders->OptionalHeader.Magic == 267 )
    goto LABEL_91;
  SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
  if ( SizeOfImage > ViewSize )
    goto LABEL_49;
  v15 = 1;
  v39 = (unsigned __int64)BaseOfImage;
  NtHeaders = 0LL;
  v16 = 0LL;
  if ( ((unsigned __int8)BaseOfImage & 2) != 0 || ((unsigned __int8)BaseOfImage & 1) != 0 )
  {
    v15 = ((unsigned __int8)BaseOfImage & 1) == 0;
    v7 = (char *)((unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v39 = (unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v17 = RtlImageNtHeaderEx(1u, v7, 0LL, &NtHeaders);
  if ( !NtHeaders )
    goto LABEL_46;
  Magic = NtHeaders->OptionalHeader.Magic;
  if ( Magic != 267 )
  {
    if ( Magic == 523 && NtHeaders->OptionalHeader.NumberOfRvaAndSizes > 0xA )
    {
      VirtualAddress = NtHeaders->OptionalHeader.DataDirectory[10].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        Size = NtHeaders->OptionalHeader.DataDirectory[10].Size;
        if ( v15 || (unsigned int)VirtualAddress < NtHeaders->OptionalHeader.SizeOfHeaders )
        {
          v16 = &v7[VirtualAddress];
          v17 = 0;
        }
        else
        {
          v16 = (char *)RtlAddressInSectionTable(NtHeaders, v7, VirtualAddress);
          v27 = 0;
          if ( !v16 )
            v27 = -1073741811;
          v17 = v27;
        }
      }
      else
      {
        v17 = -1073741822;
      }
      goto LABEL_46;
    }
LABEL_65:
    v17 = -1073741811;
    goto LABEL_46;
  }
  if ( HIDWORD(NtHeaders->OptionalHeader.SizeOfHeapReserve) <= 0xA )
    goto LABEL_65;
  v21 = NtHeaders->OptionalHeader.DataDirectory[8].VirtualAddress;
  if ( (_DWORD)v21 )
  {
    Size = NtHeaders->OptionalHeader.DataDirectory[8].Size;
    if ( v15 || (unsigned int)v21 < NtHeaders->OptionalHeader.SizeOfHeaders )
    {
      v16 = &v7[v21];
      v17 = 0;
    }
    else
    {
      v35 = 0LL;
      v22 = (_DWORD *)((char *)&NtHeaders->OptionalHeader.Magic + NtHeaders->FileHeader.SizeOfOptionalHeader);
      v35 = v22;
      NumberOfSections = NtHeaders->FileHeader.NumberOfSections;
      for ( i = 0; i < NumberOfSections; ++i )
      {
        v25 = v22[3];
        if ( (unsigned int)v21 >= v25 && (unsigned int)v21 < v22[4] + v25 )
        {
          if ( v22 )
          {
            v16 = &v7[(unsigned int)v22[5] - (unsigned __int64)(unsigned int)v22[3] + v21];
            goto LABEL_61;
          }
          break;
        }
        v22 += 10;
        v35 = v22;
      }
      v16 = 0LL;
LABEL_61:
      v26 = 0;
      if ( !v16 )
        v26 = -1073741811;
      v17 = v26;
    }
  }
  else
  {
    v17 = -1073741822;
  }
LABEL_46:
  v7 = (char *)BaseOfImage;
  if ( v17 < 0 || !v16 )
    goto LABEL_91;
  v20 = &v16[Size];
  if ( v20 > (char *)BaseOfImage + SizeOfImage
    || (char *)BaseOfImage + SizeOfImage <= BaseOfImage
    || v16 < BaseOfImage
    || v20 <= v16
    || *(_DWORD *)v16 != Size )
  {
LABEL_49:
    Section = -1073741701;
    goto LABEL_91;
  }
  if ( Size >= 0xD0 && *((_QWORD *)v16 + 25) )
  {
    *(_DWORD *)FileMachines &= ~2u;
    *(_DWORD *)FileMachines |= 0x10u;
  }
LABEL_91:
  if ( v7 )
    NtUnmapViewOfSectionEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7, 0);
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( FileHandle )
    NtClose(FileHandle);
  if ( *((_QWORD *)&v36 + 1) )
    RtlpSysVolFree(*((PVOID *)&v36 + 1));
  return Section;
}
