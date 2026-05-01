/*
 * XREFs of AslpFileGetVersionBlockFromResourceRoot @ 0x18009D1B0
 * Callers:
 *     AslpFileGetVersionBlockImageOnly @ 0x18009D410 (AslpFileGetVersionBlockImageOnly.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x18009C570 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x18009E75C (AslpImageRvaToVa.c)
 *     AslpMemoryCheckBounds @ 0x18009E88C (AslpMemoryCheckBounds.c)
 */

__int64 __fastcall AslpFileGetVersionBlockFromResourceRoot(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v11; // r11
  __int64 v12; // rcx
  __int64 v13; // r11
  __int64 v14; // r8
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r11
  unsigned int *v28; // r14
  int ImageNtHeader; // ebx
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int16 *v32; // rcx
  __int64 v33; // [rsp+70h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a4 + 32);
  v5 = *(_QWORD *)(a4 + 40);
  v7 = *(unsigned __int16 *)(a3 + 14);
  v33 = 0LL;
  v11 = 0LL;
  v12 = a3 + 16 + 8LL * *(unsigned __int16 *)(a3 + 12);
  while ( v11 < v7 )
  {
    if ( !(unsigned __int8)AslpMemoryCheckBounds(v12, 8LL, v4, v5) )
    {
      v14 = 2097LL;
      goto LABEL_7;
    }
    if ( *(_WORD *)v12 == 16 )
      goto LABEL_10;
    v12 += 8LL;
    v11 = v13 + 1;
  }
  if ( v11 == v7 )
    return 3221225609LL;
LABEL_10:
  v16 = *(_DWORD *)(v12 + 4);
  if ( v16 >= 0 )
    goto LABEL_24;
  if ( !(unsigned __int8)AslpMemoryCheckBounds((v16 & 0x7FFFFFFF) + a3, 16LL, v4, v5) )
  {
    AslLogCallPrintf(
      1LL,
      "AslpFileGetVersionBlockFromResourceRoot",
      2124LL,
      "Found resource directory out of image bounds");
    return 3221226030LL;
  }
  if ( !*(_WORD *)(v17 + 14) && !*(_WORD *)(v17 + 12) )
    return 3221225609LL;
  if ( !(unsigned __int8)AslpMemoryCheckBounds(v17 + 16, 8LL, v18, v19) )
  {
    v14 = 2134LL;
LABEL_7:
    AslLogCallPrintf(
      1LL,
      "AslpFileGetVersionBlockFromResourceRoot",
      v14,
      "Found resource directory entry out of image bounds");
    return 3221226030LL;
  }
  v22 = *(_DWORD *)(v12 + 4);
  if ( v22 < 0 )
  {
    if ( !(unsigned __int8)AslpMemoryCheckBounds((v22 & 0x7FFFFFFF) + a3, 16LL, v20, v21) )
    {
      AslLogCallPrintf(
        1LL,
        "AslpFileGetVersionBlockFromResourceRoot",
        2145LL,
        "Found resource directory out of image bounds");
      return 3221226030LL;
    }
    if ( *(_WORD *)(v24 + 14) || *(_WORD *)(v24 + 12) )
    {
      if ( !(unsigned __int8)AslpMemoryCheckBounds(v23 + v24, v27, v25, v26) )
      {
        v14 = 2155LL;
        goto LABEL_7;
      }
      goto LABEL_24;
    }
    return 3221225609LL;
  }
LABEL_24:
  v28 = (unsigned int *)(a3 + *(unsigned int *)(v12 + 4));
  if ( !(unsigned __int8)AslpMemoryCheckBounds(v28, 16LL, v4, v5) )
  {
    AslLogCallPrintf(
      1LL,
      "AslpFileGetVersionBlockFromResourceRoot",
      2169LL,
      "Found resource data entry out of image bounds");
    return 3221226030LL;
  }
  ImageNtHeader = AslpFileGetImageNtHeader(&v33, a4);
  if ( ImageNtHeader < 0 )
    goto LABEL_32;
  if ( !(unsigned __int8)AslpMemoryCheckBounds(v33, 8LL, v4, v5) )
  {
    ImageNtHeader = -1073741266;
LABEL_32:
    AslLogCallPrintf(
      1LL,
      "AslpFileGetVersionBlockFromResourceRoot",
      2179LL,
      "AslpFileGetImageNtHeader failed to get image headers or headers are out of bounds [%x]",
      ImageNtHeader);
    return (unsigned int)ImageNtHeader;
  }
  v31 = AslpImageRvaToVa(v30, a4, *v28);
  if ( !(unsigned __int8)AslpMemoryCheckBounds(v31, 38LL, v4, v5) )
  {
    AslLogCallPrintf(
      1LL,
      "AslpFileGetVersionBlockFromResourceRoot",
      2185LL,
      "Found version block root but it was out of image bounds");
    return 3221226030LL;
  }
  *a1 = v32;
  *a2 = *v32;
  return 0LL;
}
