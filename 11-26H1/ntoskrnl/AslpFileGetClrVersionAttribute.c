/*
 * XREFs of AslpFileGetClrVersionAttribute @ 0x140892D10
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x140892080 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AslStringAnsiToUnicode @ 0x14088E2B8 (AslStringAnsiToUnicode.c)
 *     AslFileMappingEnsure @ 0x14088EDE8 (AslFileMappingEnsure.c)
 *     AslpFileGetClrVersion @ 0x140892B50 (AslpFileGetClrVersion.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x14089338C (AslpFileGetFileKindDetailAttribute.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslStringXmlSanitize @ 0x140B5A5E0 (AslStringXmlSanitize.c)
 */

__int64 __fastcall AslpFileGetClrVersionAttribute(__int64 a1, __int64 a2)
{
  int FileKindDetailAttribute; // ebx
  const char *v5; // r9
  int v6; // r8d
  int v7; // eax
  __int64 v8; // r11
  __int64 v9; // rax
  wchar_t *v11; // [rsp+30h] [rbp-138h] BYREF
  CHAR v12[256]; // [rsp+40h] [rbp-128h] BYREF

  memset_0(v12, 0, sizeof(v12));
  v11 = 0LL;
  FileKindDetailAttribute = AslFileMappingEnsure(a2);
  if ( FileKindDetailAttribute >= 0 )
  {
    if ( *(_DWORD *)(a2 + 64) != 6 )
      goto LABEL_5;
    if ( (*(_DWORD *)(a1 + 920) & 1) == 0 )
    {
      FileKindDetailAttribute = AslpFileGetFileKindDetailAttribute(a1, a2);
      if ( FileKindDetailAttribute < 0 )
      {
        v5 = "AslpFileGetFileKindDetailAttribute failed [%x]";
        v6 = 5587;
        goto LABEL_3;
      }
    }
    v7 = *(_DWORD *)(a1 + 912);
    if ( v7 == 12 || (unsigned int)(v7 - 13) <= 2 )
    {
      FileKindDetailAttribute = AslpFileGetClrVersion(v12, a2);
      if ( FileKindDetailAttribute < 0 )
      {
        v5 = "AslpFileGetClrVersion failed [%x]";
        v6 = 5606;
        goto LABEL_3;
      }
      FileKindDetailAttribute = AslStringAnsiToUnicode(&v11, v12);
      if ( FileKindDetailAttribute < 0 )
      {
        v5 = "AslStringAnsiToUnicode failed [%x]";
        v6 = 5612;
        goto LABEL_3;
      }
      FileKindDetailAttribute = AslStringXmlSanitize(v11);
      if ( FileKindDetailAttribute < 0 )
      {
        v5 = "AslStringXmlSanitize failed [%x]";
        v6 = 5618;
        goto LABEL_3;
      }
      *(_DWORD *)(a1 + 864) = 4;
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)(v8 + 2 * v9) );
      *(_DWORD *)(a1 + 888) |= 5u;
      *(_QWORD *)(a1 + 872) = v9;
      *(_QWORD *)(a1 + 880) = v8;
    }
    else
    {
LABEL_5:
      *(_DWORD *)(a1 + 888) |= 2u;
    }
    return 0;
  }
  v5 = "AslFileMappingEnsure failed [%x]";
  v6 = 5570;
LABEL_3:
  AslLogCallPrintf(1, (unsigned int)"AslpFileGetClrVersionAttribute", v6, (_DWORD)v5);
  return (unsigned int)FileKindDetailAttribute;
}
