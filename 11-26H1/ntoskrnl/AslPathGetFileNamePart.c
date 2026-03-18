/*
 * XREFs of AslPathGetFileNamePart @ 0x1408896A4
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x140880AF0 (SdbGetMergeRedirectPath.c)
 *     SdbOpenDatabaseEx @ 0x140880C68 (SdbOpenDatabaseEx.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x140881504 (SdbpGetMergeRedirectPathInternal.c)
 * Callees:
 *     wcsrchr @ 0x140538350 (wcsrchr.c)
 */

const wchar_t *__fastcall AslPathGetFileNamePart(const wchar_t *a1)
{
  wchar_t *v2; // rax

  v2 = wcsrchr(a1, 0x5Cu);
  if ( v2 )
    return v2 + 1;
  else
    return a1;
}
