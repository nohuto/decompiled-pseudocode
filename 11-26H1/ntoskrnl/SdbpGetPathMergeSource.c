/*
 * XREFs of SdbpGetPathMergeSource @ 0x14088D0A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SdbpGetPathAppPatch @ 0x14088CD50 (SdbpGetPathAppPatch.c)
 *     AslPathCombine @ 0x14088F92C (AslPathCombine.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetPathMergeSource(wchar_t *a1, size_t a2)
{
  int v5; // ebx
  wchar_t pszSrc[288]; // [rsp+30h] [rbp-268h] BYREF

  wcscpy(pszSrc, L"\\MergeSdbFilesSource");
  if ( a2 < 0x15 )
    return 3221225507LL;
  *a1 = 0;
  pszSrc[24] = 0;
  v5 = AslPathCombine(pszSrc);
  if ( v5 >= 0 )
    return (unsigned int)SdbpGetPathAppPatch(a1, a2);
  else
    AslLogCallPrintf(1, (unsigned int)"SdbpGetPathMergeSource", 1136, (unsigned int)"AslPathCombine failed [%x]");
  return (unsigned int)v5;
}
