/*
 * XREFs of SdbpCleanupUserSDBCache @ 0x1409D630C
 * Callers:
 *     SdbReleaseDatabase @ 0x1409D5F00 (SdbReleaseDatabase.c)
 * Callees:
 *     SdbpRemoveSDBLookupEntry @ 0x1409D8210 (SdbpRemoveSDBLookupEntry.c)
 */

void __fastcall SdbpCleanupUserSDBCache(__int64 a1)
{
  __int64 i; // rax

  if ( a1 )
  {
    for ( i = *(_QWORD *)(a1 + 576); i; i = *(_QWORD *)(a1 + 576) )
      SdbpRemoveSDBLookupEntry(a1, i);
  }
}
