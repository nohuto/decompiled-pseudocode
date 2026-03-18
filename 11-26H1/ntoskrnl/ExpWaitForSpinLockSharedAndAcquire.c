/*
 * XREFs of ExpWaitForSpinLockSharedAndAcquire @ 0x14029BC90
 * Callers:
 *     KiActivateWaiterQueueWithNoLocks @ 0x140223020 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiSelectCandidateProcessor @ 0x140234F10 (KiSelectCandidateProcessor.c)
 *     MiWalkLevelCompleted @ 0x140247EA0 (MiWalkLevelCompleted.c)
 *     MmIsFileObjectAPagingFile @ 0x14026C320 (MmIsFileObjectAPagingFile.c)
 *     MiUnlinkProtoPages @ 0x140297A00 (MiUnlinkProtoPages.c)
 *     ?KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140299AB0 (-KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE.c)
 *     MiAcquirePageListSynchronization @ 0x14029A450 (MiAcquirePageListSynchronization.c)
 *     ExpRemoveTagForBigPages @ 0x14029AE60 (ExpRemoveTagForBigPages.c)
 *     ExpAddTagForBigPages @ 0x14029B070 (ExpAddTagForBigPages.c)
 *     MiLockPageListAndLastPage @ 0x14029B840 (MiLockPageListAndLastPage.c)
 *     ExReferenceCallBackBlock @ 0x14029BA90 (ExReferenceCallBackBlock.c)
 *     ExpStampBigPoolEntry @ 0x14029BD80 (ExpStampBigPoolEntry.c)
 *     KeQueryBasePriorityThread @ 0x14029BF80 (KeQueryBasePriorityThread.c)
 *     MiSetVaAgeListEx @ 0x14029D300 (MiSetVaAgeListEx.c)
 *     MiSynchronizeFastPageInsert @ 0x1402CE960 (MiSynchronizeFastPageInsert.c)
 *     MiObtainReferencedVadEx @ 0x1402D0160 (MiObtainReferencedVadEx.c)
 *     MiInitializeZeroFaultPacket @ 0x1402D50F0 (MiInitializeZeroFaultPacket.c)
 *     MiProtoFaultApplyPrivateFixups @ 0x1402DA280 (MiProtoFaultApplyPrivateFixups.c)
 *     MiArePagefileContentsCorrupted @ 0x1402DB9F0 (MiArePagefileContentsCorrupted.c)
 *     MiSynchronizeSystemVa @ 0x1402E3870 (MiSynchronizeSystemVa.c)
 *     MiLocateSubsectionNode @ 0x1402E48B0 (MiLocateSubsectionNode.c)
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 *     MiRemoveWsleList @ 0x1402EA570 (MiRemoveWsleList.c)
 *     MiAddWorkingSetEntries @ 0x1402EBAC0 (MiAddWorkingSetEntries.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiLockWorkingSetCoreShared @ 0x1402EDEA0 (MiLockWorkingSetCoreShared.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402EE000 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1402EE150 (MiUpdateWorkingSetPrivateSize.c)
 *     MiUnlinkPageFromListEx @ 0x1402F7250 (MiUnlinkPageFromListEx.c)
 *     MiAcquirePageListLock @ 0x1402FB4C0 (MiAcquirePageListLock.c)
 *     MiReacquireWalkLocks @ 0x140301220 (MiReacquireWalkLocks.c)
 *     MiMakeHyperRangeAccessible @ 0x140316870 (MiMakeHyperRangeAccessible.c)
 *     MiWalkLeap @ 0x1403260B0 (MiWalkLeap.c)
 *     MiLockVadTree @ 0x1403265D0 (MiLockVadTree.c)
 *     MiWsleFlush @ 0x14032A510 (MiWsleFlush.c)
 *     MiEndingOffsetWithLock @ 0x14036D000 (MiEndingOffsetWithLock.c)
 *     MiAcquireCachedPageLocks @ 0x1403A17C0 (MiAcquireCachedPageLocks.c)
 *     MiUserFault @ 0x1403A3140 (MiUserFault.c)
 *     MiCheckVirtualAddress @ 0x1403A55E0 (MiCheckVirtualAddress.c)
 *     MiTransientCombineAddress @ 0x1403A6530 (MiTransientCombineAddress.c)
 *     ExFreeHeapPool @ 0x1403A7BB0 (ExFreeHeapPool.c)
 *     MiZeroFault @ 0x140422AB0 (MiZeroFault.c)
 *     MiCheckProtoAccess @ 0x140431F30 (MiCheckProtoAccess.c)
 *     MiFindLastSubsection @ 0x14044E5C0 (MiFindLastSubsection.c)
 *     KiAcquireProcessLockShared @ 0x140463000 (KiAcquireProcessLockShared.c)
 *     KeQueryAffinityProcess @ 0x140469110 (KeQueryAffinityProcess.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
