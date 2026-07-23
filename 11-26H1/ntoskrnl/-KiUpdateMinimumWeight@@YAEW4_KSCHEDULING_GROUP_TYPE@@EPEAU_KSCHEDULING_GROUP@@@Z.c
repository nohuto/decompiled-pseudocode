/*
 * XREFs of ?KiUpdateMinimumWeight@@YAEW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z @ 0x1404BFDCC
 * Callers:
 *     KeRemoveSchedulingGroup @ 0x1404BFB64 (KeRemoveSchedulingGroup.c)
 * Callees:
 *     <none>
 */

char __fastcall KiUpdateMinimumWeight(int a1, char a2, _DWORD *a3)
{
  int v5; // r9d
  unsigned int v6; // ecx
  struct _LIST_ENTRY *v7; // r11
  struct _LIST_ENTRY *Flink; // rdx
  int v9; // r10d
  int v10; // ebx
  unsigned int Flink_low; // eax

  if ( a1 )
  {
    if ( a3 )
      v5 = a3[3];
    else
      v5 = KiGroupSchedulingMinimumRate;
    v6 = 10000;
  }
  else
  {
    if ( a3 )
      v5 = a3[4];
    else
      v5 = KiGroupSchedulingMinimumWeight;
    v6 = 9;
  }
  v7 = (struct _LIST_ENTRY *)(a3 + 22);
  if ( !a3 )
    v7 = &KiSchedulingGroupList;
  Flink = v7->Flink;
  v9 = 0;
  v10 = 0;
  do
  {
    if ( (HIDWORD(Flink[-4].Flink) & 1) == a1 )
    {
      if ( !a2 && LOWORD(Flink[-4].Flink) == v5 )
        return 0;
      Flink_low = LOWORD(Flink[-4].Flink);
      if ( Flink_low < v6 )
        v6 = LOWORD(Flink[-4].Flink);
      v9 += Flink_low;
      ++v10;
    }
    Flink = Flink->Flink;
  }
  while ( Flink != v7 );
  if ( a1 )
  {
    if ( v10 )
    {
      if ( a3 )
        a3[3] = v6;
      else
        KiGroupSchedulingMinimumRate = v6;
    }
    else if ( a3 )
    {
      a3[3] = 0;
    }
    else
    {
      KiGroupSchedulingMinimumRate = 0;
    }
  }
  else if ( v10 )
  {
    if ( a3 )
    {
      a3[4] = v6;
      if ( a2 )
        a3[5] = v9;
    }
    else
    {
      KiGroupSchedulingMinimumWeight = v6;
      if ( a2 )
        KiGroupSchedulingTotalWeight = v9;
    }
  }
  else if ( a3 )
  {
    *((_QWORD *)a3 + 2) = 0LL;
  }
  else
  {
    KiGroupSchedulingMinimumWeight = 0;
    KiGroupSchedulingTotalWeight = 0;
  }
  return 1;
}
