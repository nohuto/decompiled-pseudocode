/*
 * XREFs of AslpFileIsArm64XBinary @ 0x18009D7D0
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x18009ADE0 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslFileMappingGetFileKindDetail @ 0x18009A528 (AslFileMappingGetFileKindDetail.c)
 *     AslpFileGetImageNtHeader @ 0x18009C570 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x18009E75C (AslpImageRvaToVa.c)
 */

__int64 __fastcall AslpFileIsArm64XBinary(bool *a1, __int64 a2)
{
  unsigned int v4; // ebx
  int FileKindDetail; // eax
  const char *v6; // r9
  __int64 v7; // r8
  __int64 v8; // rbx
  unsigned int v9; // r15d
  unsigned __int64 v10; // rsi
  const char *v11; // r14
  __int64 v12; // rax
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v14 = 0;
  v15 = 0LL;
  v4 = -1073741584;
  if ( a1 )
  {
    *a1 = 0;
    FileKindDetail = AslFileMappingGetFileKindDetail((int *)&v14, a2);
    v4 = FileKindDetail;
    if ( FileKindDetail < 0 )
    {
      v6 = "AslFileMappingGetFileKindDetails failed [%x]";
      v7 = 5842LL;
LABEL_4:
      AslLogCallPrintf(1LL, "AslpFileIsArm64XBinary", v7, v6, FileKindDetail);
      return v4;
    }
    if ( v14 <= 4 )
      return (unsigned int)-2147483614;
    if ( v14 == 8 || v14 == 9 || v14 == 10 || v14 == 15 )
    {
      FileKindDetail = AslpFileGetImageNtHeader(&v15, a2);
      v4 = FileKindDetail;
      if ( FileKindDetail < 0 )
      {
        v6 = "AslpFileGetImageNtHeader failed [%x]";
        v7 = 5874LL;
        goto LABEL_4;
      }
      v8 = v15;
      v9 = *(_DWORD *)(v15 + 216);
      if ( v9 )
      {
        v10 = 0LL;
        v11 = (const char *)(v15 + *(unsigned __int16 *)(v15 + 20) + 24LL);
        while ( v10 < *(unsigned __int16 *)(v8 + 6) )
        {
          if ( !strncmp(".a64xrm", v11, 8uLL) )
          {
            *a1 = 1;
            return 0;
          }
          ++v10;
          v11 += 40;
        }
        v12 = AslpImageRvaToVa(v8, a2, v9);
        if ( !v12 )
        {
          v4 = -1073741275;
          AslLogCallPrintf(
            1LL,
            "AslpFileIsArm64XBinary",
            5905LL,
            "AslpImageRvaToVa failed to find LoadConfigTableDirectory RVA");
          return v4;
        }
        if ( *(_DWORD *)v12 >= 0xD0u )
          *a1 = *(_QWORD *)(v12 + 200) != 0LL;
      }
    }
    return 0;
  }
  return v4;
}
