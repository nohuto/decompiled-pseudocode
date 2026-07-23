/*
 * XREFs of KeSetAffinityProcess @ 0x140505754
 * Callers:
 *     PspSetProcessAffinitySafe @ 0x140AFE330 (PspSetProcessAffinitySafe.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140BFB030 (KiInitializeDynamicProcessorDpc.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     ?KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU_KAFFINITY_EX@@PEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x1402013E4 (-KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU.c)
 *     KeQueryNodeGroupAffinity @ 0x14020183C (KeQueryNodeGroupAffinity.c)
 *     KiReleaseProcessLockExclusive @ 0x140203410 (KiReleaseProcessLockExclusive.c)
 *     KiSetUserAffinityThread @ 0x14022C114 (KiSetUserAffinityThread.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiSetIdealNodeProcessByGroup @ 0x1404ADD98 (KiSetIdealNodeProcessByGroup.c)
 *     KiNotifyAvailableCpusChangeProcess @ 0x1404D9868 (KiNotifyAvailableCpusChangeProcess.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiUpdateProcessAvailableCpuState @ 0x1405E8528 (KiUpdateProcessAvailableCpuState.c)
 *     KiSelectGroupFromNodeForAffinity @ 0x1405F27F8 (KiSelectGroupFromNodeForAffinity.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405F6B2C (KiCpuPartitionCheckAffinitization.c)
 *     KiUpdateProcessGlobalIdealNode @ 0x1405F75D4 (KiUpdateProcessGlobalIdealNode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KeSetAffinityProcess(__int64 a1, char a2, struct _KAFFINITY_EX *a3)
{
  char v6; // r13
  char v7; // r15
  char v8; // r12
  unsigned __int16 v9; // si
  __int64 v10; // rcx
  __int64 CurrentIrql; // r14
  __int64 v12; // rdx
  __int64 v14; // r15
  unsigned __int16 Count; // ax
  __int64 v16; // rdx
  __int64 v17; // rdx
  _KAFFINITY_EX *v18; // r9
  unsigned __int16 v19; // cx
  unsigned __int64 v20; // rdx
  struct _KPROCESS *j; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  struct _SINGLE_LIST_ENTRY v24; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v25; // [rsp+28h] [rbp-D8h]
  struct _KPRCB *CurrentPrcb; // [rsp+30h] [rbp-D0h]
  _KGROUP_MASK i; // [rsp+38h] [rbp-C8h]
  struct _KAFFINITY_EX v28; // [rsp+50h] [rbp-B0h] BYREF

  memset_0(&v28.8, 0, sizeof(v28.8));
  *(_QWORD *)&v28.Count = 2097153LL;
  v6 = 0;
  v24.Next = 0LL;
  v7 = 0;
  v8 = 0;
  memset_0(&v28.8, 0, sizeof(v28.8));
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 1) != 0 )
      v7 = 1;
    else
      v8 = 1;
  }
  v9 = 0;
  v10 = 0LL;
  for ( i = 0LL; (unsigned __int16)v10 < a3->Count; LOWORD(v10) = v10 + 1 )
  {
    if ( a3->Bitmap[(unsigned __int16)v10] )
      *((_BYTE *)i.Masks + ((unsigned __int64)(unsigned __int16)v10 >> 3)) |= 1 << (v10 & 7);
  }
  CurrentIrql = KeGetCurrentIrql();
  v25 = CurrentIrql;
  if ( (_BYTE)CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v10, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( v7 && (*(_DWORD *)(a1 + 136) & 0x1000) != 0 )
  {
    LOBYTE(v12) = CurrentIrql;
    KiReleaseProcessLockExclusive(a1, v12);
    return 3221225485LL;
  }
  if ( !v8 )
  {
    RtlpCopyAffinityEx(&v28, v28.Size, a3);
    RtlpCopyAffinityEx(*(struct _KAFFINITY_EX **)(a1 + 80), *(_WORD *)(*(_QWORD *)(a1 + 80) + 2LL), a3);
    v6 = 1;
    KiUpdateProcessGlobalIdealNode(a1, a3);
    v14 = KeNodeBlock[*(unsigned __int16 *)(a1 + 260)];
    Count = a3->Count;
    if ( a3->Count )
    {
      do
      {
        if ( a3->Bitmap[v9] )
        {
          if ( KeQueryNodeGroupAffinity(v14, v9) )
            v16 = v14;
          else
            v16 = 0LL;
          KiSetIdealNodeProcessByGroup(a1, v16, v9);
        }
        Count = a3->Count;
        ++v9;
      }
      while ( v9 < a3->Count );
      LOBYTE(CurrentIrql) = v25;
    }
    v17 = *(unsigned __int16 *)(a1 + 416);
    if ( (unsigned __int16)v17 >= Count || !a3->Bitmap[v17] || !KeQueryNodeGroupAffinity(v14, v17) )
      *(_WORD *)(a1 + 416) = KiSelectGroupFromNodeForAffinity(v14, a3);
LABEL_41:
    KiSelectIdealProcessorSetsForProcess(
      a1,
      *(union _KI_PROCESS_CONCURRENCY_COUNT **)(a1 + 184),
      (struct _KAFFINITY_EX *)(*(_QWORD *)(a1 + 184) + 208LL),
      (struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS *)(*(_QWORD *)(a1 + 184) + 4LL));
    for ( j = *(struct _KPROCESS **)(a1 + 48); j != (struct _KPROCESS *)(a1 + 48); j = *(struct _KPROCESS **)&j->Header.Lock )
      KiSetUserAffinityThread(
        (__int64)&j[-2].ActiveGroupsMask,
        (__int64)&v24,
        *(unsigned __int16 **)(a1 + 80),
        CurrentIrql);
    if ( !v8 )
      *(_KGROUP_MASK *)(a1 + 152) = i;
    goto LABEL_46;
  }
  v18 = *(_KAFFINITY_EX **)(a1 + 80);
  v19 = 0;
  if ( !v18->Count )
    goto LABEL_46;
  do
  {
    v20 = v18->Bitmap[v19];
    if ( !v20 )
      goto LABEL_38;
    if ( v19 < a3->Count && (a3->Bitmap[v19] | v20) != v20 )
    {
      v20 |= a3->Bitmap[v19];
      v6 = 1;
    }
    if ( v28.Count <= v19 )
    {
      if ( v28.Size <= v19 )
        goto LABEL_38;
      v28.Count = v19 + 1;
    }
    v28.Bitmap[v19] |= v20;
LABEL_38:
    ++v19;
  }
  while ( v19 < v18->Count );
  if ( v6 )
  {
    RtlpCopyAffinityEx(v18, v18->Size, &v28);
    goto LABEL_41;
  }
LABEL_46:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  LOBYTE(v22) = CurrentIrql;
  KiProcessDeferredReadyList(CurrentPrcb, &v24, v22, v23);
  if ( v6 )
  {
    KiUpdateProcessAvailableCpuState(a1, 0LL);
    KiNotifyAvailableCpusChangeProcess(a1);
    if ( (WORD2(xmmword_140FC0C10) & 0x200) != 0 )
      KiCpuPartitionCheckAffinitization(a1, 0LL, &v28, 0LL);
  }
  return 0LL;
}
