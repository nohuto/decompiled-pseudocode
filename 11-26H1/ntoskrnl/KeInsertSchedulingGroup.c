/*
 * XREFs of KeInsertSchedulingGroup @ 0x14043D6E0
 * Callers:
 *     PspEstablishDfssHierarchy @ 0x1407FDD54 (PspEstablishDfssHierarchy.c)
 *     PspEstablishJobHierarchy @ 0x1407FDE6C (PspEstablishJobHierarchy.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1409B8904 (PspAddSchedulingGroupToJobChain.c)
 *     PspSessionObjectCreate @ 0x140B2F734 (PspSessionObjectCreate.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ?KiInitializeScb@@YAXPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@1K@Z @ 0x14043DA94 (-KiInitializeScb@@YAXPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@1K@Z.c)
 *     ?KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z @ 0x14043E070 (-KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14043E128 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14043E3E4 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiEnableGroupScheduling@@YAXXZ @ 0x1405FB85C (-KiEnableGroupScheduling@@YAXXZ.c)
 *     EtwTraceSchedulingGroup @ 0x1406C8A9C (EtwTraceSchedulingGroup.c)
 */

void __fastcall KeInsertSchedulingGroup(
        struct _KSCHEDULING_GROUP *a1,
        _KSCHEDULING_GROUP_POLICY a2,
        struct _KSCHEDULING_GROUP *a3)
{
  unsigned int v3; // r12d
  LARGE_INTEGER v7; // rdx
  $DCE0BC54C22BCBB6A9A9326B544225A4 *v8; // r14
  unsigned int v9; // ebp
  struct _LIST_ENTRY *p_ChildList; // r15
  struct _LIST_ENTRY *v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  struct _LIST_ENTRY *Blink; // rcx
  unsigned int v15; // r13d
  __int64 v16; // r14
  char *v17; // rbp
  char *v18; // rcx
  bool v19; // zf
  unsigned int ChildMinRate; // ecx
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int v22; // edi
  struct _LIST_ENTRY *v23; // rbx
  struct _KSCHEDULING_GROUP *v24; // rcx
  unsigned int ChildMinWeight; // ecx
  _DWORD *v26; // rax
  int Weight; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  int v29; // [rsp+80h] [rbp+8h] BYREF
  _KSCHEDULING_GROUP_POLICY v30; // [rsp+88h] [rbp+10h]
  char *v31; // [rsp+90h] [rbp+18h]

  v30 = a2;
  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !KiGroupSchedulingEnabled )
    KiEnableGroupScheduling();
  a1->Policy = a2;
  a1->NotificationCycles = 0LL;
  *(_QWORD *)&a1->ChildMinRate = 0LL;
  a1->ChildTotalWeight = 0;
  a1->QueryHistoryTimeStamp = KeQueryPerformanceCounter(0LL).QuadPart;
  v8 = &a1->64;
  v9 = 0;
  a1->ChildList.Blink = &a1->ChildList;
  a1->ChildList.Flink = &a1->ChildList;
  a1->SchedulingGroupList.Blink = &a1->SchedulingGroupList;
  a1->SchedulingGroupList.Flink = &a1->SchedulingGroupList;
  a1->Parent = 0LL;
  a1->MaxQuotaLimitCycles = 0LL;
  a1->MaxQuotaTracker.CyclesRemaining = 0LL;
  for ( a1->MaxQuotaTracker.LastRefill = 0LL; v9 < KeMaximumProcessors; ++v9 )
    KiInitializeScb(&a1->PerProcessor[v9], (struct _KSCHEDULING_GROUP *)v7.QuadPart, a3, v9);
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  p_ChildList = &KiSchedulingGroupList;
  if ( a3 )
  {
    a1->Parent = a3;
    Blink = a3->ChildList.Blink;
    if ( Blink->Flink != &a3->ChildList )
      goto LABEL_9;
    v8->SchedulingGroupList.Flink = &a3->ChildList;
    a1->SchedulingGroupList.Blink = Blink;
    Blink->Flink = &v8->SchedulingGroupList;
    a3->ChildList.Blink = &v8->SchedulingGroupList;
  }
  else
  {
    v11 = KiSchedulingGroupList.Blink;
    if ( KiSchedulingGroupList.Blink->Flink != &KiSchedulingGroupList )
      goto LABEL_9;
    v8->SchedulingGroupList.Flink = &KiSchedulingGroupList;
    a1->SchedulingGroupList.Blink = v11;
    v11->Flink = &v8->SchedulingGroupList;
    KiSchedulingGroupList.Blink = &a1->SchedulingGroupList;
  }
  v15 = KeNumberProcessors_0;
  v31 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      v16 = KiProcessorBlock[v3];
      v17 = (char *)a1 + 464 * v3;
      if ( *(_QWORD *)(v16 + 36480) )
      {
        if ( *(_BYTE *)(v16 + 209) == *(_BYTE *)(*(_QWORD *)(v16 + 36488) + 705LL) )
        {
          *((_WORD *)v17 + 128) |= 0x40u;
          v18 = v17 + 280;
          v31 = v17 + 280;
        }
        else
        {
          v18 = v31;
        }
        *((_QWORD *)v17 + 34) = v18;
      }
      v29 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v29);
        while ( *(_QWORD *)(v16 + 48) );
      }
      v12 = *(_QWORD **)(v16 + 35536);
      v13 = v17 + 200;
      if ( *v12 != v16 + 35528 )
        break;
      v19 = (v30.AllFlags & 4) == 0;
      *v13 = v16 + 35528;
      *((_QWORD *)v17 + 26) = v12;
      *v12 = v13;
      *(_QWORD *)(v16 + 35536) = v13;
      if ( !v19 )
      {
        *((_WORD *)v17 + 128) |= 0xCu;
        v26 = (_DWORD *)*((_QWORD *)v17 + 34);
        *((_DWORD *)v17 + 67) = 1;
        if ( v26 )
          ++*v26;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 48), 0LL);
      if ( ++v3 >= v15 )
        goto LABEL_23;
    }
LABEL_9:
    __fastfail(3u);
  }
LABEL_23:
  if ( (a1->Policy.AllFlags & 1) != 0 )
  {
    if ( a3 )
    {
      ChildMinRate = a3->ChildMinRate;
      if ( !ChildMinRate || (Weight = a2.Weight, a2.Weight < ChildMinRate) )
      {
        a3->ChildMinRate = a2.Weight;
        KiAssignSchedulingGroupWeights(1LL, 0LL, a3);
LABEL_30:
        KiUpdateCpuTargetByRate(a1, 0);
        goto LABEL_31;
      }
    }
    else
    {
      ChildMinRate = KiGroupSchedulingMinimumRate;
      if ( !KiGroupSchedulingMinimumRate || (Weight = a2.Weight, a2.Weight < (unsigned int)KiGroupSchedulingMinimumRate) )
      {
        Flink = KiSchedulingGroupList.Flink;
        KiGroupSchedulingMinimumRate = a2.Weight;
        do
        {
          if ( (HIDWORD(Flink[-4].Flink) & 1) != 0 )
            LODWORD(Flink[-4].Blink) = (LOWORD(Flink[-4].Flink) << 7) / (unsigned int)a2.Weight;
          Flink = Flink->Flink;
        }
        while ( Flink != &KiSchedulingGroupList );
        goto LABEL_30;
      }
    }
    a1->RelativeWeight = (Weight << 7) / ChildMinRate;
    goto LABEL_30;
  }
  if ( a3 )
  {
    ChildMinWeight = a3->ChildMinWeight;
    if ( !ChildMinWeight || a2.Weight < ChildMinWeight )
      a3->ChildMinWeight = a2.Weight;
    a3->ChildTotalWeight += a2.Weight;
    if ( a3->ChildTotalWeight )
    {
      p_ChildList = &a3->ChildList;
      v22 = a3->ChildMinWeight;
      v23 = p_ChildList->Flink;
      do
      {
LABEL_38:
        v24 = (struct _KSCHEDULING_GROUP *)&v23[-4];
        if ( (HIDWORD(v23[-4].Flink) & 1) == 0 )
        {
          v24->RelativeWeight = (v24->Policy.Weight << 7) / v22;
          KiUpdateCpuTargetByWeight(v24, 0);
        }
        v23 = v23->Flink;
      }
      while ( v23 != p_ChildList );
    }
  }
  else
  {
    v22 = KiGroupSchedulingMinimumWeight;
    if ( !KiGroupSchedulingMinimumWeight || a2.Weight < (unsigned int)KiGroupSchedulingMinimumWeight )
    {
      v22 = a2.Weight;
      KiGroupSchedulingMinimumWeight = a2.Weight;
    }
    KiGroupSchedulingTotalWeight += a2.Weight;
    if ( KiGroupSchedulingTotalWeight )
    {
      v23 = KiSchedulingGroupList.Flink;
      goto LABEL_38;
    }
  }
LABEL_31:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (WORD2(xmmword_140FC0C10) & 0x4000) != 0 )
    EtwTraceSchedulingGroup(a1, 1378LL);
}
