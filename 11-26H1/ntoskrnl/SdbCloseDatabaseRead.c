/*
 * XREFs of SdbCloseDatabaseRead @ 0x1409D6398
 * Callers:
 *     SdbpCloseLocalDatabaseEx @ 0x14088C524 (SdbpCloseLocalDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x14088D444 (SdbpOpenCompressedDatabase.c)
 *     SdbReleaseDatabase @ 0x1409D5F00 (SdbReleaseDatabase.c)
 *     SdbInitDatabaseInMemory @ 0x1409D6974 (SdbInitDatabaseInMemory.c)
 * Callees:
 *     AslHashFree @ 0x140891464 (AslHashFree.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslFileMappingDelete @ 0x1409D772C (AslFileMappingDelete.c)
 */

void __fastcall SdbCloseDatabaseRead(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  void *v4; // rdx
  void *v5; // rdx

  v1 = *(_QWORD *)(a1 + 2640);
  v2 = (_QWORD *)a1;
  if ( v1 && *(_DWORD *)(v1 + 16) == 1 )
  {
    v4 = *(void **)(v1 + 8);
    if ( v4 )
      AslFree(a1, v4);
    AslFree(a1, (void *)v2[330]);
    a1 = v2[331];
    v2[330] = 0LL;
    if ( a1 )
    {
      AslHashFree(a1);
      v2[331] = 0LL;
    }
  }
  if ( (v2[3] & 9) == 9 )
  {
    v5 = (void *)v2[1];
    if ( v5 )
    {
      AslFree(a1, v5);
      v2[1] = 0LL;
      *((_DWORD *)v2 + 5) = 0;
    }
  }
  AslFileMappingDelete(*v2);
  AslFree(v3, v2);
}
