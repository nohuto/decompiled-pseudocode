/*
 * XREFs of ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0
 * Callers:
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402249B0 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiSelectCandidateProcessor @ 0x140236870 (KiSelectCandidateProcessor.c)
 *     MiWalkLevelCompleted @ 0x140249800 (MiWalkLevelCompleted.c)
 *     MmIsFileObjectAPagingFile @ 0x14026B890 (MmIsFileObjectAPagingFile.c)
 *     MiUnlinkProtoPages @ 0x140296F60 (MiUnlinkProtoPages.c)
 *     ?KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140299010 (-KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE.c)
 *     MiAcquirePageListSynchronization @ 0x1402999B0 (MiAcquirePageListSynchronization.c)
 *     ExpRemoveTagForBigPages @ 0x14029A3C0 (ExpRemoveTagForBigPages.c)
 *     ExpAddTagForBigPages @ 0x14029A5D0 (ExpAddTagForBigPages.c)
 *     MiLockPageListAndLastPage @ 0x14029ADA0 (MiLockPageListAndLastPage.c)
 *     ExReferenceCallBackBlock @ 0x14029AFF0 (ExReferenceCallBackBlock.c)
 *     ExpStampBigPoolEntry @ 0x14029B2E0 (ExpStampBigPoolEntry.c)
 *     KeQueryBasePriorityThread @ 0x14029B4E0 (KeQueryBasePriorityThread.c)
 *     MiSetVaAgeListEx @ 0x14029C850 (MiSetVaAgeListEx.c)
 *     MiSynchronizeFastPageInsert @ 0x1402B0720 (MiSynchronizeFastPageInsert.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiInitializeZeroFaultPacket @ 0x1402B6EB0 (MiInitializeZeroFaultPacket.c)
 *     MiProtoFaultApplyPrivateFixups @ 0x1402BC040 (MiProtoFaultApplyPrivateFixups.c)
 *     MiArePagefileContentsCorrupted @ 0x1402BD7B0 (MiArePagefileContentsCorrupted.c)
 *     MiSynchronizeSystemVa @ 0x1402C58B0 (MiSynchronizeSystemVa.c)
 *     MiLocateSubsectionNode @ 0x1402C68F0 (MiLocateSubsectionNode.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiRemoveWsleList @ 0x1402CC5B0 (MiRemoveWsleList.c)
 *     MiAddWorkingSetEntries @ 0x1402CDB00 (MiAddWorkingSetEntries.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockWorkingSetCoreShared @ 0x1402CFF20 (MiLockWorkingSetCoreShared.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1402D01D0 (MiUpdateWorkingSetPrivateSize.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiAcquirePageListLock @ 0x1402DD540 (MiAcquirePageListLock.c)
 *     MiReacquireWalkLocks @ 0x1402E32A0 (MiReacquireWalkLocks.c)
 *     MiMakeHyperRangeAccessible @ 0x1403188A0 (MiMakeHyperRangeAccessible.c)
 *     MiWalkLeap @ 0x1403280E0 (MiWalkLeap.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiWsleFlush @ 0x14032C540 (MiWsleFlush.c)
 *     MiEndingOffsetWithLock @ 0x14036EDA0 (MiEndingOffsetWithLock.c)
 *     MiAcquireCachedPageLocks @ 0x1403A3520 (MiAcquireCachedPageLocks.c)
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 *     MiCheckVirtualAddress @ 0x1403A7340 (MiCheckVirtualAddress.c)
 *     MiTransientCombineAddress @ 0x1403A8290 (MiTransientCombineAddress.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 *     MiZeroFault @ 0x14041A2F0 (MiZeroFault.c)
 *     MiCheckProtoAccess @ 0x14041EF60 (MiCheckProtoAccess.c)
 *     MiFindLastSubsection @ 0x1404466F0 (MiFindLastSubsection.c)
 *     KiAcquireProcessLockShared @ 0x14045BFC0 (KiAcquireProcessLockShared.c)
 *     KeQueryAffinityProcess @ 0x1404626E0 (KeQueryAffinityProcess.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpWaitForSpinLockSharedAndAcquire(signed __int32 *a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  volatile signed __int32 *v4; // rdi
  unsigned int v5; // esi
  signed __int32 v6; // eax

  CurrentIrql = a2;
  v4 = a1;
  v5 = 0;
  _m_prefetchw(a1);
  v6 = *a1;
  do
  {
    if ( v6 < 0 )
    {
      do
      {
        if ( (v6 & 0x40000000) == 0 )
          _InterlockedOr(v4, 0x40000000u);
        if ( CurrentIrql != 0xFF )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
        {
          HvlNotifyLongSpinWait(v5);
        }
        else
        {
          _mm_pause();
        }
        if ( CurrentIrql != 0xFF )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
        }
        v6 = *v4;
      }
      while ( *(int *)v4 < 0 );
    }
    a1 = (signed __int32 *)(unsigned int)(v6 + 1);
    a2 = (unsigned int)v6;
    LODWORD(a1) = (unsigned int)a1 & 0xBFFFFFFF;
    v6 = _InterlockedCompareExchange(v4, (signed __int32)a1, v6);
  }
  while ( v6 != (_DWORD)a2 );
  return v5;
}
