/*
 * XREFs of RtlStringCchCatW @ 0x1404DEE7C
 * Callers:
 *     SdbpGetCustomSdbFileName @ 0x1408868B4 (SdbpGetCustomSdbFileName.c)
 *     AslPathCombine @ 0x140889530 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x140889860 (AslPathToSystemPathBuf.c)
 *     AslpEnvResolveVars @ 0x14088B994 (AslpEnvResolveVars.c)
 *     SdbpCreateSearchDBContext @ 0x1409E2F54 (SdbpCreateSearchDBContext.c)
 *     AslpFileQueryVersionString @ 0x1409E3618 (AslpFileQueryVersionString.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140CE2A38 (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCatW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v4; // r9
  NTSTRSAFE_PWSTR v5; // rax
  size_t v6; // r8
  NTSTATUS result; // eax
  wchar_t *v8; // rdx
  size_t v9; // rcx
  __int64 v10; // rax
  char *v11; // r11
  wchar_t v12; // r8
  wchar_t *v13; // rax

  v4 = cchDest;
  if ( cchDest - 1 > 0x7FFFFFFE )
    return -1073741811;
  v5 = pszDest;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --cchDest;
  }
  while ( cchDest );
  v6 = (v4 - cchDest) & -(__int64)(cchDest != 0);
  result = cchDest == 0 ? 0xC000000D : 0;
  if ( cchDest )
  {
    v8 = &pszDest[v6];
    v9 = v4 - v6;
    if ( v4 != v6 )
    {
      v10 = 2147483646LL;
      v11 = (char *)((char *)pszSrc - (char *)v8);
      do
      {
        if ( !v10 )
          break;
        v12 = *(wchar_t *)((char *)v8 + (_QWORD)v11);
        if ( !v12 )
          break;
        *v8 = v12;
        --v10;
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    v13 = v8 - 1;
    if ( v9 )
      v13 = v8;
    *v13 = 0;
    return v9 == 0 ? 0x80000005 : 0;
  }
  return result;
}
