/*
 * XREFs of KsepSdbBootRelease @ 0x1407C1674
 * Callers:
 *     KseShimDatabaseBootRelease @ 0x140B51C54 (KseShimDatabaseBootRelease.c)
 *     KseShimDatabaseBootInitialize @ 0x140CD3BC0 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404DC150 (KsepPoolFreePaged.c)
 *     SdbReleaseDatabase @ 0x1409D5F00 (SdbReleaseDatabase.c)
 */

void __fastcall KsepSdbBootRelease(_QWORD *a1)
{
  void *v2; // rcx

  if ( *a1 )
  {
    SdbReleaseDatabase();
    *a1 = 0LL;
  }
  v2 = (void *)a1[1];
  if ( v2 )
  {
    KsepPoolFreePaged(v2);
    a1[1] = 0LL;
  }
}
