/*
 * XREFs of AslpFileGetPeExportNameAttribute @ 0x18009C964
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x18009ADE0 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslStringXmlSanitize @ 0x180099EDC (AslStringXmlSanitize.c)
 *     AslFileMappingEnsure @ 0x18009A388 (AslFileMappingEnsure.c)
 *     AslpFileGetExportName @ 0x18009C004 (AslpFileGetExportName.c)
 */

__int64 __fastcall AslpFileGetPeExportNameAttribute(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 v7; // r8
  __int64 v8; // r11
  __int64 v9; // rax
  int v11; // [rsp+20h] [rbp-18h]
  PWSTR v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = AslFileMappingEnsure(a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 56) == 6 && (int)AslpFileGetExportName(&v12, a2) >= 0 )
    {
      v4 = AslStringXmlSanitize(v12);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = "AslStringXmlSanitize failed [%x]";
        v7 = 3299LL;
        goto LABEL_3;
      }
      *(_DWORD *)(a1 + 736) = 4;
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)(v8 + 2 * v9) );
      *(_DWORD *)(a1 + 760) |= 5u;
      *(_QWORD *)(a1 + 744) = v9;
      *(_QWORD *)(a1 + 752) = v8;
    }
    else
    {
      *(_DWORD *)(a1 + 760) |= 2u;
    }
    return 0;
  }
  v6 = "AslFileMappingEnsure failed [%x]";
  v7 = 3280LL;
LABEL_3:
  v11 = v4;
  AslLogCallPrintf(1LL, "AslpFileGetPeExportNameAttribute", v7, v6, v11);
  return v5;
}
