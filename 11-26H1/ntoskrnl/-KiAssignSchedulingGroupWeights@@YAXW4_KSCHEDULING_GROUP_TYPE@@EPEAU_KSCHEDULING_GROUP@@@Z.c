/*
 * XREFs of ?KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z @ 0x14043E070
 * Callers:
 *     KeInsertSchedulingGroup @ 0x14043D6E0 (KeInsertSchedulingGroup.c)
 *     KeSetSchedulingGroupWeights @ 0x14043DB7C (KeSetSchedulingGroupWeights.c)
 *     KeRemoveSchedulingGroup @ 0x1404BFB64 (KeRemoveSchedulingGroup.c)
 *     KeUpdateGroupSchedulingConstants @ 0x1405FBBA4 (KeUpdateGroupSchedulingConstants.c)
 * Callees:
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14043E128 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 */

void __fastcall KiAssignSchedulingGroupWeights(int a1, unsigned __int8 a2, __int64 a3)
{
  unsigned int v5; // edi
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v7; // rsi
  struct _KSCHEDULING_GROUP *v8; // rcx

  if ( a1 )
  {
    if ( !a3 )
    {
      v5 = KiGroupSchedulingMinimumRate;
LABEL_8:
      Flink = KiSchedulingGroupList.Flink;
      v7 = &KiSchedulingGroupList;
      goto LABEL_9;
    }
    v5 = *(_DWORD *)(a3 + 12);
  }
  else
  {
    if ( a3 )
    {
      if ( !*(_DWORD *)(a3 + 20) )
        return;
      v5 = *(_DWORD *)(a3 + 16);
    }
    else
    {
      if ( !KiGroupSchedulingTotalWeight )
        return;
      v5 = KiGroupSchedulingMinimumWeight;
    }
    if ( !a3 )
      goto LABEL_8;
  }
  v7 = (struct _LIST_ENTRY *)(a3 + 88);
  Flink = *(struct _LIST_ENTRY **)(a3 + 88);
  do
  {
LABEL_9:
    v8 = (struct _KSCHEDULING_GROUP *)&Flink[-4];
    if ( (HIDWORD(Flink[-4].Flink) & 1) == a1 )
    {
      v8->RelativeWeight = (v8->Policy.Weight << 7) / v5;
      if ( !a1 )
        KiUpdateCpuTargetByWeight(v8, a2);
    }
    Flink = Flink->Flink;
  }
  while ( Flink != v7 );
}
