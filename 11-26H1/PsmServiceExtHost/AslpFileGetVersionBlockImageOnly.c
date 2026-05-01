/*
 * XREFs of AslpFileGetVersionBlockImageOnly @ 0x18009D410
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x18009CA48 (AslpFileGetVersionAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     AslFileMappingEnsure @ 0x18009A388 (AslFileMappingEnsure.c)
 *     AslpFileGetImageResourceDirectoryRoot @ 0x18009C63C (AslpFileGetImageResourceDirectoryRoot.c)
 *     AslpFileGetVersionBlockFromResourceRoot @ 0x18009D1B0 (AslpFileGetVersionBlockFromResourceRoot.c)
 *     AslpMemoryCheckBounds @ 0x18009E88C (AslpMemoryCheckBounds.c)
 *     memmove_0 @ 0x1800A28CE (memmove_0.c)
 */

__int64 __fastcall AslpFileGetVersionBlockImageOnly(_QWORD *a1, unsigned __int16 **a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r8
  unsigned __int16 *v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  int ImageResourceDirectoryRoot; // eax
  const char *v13; // r9
  __int64 v14; // r8
  int VersionBlockFromResourceRoot; // eax
  unsigned __int64 v16; // r14
  unsigned __int16 *Heap; // rax
  unsigned __int16 *v18; // rsi
  unsigned __int16 *v19; // rax
  SIZE_T Size[7]; // [rsp+40h] [rbp-38h] BYREF
  void *Src; // [rsp+90h] [rbp+18h] BYREF
  __int64 v24; // [rsp+98h] [rbp+20h] BYREF

  v24 = 0LL;
  Src = 0LL;
  Size[0] = 0LL;
  v7 = *(_QWORD *)(a4 + 64);
  if ( v7 )
  {
    v8 = 0LL;
    if ( *(_WORD *)(v7 + 2) >= 0x34u )
      v8 = (unsigned __int16 *)(v7 + 40);
    *a2 = v8;
    *a1 = *(_QWORD *)(a4 + 64);
    return 0;
  }
  v10 = AslFileMappingEnsure(a4);
  v9 = v10;
  if ( v10 < 0 )
  {
    AslLogCallPrintf(1LL, "AslpFileGetVersionBlockImageOnly", 2288LL, "AslFileMappingEnsure failed [%x]", v10);
    return v9;
  }
  if ( *(_DWORD *)(a4 + 56) != 6 )
    return (unsigned int)-1073741687;
  ImageResourceDirectoryRoot = AslpFileGetImageResourceDirectoryRoot(&v24, v11, a4);
  v9 = ImageResourceDirectoryRoot;
  if ( ImageResourceDirectoryRoot < 0 )
  {
    if ( (unsigned int)(ImageResourceDirectoryRoot + 1073741687) <= 2 )
      return v9;
    v13 = "AslpFileGetImageResourceDirectoryRoot failed to get resource directory root [%x]";
    v14 = 2315LL;
LABEL_12:
    AslLogCallPrintf(1LL, "AslpFileGetVersionBlockImageOnly", v14, v13, v9);
    return v9;
  }
  VersionBlockFromResourceRoot = AslpFileGetVersionBlockFromResourceRoot(&Src, Size, v24, a4);
  v9 = VersionBlockFromResourceRoot;
  if ( VersionBlockFromResourceRoot < 0 )
  {
    if ( (unsigned int)(VersionBlockFromResourceRoot + 1073741687) <= 2 )
      return v9;
    v13 = "AslpFileGetVersionBlockFromResourceRoot failed to get version block from resource directory [%x]";
    v14 = 2323LL;
    goto LABEL_12;
  }
  v16 = Size[0];
  if ( !Size[0] )
    return (unsigned int)-1073741687;
  if ( !Src )
  {
    AslLogCallPrintf(
      1LL,
      "AslpFileGetVersionBlockImageOnly",
      2335LL,
      "AslpFileGetVersionBlockFromResourceRoot returned null version block with status [%x]",
      VersionBlockFromResourceRoot);
    return (unsigned int)-1073741687;
  }
  if ( Size[0] > 0x7FFF )
  {
    AslLogCallPrintf(
      1LL,
      "AslpFileGetVersionBlockImageOnly",
      2341LL,
      "AslpFileGetVersionBlockFromResourceRoot returned version block size that is too large");
    return (unsigned int)-1073741687;
  }
  if ( !(unsigned __int8)AslpMemoryCheckBounds(Src, Size[0], *(_QWORD *)(a4 + 32), *(_QWORD *)(a4 + 40)) )
  {
    AslLogCallPrintf(1LL, "AslpFileGetVersionBlockImageOnly", 2350LL, "Version block out of range");
    return (unsigned int)-1073741687;
  }
  Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v16);
  v18 = Heap;
  if ( Heap )
  {
    memmove_0(Heap, Src, v16);
    if ( v16 < *v18 )
      *v18 = v16;
    v19 = v18 + 20;
    if ( v18[1] < 0x34u )
      v19 = 0LL;
    *a2 = v19;
    *a1 = v18;
    *(_QWORD *)(a4 + 64) = v18;
    return 0;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
}
