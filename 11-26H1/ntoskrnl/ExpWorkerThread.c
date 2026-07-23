/*
 * XREFs of ExpWorkerThread @ 0x1403EF030
 * Callers:
 *     <none>
 * Callees:
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x1402C1160 (ExpPartitionCreateThreadIfNecessary.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     PsGetPagePriorityThread @ 0x1403843A0 (PsGetPagePriorityThread.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     KeRemovePriQueue @ 0x1403EF700 (KeRemovePriQueue.c)
 *     KeSetUserAffinityThread @ 0x1403F0B04 (KeSetUserAffinityThread.c)
 *     EtwTraceThreadWorkItem @ 0x1403F0CB0 (EtwTraceThreadWorkItem.c)
 *     KxReenterRetpolinedCode @ 0x1403F0D54 (KxReenterRetpolinedCode.c)
 *     KeSetKernelStackSwapEnable @ 0x1404783C0 (KeSetKernelStackSwapEnable.c)
 *     ExpWorkQueueHealthMetricsEnabled @ 0x14052236C (ExpWorkQueueHealthMetricsEnabled.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExpWorkQueueUpdateHealthMetricsOnRemove @ 0x1406D4EC4 (ExpWorkQueueUpdateHealthMetricsOnRemove.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

LONG __fastcall ExpWorkerThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v3; // r8
  unsigned __int16 *v4; // rsi
  __int64 v5; // r12
  char v6; // r13
  int v7; // eax
  __int64 v8; // rax
  _QWORD *BugCheckParameter4; // rdi
  const void *v10; // rsi
  const void *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned int Queue; // eax
  __int64 v15; // r12
  unsigned __int16 Count; // r8
  __int64 v17; // r9
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r10
  _KAFFINITY_EX *UserAffinity; // r10
  __int64 *v24; // r9
  unsigned __int16 i; // dx
  signed __int32 v26; // eax
  signed __int32 v27; // r9d
  int v28; // edx
  unsigned int v29; // r8d
  struct _KTHREAD *v30; // rcx
  LONG result; // eax
  unsigned int PagePriorityThread; // eax
  int IoPriorityThread; // eax
  unsigned __int8 EffectiveIrql; // al
  signed __int32 v35[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 *v36; // [rsp+30h] [rbp-D0h]
  unsigned __int16 *v37; // [rsp+38h] [rbp-C8h]
  __int64 v38; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+48h] [rbp-B8h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v42[33]; // [rsp+68h] [rbp-98h] BYREF

  PreviousAffinity = 0LL;
  memset_0(&v41, 0, 0x108uLL);
  CurrentThread = KeGetCurrentThread();
  v3 = &v38;
  v4 = *(unsigned __int16 **)(a1 + 696);
  v5 = *(_QWORD *)(a1 + 688);
  v6 = 1;
  v38 = 0LL;
  v7 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  v36 = &v38;
  v37 = v4;
  v39 = v5;
  if ( (v7 & 1) != 0 )
    __fastfail(0x38u);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) = v7 | 1;
  _InterlockedOr(v35, 0);
  if ( !LOBYTE(ExSaPageGroupDescriptorArrayLock.AffinityVersion) )
  {
    KeSetKernelStackSwapEnable(0);
    v3 = &v38;
  }
  while ( 1 )
  {
LABEL_5:
    v8 = KeRemovePriQueue(a1, 0LL, 0LL, v3);
    BugCheckParameter4 = (_QWORD *)v8;
    if ( v6 )
    {
      v6 = 0;
      *(_DWORD *)(a1 + 716) &= ~0x80000000;
      _InterlockedAnd((volatile signed __int32 *)(a1 + 712), 0xFFFFBFFF);
      v36 = 0LL;
      v3 = 0LL;
      if ( v8 == 258 )
        continue;
    }
    else
    {
      v3 = v36;
    }
    if ( v8 == 258 || v8 == 128 )
      break;
    ExpPartitionCreateThreadIfNecessary(v5, v4, (_DWORD *)a1);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 704));
    v10 = (const void *)BugCheckParameter4[2];
    v11 = (const void *)BugCheckParameter4[3];
    if ( (unsigned __int8)ExpWorkQueueHealthMetricsEnabled(v5, *(unsigned int *)(a1 + 724)) )
      ExpWorkQueueUpdateHealthMetricsOnRemove(a1, BugCheckParameter4, 0LL);
    if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    {
      EtwTraceThreadWorkItem(v10, 1344LL);
      guard_dispatch_icall_no_overrides(v11, v13);
      EtwTraceThreadWorkItem(v10, 1345LL);
    }
    else
    {
      guard_dispatch_icall_no_overrides(v11, v12);
    }
    if ( (KeGetPcr()->Prcb.BpbRetpolineState.AllFlags & 1) != 0 )
      KxReenterRetpolinedCode();
    if ( CurrentThread->MutantListHead.Flink != &CurrentThread->MutantListHead )
      KeBugCheckEx(0x39u, (ULONG_PTR)v10, (ULONG_PTR)v11, (ULONG_PTR)BugCheckParameter4, 0LL);
    if ( CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(1u, (ULONG_PTR)v10, CurrentThread->ApcStateIndex, CurrentThread->CombinedApcDisable, 1uLL);
    if ( KeGetEffectiveIrql() )
    {
      EffectiveIrql = KeGetEffectiveIrql();
      KeBugCheckEx(0xE1u, (ULONG_PTR)v10, EffectiveIrql, (ULONG_PTR)v11, (ULONG_PTR)BugCheckParameter4);
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      KeBugCheckEx(0xDFu, (ULONG_PTR)v10, (ULONG_PTR)v11, (ULONG_PTR)BugCheckParameter4, 0LL);
    if ( KeGetCurrentThread()->ApcStateIndex == 1 )
      KeBugCheckEx(
        5u,
        (ULONG_PTR)CurrentThread->Process,
        (ULONG_PTR)CurrentThread->ApcState.Process,
        CurrentThread->ApcStateIndex,
        (ULONG_PTR)CurrentThread);
    if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
      KeBugCheckEx(0x19Au, (ULONG_PTR)v10, (ULONG_PTR)v11, (ULONG_PTR)BugCheckParameter4, 0LL);
    if ( (unsigned int)PsGetIoPriorityThread((__int64)CurrentThread) != 2 )
    {
      IoPriorityThread = PsGetIoPriorityThread((__int64)CurrentThread);
      KeBugCheckEx(0x128u, (ULONG_PTR)v10, IoPriorityThread, (ULONG_PTR)v11, (ULONG_PTR)BugCheckParameter4);
    }
    if ( (unsigned int)PsGetPagePriorityThread((__int64)CurrentThread) != 5 )
    {
      PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
      KeBugCheckEx(0x129u, (ULONG_PTR)v10, PagePriorityThread, (ULONG_PTR)v11, (ULONG_PTR)BugCheckParameter4);
    }
    Queue = (unsigned int)CurrentThread[1].Queue;
    if ( (Queue & 0x100) != 0 )
      KeBugCheckEx(0x15Bu, (ULONG_PTR)v10, (Queue >> 9) & 7, (ULONG_PTR)v11, (ULONG_PTR)BugCheckParameter4);
    if ( CurrentThread->CpuSetWorkloadClass )
      KeBugCheckEx(
        0x1D6u,
        (ULONG_PTR)v10,
        CurrentThread->CpuSetWorkloadClass,
        (ULONG_PTR)v11,
        (ULONG_PTR)BugCheckParameter4);
    if ( (CurrentThread->MiscFlags & 8) != 0 )
    {
      DbgPrintEx(
        0,
        0,
        "EXWORKER: worker exit with system affinity set, worker routine %p, parameter %p, item %p\n",
        v10,
        v11,
        BugCheckParameter4);
      PreviousAffinity = 0LL;
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
    v41 = 2097153LL;
    memset_0(v42, 0, 0x100uLL);
    v15 = *v37;
    memset_0(v42, 0, 8LL * (unsigned __int16)v41);
    Count = 1;
    LOWORD(v41) = 1;
    if ( (unsigned __int16)v15 >= (unsigned __int16)KeNumberNodes )
      goto LABEL_34;
    v17 = KeNodeBlock[v15];
    if ( !v17 )
      goto LABEL_34;
    v18 = 0;
    while ( v18 < *(_DWORD *)(v17 + 48) )
    {
      v19 = v18++;
      v20 = *(_QWORD *)(*(_QWORD *)(v17 + 32) + 8 * v19);
      v21 = *(unsigned __int16 *)(v20 + 136);
      v22 = *(_QWORD *)(v20 + 128);
      if ( (unsigned __int16)v41 > (unsigned __int16)v21 )
        goto LABEL_32;
      if ( WORD1(v41) > (unsigned __int16)v21 )
      {
        LOWORD(v41) = v21 + 1;
LABEL_32:
        v42[v21] |= v22;
      }
    }
    Count = v41;
LABEL_34:
    UserAffinity = CurrentThread->UserAffinity;
    if ( Count >= UserAffinity->Count )
    {
      v24 = &v41;
      Count = UserAffinity->Count;
    }
    else
    {
      v24 = (__int64 *)CurrentThread->UserAffinity;
    }
    for ( i = 0; i < Count; ++i )
    {
      if ( v42[i] != UserAffinity->Bitmap[i] )
      {
LABEL_45:
        KeSetUserAffinityThread(CurrentThread, &v41);
        goto LABEL_41;
      }
    }
    while ( i < *(_WORD *)v24 )
    {
      if ( v24[i + 1] )
        goto LABEL_45;
      ++i;
    }
LABEL_41:
    v5 = v39;
    v3 = v36;
    if ( CurrentThread[1].WaitBlock[1].WaitListEntry.Flink )
    {
      DbgPrintEx(
        0,
        0,
        "EXWORKER: worker exit with activity ID set, worker routine %p, parameter %p, item %p\n",
        v10,
        v11,
        BugCheckParameter4);
      v3 = v36;
      KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = 0LL;
    }
    v4 = v37;
  }
  if ( (*(_DWORD *)(a1 + 712) & 0x8000) == 0
    && (*(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber != (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber
     || *(_DWORD *)(a1 + 4)) )
  {
    goto LABEL_5;
  }
  _m_prefetchw((const void *)(a1 + 712));
  v26 = *(_DWORD *)(a1 + 712);
  do
  {
    v27 = v26;
    v28 = (v26 & 0x3FFF) - 1;
    if ( (v26 & 0x8000) == 0 )
    {
      v3 = v36;
      if ( (v26 & 0x4000) != 0 || v28 < (2 * *(_DWORD *)(a1 + 716)) >> 1 )
        goto LABEL_5;
    }
    v29 = v28 | v26 & 0xFFFFC000;
    v26 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 712), v29, v26);
  }
  while ( v26 != v27 );
  if ( *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber != (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
    KeBugCheckEx(0x1D2u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~1u;
  v30 = KeGetCurrentThread();
  result = *((_DWORD *)&v30->0 + 1) >> 6;
  if ( (*((_DWORD *)&v30->0 + 1) & 0x40) == 0 )
    _interlockedbittestandset((volatile signed __int32 *)&v30->116 + 1, 6u);
  if ( v29 == 0x8000 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 736), 0, 0);
  return result;
}
