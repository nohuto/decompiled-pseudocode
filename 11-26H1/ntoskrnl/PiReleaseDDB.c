/*
 * XREFs of PiReleaseDDB @ 0x140A25E84
 * Callers:
 *     PiLookupInDDB @ 0x140A25D58 (PiLookupInDDB.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x140723930 (ZwUnmapViewOfSection.c)
 *     SdbReleaseDatabase @ 0x1409E6F28 (SdbReleaseDatabase.c)
 */

__int64 __fastcall PiReleaseDDB(__int64 *a1)
{
  __int64 v2; // rcx
  void *v3; // rdx
  void *v4; // rcx
  void *v5; // rcx

  v2 = *a1;
  if ( v2 )
    SdbReleaseDatabase(v2);
  v3 = (void *)a1[1];
  if ( v3 )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3);
  v4 = (void *)a1[2];
  if ( v4 )
    ZwClose(v4);
  v5 = (void *)a1[3];
  if ( v5 )
    ZwClose(v5);
  return 0LL;
}
