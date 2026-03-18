/*
 * XREFs of AslFileMappingDelete @ 0x1409E56C8
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x14077E1F0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbOpenDatabaseEx @ 0x140880C68 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingFiles @ 0x1408829B0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x140883550 (SdbpCheckMatchingTextEntry.c)
 *     AslFileMappingCreateFromImageView @ 0x14088889C (AslFileMappingCreateFromImageView.c)
 *     SdbGetDatabaseMatch @ 0x1409E31A8 (SdbGetDatabaseMatch.c)
 *     AslFileMappingCreate @ 0x1409E3894 (AslFileMappingCreate.c)
 *     SdbpCheckKObject @ 0x1409E4A54 (SdbpCheckKObject.c)
 *     SdbCloseDatabaseRead @ 0x1409E6930 (SdbCloseDatabaseRead.c)
 * Callees:
 *     RtlFileMapFree @ 0x140714A50 (RtlFileMapFree.c)
 *     AslFree @ 0x1409E6BD8 (AslFree.c)
 */

__int64 __fastcall AslFileMappingDelete(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 result; // rax

  if ( a1 )
  {
    RtlFileMapFree((__int64)(a1 + 1));
    v3 = a1[9];
    if ( v3 )
    {
      AslFree(v2, v3);
      a1[9] = 0LL;
    }
    if ( *a1 )
    {
      AslFree(v2, *a1);
      *a1 = 0LL;
    }
    return AslFree(v2, a1);
  }
  return result;
}
