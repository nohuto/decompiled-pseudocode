/*
 * XREFs of MiUpdateHugePageCounts @ 0x1406EDE20
 * Callers:
 *     MiInsertHugeRangeInList @ 0x14048E66C (MiInsertHugeRangeInList.c)
 *     MiAddPartitionHugeRange @ 0x1406EB048 (MiAddPartitionHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x1406EBF04 (MiHotRemoveHugeRange.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x1406ED07C (MiMoveBadHugeRangeCrossPartition.c)
 *     MiSetHugeRangePartitionId @ 0x1406EDA40 (MiSetHugeRangePartitionId.c)
 * Callees:
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 */

__int64 __fastcall MiUpdateHugePageCounts(__int64 a1, int a2, unsigned __int64 a3, int a4)
{
  __int64 v7; // rcx
  __int64 result; // rax

  v7 = (unsigned int)MiPageToNode((unsigned __int64)(a2 & 0x3FFFFF) << 18);
  result = *(_QWORD *)(a1 + 16);
  if ( !a4 )
    a3 = -(__int64)a3;
  _InterlockedAdd64((volatile signed __int64 *)(56320 * v7 + result + 13904), a3);
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 496), a3);
  return result;
}
