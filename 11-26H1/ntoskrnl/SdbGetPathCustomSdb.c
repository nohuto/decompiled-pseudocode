/*
 * XREFs of SdbGetPathCustomSdb @ 0x14088C85C
 * Callers:
 *     SdbResolveDatabaseEx @ 0x14088C954 (SdbResolveDatabaseEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SdbpGetCustomSdbFileName @ 0x14088CCB4 (SdbpGetCustomSdbFileName.c)
 *     SdbpGetSystemSdbFilePath @ 0x14088D314 (SdbpGetSystemSdbFilePath.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

_BOOL8 __fastcall SdbGetPathCustomSdb(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // edx
  int v8; // r9d
  int SystemSdbFilePath; // ebx
  const char *v10; // r9
  int v11; // r8d
  wchar_t pszDest[48]; // [rsp+30h] [rbp-88h] BYREF

  memset_0(pszDest, 0, 0x56uLL);
  if ( a3 && (SystemSdbFilePath = SdbpGetCustomSdbFileName(pszDest), SystemSdbFilePath < 0) )
  {
    v10 = "SdbpGetCustomSdbFileName failed [%x]";
    v11 = 1620;
  }
  else
  {
    SystemSdbFilePath = SdbpGetSystemSdbFilePath(a1, v7, 10, v8, (__int64)pszDest, a4);
    if ( SystemSdbFilePath >= 0 )
    {
      SystemSdbFilePath = 0;
      return SystemSdbFilePath >= 0;
    }
    v10 = "SdbpGetSystemSdbFilePath failed [%x]";
    v11 = 1632;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbGetPathCustomSdb", v11, (_DWORD)v10);
  return SystemSdbFilePath >= 0;
}
