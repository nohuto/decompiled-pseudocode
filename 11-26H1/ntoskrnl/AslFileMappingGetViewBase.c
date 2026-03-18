/*
 * XREFs of AslFileMappingGetViewBase @ 0x140888F98
 * Callers:
 *     SdbOpenDatabaseEx @ 0x140880C68 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140883550 (SdbpCheckMatchingTextEntry.c)
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
