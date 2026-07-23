/*
 * XREFs of KeRemoveSchedulingGroup @ 0x1404BFB64
 * Callers:
 *     PspEstablishDfssHierarchy @ 0x1407FDD54 (PspEstablishDfssHierarchy.c)
 *     PspEstablishJobHierarchy @ 0x1407FDE6C (PspEstablishJobHierarchy.c)
 *     PsSessionObjectDelete @ 0x140804C20 (PsSessionObjectDelete.c)
 *     PspRemoveCpuRateControl @ 0x1409B8BE8 (PspRemoveCpuRateControl.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ?KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z @ 0x14043E070 (-KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z.c)
 *     ?KiUpdateMinimumWeight@@YAEW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z @ 0x1404BFDCC (-KiUpdateMinimumWeight@@YAEW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z.c)
 *     ?KiFlushScbReferences@@YAXPEAU_KPRCB@@PEAU_KSCB@@@Z @ 0x1405FB940 (-KiFlushScbReferences@@YAXPEAU_KPRCB@@PEAU_KSCB@@@Z.c)
 *     EtwTraceSchedulingGroup @ 0x1406C8A9C (EtwTraceSchedulingGroup.c)
 */

__int64 __fastcall KeRemoveSchedulingGroup(unsigned __int16 *a1)
{
  __int64 v2; // rdx
  unsigned __int16 **v3; // rcx
  struct _KPRCB **v4; // r14
  __int64 v5; // rbp
  __int64 v6; // r15
  char v7; // r13
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rbp
  unsigned __int16 *v11; // rdi
  _OWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  _OWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // edi
  __int64 v20; // r8
  __int64 v21; // r8
  int v23; // eax
  struct _KSCB *v24; // rbx
  __int64 v25; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  int v27; // [rsp+80h] [rbp+8h] BYREF
  __int64 v28; // [rsp+88h] [rbp+10h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v2 = *((_QWORD *)a1 + 8);
  v3 = (unsigned __int16 **)*((_QWORD *)a1 + 9);
  if ( *(unsigned __int16 **)(v2 + 8) != a1 + 32 || *v3 != a1 + 32 )
LABEL_22:
    __fastfail(3u);
  *v3 = (unsigned __int16 *)v2;
  v4 = (struct _KPRCB **)KiProcessorBlock;
  v5 = 0LL;
  *(_QWORD *)(v2 + 8) = v3;
  v6 = (unsigned int)KeNumberProcessors_0;
  v7 = 0;
  v8 = *((_QWORD *)a1 + 13);
  v9 = 0LL;
  v28 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    do
    {
      v10 = KiProcessorBlock[v9];
      v27 = 0;
      v11 = &a1[232 * (unsigned int)v9];
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v27);
        while ( *(_QWORD *)(v10 + 48) );
      }
      if ( _bittest16((const signed __int16 *)v11 + 128, 9u) )
      {
        v12 = v11 + 108;
        v13 = *((_QWORD *)v11 + 27);
        v14 = (_QWORD *)*((_QWORD *)v11 + 28);
        if ( *(unsigned __int16 **)(v13 + 8) != v11 + 108 || (_OWORD *)*v14 != v12 )
          goto LABEL_22;
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        *v12 = 0LL;
      }
      v15 = v11 + 100;
      v16 = *((_QWORD *)v11 + 25);
      v17 = (_QWORD *)*((_QWORD *)v11 + 26);
      if ( *(unsigned __int16 **)(v16 + 8) != v11 + 100 || (_OWORD *)*v17 != v15 )
        goto LABEL_22;
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      *v15 = 0LL;
      if ( (v11[128] & 0x100) != 0 )
        v7 = 1;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 48), 0LL);
      v9 = (unsigned int)(v9 + 1);
      v18 = *((_QWORD *)v11 + 23) + v28;
      v28 = v18;
    }
    while ( (unsigned int)v9 < (unsigned int)v6 );
    v5 = v18;
  }
  v19 = *((_DWORD *)a1 + 1) & 1;
  if ( !v19 )
  {
    v23 = *a1;
    if ( !v8 )
    {
      KiGroupSchedulingTotalWeight -= v23;
      goto LABEL_18;
    }
    *(_DWORD *)(v8 + 20) -= v23;
LABEL_23:
    if ( *(_QWORD *)(v8 + 88) == v8 + 88 )
    {
      *(_QWORD *)(v8 + 12) = 0LL;
      goto LABEL_27;
    }
    v20 = v8;
    goto LABEL_25;
  }
  if ( v8 )
    goto LABEL_23;
LABEL_18:
  if ( KiSchedulingGroupList.Flink == &KiSchedulingGroupList )
  {
    KiGroupSchedulingMinimumWeight = 0;
    KiGroupSchedulingMinimumRate = 0;
    goto LABEL_27;
  }
  v20 = 0LL;
LABEL_25:
  if ( (unsigned __int8)KiUpdateMinimumWeight(v19, 0LL, v20, 1LL) || !v19 )
    KiAssignSchedulingGroupWeights(v19, 0, v21);
LABEL_27:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v7 && (_DWORD)v6 )
  {
    v24 = (struct _KSCB *)(a1 + 64);
    v25 = v6;
    do
    {
      KiFlushScbReferences(*v4++, v24++);
      --v25;
    }
    while ( v25 );
  }
  if ( (WORD2(xmmword_140FC0C10) & 0x4000) != 0 )
    EtwTraceSchedulingGroup(a1, 1379LL);
  return v5;
}
