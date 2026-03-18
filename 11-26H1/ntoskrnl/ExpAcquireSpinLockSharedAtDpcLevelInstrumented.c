/*
 * XREFs of ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402EE000
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
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BC90 (ExpWaitForSpinLockSharedAndAcquire.c)
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
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
