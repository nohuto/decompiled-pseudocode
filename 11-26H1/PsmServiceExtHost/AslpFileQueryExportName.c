/*
 * XREFs of AslpFileQueryExportName @ 0x18009DEA0
 * Callers:
 *     AslpFileGetExportName @ 0x18009C004 (AslpFileGetExportName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     RtlStringCchCopyA @ 0x18009A010 (RtlStringCchCopyA.c)
 *     AslpFileGetImageNtHeader @ 0x18009C570 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x18009E75C (AslpImageRvaToVa.c)
 *     AslpMemorySpanCheckBounds @ 0x18009E8C8 (AslpMemorySpanCheckBounds.c)
 */

__int64 __fastcall AslpFileQueryExportName(_BYTE *a1, __int64 a2)
{
  int ImageNtHeader; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 v7; // r8
  __int64 v8; // rsi
  unsigned int *v9; // r8
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v14; // [rsp+38h] [rbp-60h] BYREF
  __int64 v15; // [rsp+40h] [rbp-58h]
  __int64 v16; // [rsp+48h] [rbp-50h] BYREF
  __int64 v17; // [rsp+50h] [rbp-48h]
  __int64 v18; // [rsp+58h] [rbp-40h] BYREF
  __int64 v19; // [rsp+60h] [rbp-38h]
  __int64 v20; // [rsp+68h] [rbp-30h] BYREF
  __int64 v21; // [rsp+70h] [rbp-28h]
  __int64 v22; // [rsp+A0h] [rbp+8h] BYREF

  v22 = 0LL;
  if ( a2 && *(_QWORD *)(a2 + 32) )
  {
    v14 = *(_QWORD *)(a2 + 32);
    v15 = *(_QWORD *)(a2 + 40);
  }
  else
  {
    v14 = 0LL;
    v15 = 0LL;
  }
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  *a1 = 0;
  ImageNtHeader = AslpFileGetImageNtHeader(&v22, a2);
  v5 = ImageNtHeader;
  if ( ImageNtHeader >= 0 )
  {
    v8 = v22;
    v16 = v22;
    v17 = 264LL;
    if ( (unsigned __int8)AslpMemorySpanCheckBounds(&v16, &v14) )
    {
      if ( *(_WORD *)(v8 + 24) == 267 )
      {
        v9 = (unsigned int *)(v8 + 120);
      }
      else
      {
        if ( *(_WORD *)(v8 + 24) != 523 )
        {
          AslLogCallPrintf(
            2LL,
            "AslpFileQueryExportName",
            4367LL,
            "Unknown image optional header magic value %x",
            *(unsigned __int16 *)(v8 + 24));
          return (unsigned int)-1073741637;
        }
        v9 = (unsigned int *)(v8 + 136);
      }
      v10 = v9[1];
      v11 = AslpImageRvaToVa(v8, a2, *v9);
      v18 = v11;
      v19 = v10;
      if ( (unsigned __int8)AslpMemorySpanCheckBounds(&v18, &v14) )
      {
        v12 = AslpImageRvaToVa(v8, a2, *(unsigned int *)(v11 + 12));
        v20 = v12;
        v21 = 256LL;
        if ( !(unsigned __int8)AslpMemorySpanCheckBounds(&v20, &v14) )
        {
          v5 = -1073741701;
          AslLogCallPrintf(
            2LL,
            "AslpFileQueryExportName",
            4415LL,
            "Export name pointer out of bounds or invalid image format");
          return v5;
        }
        ImageNtHeader = RtlStringCchCopyA(a1, 256LL, v12);
        v5 = ImageNtHeader;
        if ( ImageNtHeader >= 0 )
          return 0;
        v6 = "RtlStringCchCopyA failed [%x]";
        v7 = 4441LL;
        goto LABEL_7;
      }
      if ( !v10 && !v11 )
        return (unsigned int)-1073741275;
      AslLogCallPrintf(2LL, "AslpFileQueryExportName", 4389LL, "Export directory invalid or invalid image format");
    }
    else
    {
      AslLogCallPrintf(1LL, "AslpFileQueryExportName", 4335LL, "Image too small to be a valid PE");
    }
    return (unsigned int)-1073741701;
  }
  v6 = "AslpFileGetImageNtHeader failed [%x]";
  v7 = 4324LL;
LABEL_7:
  AslLogCallPrintf(1LL, "AslpFileQueryExportName", v7, v6, ImageNtHeader);
  return v5;
}
