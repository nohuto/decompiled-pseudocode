/*
 * XREFs of PsBoostThreadIo @ 0x1403053C0
 * Callers:
 *     FsRtlpWaitForIoAtEof @ 0x140205138 (FsRtlpWaitForIoAtEof.c)
 *     ExpBoostIoAfterAcquire @ 0x1402053F4 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPriorityBoost @ 0x1402057EC (ExpApplyPriorityBoost.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1402FE680 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExpFreeOwnerEntry @ 0x140304B10 (ExpFreeOwnerEntry.c)
 *     ?KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEAU_AB_BOOST_CONTEXT@1@PEAT_AB_IO_BOOST@1@@Z @ 0x140377280 (-KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEA.c)
 *     CcApplyLowIoPriorityToThread @ 0x140387538 (CcApplyLowIoPriorityToThread.c)
 *     CcAcquireByteRangeForWrite @ 0x1403E5550 (CcAcquireByteRangeForWrite.c)
 *     FsRtlReleaseEofLock @ 0x140419310 (FsRtlReleaseEofLock.c)
 *     ?KiAbThreadRemoveBoostsSlow@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXT_KLOCK_ENTRY_BOOST_BITMAP@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140429394 (-KiAbThreadRemoveBoostsSlow@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXT_KLOCK_ENTRY_BOOST_BITMAP@@PE.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14042DC6C (ExpSetResourceOwnerPointerEx.c)
 *     PsLeavePriorityRegion @ 0x14044FE90 (PsLeavePriorityRegion.c)
 *     PsEnterPriorityRegion @ 0x1404580F0 (PsEnterPriorityRegion.c)
 *     ExDeleteResourceLite @ 0x14046E1A0 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x1404AFB20 (ExReinitializeResourceLite.c)
 *     ?KiAbThreadBoostIoPriority@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@KPEAK@Z @ 0x1404D0718 (-KiAbThreadBoostIoPriority@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@KPEAK@Z.c)
 *     ?KiAbThreadUnboostIoPriority@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z @ 0x1404DD524 (-KiAbThreadUnboostIoPriority@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404EA98C (CcBoostLowPriorityWorkerThread.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1406D2710 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     ExReleaseResourceAndLeavePriorityRegion @ 0x1406D28A0 (ExReleaseResourceAndLeavePriorityRegion.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 * Callees:
 *     ?KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z @ 0x14023D390 (-KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlCaptureStackBackTrace @ 0x140260E90 (RtlCaptureStackBackTrace.c)
 *     ?KiAbThreadInsertList@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z @ 0x14026ED10 (-KiAbThreadInsertList@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ?KiAbpThreadInsertList@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z @ 0x14041DDCC (-KiAbpThreadInsertList@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PsBoostThreadIo(LegacyAutoBoost *this, __int64 a2, __int64 a3, struct _SINGLE_LIST_ENTRY *a4)
{
  signed __int32 v4; // edi
  char v5; // r14
  KIRQL v6; // r15
  char v7; // r12
  LegacyAutoBoost *v9; // r13
  volatile signed __int64 *v10; // rbp
  LegacyAutoBoost **v11; // rcx
  char v12; // al
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  struct _KPRCB *v15; // rdx
  __int64 Pool2; // rax
  __int64 **v17; // rbx
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 **v20; // rbx
  __int64 *v21; // rcx
  __int64 v22; // rax
  LegacyAutoBoost **v23; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = a2;
  v9 = 0LL;
  if ( PspAlwaysTrackIoBoosting )
  {
    v5 = 1;
    Pool2 = ExAllocatePool2(0x40uLL);
    v9 = (LegacyAutoBoost *)Pool2;
    if ( Pool2 )
    {
      RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
      *((_QWORD *)v9 + 12) = KeGetCurrentThread();
      *((_QWORD *)v9 + 13) = 0LL;
    }
    v10 = (volatile signed __int64 *)((char *)this + 1552);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)this + 194);
  }
  else
  {
    v10 = (volatile signed __int64 *)((char *)this + 1552);
  }
  if ( v7 )
  {
    if ( *((_DWORD *)this + 376) )
    {
      v4 = _InterlockedDecrement((volatile signed __int32 *)this + 376);
      if ( !v5 )
        goto LABEL_21;
      if ( *((_DWORD *)this + 376) )
      {
        if ( v9 )
        {
          v11 = (LegacyAutoBoost **)*((_QWORD *)this + 193);
          if ( *v11 != (LegacyAutoBoost *)((char *)this + 1536) )
            goto LABEL_12;
          *(_QWORD *)v9 = (char *)this + 1536;
          *((_QWORD *)v9 + 1) = v11;
          *v11 = v9;
          *((_QWORD *)this + 193) = v9;
        }
      }
      else
      {
        if ( v9 )
          ExFreePoolWithTag(v9, 0x736F6F42u);
        v17 = (__int64 **)((char *)this + 1520);
        while ( 1 )
        {
          v18 = *v17;
          if ( *v17 == (__int64 *)v17 )
            break;
          v19 = *v18;
          if ( (__int64 **)v18[1] != v17 || *(__int64 **)(v19 + 8) != v18 )
            goto LABEL_12;
          *v17 = (__int64 *)v19;
          *(_QWORD *)(v19 + 8) = v17;
          ExFreePoolWithTag(v18, 0x736F6F42u);
        }
        v20 = (__int64 **)((char *)this + 1536);
        while ( 1 )
        {
          v21 = *v20;
          if ( *v20 == (__int64 *)v20 )
            break;
          v22 = *v21;
          if ( (__int64 **)v21[1] != v20 || *(__int64 **)(v22 + 8) != v21 )
            goto LABEL_12;
          *v20 = (__int64 *)v22;
          *(_QWORD *)(v22 + 8) = v20;
          ExFreePoolWithTag(v21, 0x736F6F42u);
        }
      }
      v10 = (volatile signed __int64 *)((char *)this + 1552);
    }
LABEL_14:
    if ( !v5 )
      goto LABEL_20;
    goto LABEL_15;
  }
  v4 = _InterlockedIncrement((volatile signed __int32 *)this + 376);
  if ( !v5 )
    goto LABEL_5;
  if ( !v9 )
    goto LABEL_14;
  v23 = (LegacyAutoBoost **)*((_QWORD *)this + 191);
  if ( *v23 != (LegacyAutoBoost *)((char *)this + 1520) )
LABEL_12:
    __fastfail(3u);
  *(_QWORD *)v9 = (char *)this + 1520;
  *((_QWORD *)v9 + 1) = v23;
  *v23 = v9;
  *((_QWORD *)this + 191) = v9;
LABEL_15:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64(v10, 0LL);
  else
    KiReleaseSpinLockInstrumented(v10, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
  __writecr8(v6);
LABEL_20:
  if ( !v7 )
  {
LABEL_5:
    if ( v4 != 1 )
      return;
    goto LABEL_22;
  }
LABEL_21:
  if ( v4 )
    return;
LABEL_22:
  if ( v7 )
    return;
  v12 = *((_BYTE *)this + 792);
  if ( (KiAbpGlobalState & 1) != 0 )
  {
    if ( !v12 )
      return;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( !AutoBoost::KiAbpThreadInsertList(
            this,
            (struct _KTHREAD *)&CurrentPrcb->AbPropagateBoostsList,
            (struct _SINGLE_LIST_ENTRY *)this + 101,
            a4) )
      goto LABEL_31;
    goto LABEL_30;
  }
  if ( !v12 )
    return;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (unsigned int)LegacyAutoBoost::KiAbThreadInsertList(
                       this,
                       (struct _KTHREAD *)&CurrentPrcb->AbPropagateBoostsList,
                       (struct _SINGLE_LIST_ENTRY *)this + 101,
                       a4) )
LABEL_30:
    AutoBoost::KiAbpQueueAutoBoostDpc((AutoBoost *)CurrentPrcb, v15);
LABEL_31:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
}
