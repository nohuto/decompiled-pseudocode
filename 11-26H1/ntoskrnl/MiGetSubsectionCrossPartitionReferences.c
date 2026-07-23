/*
 * XREFs of MiGetSubsectionCrossPartitionReferences @ 0x140492210
 * Callers:
 *     MiChargeSegmentCommit @ 0x14099AB90 (MiChargeSegmentCommit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionCrossPartitionReferences(_DWORD *a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0xA0) != 0x80 )
    a1 = (_DWORD *)(*(_QWORD *)a1 + 128LL);
  return a1[12] & 0x3FFFFFFF;
}
