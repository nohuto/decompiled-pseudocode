/*
 * XREFs of SmpCreatePagefileOnVolume @ 0x14000FA5C
 * Callers:
 *     SmpCreatePagefileFromDescriptor @ 0x14000EC28 (SmpCreatePagefileFromDescriptor.c)
 * Callees:
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpCheckHybridPriority @ 0x14000F27C (SmpCheckHybridPriority.c)
 *     SmpCreatePagingFile @ 0x14000FD88 (SmpCreatePagingFile.c)
 *     SmpDeletePagingFile @ 0x140010C88 (SmpDeletePagingFile.c)
 *     SmpGetPagingFileSize @ 0x1400110CC (SmpGetPagingFileSize.c)
 *     SmpTrimPagingFileExtents @ 0x14001187C (SmpTrimPagingFileExtents.c)
 */

__int64 __fastcall SmpCreatePagefileOnVolume(__int64 a1, __int64 a2, int a3)
{
  bool v3; // zf
  __int64 v7; // rsi
  char v8; // r12
  int PagingFileSize; // eax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r11
  bool v20; // cc
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rax
  int v23; // edx
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  _DWORD *v28; // rsi
  _DWORD *v29; // r14
  int PagingFile; // ecx
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  int v34; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  int v37; // [rsp+B0h] [rbp+40h] BYREF
  void *FileHandle; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v39; // [rsp+C8h] [rbp+58h] BYREF

  v3 = (*(_BYTE *)(a1 + 92) & 4) == 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  IoStatusBlock = 0LL;
  FileHandle = 0LL;
  v7 = 0LL;
  v37 = 0;
  v8 = 0;
  v39 = 0LL;
  if ( !v3 )
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 8LL) = *(_WORD *)(a2 + 28);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(a1 + 16);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenFile(&FileHandle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x28u) >= 0 )
  {
    PagingFileSize = SmpGetPagingFileSize(FileHandle, a1 + 16, &v39);
    v7 = v39;
    if ( PagingFileSize >= 0 && v39 )
      v8 = 1;
    SmpTrimPagingFileExtents(FileHandle, a1 + 16);
    NtClose(FileHandle);
  }
  v10 = v7 + *(_QWORD *)(a2 + 32);
  v11 = v10;
  v12 = v10;
  v13 = v10;
  if ( v10 > *(_QWORD *)(a2 + 40) )
  {
    v10 = *(_QWORD *)(a2 + 40);
    v11 = v10;
    v12 = v10;
    v13 = v10;
  }
  v3 = (*(_BYTE *)(a1 + 92) & 2) == 0;
  v14 = *(_QWORD *)(a1 + 56);
  v15 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 72) = v14;
  *(_QWORD *)(a1 + 80) = v15;
  if ( !v3 )
  {
    v16 = *(_QWORD *)(a2 + 40) >> 3;
    v17 = v14;
    v18 = v12 >> 2;
    if ( SmpMemorySize >= v11 >> 2 )
      v18 = SmpMemorySize;
    v19 = v13 >> 1;
    v20 = v18 <= v11 >> 1;
    v21 = *(_QWORD *)(a2 + 40) >> 3;
    if ( v20 )
      v19 = v18;
    if ( v19 <= v16 )
      v21 = v19;
    v22 = v21;
    if ( v14 > v21 )
    {
      if ( !a3 )
      {
        v23 = 2184;
LABEL_20:
        SmpLogFailure((__int64)"SmpCreatePagefileOnVolume", v23, -1073741697);
        return 3221225599LL;
      }
      if ( (*(_BYTE *)(a1 + 92) & 8) != 0 )
      {
        v25 = v10 >> 5;
        if ( v10 >> 5 > 0x40000000 )
          v25 = 0x40000000LL;
        v26 = v10 - v25;
        if ( v14 <= v10 - v25 || (v22 = v21, v14 == *(_QWORD *)(a1 + 48)) )
        {
          v22 = v26;
          if ( v16 < v26 )
            v16 = v26;
        }
      }
      v17 = v14;
      if ( v14 > v22 )
      {
        v17 = *(_QWORD *)(a1 + 48);
        if ( v14 <= v17 )
        {
LABEL_33:
          *(_QWORD *)(a1 + 72) = v22;
LABEL_34:
          if ( v15 > v16 )
            *(_QWORD *)(a1 + 80) = v16;
          goto LABEL_41;
        }
        *(_QWORD *)(a1 + 72) = v17;
      }
    }
    if ( v17 <= v22 )
      goto LABEL_34;
    goto LABEL_33;
  }
  if ( v14 > v11 )
  {
    if ( !a3 )
      return 3221225599LL;
    *(_QWORD *)(a1 + 72) = v10;
  }
  v27 = *(_QWORD *)(a2 + 40);
  if ( v15 > v27 )
    *(_QWORD *)(a1 + 80) = v27;
LABEL_41:
  v28 = (_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 88) = 0;
  if ( (*(_BYTE *)(a2 + 16) & 4) != 0 )
    *v28 = 0x40000000;
  v29 = (_DWORD *)(a1 + 88);
  if ( (*(_BYTE *)(a2 + 16) & 8) != 0
    && SmpCheckHybridPriority(*(_DWORD *)(a2 + 20), &v37, 0LL) >= 0
    && (v37 & 0xFFFFFFF0) == 0 )
  {
    v29 = (_DWORD *)(a1 + 88);
    *v28 |= (v37 | 0x10) << 26;
  }
  if ( (*(_BYTE *)(a2 + 16) & 0x40) != 0 )
    *v29 |= 0x1000000u;
  while ( 1 )
  {
    PagingFile = SmpCreatePagingFile((PCUNICODE_STRING)(a1 + 16));
    if ( PagingFile >= 0 )
      break;
    if ( !a3 )
      goto LABEL_61;
    v31 = *(_QWORD *)(a1 + 72);
    if ( v31 <= 0x1000000 )
      goto LABEL_61;
    v32 = 0x1000000LL;
    if ( v31 >> 4 > 0x1000000 )
      v32 = v31 >> 4;
    v33 = v31 - v32;
    *(_QWORD *)(a1 + 72) = v33;
    if ( v33 < 0x1000000 )
      *(_QWORD *)(a1 + 72) = 0x1000000LL;
  }
  *(_DWORD *)(a1 + 92) |= 1u;
  v34 = *(_DWORD *)(a2 + 16) | 0x10;
  *(_DWORD *)(a2 + 16) = v34;
  if ( (*(_DWORD *)(a1 + 88) & 0x40000000) != 0 )
    *(_DWORD *)(a2 + 16) = v34 | 0x20;
  if ( (*(_BYTE *)(a1 + 92) & 2) != 0 )
    ++SmpNumberOfManagedPagefilesCreated;
  ++SmpNumberOfPagefilesCreated;
LABEL_61:
  if ( (*(_BYTE *)(a1 + 92) & 1) == 0 )
  {
    if ( v8 && (int)SmpDeletePagingFile(a1 + 16) >= 0 )
      *(_QWORD *)(a2 + 32) = v10;
    v23 = 2387;
    goto LABEL_20;
  }
  return (unsigned int)PagingFile;
}
