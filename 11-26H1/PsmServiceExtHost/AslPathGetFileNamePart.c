/*
 * XREFs of AslPathGetFileNamePart @ 0x18009F158
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x18008D65C (SdbGetMergeRedirectPath.c)
 *     SdbGetMergeStubPath @ 0x18008D810 (SdbGetMergeStubPath.c)
 *     SdbOpenDatabaseEx @ 0x18008DAA0 (SdbOpenDatabaseEx.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x18008E830 (SdbpGetMergeRedirectPathInternal.c)
 * Callees:
 *     <none>
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
