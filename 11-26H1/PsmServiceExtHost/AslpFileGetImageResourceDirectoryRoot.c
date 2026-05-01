/*
 * XREFs of AslpFileGetImageResourceDirectoryRoot @ 0x18009C63C
 * Callers:
 *     AslpFileGetVersionBlockImageOnly @ 0x18009D410 (AslpFileGetVersionBlockImageOnly.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x18009C570 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x18009E75C (AslpImageRvaToVa.c)
 *     AslpMemoryCheckBounds @ 0x18009E88C (AslpMemoryCheckBounds.c)
 */

__int64 __fastcall AslpFileGetImageResourceDirectoryRoot(__int64 *a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  __int64 v7; // rsi
  __int64 v8; // rbp
  int ImageNtHeader; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r11
  _WORD *v13; // rcx
  unsigned int *v14; // r11
  __int64 v15; // r8
  unsigned int v16; // eax
  unsigned int *v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  v20 = a2;
  v3 = *(_DWORD *)(a3 + 56) == 6;
  v20 = 0LL;
  if ( !v3 )
  {
    AslLogCallPrintf(1LL, "AslpFileGetImageResourceDirectoryRoot", 1924LL, "File is not a PE image");
    return 3221225659LL;
  }
  v7 = *(_QWORD *)(a3 + 32);
  v8 = *(_QWORD *)(a3 + 40);
  ImageNtHeader = AslpFileGetImageNtHeader(&v20, a3);
  if ( ImageNtHeader < 0 )
    goto LABEL_26;
  if ( !(unsigned __int8)AslpMemoryCheckBounds(v20, 8LL, v7, v8) )
  {
    ImageNtHeader = -1073741266;
LABEL_26:
    AslLogCallPrintf(
      1LL,
      "AslpFileGetImageResourceDirectoryRoot",
      1937LL,
      "AslpFileGetImageNtHeader failed to get image headers or headers are out of bounds [%x]",
      ImageNtHeader);
    return (unsigned int)ImageNtHeader;
  }
  v13 = (_WORD *)(v12 + 24);
  if ( *(_WORD *)(v12 + 24) != 267 )
  {
    if ( *v13 == 523 && *(_WORD *)(v12 + 20) >= 0x70u )
    {
      if ( !(unsigned __int8)AslpMemoryCheckBounds(v13, 240LL, v10, v11) )
      {
        v15 = 1971LL;
        goto LABEL_9;
      }
      v16 = v14[33];
      v17 = v14 + 38;
      goto LABEL_16;
    }
    return 3221225595LL;
  }
  if ( *(_WORD *)(v12 + 20) < 0x60u )
    return 3221225595LL;
  if ( !(unsigned __int8)AslpMemoryCheckBounds(v13, 224LL, v10, v11) )
  {
    v15 = 1955LL;
LABEL_9:
    AslLogCallPrintf(1LL, "AslpFileGetImageResourceDirectoryRoot", v15, "Image PE optional header outside image");
    return 3221226030LL;
  }
  v16 = v14[29];
  v17 = v14 + 34;
LABEL_16:
  if ( v16 <= 2 )
    return 3221225609LL;
  if ( v17[1] < 0x10 )
    return 3221225609LL;
  v18 = *v17;
  if ( !(_DWORD)v18 )
    return 3221225609LL;
  v19 = AslpImageRvaToVa(v14, a3, v18);
  if ( !v19 || !(unsigned __int8)AslpMemoryCheckBounds(v19, v17[1], v7, v8) )
    return v19 != 0 ? -1073741266 : -1073741687;
  *a1 = v19;
  return 0LL;
}
