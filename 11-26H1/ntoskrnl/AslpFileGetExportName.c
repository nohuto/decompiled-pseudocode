/*
 * XREFs of AslpFileGetExportName @ 0x14088CEC4
 * Callers:
 *     AslpFileGetPeExportNameAttribute @ 0x14088D92C (AslpFileGetPeExportNameAttribute.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     AslStringAnsiToUnicode @ 0x140887EBC (AslStringAnsiToUnicode.c)
 *     AslpFileQueryExportName @ 0x14088EF6C (AslpFileQueryExportName.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetExportName(wchar_t **a1)
{
  int ExportName; // eax
  int v3; // ebx
  const char *v4; // r9
  int v5; // r8d
  char v7[256]; // [rsp+30h] [rbp-118h] BYREF

  memset_0(v7, 0, sizeof(v7));
  ExportName = AslpFileQueryExportName(v7);
  v3 = ExportName;
  if ( ExportName >= 0 )
  {
    v3 = AslStringAnsiToUnicode(a1, v7);
    if ( v3 >= 0 )
      return 0;
    v4 = "AslStringAnsiToUnicode failed [%x]";
    v5 = 4265;
    goto LABEL_5;
  }
  if ( ExportName != -1073741275 && ExportName != -1073741701 )
  {
    v4 = "AslpFileQueryExportName failed [%x]";
    v5 = 4258;
LABEL_5:
    AslLogCallPrintf(1, (unsigned int)"AslpFileGetExportName", v5, (_DWORD)v4);
  }
  return (unsigned int)v3;
}
