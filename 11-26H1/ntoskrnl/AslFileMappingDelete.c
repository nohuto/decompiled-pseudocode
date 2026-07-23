/*
 * XREFs of AslFileMappingDelete @ 0x1409D772C
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x140780CF0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbOpenDatabaseEx @ 0x140887068 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingFiles @ 0x140888DB0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x140889950 (SdbpCheckMatchingTextEntry.c)
 *     AslFileMappingCreateFromImageView @ 0x14088EC98 (AslFileMappingCreateFromImageView.c)
 *     SdbCloseDatabaseRead @ 0x1409D6398 (SdbCloseDatabaseRead.c)
 *     SdbpCheckKObject @ 0x1409D8348 (SdbpCheckKObject.c)
 *     SdbGetDatabaseMatch @ 0x140A37C6C (SdbGetDatabaseMatch.c)
 *     AslFileMappingCreate @ 0x140A37E7C (AslFileMappingCreate.c)
 * Callees:
 *     RtlFileMapFree @ 0x140719740 (RtlFileMapFree.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 */

void __fastcall AslFileMappingDelete(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rdx

  if ( a1 )
  {
    RtlFileMapFree(a1 + 8);
    v3 = *(void **)(a1 + 72);
    if ( v3 )
    {
      AslFree(v2, v3);
      *(_QWORD *)(a1 + 72) = 0LL;
    }
    if ( *(_QWORD *)a1 )
    {
      AslFree(v2, *(void **)a1);
      *(_QWORD *)a1 = 0LL;
    }
    AslFree(v2, (void *)a1);
  }
}
