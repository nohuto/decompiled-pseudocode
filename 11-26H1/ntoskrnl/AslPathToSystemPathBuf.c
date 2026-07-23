/*
 * XREFs of AslPathToSystemPathBuf @ 0x14088FC5C
 * Callers:
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1407818D0 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     SdbpGetPathAppPatch @ 0x14088CD50 (SdbpGetPathAppPatch.c)
 *     AslPathToSystemPath @ 0x14088FB9C (AslPathToSystemPath.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140B6D868 (AslEnvGetSystem32DirPathBuf.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140464504 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1404D855C (RtlStringCchCatW.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathToSystemPathBuf(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS v6; // ebx

  memset_0(pszDest, 0, 2 * cchDest);
  v6 = RtlStringCchCopyW(pszDest, cchDest, L"\\SystemRoot");
  if ( v6 >= 0 )
  {
    v6 = RtlStringCchCatW(pszDest, cchDest, pszSrc);
    if ( v6 < 0 )
    {
      AslLogCallPrintf(1, (unsigned int)"AslPathToSystemPathBuf", 1488, (unsigned int)"Failed to cat string [%x]");
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"AslPathToSystemPathBuf", 1471, (unsigned int)"Failed to copy string [%x]");
  }
  return (unsigned int)v6;
}
