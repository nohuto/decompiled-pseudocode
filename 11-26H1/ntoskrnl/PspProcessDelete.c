/*
 * XREFs of PspProcessDelete @ 0x1407FB2E0
 * Callers:
 *     <none>
 * Callees:
 *     PspLockProcessListExclusive @ 0x140215EEC (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x140215F5C (PspUnlockProcessListExclusive.c)
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     SmKmStoreDereference @ 0x140265B10 (SmKmStoreDereference.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027C870 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     KeInsertQueueDpc @ 0x1402BDB30 (KeInsertQueueDpc.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     SmKmStoreGet @ 0x140354B70 (SmKmStoreGet.c)
 *     PsDereferencePartition @ 0x140381940 (PsDereferencePartition.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403BD130 (PsReturnProcessNonPagedPoolQuota.c)
 *     SmpKeyedStoreEntryGet @ 0x140409DF0 (SmpKeyedStoreEntryGet.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140446880 (KiQueryUnbiasedInterruptTime.c)
 *     ExSaFree @ 0x1404638EC (ExSaFree.c)
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x140463968 (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     KiRundownAvailableCpusWorkItem @ 0x140463B20 (KiRundownAvailableCpusWorkItem.c)
 *     PsGetProcessId @ 0x140466BE0 (PsGetProcessId.c)
 *     KeInitializeDpc @ 0x140481A50 (KeInitializeDpc.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14048EBAC (SmKmStoreDeleteWhenEmpty.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x1404C7ED4 (IoSetDiskIoAttributionOnProcess.c)
 *     SmpGetProcessPartition @ 0x1404D6C0C (SmpGetProcessPartition.c)
 *     RtlIsZeroMemory @ 0x1404D9FD0 (RtlIsZeroMemory.c)
 *     KeBugCheck @ 0x140533990 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     KeUnsecureProcess @ 0x1405E5A08 (KeUnsecureProcess.c)
 *     PspDereferenceSyscallProvider @ 0x140614630 (PspDereferenceSyscallProvider.c)
 *     PspLockSyscallProviderExclusive @ 0x140614664 (PspLockSyscallProviderExclusive.c)
 *     PspUnlockSyscallProviderExclusive @ 0x1406147FC (PspUnlockSyscallProviderExclusive.c)
 *     SmCompressionProcessHoldsPartitionReference @ 0x14063E760 (SmCompressionProcessHoldsPartitionReference.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x140725010 (ZwDeleteWnfStateName.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     VmpProcessContextCleanup @ 0x14081D08C (VmpProcessContextCleanup.c)
 *     ExMapHandleToPointer @ 0x1408FA200 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x14092C030 (ExDestroyHandle.c)
 *     EtwExitProcess @ 0x140940A60 (EtwExitProcess.c)
 *     PoEnergyContextCleanup @ 0x14095042C (PoEnergyContextCleanup.c)
 *     PspRemoveProcessFromJobChain @ 0x140959638 (PspRemoveProcessFromJobChain.c)
 *     sub_1409EEEFC @ 0x1409EEEFC (sub_1409EEEFC.c)
 *     SeDeassignPrimaryToken @ 0x140A2DF94 (SeDeassignPrimaryToken.c)
 *     LpcExitProcess @ 0x140A41C24 (LpcExitProcess.c)
 *     ExWnfExitProcess @ 0x140A41D44 (ExWnfExitProcess.c)
 *     PspExitProcess @ 0x140A43620 (PspExitProcess.c)
 *     ObClearProcessDeviceMap @ 0x140ADD8B8 (ObClearProcessDeviceMap.c)
 *     PspDereferenceQuota @ 0x140AF15EC (PspDereferenceQuota.c)
 *     PspReleaseReferenceToSession @ 0x140B000D8 (PspReleaseReferenceToSession.c)
 *     MmDeleteProcessAddressSpace @ 0x140B3F940 (MmDeleteProcessAddressSpace.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PspProcessDelete(ULONG_PTR BugCheckParameter1)
{
  int v1; // eax
  _QWORD *v3; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  void *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  HANDLE ProcessId; // rax
  __int64 v17; // rdx
  void *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  bool v22; // zf
  void *v23; // rcx
  int v24; // ebp
  __int64 ProcessPartition; // rax
  __int64 v26; // rcx
  __int64 v27; // rsi
  unsigned __int64 *v28; // rax
  __int16 v29; // bx
  __int64 v30; // rax
  __int64 v31; // rcx
  void *v32; // rcx
  __int128 *v33; // r10
  __int64 v34; // r8
  int v35; // r9d
  char v36; // bl
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // r11
  const char *v42; // rcx
  unsigned __int64 v43; // r9
  unsigned int v44; // r10d
  __int64 v45; // r9
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  _KWAIT_BLOCK *v48; // r10
  __int64 v49; // rax
  int v50; // r9d
  __int64 Flink_low; // rax
  __int64 v52; // rcx
  struct _EX_RUNDOWN_REF *v53; // rcx
  void *v54; // rcx
  ULONG_PTR v55; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v56[3]; // [rsp+38h] [rbp-60h] BYREF

  v1 = *(_DWORD *)(BugCheckParameter1 + 1532);
  memset(v56, 0, sizeof(v56));
  if ( (v1 & 1) != 0
    && !*(_QWORD *)(BugCheckParameter1 + 1600)
    && (*(_DWORD *)(BugCheckParameter1 + 500) & 0x4000000) != 0
    && (*(_DWORD *)(BugCheckParameter1 + 2012) & 2) == 0 )
  {
    KeBugCheckEx(0x1F8u, 0LL, BugCheckParameter1, 0LL, 0LL);
  }
  *(_DWORD *)(BugCheckParameter1 + 500) &= ~0x4000000u;
  v3 = (_QWORD *)(BugCheckParameter1 + 472);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter1 + 472) )
  {
    PspLockProcessListExclusive((__int64)CurrentThread);
    v5 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 )
      goto LABEL_48;
    v6 = (_QWORD *)v3[1];
    if ( (_QWORD *)*v6 != v3 )
      goto LABEL_48;
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    PspUnlockProcessListExclusive(CurrentThread);
  }
  v7 = *(void **)(BugCheckParameter1 + 848);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(BugCheckParameter1 + 848) = 0LL;
  }
  ObClearProcessDeviceMap(BugCheckParameter1);
  if ( !RtlIsZeroMemory((_BYTE *)(BugCheckParameter1 + 1824), 8uLL) )
    ZwDeleteWnfStateName(BugCheckParameter1 + 1824, v8);
  v11 = *(void **)(BugCheckParameter1 + 776);
  if ( v11 )
  {
    ObfDereferenceObject(v11);
    *(_QWORD *)(BugCheckParameter1 + 776) = 0LL;
  }
  v12 = *(_QWORD *)(BugCheckParameter1 + 576);
  if ( v12 )
  {
    ObfDereferenceObject((PVOID)(v12 & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(BugCheckParameter1 + 576) = 0LL;
  }
  v13 = *(_QWORD *)(BugCheckParameter1 + 1976);
  if ( v13 )
  {
    PspLockSyscallProviderExclusive(v13, v8, v9, v10);
    v14 = *(_QWORD *)(BugCheckParameter1 + 1984);
    if ( *(_QWORD *)(v14 + 8) == BugCheckParameter1 + 1984 )
    {
      v15 = *(_QWORD **)(BugCheckParameter1 + 1992);
      if ( *v15 == BugCheckParameter1 + 1984 )
      {
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        PspUnlockSyscallProviderExclusive(*(_QWORD *)(BugCheckParameter1 + 1976));
        PspDereferenceSyscallProvider(*(volatile signed __int64 **)(BugCheckParameter1 + 1976));
        *(_QWORD *)(BugCheckParameter1 + 1976) = 0LL;
        goto LABEL_22;
      }
    }
LABEL_48:
    __fastfail(3u);
  }
LABEL_22:
  ProcessId = PsGetProcessId((PEPROCESS)BugCheckParameter1);
  sub_1409EEEFC(ProcessId);
  if ( _bittest((const signed __int32 *)(BugCheckParameter1 + 500), 0x12u) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v56);
    if ( (*(_DWORD *)(BugCheckParameter1 + 496) & 0x400) != 0 )
      guard_dispatch_icall_no_overrides(BugCheckParameter1, v17);
    PspExitProcess(0LL, BugCheckParameter1);
    KiUnstackDetachProcess((__int64)v56, 0);
    MmDeleteProcessAddressSpace(BugCheckParameter1);
    v18 = *(void **)(BugCheckParameter1 + 744);
    if ( v18 )
      PspReleaseReferenceToSession(v18);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 672) )
  {
    PspRemoveProcessFromJobChain((PEPROCESS)BugCheckParameter1);
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(BugCheckParameter1 + 672), 0x73507350u);
    *(_QWORD *)(BugCheckParameter1 + 672) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 632) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 1520) = MmBadPointer;
  }
  if ( (*(_QWORD *)(BugCheckParameter1 + 368) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    KeUnsecureProcess(BugCheckParameter1);
  if ( *(_QWORD *)(BugCheckParameter1 + 464) )
  {
    --CurrentThread->SpecialApcDisable;
    v19 = ExMapHandleToPointer(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 464));
    if ( !v19 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 464), v19);
    v22 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v22 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v21, v20);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 584) )
    SeDeassignPrimaryToken(BugCheckParameter1);
  v23 = *(void **)(BugCheckParameter1 + 704);
  if ( v23 )
  {
    ExFreePoolWithTag(v23, 0);
    PsReturnProcessNonPagedPoolQuota(BugCheckParameter1, 0x6028uLL);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 1880) )
  {
    v24 = 0;
    if ( !_bittest((const signed __int32 *)(BugCheckParameter1 + 1532), 0x1Eu)
      || SmCompressionProcessHoldsPartitionReference(BugCheckParameter1) )
    {
      v24 = 1;
    }
    if ( _bittest((const signed __int32 *)(BugCheckParameter1 + 500), 0x12u) )
    {
      ProcessPartition = SmpGetProcessPartition(BugCheckParameter1);
      v27 = ProcessPartition;
      if ( _bittest((const signed __int32 *)(BugCheckParameter1 + 1532), 0x1Eu) )
      {
        if ( !SmCompressionProcessHoldsPartitionReference(v26) )
          KeSetEvent((PRKEVENT)(v27 + 2288), 0, 0);
      }
      else
      {
        v55 = BugCheckParameter1;
        v28 = SmpKeyedStoreEntryGet((struct _KTHREAD *)(ProcessPartition + 2344), &v55, 2, 0LL);
        if ( v28 )
        {
          v29 = *((_WORD *)v28 + 8);
          CmSiFreeMemory((PPRIVILEGE_SET)v28);
          v30 = SmKmStoreGet(v27, v29);
          SmKmStoreDeleteWhenEmpty(v31, v30, 1);
          SmKmStoreDereference(v27, v29);
        }
      }
    }
    if ( v24 )
      PsDereferencePartition(*(_QWORD *)(BugCheckParameter1 + 1880));
  }
  v32 = *(void **)(BugCheckParameter1 + 2056);
  if ( v32 )
    ObfDereferenceObjectWithTag(v32, 0x73507350u);
  EtwExitProcess(BugCheckParameter1);
  LpcExitProcess(BugCheckParameter1);
  ExWnfExitProcess(BugCheckParameter1, 1LL);
  IoSetDiskIoAttributionOnProcess(0LL, BugCheckParameter1);
  PoEnergyContextCleanup(BugCheckParameter1);
  if ( *(_QWORD *)(BugCheckParameter1 + 1648) )
  {
    VmpProcessContextCleanup();
    ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 1648), 0);
  }
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_140E624C0 )
  {
    v33 = &KeServiceDescriptorTable;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v34 = qword_140E624B0;
    v35 = 64;
    v36 = qword_140E624B8;
    v37 = qword_140E624B0;
    v38 = 8LL;
    do
    {
      v37 = __ROR8__(v37 - *(_QWORD *)v33, qword_140E624B8);
      v33 = (__int128 *)((char *)v33 + 8);
      v35 -= 8;
      --v38;
    }
    while ( v38 );
    for ( ; v35; --v35 )
    {
      v39 = *(unsigned __int8 *)v33;
      v33 = (__int128 *)((char *)v33 + 1);
      v37 = __ROR8__(v37 - v39, qword_140E624B8);
    }
    v22 = qword_140E624C8 == v37;
    v40 = qword_140E62480;
    if ( !v22 && !qword_140E62480 )
    {
      LODWORD(v55) = 8684291;
      v36 = qword_140E624B8;
      v34 = qword_140E624B0;
      v40 = (unsigned int)__ROR4__(8683520, 15);
      qword_140E62480 = (unsigned int)v40;
      xmmword_140E62488 = 0LL;
      qword_140E62498 = 267LL;
      qword_140E624A0 = (__int64)&KeServiceDescriptorTable;
    }
    v41 = (_QWORD *)KeServiceDescriptorTable;
    v42 = (const char *)KeServiceDescriptorTable;
    v43 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_1412018D0);
    if ( (unsigned __int64)KeServiceDescriptorTable < v43 )
    {
      do
      {
        _mm_prefetch(v42, 0);
        v42 += 64;
      }
      while ( (unsigned __int64)v42 < v43 );
    }
    v44 = 4 * xmmword_1412018D0;
    v45 = v34;
    if ( (unsigned int)(4 * xmmword_1412018D0) >= 8 )
    {
      v46 = (unsigned __int64)v44 >> 3;
      do
      {
        v45 = __ROR8__(v45 - *v41++, v36);
        v44 -= 8;
        --v46;
      }
      while ( v46 );
    }
    for ( ; v44; --v44 )
    {
      v47 = *(unsigned __int8 *)v41;
      v41 = (_QWORD *)((char *)v41 + 1);
      v45 = __ROR8__(v45 - v47, v36);
    }
    if ( qword_140E624D0 != v45 && !v40 )
    {
      LODWORD(v55) = 17367040;
      v36 = qword_140E624B8;
      v34 = qword_140E624B0;
      v40 = (unsigned int)__ROL4__(17367040, 16);
      qword_140E62480 = (unsigned int)v40;
      xmmword_140E62488 = 0LL;
      qword_140E62498 = 267LL;
      qword_140E624A0 = KeServiceDescriptorTable;
    }
    v48 = &stru_140FC01F0.WaitBlock[3];
    _mm_prefetch((const char *)&stru_140FC01F0.WaitBlockFill7[144], 0);
    v49 = 4LL;
    v50 = 32;
    do
    {
      v34 = __ROR8__(v34 - (unsigned __int64)v48->WaitListEntry.Flink, v36);
      v48 = (_KWAIT_BLOCK *)((char *)v48 + 8);
      v50 -= 8;
      --v49;
    }
    while ( v49 );
    for ( ; v50; --v50 )
    {
      Flink_low = LOBYTE(v48->WaitListEntry.Flink);
      v48 = (_KWAIT_BLOCK *)((char *)v48 + 1);
      v34 = __ROR8__(v34 - Flink_low, v36);
    }
    if ( qword_140E624D8 != v34 && !v40 )
    {
      LODWORD(v55) = 4240;
      v40 = (unsigned int)__ROL4__(4240, 28);
      qword_140E62480 = (unsigned int)v40;
      xmmword_140E62488 = 0LL;
      qword_140E62498 = 267LL;
      qword_140E624A0 = (__int64)&stru_140FC01F0.WaitBlock[3];
    }
    if ( stru_140FC01F0.WaitBlock[3].WaitListEntry.Flink != (struct _LIST_ENTRY *)KeServiceDescriptorTable
      || *(_DWORD *)&stru_140FC01F0.WaitBlockFill11[160] != (_DWORD)xmmword_1412018D0 )
    {
      if ( v40 )
        goto LABEL_88;
      LODWORD(v55) = 69468964;
      v40 = (unsigned int)__ROR4__(69468160, 114);
      qword_140E62480 = (unsigned int)v40;
      xmmword_140E62488 = 0LL;
      qword_140E62498 = 267LL;
      qword_140E624A0 = (__int64)stru_140FC01F0.WaitBlock[3].WaitListEntry.Flink;
    }
    if ( !v40 )
    {
LABEL_91:
      qword_140E624C0 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      goto LABEL_92;
    }
LABEL_88:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, _QWORD *, PVOID, PVOID))DeferredContext.DeferredRoutine != KiSchedulerDpc )
      KeInitializeDpc(&DeferredContext, (PKDEFERRED_ROUTINE)KiSchedulerDpc, &DeferredContext);
    qword_140E624A8 = 1759552LL;
    KeInsertQueueDpc(&DeferredContext, 0LL, 0LL);
    goto LABEL_91;
  }
LABEL_92:
  if ( *(_QWORD *)(BugCheckParameter1 + 760) )
    PspDereferenceQuota();
  v52 = *(_QWORD *)(BugCheckParameter1 + 400);
  if ( v52 )
    ExSaFree(v52, 0x10u);
  KiRemoveAndFreeCpuPartitionAssignmentProcess(BugCheckParameter1);
  v53 = *(struct _EX_RUNDOWN_REF **)(BugCheckParameter1 + 448);
  if ( v53 )
    KiRundownAvailableCpusWorkItem(v53 + 7);
  v54 = *(void **)(BugCheckParameter1 + 784);
  if ( v54 )
  {
    ExFreePoolWithTag(v54, 0);
    *(_QWORD *)(BugCheckParameter1 + 784) = 0LL;
  }
}
