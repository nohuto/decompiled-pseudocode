/*
 * XREFs of KeAbPostReleaseEx @ 0x140271BE0
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x14024B710 (RtlpHpVsContextAllocate.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x14024D000 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     ExpReleaseFastResourceShared @ 0x140271F10 (ExpReleaseFastResourceShared.c)
 *     ExAcquireFastResourceExclusive @ 0x140274BD0 (ExAcquireFastResourceExclusive.c)
 *     ExTryAcquirePushLockSharedEx @ 0x140275F70 (ExTryAcquirePushLockSharedEx.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1402763B0 (ExpAcquireFastResourceSharedSlow.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x140276D90 (ExTryAcquirePushLockExclusiveEx.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExReleaseFastResource @ 0x14027A880 (ExReleaseFastResource.c)
 *     MiLockAddressSpaceToo @ 0x140317094 (MiLockAddressSpaceToo.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038D338 (MiWaitForCollidedFaultComplete.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     MiPrefetchVirtualMemory @ 0x1403A2470 (MiPrefetchVirtualMemory.c)
 *     KiWaitForAllObjects @ 0x1403CAD68 (KiWaitForAllObjects.c)
 *     MiReferenceControlArea @ 0x1404694F0 (MiReferenceControlArea.c)
 *     ExTryToAcquireFastMutex @ 0x140470010 (ExTryToAcquireFastMutex.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x1404A4910 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x1404A49E0 (ExTryAcquireAutoExpandPushLockShared.c)
 *     PfLockSharedTryAcquire @ 0x1404A4B70 (PfLockSharedTryAcquire.c)
 *     MiLockControlAreaSectionExtend @ 0x1404A8244 (MiLockControlAreaSectionExtend.c)
 *     MiTryLockVad @ 0x1404CF304 (MiTryLockVad.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x1404D7FF0 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopProcessIoTracking @ 0x1405CE660 (IopProcessIoTracking.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x1406D19D0 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExAcquireFastResourceWithFlags @ 0x1406D1B40 (ExAcquireFastResourceWithFlags.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x1406D2490 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     MiTryAcquirePushLockUnordered @ 0x1406F848C (MiTryAcquirePushLockUnordered.c)
 *     MiChangingSubsectionProtos @ 0x1406FDDF0 (MiChangingSubsectionProtos.c)
 *     MiReapFileOnlyPfns @ 0x1406FF880 (MiReapFileOnlyPfns.c)
 *     MiWaitForExtentDeletions @ 0x1406FFB3C (MiWaitForExtentDeletions.c)
 *     ExTryAcquireTimeRefreshLockExclusive @ 0x14083BD4C (ExTryAcquireTimeRefreshLockExclusive.c)
 *     CmpCreateKeyControlBlock @ 0x1408CA640 (CmpCreateKeyControlBlock.c)
 *     ObpDeleteNameCheck @ 0x14092C880 (ObpDeleteNameCheck.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
 *     MiPrefetchControlArea @ 0x140A58548 (MiPrefetchControlArea.c)
 *     MmPrefetchPagesEx @ 0x140A5AD88 (MmPrefetchPagesEx.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x140A69A70 (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpTryToLockKcbExclusive @ 0x140A6C7B0 (CmpTryToLockKcbExclusive.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x140AC1560 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 *     CmpTryToLockHashEntryExclusive @ 0x140AE3518 (CmpTryToLockHashEntryExclusive.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140B35738 (CmpWaitOnHiveWriteQueue.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140B52970 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140B5372C (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x140B56930 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140B73710 (AlpcpCancelMessagesByRequestor.c)
 *     KiForceSymbolReferences @ 0x140CCFB88 (KiForceSymbolReferences.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140271700 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall KeAbPostReleaseEx(struct _KTHREAD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  struct _KTHREAD *v6; // rcx
  unsigned __int8 CurrentIrql; // r14
  int v8; // r15d
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  signed __int8 v11; // al
  signed __int8 v12; // tt
  signed __int8 v13; // al
  signed __int8 v14; // tt
  char v15; // r8
  __int64 v16; // rbx
  struct _KPRCB *v17; // rcx
  unsigned __int32 *v18; // r8
  struct _KLOCK_ENTRY *CurrentThread; // rdx
  __int64 v20; // rax
  unsigned __int32 v21; // eax
  unsigned __int32 v22; // ett
  unsigned __int32 v23; // eax
  __int64 v24; // rdx
  unsigned __int32 v25; // ett

  v4 = a2;
  if ( (KiAbpGlobalState & 1) != 0 )
  {
    _disable();
    if ( (a2 & 3) == 3 )
    {
      a2 = ((unsigned __int64)(unsigned __int8)a2 >> 2) & 3;
      v4 = *((_QWORD *)KeGetCurrentThread()->AutoBoostThreadState + a2)
         + 48 * ((unsigned __int64)(unsigned __int8)v4 >> 4)
         + 16;
      v6 = *(struct _KTHREAD **)v4;
      if ( (*(_BYTE *)(v4 + 32) & 2) != 0 )
        v6 = (struct _KTHREAD *)v6->SListFaultAddress;
      if ( v6 != a1 )
        KeBugCheckEx(0x162u, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)a1, v4, 0LL);
    }
    *(_BYTE *)(v4 + 33) = *(_BYTE *)(v4 + 33) & 0xFC | 1;
    CurrentIrql = -1;
    v8 = 1;
    if ( (*(_BYTE *)(v4 + 32) & 2) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v21 = *SchedulerAssist;
        do
        {
          a2 = v21;
          LODWORD(a2) = v21 & 0xFFDFFFFF;
          v22 = v21;
          v21 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v21 & 0xFFDFFFFF, v21);
        }
        while ( v22 != v21 );
        if ( (v21 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2, SchedulerAssist, a4);
      }
      _enable();
      v8 = 0;
      _m_prefetchw((const void *)(v4 + 35));
      v11 = *(_BYTE *)(v4 + 35);
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange8((volatile signed __int8 *)(v4 + 35), v11 | 1, v11);
      }
      while ( v12 != v11 );
      if ( (v11 & 1) != 0 )
      {
        do
        {
          while ( (*(_BYTE *)(v4 + 35) & 1) != 0 )
            _mm_pause();
          _m_prefetchw((const void *)(v4 + 35));
          v13 = *(_BYTE *)(v4 + 35);
          do
          {
            v14 = v13;
            v13 = _InterlockedCompareExchange8((volatile signed __int8 *)(v4 + 35), v13 | 1, v13);
          }
          while ( v14 != v13 );
        }
        while ( (v13 & 1) != 0 );
      }
      AutoBoost::KiAbpEntryUnlink((AutoBoost *)v4, (struct AutoBoost::_AB_THREAD_ENTRY *)a2);
      _InterlockedAnd8((volatile signed __int8 *)(v4 + 35), 0xFEu);
    }
    v15 = *(_BYTE *)(v4 + 36);
    v16 = *(_QWORD *)(v4 + 40);
    *(_DWORD *)(v4 + 40) = 0;
    *(_QWORD *)v4 = 0LL;
    *(_WORD *)(v4 + 32) = 0;
    *(_WORD *)(v4 - 48LL * (v15 & 0x7F) - 8) |= 1 << (v15 & 0xF);
    if ( v8 )
    {
      v17 = KeGetCurrentPrcb();
      v18 = (unsigned __int32 *)v17->SchedulerAssist;
      if ( v18 )
      {
        _m_prefetchw(v18);
        v23 = *v18;
        do
        {
          v24 = v23;
          LODWORD(v24) = v23 & 0xFFDFFFFF;
          v25 = v23;
          v23 = _InterlockedCompareExchange((volatile signed __int32 *)v18, v23 & 0xFFDFFFFF, v23);
        }
        while ( v25 != v23 );
        if ( (v23 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v17, v24, v18, a4);
      }
      _enable();
    }
    else
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    if ( (_DWORD)v16 )
      AutoBoost::KiAbpUnboostThread(*(_QWORD *)(v4 - 48LL * (*(_BYTE *)(v4 + 36) & 0x7F) - 16), a1, v16, 0LL);
  }
  else
  {
    if ( (a2 & 1) != 0 )
    {
      CurrentThread = (struct _KLOCK_ENTRY *)KeGetCurrentThread();
      v4 = 88LL * (unsigned __int8)(v4 >> 1) + CurrentThread[12].BoostBitmap.AllFields + 16;
      v20 = *(_QWORD *)v4 & 0x7FFFFFFFFFFFFFFCLL;
      if ( v20 && *(char *)(v4 + 8) >= 0 )
        v20 |= 0x8000000000000000uLL;
      if ( (struct _KTHREAD *)v20 != a1 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)a1, v4, 0LL);
    }
    else
    {
      CurrentThread = *(struct _KLOCK_ENTRY **)(a2 - 88LL * (*(_BYTE *)(a2 + 8) & 0x3F) - 16);
    }
    _disable();
    *(_BYTE *)(v4 + 10) = 0;
    LegacyAutoBoost::KiAbEntryFreeAndEnableInterrupts((LegacyAutoBoost *)v4, CurrentThread, a1, (void *)1, 0LL);
  }
}
