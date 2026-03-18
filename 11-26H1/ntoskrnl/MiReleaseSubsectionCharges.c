/*
 * XREFs of MiReleaseSubsectionCharges @ 0x14036E8BC
 * Callers:
 *     MiInsertUnusedSubsectionInternal @ 0x14036E724 (MiInsertUnusedSubsectionInternal.c)
 * Callees:
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x140512248 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiReleaseSubsectionCharges(_DWORD *a1)
{
  __int64 v2; // rcx

  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x30000000) == 0x10000000 )
    return 0LL;
  v2 = 0LL;
  if ( (a1[12] & 0x3FFFFFFF) != 0 )
  {
    MiUpdateSubsectionCrossPartitionRefs(a1, 0LL);
    return (unsigned int)(a1[11] - a1[13]);
  }
  return v2;
}
