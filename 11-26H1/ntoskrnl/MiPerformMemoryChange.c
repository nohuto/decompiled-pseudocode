/*
 * XREFs of MiPerformMemoryChange @ 0x1406EE614
 * Callers:
 *     MiCompleteMemoryAddition @ 0x14086BF6C (MiCompleteMemoryAddition.c)
 *     MiCompleteMemoryRemoval @ 0x14086C0DC (MiCompleteMemoryRemoval.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiComputeNodeMemory @ 0x1406ECB90 (MiComputeNodeMemory.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x1406FA760 (MiInitializeNonPagedPoolThresholds.c)
 *     MiUpdatePhysicalPages @ 0x14070EC74 (MiUpdatePhysicalPages.c)
 *     MiMergeMemoryBlocks @ 0x14086CC54 (MiMergeMemoryBlocks.c)
 *     MiUnlinkHotAddFlight @ 0x14086D444 (MiUnlinkHotAddFlight.c)
 *     MiUpdateSharedUserDataNumberOfPages @ 0x14086D548 (MiUpdateSharedUserDataNumberOfPages.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiPerformMemoryChange(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rdi
  KIRQL v4; // bl
  void *v5; // rdx
  bool v6; // zf
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 *i; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  _QWORD *v14; // rbx
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = *(_DWORD *)(a1 + 40) & 1;
  MiMergeMemoryBlocks(*(_QWORD *)(a1 + 160), (_DWORD)MmPhysicalMemoryBlock - 16, a1 + 112, v2, 0);
  MiMergeMemoryBlocks(*(_QWORD *)(a1 + 168), qword_140E37E60 - 16, a1 + 136, v2, 1);
  MiUnlinkHotAddFlight(a1);
  v3 = 2LL;
  if ( KeGetCurrentIrql() == 2 )
  {
    v4 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&stru_140E37F48.Header.WaitListHead);
  }
  else
  {
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E37F48.Header.WaitListHead);
  }
  v5 = 0LL;
  v6 = (*((_QWORD *)MmPhysicalMemoryBlock - 1))-- == 1LL;
  if ( v6 )
    v5 = MmPhysicalMemoryBlock;
  MmPhysicalMemoryBlock = (void *)(*(_QWORD *)(a1 + 160) + 16LL);
  v7 = 0LL;
  v15[0] = v5;
  v6 = (*(_QWORD *)(qword_140E37E60 - 8))-- == 1LL;
  if ( v6 )
    v7 = qword_140E37E60;
  qword_140E37E60 = *(_QWORD *)(a1 + 168) + 16LL;
  v8 = *(_DWORD *)(a1 + 40);
  v15[1] = v7;
  if ( (v8 & 1) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 24);
    if ( v9 - 1 > BugCheckParameter3 )
      BugCheckParameter3 = v9 - 1;
    if ( (*(_DWORD *)(a1 + 40) & 0x40008) == 0 )
    {
      v10 = *(_QWORD *)(a1 + 32);
LABEL_17:
      MiUpdatePhysicalPages(&MiSystemPartition, v10, 0LL);
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 24) - 1LL == BugCheckParameter3 )
      BugCheckParameter3 = *(_QWORD *)(a1 + 16) - 1LL;
    if ( (*(_DWORD *)(a1 + 40) & 0x40000) == 0 )
    {
      v10 = -*(_QWORD *)(a1 + 32);
      goto LABEL_17;
    }
  }
  MiInitializeNonPagedPoolThresholds(1LL);
  if ( v4 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&stru_140E37F48.Header.WaitListHead);
  else
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E37F48.Header.WaitListHead, v4);
  if ( (*(_DWORD *)(a1 + 40) & 0x40000) != 0 )
  {
    for ( i = *(__int64 **)(a1 + 136); i != (__int64 *)(a1 + 136); i = (__int64 *)*i )
    {
      v12 = *((unsigned __int8 *)i + 36) + 2LL * *((unsigned int *)i + 8);
      v13 = i[3];
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
        *((_QWORD *)&stru_140E366D8.AbCompletedIoQoSBoostCount + v12) += v13;
      else
        *((_QWORD *)&stru_140E366D8.AbCompletedIoQoSBoostCount + v12) -= v13;
    }
  }
  v14 = v15;
  do
  {
    if ( *v14 )
      ExFreePoolWithTag((PVOID)(*v14 - 16LL), 0);
    ++v14;
    --v3;
  }
  while ( v3 );
  *(_OWORD *)(a1 + 160) = 0LL;
  MiComputeNodeMemory(&MiSystemPartition, 1);
  if ( (*(_DWORD *)(a1 + 40) & 0x40000) == 0 )
    MiUpdateSharedUserDataNumberOfPages();
}
