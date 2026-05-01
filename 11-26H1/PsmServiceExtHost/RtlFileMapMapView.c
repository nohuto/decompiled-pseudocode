/*
 * XREFs of RtlFileMapMapView @ 0x18009ABDC
 * Callers:
 *     AslFileMappingEnsure @ 0x18009A388 (AslFileMappingEnsure.c)
 *     AslFileMappingEnsureMappedAs @ 0x18009A458 (AslFileMappingEnsureMappedAs.c)
 *     AslpFileGetChecksumAttributes @ 0x18009B668 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetVersionBlock @ 0x18009CB34 (AslpFileGetVersionBlock.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RtlFileMapMapView(__int64 a1, char a2)
{
  NTSTATUS v4; // ebx
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rax
  PVOID v7; // rdx
  void *v8; // rcx
  HANDLE FileHandle; // [rsp+38h] [rbp-49h]
  void *SectionHandle; // [rsp+58h] [rbp-29h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-21h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp+1Fh] BYREF
  __int128 FileInformation; // [rsp+B0h] [rbp+2Fh] BYREF
  __int64 v17; // [rsp+C0h] [rbp+3Fh]

  v17 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  if ( *(_QWORD *)(a1 + 24) )
  {
    return (unsigned int)-1073741554;
  }
  else
  {
    v4 = ZwQueryInformationFile(*(HANDLE *)a1, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
    if ( v4 < 0
      || (ObjectAttributes.Length = 48,
          memset(&ObjectAttributes.RootDirectory, 0, 20),
          FileHandle = *(HANDLE *)a1,
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
          v4 = ZwCreateSection(
                 &SectionHandle,
                 0xF0005u,
                 &ObjectAttributes,
                 0LL,
                 2u,
                 a2 != 0 ? 285212672 : 0x8000000,
                 FileHandle),
          v4 < 0)
      || (v4 = ZwMapViewOfSection(
                 SectionHandle,
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 &BaseAddress,
                 0LL,
                 0LL,
                 0LL,
                 &ViewSize,
                 ViewUnmap,
                 0x500000u,
                 2u),
          v4 < 0) )
    {
      v8 = SectionHandle;
      v7 = BaseAddress;
    }
    else
    {
      v5 = *((_QWORD *)&FileInformation + 1);
      *(_QWORD *)(a1 + 8) = SectionHandle;
      *(_QWORD *)(a1 + 24) = BaseAddress;
      v6 = v5;
      if ( a2 )
        v6 = ViewSize;
      v7 = 0LL;
      *(_QWORD *)(a1 + 16) = v5;
      v8 = 0LL;
      SectionHandle = 0LL;
      v4 = 0;
      BaseAddress = 0LL;
      *(_WORD *)(a1 + 41) = 257;
      *(_QWORD *)(a1 + 32) = v6;
      *(_BYTE *)(a1 + 43) = a2;
    }
    if ( v8 )
    {
      ZwClose(v8);
      v7 = BaseAddress;
    }
    if ( v7 )
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7);
  }
  return (unsigned int)v4;
}
