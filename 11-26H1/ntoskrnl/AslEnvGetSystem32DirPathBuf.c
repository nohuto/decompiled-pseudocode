/*
 * XREFs of AslEnvGetSystem32DirPathBuf @ 0x140B6D868
 * Callers:
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1407818D0 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     SdbpGetPathSystem @ 0x14088D1B0 (SdbpGetPathSystem.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140464504 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AslPathCombine @ 0x14088F92C (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x14088FC5C (AslPathToSystemPathBuf.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvGetSystem32DirPathBuf(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _WORD *a3,
        __int16 a4,
        __int16 *a5)
{
  __int16 v9; // cx
  __int64 v10; // r8
  unsigned __int64 i; // rax
  int v12; // ebx
  wchar_t pszSrc[64]; // [rsp+30h] [rbp-B8h] BYREF

  memset_0(pszSrc, 0, sizeof(pszSrc));
  *pszDest = 0;
  if ( a5 )
    v9 = *a5;
  else
    v9 = a4;
  v10 = 0LL;
  for ( i = 0LL; ; i += 16LL )
  {
    if ( i >= 0x80 )
      return (unsigned int)-1073741637;
    if ( *(_WORD *)((char *)&unk_140E0A110 + i) == a4 && *(_WORD *)((char *)&unk_140E0A110 + i + 2) == v9 )
      break;
    ++v10;
  }
  v12 = AslPathToSystemPathBuf(pszSrc, 0x40uLL, *((NTSTRSAFE_PCWSTR *)&unk_140E0A110 + 2 * v10 + 1));
  if ( v12 < 0 )
  {
LABEL_10:
    AslLogCallPrintf(1LL, (__int64)"AslEnvGetSystem32DirPathBuf");
    return (unsigned int)v12;
  }
  if ( a3 && *a3 )
  {
    v12 = AslPathCombine(pszSrc, (__int64)a3, pszDest, cchDest);
    if ( v12 < 0 )
      goto LABEL_10;
  }
  else
  {
    v12 = RtlStringCchCopyW(pszDest, cchDest, pszSrc);
    if ( v12 < 0 )
      goto LABEL_10;
  }
  return 0;
}
