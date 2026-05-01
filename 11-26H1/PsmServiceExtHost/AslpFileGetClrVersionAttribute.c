/*
 * XREFs of AslpFileGetClrVersionAttribute @ 0x18009B9F4
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x18009ADE0 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslStringAnsiToUnicode @ 0x18009970C (AslStringAnsiToUnicode.c)
 *     AslStringXmlSanitize @ 0x180099EDC (AslStringXmlSanitize.c)
 *     AslFileMappingEnsure @ 0x18009A388 (AslFileMappingEnsure.c)
 *     AslpFileGetClrVersion @ 0x18009B834 (AslpFileGetClrVersion.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x18009C0D0 (AslpFileGetFileKindDetailAttribute.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall AslpFileGetClrVersionAttribute(__int64 a1, __int64 a2)
{
  int FileKindDetailAttribute; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r11
  __int64 v10; // rax
  int v12; // [rsp+20h] [rbp-148h]
  PWSTR v13; // [rsp+30h] [rbp-138h] BYREF
  char v14[256]; // [rsp+40h] [rbp-128h] BYREF

  memset_0(v14, 0, sizeof(v14));
  v13 = 0LL;
  FileKindDetailAttribute = AslFileMappingEnsure(a2);
  v5 = FileKindDetailAttribute;
  if ( FileKindDetailAttribute >= 0 )
  {
    if ( *(_DWORD *)(a2 + 56) != 6 )
      goto LABEL_5;
    if ( (*(_BYTE *)(a1 + 920) & 1) == 0 )
    {
      FileKindDetailAttribute = AslpFileGetFileKindDetailAttribute(a1, a2);
      v5 = FileKindDetailAttribute;
      if ( FileKindDetailAttribute < 0 )
      {
        v6 = "AslpFileGetFileKindDetailAttribute failed [%x]";
        v7 = 5587LL;
        goto LABEL_3;
      }
    }
    v8 = *(_DWORD *)(a1 + 912);
    if ( v8 == 12 || (unsigned int)(v8 - 13) <= 2 )
    {
      FileKindDetailAttribute = AslpFileGetClrVersion(v14, a2);
      v5 = FileKindDetailAttribute;
      if ( FileKindDetailAttribute < 0 )
      {
        v6 = "AslpFileGetClrVersion failed [%x]";
        v7 = 5606LL;
        goto LABEL_3;
      }
      FileKindDetailAttribute = AslStringAnsiToUnicode(&v13, v14);
      v5 = FileKindDetailAttribute;
      if ( FileKindDetailAttribute < 0 )
      {
        v6 = "AslStringAnsiToUnicode failed [%x]";
        v7 = 5612LL;
        goto LABEL_3;
      }
      FileKindDetailAttribute = AslStringXmlSanitize(v13);
      v5 = FileKindDetailAttribute;
      if ( FileKindDetailAttribute < 0 )
      {
        v6 = "AslStringXmlSanitize failed [%x]";
        v7 = 5618LL;
        goto LABEL_3;
      }
      *(_DWORD *)(a1 + 864) = 4;
      v10 = -1LL;
      do
        ++v10;
      while ( *(_WORD *)(v9 + 2 * v10) );
      *(_DWORD *)(a1 + 888) |= 5u;
      *(_QWORD *)(a1 + 872) = v10;
      *(_QWORD *)(a1 + 880) = v9;
    }
    else
    {
LABEL_5:
      *(_DWORD *)(a1 + 888) |= 2u;
    }
    return 0;
  }
  v6 = "AslFileMappingEnsure failed [%x]";
  v7 = 5570LL;
LABEL_3:
  v12 = FileKindDetailAttribute;
  AslLogCallPrintf(1LL, "AslpFileGetClrVersionAttribute", v7, v6, v12);
  return v5;
}
