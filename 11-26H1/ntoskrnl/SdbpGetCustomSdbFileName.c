/*
 * XREFs of SdbpGetCustomSdbFileName @ 0x14088CCB4
 * Callers:
 *     SdbGetPathCustomSdb @ 0x14088C85C (SdbGetPathCustomSdb.c)
 * Callees:
 *     RtlStringCchCatW @ 0x1404D855C (RtlStringCchCatW.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslGuidToString @ 0x140B4CB74 (AslGuidToString.c)
 */

__int64 __fastcall SdbpGetCustomSdbFileName(NTSTRSAFE_PWSTR pszDest)
{
  NTSTATUS v2; // ebx
  const char *v3; // r9
  int v4; // r8d

  *pszDest = 0;
  v2 = AslGuidToString(pszDest, 43LL);
  if ( v2 >= 0 )
  {
    v2 = RtlStringCchCatW(pszDest, 0x2BuLL, L".sdb");
    if ( v2 >= 0 )
      return 0;
    v3 = "RtlStringCchCatW failed [%x]";
    v4 = 831;
  }
  else
  {
    v3 = "AslGuidToString failed [%x]";
    v4 = 825;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbpGetCustomSdbFileName", v4, (_DWORD)v3);
  return (unsigned int)v2;
}
