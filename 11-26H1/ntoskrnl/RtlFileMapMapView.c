/*
 * XREFs of RtlFileMapMapView @ 0x1407197BC
 * Callers:
 *     AslFileMappingEnsure @ 0x14088EDE8 (AslFileMappingEnsure.c)
 *     AslFileMappingEnsureMappedAs @ 0x14088EEB8 (AslFileMappingEnsureMappedAs.c)
 *     AslpFileGetChecksumAttributes @ 0x140892980 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetVersionBlock @ 0x140893EF8 (AslpFileGetVersionBlock.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1407281E0 (ZwQueryInformationFile.c)
 *     ZwMapViewOfSection @ 0x1407284C0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x140728500 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x140728900 (ZwCreateSection.c)
 *     MmSecureVirtualMemory @ 0x140AADF70 (MmSecureVirtualMemory.c)
 */

__int64 __fastcall RtlFileMapMapView(__int64 a1, char a2)
{
  NTSTATUS v4; // ebx
  HANDLE v5; // rdx
  ULONG_PTR v7; // rcx
  ULONG_PTR v8; // rax
  HANDLE FileHandle; // [rsp+38h] [rbp-49h]
  HANDLE SectionHandle; // [rsp+58h] [rbp-29h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-21h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp+1Fh] BYREF
  __int128 FileInformation; // [rsp+B0h] [rbp+2Fh] BYREF
  __int64 v16; // [rsp+C0h] [rbp+3Fh]

  v16 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  if ( *(_QWORD *)(a1 + 24) )
    return (unsigned int)-1073741554;
  v4 = ZwQueryInformationFile(*(HANDLE *)a1, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  if ( v4 < 0 )
    goto LABEL_8;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  FileHandle = *(HANDLE *)a1;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwCreateSection(
         &SectionHandle,
         0xF0005u,
         &ObjectAttributes,
         0LL,
         2u,
         a2 != 0 ? 285212672 : 0x8000000,
         FileHandle);
  if ( v4 < 0 )
    goto LABEL_8;
  v4 = ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         0LL,
         &ViewSize,
         ViewUnmap,
         0x500000u,
         2u);
  if ( v4 < 0 )
    goto LABEL_8;
  v5 = MmSecureVirtualMemory(BaseAddress, ViewSize, 2u);
  if ( !v5 )
  {
    v4 = -1073741823;
LABEL_8:
    if ( SectionHandle )
      ZwClose(SectionHandle);
    if ( BaseAddress )
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    return (unsigned int)v4;
  }
  v7 = *((_QWORD *)&FileInformation + 1);
  *(_QWORD *)(a1 + 8) = SectionHandle;
  *(_QWORD *)(a1 + 24) = BaseAddress;
  v8 = v7;
  if ( a2 )
    v8 = ViewSize;
  v4 = 0;
  *(_QWORD *)(a1 + 32) = v8;
  *(_WORD *)(a1 + 49) = 257;
  *(_QWORD *)(a1 + 16) = v7;
  *(_BYTE *)(a1 + 51) = a2;
  *(_QWORD *)(a1 + 40) = v5;
  return (unsigned int)v4;
}
