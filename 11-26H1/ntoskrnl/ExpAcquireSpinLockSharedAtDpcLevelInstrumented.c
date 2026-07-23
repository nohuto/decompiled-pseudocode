/*
 * XREFs of ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080
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
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 */

__int64 __fastcall ExpAcquireSpinLockSharedAtDpcLevelInstrumented(_DWORD *a1, unsigned __int8 a2)
{
  int v2; // r9d
  struct _KPRCB *CurrentPrcb; // rdi
  int v5; // r14d
  char v6; // si
  unsigned int InterruptCount; // ebp
  __int64 result; // rax
  int v9; // ett
  __int64 v10; // r8
  _DWORD *EtwSupport; // rdx
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax

  v2 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    v6 = 0;
    InterruptCount = 0;
  }
  else
  {
    v6 = 1;
    v13 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v5 = v13;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  _m_prefetchw(a1);
  LODWORD(result) = *a1 & 0x7FFFFFFF;
  while ( 1 )
  {
    v9 = result;
    result = (unsigned int)_InterlockedCompareExchange(a1, result + 1, result);
    if ( v9 == (_DWORD)result )
      break;
    if ( (int)result < 0 )
    {
      result = ExpWaitForSpinLockSharedAndAcquire(a1, a2, a2);
      ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
      v2 = result;
      CurrentPrcb->SynchCounters.SpinLockSpinCount += result;
      break;
    }
  }
  if ( v6 )
  {
    result = __rdtsc();
    v10 = result;
    EtwSupport = KeGetCurrentPrcb()->EtwSupport;
    v12 = *((unsigned __int8 *)EtwSupport + 272);
    if ( (unsigned __int8)v12 >= 8u )
    {
      ++EtwSupport[69];
    }
    else
    {
      *((_BYTE *)EtwSupport + 272) = v12 + 1;
      result = 32LL * v12;
      *(_QWORD *)((char *)EtwSupport + result + 16) = v10;
      *(_DWORD *)((char *)EtwSupport + result + 32) = v10 - v5;
      *(_DWORD *)((char *)EtwSupport + result + 36) = v2;
      *(_QWORD *)((char *)EtwSupport + result + 24) = a1;
      *(_DWORD *)((char *)EtwSupport + result + 40) = InterruptCount;
      *((_BYTE *)EtwSupport + result + 44) = 2;
    }
  }
  return result;
}
