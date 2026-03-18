/*
 * XREFs of SdbCloseDatabaseRead @ 0x1409E6930
 * Callers:
 *     SdbpCloseLocalDatabaseEx @ 0x140886124 (SdbpCloseLocalDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x140887044 (SdbpOpenCompressedDatabase.c)
 *     SdbInitDatabaseInMemory @ 0x1409E62EC (SdbInitDatabaseInMemory.c)
 *     SdbReleaseDatabase @ 0x1409E6F28 (SdbReleaseDatabase.c)
 * Callees:
 *     AslHashFree @ 0x14088B068 (AslHashFree.c)
 *     AslFileMappingDelete @ 0x1409E56C8 (AslFileMappingDelete.c)
 *     AslFree @ 0x1409E6BD8 (AslFree.c)
 */

__int64 __fastcall SdbCloseDatabaseRead(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx

  v1 = *(_QWORD *)(a1 + 2640);
  v2 = a1;
  if ( v1 && *(_DWORD *)(v1 + 16) == 1 )
  {
    v5 = *(_QWORD *)(v1 + 8);
    if ( v5 )
      AslFree(a1, v5);
    AslFree(a1, *(_QWORD *)(v2 + 2640));
    a1 = *(_QWORD *)(v2 + 2648);
    *(_QWORD *)(v2 + 2640) = 0LL;
    if ( a1 )
    {
      AslHashFree(a1);
      *(_QWORD *)(v2 + 2648) = 0LL;
    }
  }
  if ( (*(_BYTE *)(v2 + 24) & 9) == 9 )
  {
    v6 = *(_QWORD *)(v2 + 8);
    if ( v6 )
    {
      AslFree(a1, v6);
      *(_QWORD *)(v2 + 8) = 0LL;
      *(_DWORD *)(v2 + 20) = 0;
    }
  }
  AslFileMappingDelete(*(_QWORD **)v2);
  return AslFree(v3, v2);
}
