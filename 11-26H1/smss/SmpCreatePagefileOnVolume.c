/*
 * XREFs of SmpCreatePagefileOnVolume @ 0x14000F6B8
 * Callers:
 *     SmpCreatePagefileFromDescriptor @ 0x14000E864 (SmpCreatePagefileFromDescriptor.c)
 * Callees:
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     SmpCheckHybridPriority @ 0x14000EEBC (SmpCheckHybridPriority.c)
 *     SmpCreatePagingFile @ 0x14000F9C0 (SmpCreatePagingFile.c)
 *     SmpDeletePagingFile @ 0x1400108B8 (SmpDeletePagingFile.c)
 *     SmpGetPagingFileSize @ 0x140010CFC (SmpGetPagingFileSize.c)
 *     SmpTrimPagingFileExtents @ 0x1400114AC (SmpTrimPagingFileExtents.c)
 */

__int64 __fastcall SmpCreatePagefileOnVolume(__int64 a1, __int64 a2, int a3)
{
  bool v3; // zf
  __int64 v7; // rsi
  char v8; // r12
  int PagingFileSize; // eax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rcx
  int v18; // edx
  __int64 v20; // rax
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  _DWORD *v24; // r14
  _DWORD *v25; // r15
  int PagingFile; // ecx
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  int v30; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  int v33; // [rsp+B0h] [rbp+40h] BYREF
  void *FileHandle; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+58h] BYREF

  v3 = (*(_BYTE *)(a1 + 92) & 4) == 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  IoStatusBlock = 0LL;
  FileHandle = 0LL;
  v7 = 0LL;
  v33 = 0;
  v8 = 0;
  v35 = 0LL;
  if ( !v3 )
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 8LL) = *(_WORD *)(a2 + 28);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(a1 + 16);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenFile(&FileHandle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x28u) >= 0 )
  {
    PagingFileSize = SmpGetPagingFileSize(FileHandle, a1 + 16, &v35);
    v7 = v35;
    if ( PagingFileSize >= 0 && v35 )
      v8 = 1;
    SmpTrimPagingFileExtents(FileHandle, a1 + 16);
    NtClose(FileHandle);
  }
  v10 = *(_QWORD *)(a2 + 32) + v7;
  v11 = v10;
  if ( v10 > *(_QWORD *)(a2 + 40) )
  {
    v10 = *(_QWORD *)(a2 + 40);
    v11 = v10;
  }
  v3 = (*(_BYTE *)(a1 + 92) & 2) == 0;
  v12 = *(_QWORD *)(a1 + 56);
  v13 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 72) = v12;
  *(_QWORD *)(a1 + 80) = v13;
  if ( v3 )
  {
    if ( v12 > v11 )
    {
      if ( !a3 )
        return 3221225599LL;
      *(_QWORD *)(a1 + 72) = v10;
    }
    v23 = *(_QWORD *)(a2 + 40);
    if ( v13 > v23 )
      *(_QWORD *)(a1 + 80) = v23;
  }
  else
  {
    v14 = v11 >> 2;
    v15 = *(_QWORD *)(a2 + 40) >> 3;
    if ( SmpMemorySize >= v11 >> 2 )
      v14 = SmpMemorySize;
    v16 = v11 >> 1;
    if ( v14 <= v16 )
      v16 = v14;
    v17 = *(_QWORD *)(a2 + 40) >> 3;
    if ( v16 <= v15 )
      v17 = v16;
    if ( v12 > v17 )
    {
      if ( !a3 )
      {
        v18 = 2184;
LABEL_20:
        SmpLogFailure((__int64)"SmpCreatePagefileOnVolume", v18, -1073741697);
        return 3221225599LL;
      }
      if ( (*(_BYTE *)(a1 + 92) & 8) == 0 )
        goto LABEL_30;
      v20 = v10 >> 5;
      if ( v10 >> 5 > 0x40000000 )
        v20 = 0x40000000LL;
      v21 = v10 - v20;
      if ( v12 > v10 - v20 && v12 != *(_QWORD *)(a1 + 48) )
        goto LABEL_30;
      v17 = v10 - v20;
      if ( v15 < v21 )
        v15 = v10 - v20;
      if ( v12 > v21 )
      {
LABEL_30:
        v22 = *(_QWORD *)(a1 + 48);
        if ( v12 <= v22 || (*(_QWORD *)(a1 + 72) = v22, v22 > v17) )
          *(_QWORD *)(a1 + 72) = v17;
      }
    }
    if ( v13 > v15 )
      *(_QWORD *)(a1 + 80) = v15;
  }
  v24 = (_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 88) = 0;
  if ( (*(_BYTE *)(a2 + 16) & 4) != 0 )
    *v24 = 0x40000000;
  v25 = (_DWORD *)(a1 + 88);
  if ( (*(_BYTE *)(a2 + 16) & 8) != 0
    && SmpCheckHybridPriority(*(_DWORD *)(a2 + 20), &v33, 0LL) >= 0
    && (v33 & 0xFFFFFFF0) == 0 )
  {
    v25 = (_DWORD *)(a1 + 88);
    *v24 |= (v33 | 0x10) << 26;
  }
  if ( (*(_BYTE *)(a2 + 16) & 0x40) != 0 )
    *v25 |= 0x1000000u;
  while ( 1 )
  {
    PagingFile = SmpCreatePagingFile((PCUNICODE_STRING)(a1 + 16));
    if ( PagingFile >= 0 )
      break;
    if ( !a3 )
      goto LABEL_60;
    v27 = *(_QWORD *)(a1 + 72);
    if ( v27 <= 0x1000000 )
      goto LABEL_60;
    v28 = 0x1000000LL;
    if ( v27 >> 4 > 0x1000000 )
      v28 = v27 >> 4;
    v29 = v27 - v28;
    *(_QWORD *)(a1 + 72) = v29;
    if ( v29 < 0x1000000 )
      *(_QWORD *)(a1 + 72) = 0x1000000LL;
  }
  *(_DWORD *)(a1 + 92) |= 1u;
  v30 = *(_DWORD *)(a2 + 16) | 0x10;
  *(_DWORD *)(a2 + 16) = v30;
  if ( (*(_DWORD *)(a1 + 88) & 0x40000000) != 0 )
    *(_DWORD *)(a2 + 16) = v30 | 0x20;
  if ( (*(_BYTE *)(a1 + 92) & 2) != 0 )
    ++SmpNumberOfManagedPagefilesCreated;
  ++SmpNumberOfPagefilesCreated;
LABEL_60:
  if ( (*(_BYTE *)(a1 + 92) & 1) == 0 )
  {
    if ( v8 && (int)SmpDeletePagingFile(a1 + 16) >= 0 )
      *(_QWORD *)(a2 + 32) = v10;
    v18 = 2387;
    goto LABEL_20;
  }
  return (unsigned int)PagingFile;
}
