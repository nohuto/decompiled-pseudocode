/*
 * XREFs of SdbpCleanupUserSDBCache @ 0x1409E69FC
 * Callers:
 *     SdbReleaseDatabase @ 0x1409E6F28 (SdbReleaseDatabase.c)
 * Callees:
 *     SdbpRemoveSDBLookupEntry @ 0x1409E4CB0 (SdbpRemoveSDBLookupEntry.c)
 */

void __fastcall SdbpCleanupUserSDBCache(__int64 a1)
{
  _QWORD **i; // rax

  if ( a1 )
  {
    for ( i = *(_QWORD ***)(a1 + 576); i; i = *(_QWORD ***)(a1 + 576) )
      SdbpRemoveSDBLookupEntry(a1, i);
  }
}
