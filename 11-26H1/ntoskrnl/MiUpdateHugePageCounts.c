/*
 * XREFs of MiUpdateHugePageCounts @ 0x1406F2AC0
 * Callers:
 *     MiInsertHugeRangeInList @ 0x1404881AC (MiInsertHugeRangeInList.c)
 *     MiAddPartitionHugeRange @ 0x1406EFCE8 (MiAddPartitionHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x1406F0BA4 (MiHotRemoveHugeRange.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x1406F1D1C (MiMoveBadHugeRangeCrossPartition.c)
 *     MiSetHugeRangePartitionId @ 0x1406F26E0 (MiSetHugeRangePartitionId.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
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
