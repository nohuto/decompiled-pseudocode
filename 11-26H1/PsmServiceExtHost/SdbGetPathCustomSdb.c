/*
 * XREFs of SdbGetPathCustomSdb @ 0x180091150
 * Callers:
 *     SdbResolveDatabaseEx @ 0x18009127C (SdbResolveDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbpGetCustomSdbFileName @ 0x180091620 (SdbpGetCustomSdbFileName.c)
 *     SdbpGetSystemSdbFilePath @ 0x180091F84 (SdbpGetSystemSdbFilePath.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

_BOOL8 __fastcall SdbGetPathCustomSdb(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  int v8; // r9d
  int SystemSdbFilePath; // eax
  int v10; // ebx
  const char *v11; // r9
  __int64 v12; // r8
  __int64 v14; // [rsp+20h] [rbp-98h]
  _BYTE v15[96]; // [rsp+30h] [rbp-88h] BYREF

  memset_0(v15, 0, 0x56uLL);
  if ( a3 && (SystemSdbFilePath = SdbpGetCustomSdbFileName(v15, v7, a3), v10 = SystemSdbFilePath, SystemSdbFilePath < 0) )
  {
    v11 = "SdbpGetCustomSdbFileName failed [%x]";
    v12 = 1620LL;
  }
  else
  {
    SystemSdbFilePath = SdbpGetSystemSdbFilePath(a1, v7, 10, v8, (__int64)v15, a4);
    v10 = SystemSdbFilePath;
    if ( SystemSdbFilePath >= 0 )
    {
      v10 = 0;
      return v10 >= 0;
    }
    v11 = "SdbpGetSystemSdbFilePath failed [%x]";
    v12 = 1632LL;
  }
  LODWORD(v14) = SystemSdbFilePath;
  AslLogCallPrintf(1LL, "SdbGetPathCustomSdb", v12, v11, v14);
  return v10 >= 0;
}
