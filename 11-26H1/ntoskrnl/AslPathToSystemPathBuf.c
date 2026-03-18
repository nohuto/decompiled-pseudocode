/*
 * XREFs of AslPathToSystemPathBuf @ 0x140889860
 * Callers:
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x14077EDD0 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     SdbpGetPathAppPatch @ 0x140886950 (SdbpGetPathAppPatch.c)
 *     AslPathToSystemPath @ 0x1408897A0 (AslPathToSystemPath.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140B6A658 (AslEnvGetSystem32DirPathBuf.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14046AD84 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1404DEE7C (RtlStringCchCatW.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
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
