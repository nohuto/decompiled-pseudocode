/*
 * XREFs of KeSetSchedulingGroupWeights @ 0x14043DB7C
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x1406178F8 (PsSetCpuQuotaInformation.c)
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ?KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z @ 0x14043E070 (-KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14043E128 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     EtwTraceSchedulingGroup @ 0x1406C8A9C (EtwTraceSchedulingGroup.c)
 */

void __fastcall KeSetSchedulingGroupWeights(unsigned int a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  struct _LIST_ENTRY *v6; // r14
  unsigned int v7; // edx
  __int64 v8; // rcx
  struct _LIST_ENTRY *v9; // r10
  struct _LIST_ENTRY *v10; // r8
  int v11; // r9d
  int v12; // r11d
  unsigned int v13; // ebx
  __int64 v14; // rcx
  unsigned int v15; // esi
  struct _LIST_ENTRY *v16; // rbx
  struct _KSCHEDULING_GROUP *v17; // rcx
  _QWORD *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // r15
  int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rcx
  int v24; // r11d
  struct _LIST_ENTRY *v25; // r9
  struct _LIST_ENTRY *Flink; // r8
  int v27; // r10d
  unsigned int Flink_low; // eax
  _QWORD *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v6 = &KiSchedulingGroupList;
  if ( (_DWORD)v3 )
  {
    v18 = a2;
    v19 = a3 - (_QWORD)a2;
    v20 = v3;
    do
    {
      v21 = *(_DWORD *)(*v18 + 4LL);
      if ( (v21 & 1) != 0 )
      {
        v22 = 10000;
        *(_DWORD *)(*v18 + 4LL) = v21 & 0xFFFFFFFE;
        v23 = *(_QWORD *)(*v18 + 104LL);
        if ( v23 )
        {
          v24 = *(_DWORD *)(v23 + 12);
          v25 = (struct _LIST_ENTRY *)(v23 + 88);
        }
        else
        {
          v24 = KiGroupSchedulingMinimumRate;
          v25 = &KiSchedulingGroupList;
        }
        Flink = v25->Flink;
        v27 = 0;
        do
        {
          if ( (HIDWORD(Flink[-4].Flink) & 1) != 0 )
          {
            Flink_low = LOWORD(Flink[-4].Flink);
            if ( Flink_low == v24 )
              goto LABEL_35;
            if ( Flink_low < v22 )
              v22 = LOWORD(Flink[-4].Flink);
            ++v27;
          }
          Flink = Flink->Flink;
        }
        while ( Flink != v25 );
        if ( v27 )
        {
          if ( v23 )
            *(_DWORD *)(v23 + 12) = v22;
          else
            KiGroupSchedulingMinimumRate = v22;
        }
        else if ( v23 )
        {
          *(_DWORD *)(v23 + 12) = 0;
        }
        else
        {
          KiGroupSchedulingMinimumRate = 0;
        }
        KiAssignSchedulingGroupWeights(1LL, 0LL, *(_QWORD *)(*v18 + 104LL));
      }
LABEL_35:
      v29 = (_QWORD *)*v18;
      v30 = *(_QWORD *)((char *)v18++ + v19);
      *v29 = v30;
      --v20;
    }
    while ( v20 );
  }
  v7 = 9;
  v8 = *(_QWORD *)(*a2 + 104LL);
  v9 = (struct _LIST_ENTRY *)(v8 + 88);
  if ( !v8 )
    v9 = &KiSchedulingGroupList;
  v10 = v9->Flink;
  v11 = 0;
  v12 = 0;
  do
  {
    v13 = v7;
    if ( (HIDWORD(v10[-4].Flink) & 1) == 0 )
    {
      v7 = LOWORD(v10[-4].Flink);
      ++v12;
      v11 += v7;
      if ( v7 >= v13 )
        v7 = v13;
    }
    v10 = v10->Flink;
  }
  while ( v10 != v9 );
  if ( v12 )
  {
    if ( v8 )
    {
      *(_DWORD *)(v8 + 16) = v7;
      *(_DWORD *)(v8 + 20) = v11;
    }
    else
    {
      KiGroupSchedulingMinimumWeight = v7;
      KiGroupSchedulingTotalWeight = v11;
    }
  }
  else if ( v8 )
  {
    *(_QWORD *)(v8 + 16) = 0LL;
  }
  else
  {
    KiGroupSchedulingMinimumWeight = 0;
    KiGroupSchedulingTotalWeight = 0;
  }
  v14 = *(_QWORD *)(*a2 + 104LL);
  if ( v14 )
  {
    if ( !*(_DWORD *)(v14 + 20) )
      goto LABEL_18;
    v15 = *(_DWORD *)(v14 + 16);
    v6 = (struct _LIST_ENTRY *)(v14 + 88);
    v16 = *(struct _LIST_ENTRY **)(v14 + 88);
  }
  else
  {
    if ( !KiGroupSchedulingTotalWeight )
      goto LABEL_18;
    v15 = KiGroupSchedulingMinimumWeight;
    v16 = KiSchedulingGroupList.Flink;
  }
  do
  {
    v17 = (struct _KSCHEDULING_GROUP *)&v16[-4];
    if ( (HIDWORD(v16[-4].Flink) & 1) == 0 )
    {
      v17->RelativeWeight = (v17->Policy.Weight << 7) / v15;
      KiUpdateCpuTargetByWeight(v17, 1u);
    }
    v16 = v16->Flink;
  }
  while ( v16 != v6 );
LABEL_18:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (WORD2(xmmword_140FC0C10) & 0x4000) != 0 && (_DWORD)v3 )
  {
    v31 = v3;
    do
    {
      EtwTraceSchedulingGroup(*a2++, 1380LL);
      --v31;
    }
    while ( v31 );
  }
}
