/*
 * XREFs of AslPathGetFileNamePart @ 0x14088FAA0
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x140886EF0 (SdbGetMergeRedirectPath.c)
 *     SdbOpenDatabaseEx @ 0x140887068 (SdbOpenDatabaseEx.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x140887904 (SdbpGetMergeRedirectPathInternal.c)
 * Callees:
 *     wcsrchr @ 0x14053A7D0 (wcsrchr.c)
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
