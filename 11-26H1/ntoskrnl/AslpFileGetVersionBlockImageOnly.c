/*
 * XREFs of AslpFileGetVersionBlockImageOnly @ 0x140894790
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x140893E0C (AslpFileGetVersionAttributes.c)
 * Callees:
 *     AslpMemoryCheckBounds @ 0x140719B34 (AslpMemoryCheckBounds.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     AslFileMappingEnsure @ 0x14088EDE8 (AslFileMappingEnsure.c)
 *     AslpFileGetImageResourceDirectoryRoot @ 0x14089396C (AslpFileGetImageResourceDirectoryRoot.c)
 *     AslpFileGetVersionBlockFromResourceRoot @ 0x140894528 (AslpFileGetVersionBlockFromResourceRoot.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 */

__int64 __fastcall AslpFileGetVersionBlockImageOnly(_QWORD *a1, unsigned __int16 **a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  unsigned __int16 v8; // ax
  unsigned __int16 *v9; // rcx
  unsigned __int16 *v10; // rdx
  unsigned int v11; // ebx
  unsigned __int64 v12; // rdx
  int ImageResourceDirectoryRoot; // eax
  const char *v14; // r9
  int v15; // r8d
  int VersionBlockFromResourceRoot; // eax
  unsigned __int64 v17; // r14
  const char *v18; // r9
  int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int16 *v22; // rax
  unsigned __int16 *v23; // rsi
  unsigned __int16 *v24; // rcx
  size_t Size[7]; // [rsp+40h] [rbp-38h] BYREF
  void *Src; // [rsp+90h] [rbp+18h] BYREF
  __int64 v29; // [rsp+98h] [rbp+20h] BYREF

  v29 = 0LL;
  Src = 0LL;
  Size[0] = 0LL;
  v7 = *(_QWORD *)(a4 + 72);
  if ( v7 )
  {
    v8 = *(_WORD *)(v7 + 2);
    v9 = (unsigned __int16 *)(v7 + 40);
    v10 = 0LL;
    if ( v8 >= 0x34u )
      v10 = v9;
    *a2 = v10;
    *a1 = *(_QWORD *)(a4 + 72);
    return 0;
  }
  v11 = AslFileMappingEnsure(a4);
  if ( (v11 & 0x80000000) != 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetVersionBlockImageOnly",
      2288,
      (unsigned int)"AslFileMappingEnsure failed [%x]");
    return v11;
  }
  if ( *(_DWORD *)(a4 + 64) != 6 )
    return (unsigned int)-1073741687;
  ImageResourceDirectoryRoot = AslpFileGetImageResourceDirectoryRoot((unsigned __int64 *)&v29, v12, a4);
  v11 = ImageResourceDirectoryRoot;
  if ( ImageResourceDirectoryRoot < 0 )
  {
    if ( (unsigned int)(ImageResourceDirectoryRoot + 1073741687) <= 2 )
      return v11;
    v14 = "AslpFileGetImageResourceDirectoryRoot failed to get resource directory root [%x]";
    v15 = 2315;
LABEL_12:
    AslLogCallPrintf(1, (unsigned int)"AslpFileGetVersionBlockImageOnly", v15, (_DWORD)v14);
    return v11;
  }
  VersionBlockFromResourceRoot = AslpFileGetVersionBlockFromResourceRoot(&Src, Size, v29, a4);
  v11 = VersionBlockFromResourceRoot;
  if ( VersionBlockFromResourceRoot < 0 )
  {
    if ( (unsigned int)(VersionBlockFromResourceRoot + 1073741687) <= 2 )
      return v11;
    v14 = "AslpFileGetVersionBlockFromResourceRoot failed to get version block from resource directory [%x]";
    v15 = 2323;
    goto LABEL_12;
  }
  v17 = Size[0];
  if ( !Size[0] )
    return (unsigned int)-1073741687;
  if ( !Src )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetVersionBlockImageOnly",
      2335,
      (unsigned int)"AslpFileGetVersionBlockFromResourceRoot returned null version block with status [%x]");
    return (unsigned int)-1073741687;
  }
  if ( Size[0] > 0x7FFF )
  {
    v18 = "AslpFileGetVersionBlockFromResourceRoot returned version block size that is too large";
    v19 = 2341;
LABEL_22:
    AslLogCallPrintf(1, (unsigned int)"AslpFileGetVersionBlockImageOnly", v19, (_DWORD)v18);
    return (unsigned int)-1073741687;
  }
  if ( !AslpMemoryCheckBounds((unsigned __int64)Src, Size[0], *(_QWORD *)(a4 + 32), *(_QWORD *)(a4 + 40)) )
  {
    v18 = "Version block out of range";
    v19 = 2350;
    goto LABEL_22;
  }
  v22 = (unsigned __int16 *)AslAlloc(v21, v20);
  v23 = v22;
  if ( v22 )
  {
    memmove(v22, Src, v17);
    if ( v17 < *v23 )
      *v23 = v17;
    v24 = v23 + 20;
    if ( v23[1] < 0x34u )
      v24 = 0LL;
    *a2 = v24;
    *a1 = v23;
    *(_QWORD *)(a4 + 72) = v23;
    return 0;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
}
