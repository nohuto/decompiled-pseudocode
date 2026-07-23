/*
 * XREFs of AslFileMappingGetViewBase @ 0x14088F394
 * Callers:
 *     SdbOpenDatabaseEx @ 0x140887068 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140889950 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslFileMappingGetViewBase(__int64 a1)
{
  if ( a1 )
    return *(_QWORD *)(a1 + 32);
  else
    return 0LL;
}
