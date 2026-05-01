/*
 * XREFs of AslFileMappingDelete @ 0x18009A30C
 * Callers:
 *     SdbCloseDatabaseRead @ 0x18008D3D4 (SdbCloseDatabaseRead.c)
 *     SdbOpenDatabaseEx @ 0x18008DAA0 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingFiles @ 0x180094C30 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x1800956FC (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x180095C10 (SdbpCheckMatchingWildcardFiles.c)
 *     AslFileMappingCreate @ 0x18009A09C (AslFileMappingCreate.c)
 * Callees:
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     RtlFileMapFree @ 0x18009AA74 (RtlFileMapFree.c)
 */

BOOLEAN __fastcall AslFileMappingDelete(__int64 a1)
{
  void *v2; // rdx
  BOOLEAN result; // al

  if ( a1 )
  {
    RtlFileMapFree(a1 + 8);
    v2 = *(void **)(a1 + 64);
    if ( v2 )
    {
      AslFree(NtCurrentPeb()->ProcessHeap, v2);
      *(_QWORD *)(a1 + 64) = 0LL;
    }
    if ( *(_QWORD *)a1 )
    {
      AslFree(NtCurrentPeb()->ProcessHeap, *(void **)a1);
      *(_QWORD *)a1 = 0LL;
    }
    return AslFree(NtCurrentPeb()->ProcessHeap, (void *)a1);
  }
  return result;
}
