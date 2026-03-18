/*
 * XREFs of AslEnvGetSysNativeDirPathForGuestBuf @ 0x14077EDD0
 * Callers:
 *     SdbpGetPathAppraiser @ 0x140886A50 (SdbpGetPathAppraiser.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14046AD84 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     AslPathCombine @ 0x140889530 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x140889860 (AslPathToSystemPathBuf.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140B6A658 (AslEnvGetSystem32DirPathBuf.c)
 */

__int64 __fastcall AslEnvGetSysNativeDirPathForGuestBuf(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _WORD *a3,
        __int16 a4,
        _WORD *a5)
{
  NTSTATUS v9; // ebx
  const char *v10; // r9
  int v11; // r8d
  wchar_t pszSrc[64]; // [rsp+30h] [rbp-B8h] BYREF

  memset_0(pszSrc, 0, sizeof(pszSrc));
  *pszDest = 0;
  if ( a5 && *a5 != a4 )
  {
    v9 = AslPathToSystemPathBuf(pszSrc, 0x40uLL, L"\\SysNative");
    if ( v9 < 0 )
    {
      v10 = "AslPathToSystemPathBuf failed [%x]";
      v11 = 1839;
LABEL_11:
      AslLogCallPrintf(1, (unsigned int)"AslEnvGetSysNativeDirPathForGuestBuf", v11, (_DWORD)v10);
      return (unsigned int)v9;
    }
    if ( a3 && *a3 )
    {
      v9 = AslPathCombine(pszSrc);
      if ( v9 < 0 )
      {
        v10 = "AslPathCombine failed [%x]";
        v11 = 1849;
        goto LABEL_11;
      }
    }
    else
    {
      v9 = RtlStringCchCopyW(pszDest, cchDest, pszSrc);
      if ( v9 < 0 )
      {
        v10 = "RtlStringCchCopyW failed [%x]";
        v11 = 1857;
        goto LABEL_11;
      }
    }
    return (unsigned int)v9;
  }
  return AslEnvGetSystem32DirPathBuf(pszDest, cchDest, (__int64)a5);
}
