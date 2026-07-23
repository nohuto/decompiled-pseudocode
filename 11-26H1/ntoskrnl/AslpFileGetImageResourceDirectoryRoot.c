/*
 * XREFs of AslpFileGetImageResourceDirectoryRoot @ 0x14089396C
 * Callers:
 *     AslpFileGetVersionBlockImageOnly @ 0x140894790 (AslpFileGetVersionBlockImageOnly.c)
 * Callees:
 *     AslpMemoryCheckBounds @ 0x140719B34 (AslpMemoryCheckBounds.c)
 *     AslpFileGetImageNtHeader @ 0x14089382C (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x140895A08 (AslpImageRvaToVa.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetImageResourceDirectoryRoot(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3)
{
  bool v3; // zf
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  int ImageNtHeader; // ebx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // r11
  unsigned __int64 v13; // rcx
  __int16 v14; // ax
  unsigned int *v15; // r11
  int v16; // r8d
  unsigned int v17; // eax
  unsigned int *v18; // rbx
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // [rsp+58h] [rbp+10h] BYREF

  v21 = a2;
  v3 = *(_DWORD *)(a3 + 64) == 6;
  v21 = 0LL;
  if ( !v3 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetImageResourceDirectoryRoot",
      1924,
      (unsigned int)"File is not a PE image");
    return 3221225659LL;
  }
  v7 = *(_QWORD *)(a3 + 32);
  v8 = *(_QWORD *)(a3 + 40);
  ImageNtHeader = AslpFileGetImageNtHeader(&v21, a3);
  if ( ImageNtHeader < 0 )
    goto LABEL_26;
  if ( !AslpMemoryCheckBounds(v21, 8uLL, v7, v8) )
  {
    ImageNtHeader = -1073741266;
LABEL_26:
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetImageResourceDirectoryRoot",
      1937,
      (unsigned int)"AslpFileGetImageNtHeader failed to get image headers or headers are out of bounds [%x]");
    return (unsigned int)ImageNtHeader;
  }
  v13 = v12 + 24;
  v14 = *(_WORD *)(v12 + 24);
  if ( v14 != 267 )
  {
    if ( v14 == 523 && *(_WORD *)(v12 + 20) >= 0x70u )
    {
      if ( !AslpMemoryCheckBounds(v13, 0xF0uLL, v10, v11) )
      {
        v16 = 1971;
        goto LABEL_9;
      }
      v17 = v15[33];
      v18 = v15 + 38;
      goto LABEL_16;
    }
    return 3221225595LL;
  }
  if ( *(_WORD *)(v12 + 20) < 0x60u )
    return 3221225595LL;
  if ( !AslpMemoryCheckBounds(v13, 0xE0uLL, v10, v11) )
  {
    v16 = 1955;
LABEL_9:
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetImageResourceDirectoryRoot",
      v16,
      (unsigned int)"Image PE optional header outside image");
    return 3221226030LL;
  }
  v17 = v15[29];
  v18 = v15 + 34;
LABEL_16:
  if ( v17 <= 2 )
    return 3221225609LL;
  if ( v18[1] < 0x10 )
    return 3221225609LL;
  v19 = *v18;
  if ( !(_DWORD)v19 )
    return 3221225609LL;
  v20 = AslpImageRvaToVa(v15, a3, v19);
  if ( !v20 || !AslpMemoryCheckBounds(v20, v18[1], v7, v8) )
    return v20 != 0 ? -1073741266 : -1073741687;
  *a1 = v20;
  return 0LL;
}
