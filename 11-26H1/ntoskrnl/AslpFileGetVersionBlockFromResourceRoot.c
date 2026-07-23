/*
 * XREFs of AslpFileGetVersionBlockFromResourceRoot @ 0x140894528
 * Callers:
 *     AslpFileGetVersionBlockImageOnly @ 0x140894790 (AslpFileGetVersionBlockImageOnly.c)
 * Callees:
 *     AslpMemoryCheckBounds @ 0x140719B34 (AslpMemoryCheckBounds.c)
 *     AslpFileGetImageNtHeader @ 0x14089382C (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x140895A08 (AslpImageRvaToVa.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetVersionBlockFromResourceRoot(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v9; // r10
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r11
  int v16; // r8d
  const char *v17; // r9
  int v19; // edx
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r11
  unsigned int *v31; // r14
  int ImageNtHeader; // ebx
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int16 *v35; // rcx
  unsigned __int64 v36; // [rsp+70h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a4 + 32);
  v5 = *(_QWORD *)(a4 + 40);
  v7 = *(unsigned __int16 *)(a3 + 14);
  v36 = 0LL;
  v9 = 16LL;
  v12 = 0LL;
  v13 = a3 + 16 + 8LL * *(unsigned __int16 *)(a3 + 12);
  while ( v12 < v7 )
  {
    if ( !AslpMemoryCheckBounds(v13, 8uLL, v4, v5) )
    {
      v16 = 2097;
      goto LABEL_7;
    }
    v9 = (unsigned int)(v14 + 8);
    if ( *(_WORD *)v13 == (_WORD)v14 + 8 )
      goto LABEL_10;
    v13 += v14;
    v12 = v15 + 1;
  }
  if ( v12 == v7 )
    return 3221225609LL;
LABEL_10:
  v19 = *(_DWORD *)(v13 + 4);
  if ( v19 >= 0 )
    goto LABEL_24;
  if ( !AslpMemoryCheckBounds((v19 & 0x7FFFFFFF) + a3, v9, v4, v5) )
  {
    v17 = "Found resource directory out of image bounds";
    v16 = 2124;
    goto LABEL_8;
  }
  if ( !*(_WORD *)(v20 + 14) && !*(_WORD *)(v20 + 12) )
    return 3221225609LL;
  if ( !AslpMemoryCheckBounds(v20 + 16, 8uLL, v21, v22) )
  {
    v16 = 2134;
LABEL_7:
    v17 = "Found resource directory entry out of image bounds";
LABEL_8:
    AslLogCallPrintf(1, (unsigned int)"AslpFileGetVersionBlockFromResourceRoot", v16, (_DWORD)v17);
    return 3221226030LL;
  }
  v25 = *(_DWORD *)(v13 + 4);
  if ( v25 < 0 )
  {
    if ( !AslpMemoryCheckBounds((v25 & 0x7FFFFFFF) + a3, 0x10uLL, v23, v24) )
    {
      v17 = "Found resource directory out of image bounds";
      v16 = 2145;
      goto LABEL_8;
    }
    if ( *(_WORD *)(v27 + 14) || *(_WORD *)(v27 + 12) )
    {
      if ( !AslpMemoryCheckBounds(v26 + v27, v30, v28, v29) )
      {
        v16 = 2155;
        goto LABEL_7;
      }
      goto LABEL_24;
    }
    return 3221225609LL;
  }
LABEL_24:
  v31 = (unsigned int *)(a3 + *(unsigned int *)(v13 + 4));
  if ( !AslpMemoryCheckBounds((unsigned __int64)v31, 0x10uLL, v4, v5) )
  {
    v17 = "Found resource data entry out of image bounds";
    v16 = 2169;
    goto LABEL_8;
  }
  ImageNtHeader = AslpFileGetImageNtHeader(&v36, a4);
  if ( ImageNtHeader < 0 )
    goto LABEL_32;
  if ( !AslpMemoryCheckBounds(v36, 8uLL, v4, v5) )
  {
    ImageNtHeader = -1073741266;
LABEL_32:
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetVersionBlockFromResourceRoot",
      2179,
      (unsigned int)"AslpFileGetImageNtHeader failed to get image headers or headers are out of bounds [%x]");
    return (unsigned int)ImageNtHeader;
  }
  v34 = AslpImageRvaToVa(v33, a4, *v31);
  if ( !AslpMemoryCheckBounds(v34, 0x26uLL, v4, v5) )
  {
    v17 = "Found version block root but it was out of image bounds";
    v16 = 2185;
    goto LABEL_8;
  }
  *a1 = v35;
  *a2 = *v35;
  return 0LL;
}
