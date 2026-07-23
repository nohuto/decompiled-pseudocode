/*
 * XREFs of KeSetSchedulingGroupCpuRates @ 0x14043DDE8
 * Callers:
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14043E128 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14043E3E4 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     EtwTraceSchedulingGroup @ 0x1406C8A9C (EtwTraceSchedulingGroup.c)
 */

void __fastcall KeSetSchedulingGroupCpuRates(__int64 a1, struct _KSCHEDULING_GROUP **a2, _KSCHEDULING_GROUP_POLICY *a3)
{
  struct _LIST_ENTRY *v5; // rdi
  unsigned int AllFlags; // eax
  unsigned int Flink_low; // edx
  _KSCHEDULING_GROUP *Parent; // rcx
  struct _LIST_ENTRY *p_ChildList; // r9
  struct _LIST_ENTRY *Flink; // r8
  int v11; // r10d
  int v12; // r11d
  unsigned int v13; // ebx
  _KSCHEDULING_GROUP *v14; // rcx
  unsigned int ChildMinWeight; // ebp
  struct _LIST_ENTRY *v16; // r14
  struct _LIST_ENTRY *v17; // rbx
  struct _KSCHEDULING_GROUP *v18; // rcx
  unsigned int v19; // edx
  _KSCHEDULING_GROUP *v20; // rcx
  struct _LIST_ENTRY *v21; // r9
  struct _LIST_ENTRY *v22; // r8
  int v23; // r10d
  unsigned int v24; // r11d
  _KSCHEDULING_GROUP *v25; // rdx
  unsigned int ChildMinRate; // r8d
  struct _LIST_ENTRY *v27; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v5 = &KiSchedulingGroupList;
  AllFlags = (*a2)->Policy.AllFlags;
  if ( (AllFlags & 1) == 0 )
  {
    Flink_low = 9;
    (*a2)->Policy.AllFlags = AllFlags | 1;
    Parent = (*a2)->Parent;
    p_ChildList = &Parent->ChildList;
    if ( !Parent )
      p_ChildList = &KiSchedulingGroupList;
    Flink = p_ChildList->Flink;
    v11 = 0;
    v12 = 0;
    do
    {
      v13 = Flink_low;
      if ( (HIDWORD(Flink[-4].Flink) & 1) == 0 )
      {
        Flink_low = LOWORD(Flink[-4].Flink);
        ++v12;
        v11 += Flink_low;
        if ( Flink_low >= v13 )
          Flink_low = v13;
      }
      Flink = Flink->Flink;
    }
    while ( Flink != p_ChildList );
    if ( v12 )
    {
      if ( Parent )
      {
        Parent->ChildMinWeight = Flink_low;
        Parent->ChildTotalWeight = v11;
      }
      else
      {
        KiGroupSchedulingMinimumWeight = Flink_low;
        KiGroupSchedulingTotalWeight = v11;
      }
    }
    else if ( Parent )
    {
      *(_QWORD *)&Parent->ChildMinWeight = 0LL;
    }
    else
    {
      KiGroupSchedulingMinimumWeight = 0;
      KiGroupSchedulingTotalWeight = 0;
    }
    v14 = (*a2)->Parent;
    if ( v14 )
    {
      if ( !v14->ChildTotalWeight )
        goto LABEL_18;
      ChildMinWeight = v14->ChildMinWeight;
      v16 = &v14->ChildList;
      v17 = v14->ChildList.Flink;
    }
    else
    {
      if ( !KiGroupSchedulingTotalWeight )
        goto LABEL_18;
      ChildMinWeight = KiGroupSchedulingMinimumWeight;
      v16 = &KiSchedulingGroupList;
      v17 = KiSchedulingGroupList.Flink;
    }
    do
    {
      v18 = (struct _KSCHEDULING_GROUP *)&v17[-4];
      if ( (HIDWORD(v17[-4].Flink) & 1) == 0 )
      {
        v18->RelativeWeight = (v18->Policy.Weight << 7) / ChildMinWeight;
        KiUpdateCpuTargetByWeight(v18, 0);
      }
      v17 = v17->Flink;
    }
    while ( v17 != v16 );
  }
LABEL_18:
  (*a2)->Policy = *a3;
  KiUpdateCpuTargetByRate(*a2, 1u);
  v19 = 10000;
  v20 = (*a2)->Parent;
  v21 = &v20->ChildList;
  if ( !v20 )
    v21 = &KiSchedulingGroupList;
  v22 = v21->Flink;
  v23 = 0;
  do
  {
    v24 = v19;
    if ( (HIDWORD(v22[-4].Flink) & 1) != 0 )
    {
      v19 = LOWORD(v22[-4].Flink);
      ++v23;
      if ( v19 >= v24 )
        v19 = v24;
    }
    v22 = v22->Flink;
  }
  while ( v22 != v21 );
  if ( v23 )
  {
    if ( v20 )
      v20->ChildMinRate = v19;
    else
      KiGroupSchedulingMinimumRate = v19;
  }
  else if ( v20 )
  {
    v20->ChildMinRate = 0;
  }
  else
  {
    KiGroupSchedulingMinimumRate = 0;
  }
  v25 = (*a2)->Parent;
  if ( v25 )
  {
    ChildMinRate = v25->ChildMinRate;
    v5 = &v25->ChildList;
    v27 = v25->ChildList.Flink;
  }
  else
  {
    ChildMinRate = KiGroupSchedulingMinimumRate;
    v27 = KiSchedulingGroupList.Flink;
  }
  do
  {
    if ( (HIDWORD(v27[-4].Flink) & 1) != 0 )
      LODWORD(v27[-4].Blink) = (LOWORD(v27[-4].Flink) << 7) / ChildMinRate;
    v27 = v27->Flink;
  }
  while ( v27 != v5 );
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (WORD2(xmmword_140FC0C10) & 0x4000) != 0 )
    EtwTraceSchedulingGroup(*a2, 1380LL);
}
