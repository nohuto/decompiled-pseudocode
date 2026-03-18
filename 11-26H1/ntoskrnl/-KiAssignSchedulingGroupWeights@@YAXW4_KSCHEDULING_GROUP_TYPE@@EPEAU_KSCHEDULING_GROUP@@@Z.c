/*
 * XREFs of ?KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z @ 0x140445568
 * Callers:
 *     KeInsertSchedulingGroup @ 0x140444BD0 (KeInsertSchedulingGroup.c)
 *     KeSetSchedulingGroupWeights @ 0x14044506C (KeSetSchedulingGroupWeights.c)
 *     KeRemoveSchedulingGroup @ 0x1404C61B4 (KeRemoveSchedulingGroup.c)
 *     KeUpdateGroupSchedulingConstants @ 0x1405F9184 (KeUpdateGroupSchedulingConstants.c)
 * Callees:
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x140445624 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 */

struct _LIST_ENTRY *__fastcall KiAssignSchedulingGroupWeights(int a1, unsigned __int8 a2, __int64 a3)
{
  unsigned int v5; // ebx
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v7; // rsi
  struct _KSCHEDULING_GROUP *v8; // rcx
  struct _LIST_ENTRY *result; // rax

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
        return result;
      v5 = *(_DWORD *)(a3 + 16);
    }
    else
    {
      if ( !KiGroupSchedulingTotalWeight )
        return result;
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
    result = Flink->Flink;
    Flink = result;
  }
  while ( result != v7 );
  return result;
}
