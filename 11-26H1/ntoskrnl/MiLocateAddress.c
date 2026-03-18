/*
 * XREFs of MiLocateAddress @ 0x140326730
 * Callers:
 *     MiSharedVaToPartition @ 0x14028370C (MiSharedVaToPartition.c)
 *     MiHandleTransitionFault @ 0x1402F6550 (MiHandleTransitionFault.c)
 *     MiImagePageOk @ 0x1402F7140 (MiImagePageOk.c)
 *     MiVadSupportsCombine @ 0x140307A0C (MiVadSupportsCombine.c)
 *     MiUpdatePrefetchPriority @ 0x1403149AC (MiUpdatePrefetchPriority.c)
 *     MiDeleteEmptyPageTables @ 0x140315248 (MiDeleteEmptyPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x1403270E0 (MiWalkPageTablesRecursively.c)
 *     MiWsleFlush @ 0x14032A510 (MiWsleFlush.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035CA40 (MiTrimUnlockedVirtualAddreses.c)
 *     MiReservePageFileSpace @ 0x1403670E8 (MiReservePageFileSpace.c)
 *     MiInitializeCopyOnWritePacket @ 0x14036AEA8 (MiInitializeCopyOnWritePacket.c)
 *     MiResolveMappedFileFaultGetClusterInfo @ 0x14036F7FC (MiResolveMappedFileFaultGetClusterInfo.c)
 *     MiEvaluatePageFileRead @ 0x140370440 (MiEvaluatePageFileRead.c)
 *     MiComputeFaultNode @ 0x140370A58 (MiComputeFaultNode.c)
 *     MiInitializeReadInProgressPfn @ 0x1403737C0 (MiInitializeReadInProgressPfn.c)
 *     MiStoreGetVadForAddress @ 0x140394C1C (MiStoreGetVadForAddress.c)
 *     MiUserFault @ 0x1403A3140 (MiUserFault.c)
 *     MiComputeMaximumFaultCluster @ 0x1403A5A20 (MiComputeMaximumFaultCluster.c)
 *     MiValidFault @ 0x1403A7338 (MiValidFault.c)
 *     MmOutSwapVirtualAddresses @ 0x140405328 (MmOutSwapVirtualAddresses.c)
 *     MiProcessCommitIntact @ 0x14044D910 (MiProcessCommitIntact.c)
 *     MiLockStealUserVm @ 0x14045EF90 (MiLockStealUserVm.c)
 *     MiTrimViewLockProcessPte @ 0x14046C720 (MiTrimViewLockProcessPte.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14049754C (MiCaptureWriteWatchDirtyBit.c)
 *     MiUnlockVirtualAddreses @ 0x1404AA608 (MiUnlockVirtualAddreses.c)
 *     MiFindPlaceholderVadToReplace @ 0x1404CC098 (MiFindPlaceholderVadToReplace.c)
 *     MiCanGrantExecute @ 0x1404D3200 (MiCanGrantExecute.c)
 *     MiObtainReferencedSecureVad @ 0x1404E4F18 (MiObtainReferencedSecureVad.c)
 *     MiFaultRedirectToProto @ 0x140511920 (MiFaultRedirectToProto.c)
 *     MmCheckForSafeExecution @ 0x140874E24 (MmCheckForSafeExecution.c)
 *     MiMapChildLargePageVads @ 0x14087FBAC (MiMapChildLargePageVads.c)
 *     MiCoalescePlaceholderAllocations @ 0x14095FF68 (MiCoalescePlaceholderAllocations.c)
 *     MiUnlockVadRange @ 0x140960890 (MiUnlockVadRange.c)
 *     MiLockUnlockVmCleanup @ 0x140960AFC (MiLockUnlockVmCleanup.c)
 *     MiLockUnlockVmPrepare @ 0x140960C00 (MiLockUnlockVmPrepare.c)
 *     MiLockVadRange @ 0x140960DAC (MiLockVadRange.c)
 *     MiCloneVadTree @ 0x1409618E4 (MiCloneVadTree.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall MiLocateAddress(unsigned __int64 a1)
{
  _KPROCESS *Process; // r11
  struct _LIST_ENTRY *result; // rax
  unsigned __int64 v3; // r10

  Process = KeGetCurrentThread()->ApcState.Process;
  result = Process[3].Header.WaitListHead.Flink;
  if ( !result )
    return 0LL;
  v3 = a1 >> 12;
  if ( a1 >> 12 < (LODWORD(result[1].Blink) | ((unsigned __int64)LOBYTE(result[2].Flink) << 32))
    || v3 > (HIDWORD(result[1].Blink) | ((unsigned __int64)BYTE1(result[2].Flink) << 32)) )
  {
    result = *(struct _LIST_ENTRY **)&Process[3].Header.Lock;
    if ( result )
    {
      do
      {
        if ( v3 > (HIDWORD(result[1].Blink) | ((unsigned __int64)BYTE1(result[2].Flink) << 32)) )
        {
          result = result->Blink;
        }
        else
        {
          if ( v3 >= (LODWORD(result[1].Blink) | ((unsigned __int64)LOBYTE(result[2].Flink) << 32)) )
            break;
          result = result->Flink;
        }
      }
      while ( result );
      if ( result )
      {
        Process[3].Header.WaitListHead.Flink = result;
        return result;
      }
    }
    return 0LL;
  }
  return result;
}
