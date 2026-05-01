/*
 * XREFs of AslpFileGetExportName @ 0x18009C004
 * Callers:
 *     AslpFileGetPeExportNameAttribute @ 0x18009C964 (AslpFileGetPeExportNameAttribute.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslStringAnsiToUnicode @ 0x18009970C (AslStringAnsiToUnicode.c)
 *     AslpFileQueryExportName @ 0x18009DEA0 (AslpFileQueryExportName.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall AslpFileGetExportName(PWSTR *a1, __int64 a2)
{
  int ExportName; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 v7; // r8
  int v9; // [rsp+20h] [rbp-128h]
  char v10[256]; // [rsp+30h] [rbp-118h] BYREF

  memset_0(v10, 0, sizeof(v10));
  ExportName = AslpFileQueryExportName(v10, a2);
  v5 = ExportName;
  if ( ExportName >= 0 )
  {
    ExportName = AslStringAnsiToUnicode(a1, v10);
    v5 = ExportName;
    if ( ExportName >= 0 )
      return 0;
    v6 = "AslStringAnsiToUnicode failed [%x]";
    v7 = 4265LL;
    goto LABEL_5;
  }
  if ( ExportName != -1073741275 && ExportName != -1073741701 )
  {
    v6 = "AslpFileQueryExportName failed [%x]";
    v7 = 4258LL;
LABEL_5:
    v9 = ExportName;
    AslLogCallPrintf(1LL, "AslpFileGetExportName", v7, v6, v9);
  }
  return v5;
}
