/*
 * XREFs of SdbpRemoveSDBLookupEntry @ 0x1409D8210
 * Callers:
 *     SdbpCleanupUserSDBCache @ 0x1409D630C (SdbpCleanupUserSDBCache.c)
 * Callees:
 *     AslFree @ 0x1409D6144 (AslFree.c)
 */

void __fastcall SdbpRemoveSDBLookupEntry(__int64 a1, __int64 *a2)
{
  if ( (__int64 *)a2[1] == a2 )
  {
    *(_QWORD *)(a1 + 576) = 0LL;
  }
  else
  {
    if ( *(__int64 **)(a1 + 576) == a2 )
      *(_QWORD *)(a1 + 576) = *a2;
    *(_QWORD *)a2[1] = *a2;
    a1 = *a2;
    *(_QWORD *)(*a2 + 8) = a2[1];
  }
  AslFree(a1, a2);
}
