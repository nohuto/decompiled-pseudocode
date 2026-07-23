/*
 * XREFs of AslpFileIsArm64XBinary @ 0x140894CA4
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x140892080 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     strncmp @ 0x140741F60 (strncmp.c)
 *     AslFileMappingGetFileKindDetail @ 0x14088EF88 (AslFileMappingGetFileKindDetail.c)
 *     AslpFileGetImageNtHeader @ 0x14089382C (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x140895A08 (AslpImageRvaToVa.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileIsArm64XBinary(bool *a1, __int64 a2)
{
  int FileKindDetail; // ebx
  const char *v5; // r9
  int v6; // r8d
  __int64 v7; // rbx
  unsigned int v8; // r15d
  unsigned __int64 v9; // rsi
  const char *v10; // r14
  __int64 v11; // rax
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v13 = 0;
  v14 = 0LL;
  FileKindDetail = -1073741584;
  if ( a1 )
  {
    *a1 = 0;
    FileKindDetail = AslFileMappingGetFileKindDetail((int *)&v13, a2);
    if ( FileKindDetail < 0 )
    {
      v5 = "AslFileMappingGetFileKindDetails failed [%x]";
      v6 = 5842;
LABEL_4:
      AslLogCallPrintf(1, (unsigned int)"AslpFileIsArm64XBinary", v6, (_DWORD)v5);
      return (unsigned int)FileKindDetail;
    }
    if ( v13 <= 4 )
      return (unsigned int)-2147483614;
    if ( v13 == 8 || v13 == 9 || v13 == 10 || v13 == 15 )
    {
      FileKindDetail = AslpFileGetImageNtHeader(&v14, a2);
      if ( FileKindDetail < 0 )
      {
        v5 = "AslpFileGetImageNtHeader failed [%x]";
        v6 = 5874;
        goto LABEL_4;
      }
      v7 = v14;
      v8 = *(_DWORD *)(v14 + 216);
      if ( v8 )
      {
        v9 = 0LL;
        v10 = (const char *)(v14 + *(unsigned __int16 *)(v14 + 20) + 24LL);
        while ( v9 < *(unsigned __int16 *)(v7 + 6) )
        {
          if ( !strncmp(".a64xrm", v10, 8uLL) )
          {
            *a1 = 1;
            return 0;
          }
          ++v9;
          v10 += 40;
        }
        v11 = AslpImageRvaToVa(v7, a2, v8);
        if ( !v11 )
        {
          FileKindDetail = -1073741275;
          AslLogCallPrintf(
            1,
            (unsigned int)"AslpFileIsArm64XBinary",
            5905,
            (unsigned int)"AslpImageRvaToVa failed to find LoadConfigTableDirectory RVA");
          return (unsigned int)FileKindDetail;
        }
        if ( *(_DWORD *)v11 >= 0xD0u )
          *a1 = *(_QWORD *)(v11 + 200) != 0LL;
      }
    }
    return 0;
  }
  return (unsigned int)FileKindDetail;
}
