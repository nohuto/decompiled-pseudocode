/*
 * XREFs of KsepSdbBootRelease @ 0x1407BE614
 * Callers:
 *     KseShimDatabaseBootRelease @ 0x140B4F3C4 (KseShimDatabaseBootRelease.c)
 *     KseShimDatabaseBootInitialize @ 0x140CCDA60 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404E2A70 (KsepPoolFreePaged.c)
 *     SdbReleaseDatabase @ 0x1409E6F28 (SdbReleaseDatabase.c)
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
