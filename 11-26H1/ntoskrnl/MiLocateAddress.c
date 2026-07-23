/*
 * XREFs of MiLocateAddress @ 0x140328760
 * Callers:
 *     MiSharedVaToPartition @ 0x140282C7C (MiSharedVaToPartition.c)
 *     MiHandleTransitionFault @ 0x1402D85D0 (MiHandleTransitionFault.c)
 *     MiImagePageOk @ 0x1402D91C0 (MiImagePageOk.c)
 *     MiVadSupportsCombine @ 0x1402E9A8C (MiVadSupportsCombine.c)
 *     MiUpdatePrefetchPriority @ 0x1403169DC (MiUpdatePrefetchPriority.c)
 *     MiDeleteEmptyPageTables @ 0x140317278 (MiDeleteEmptyPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x140329110 (MiWalkPageTablesRecursively.c)
 *     MiWsleFlush @ 0x14032C540 (MiWsleFlush.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035E7E0 (MiTrimUnlockedVirtualAddreses.c)
 *     MiReservePageFileSpace @ 0x140368E88 (MiReservePageFileSpace.c)
 *     MiInitializeCopyOnWritePacket @ 0x14036CC48 (MiInitializeCopyOnWritePacket.c)
 *     MiResolveMappedFileFaultGetClusterInfo @ 0x1403715AC (MiResolveMappedFileFaultGetClusterInfo.c)
 *     MiEvaluatePageFileRead @ 0x1403721F0 (MiEvaluatePageFileRead.c)
 *     MiComputeFaultNode @ 0x140372808 (MiComputeFaultNode.c)
 *     MiInitializeReadInProgressPfn @ 0x140375570 (MiInitializeReadInProgressPfn.c)
 *     MiStoreGetVadForAddress @ 0x14039699C (MiStoreGetVadForAddress.c)
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 *     MiComputeMaximumFaultCluster @ 0x1403A7780 (MiComputeMaximumFaultCluster.c)
 *     MiValidFault @ 0x1403A9098 (MiValidFault.c)
 *     MmOutSwapVirtualAddresses @ 0x1403FE41C (MmOutSwapVirtualAddresses.c)
 *     MiProcessCommitIntact @ 0x140445A40 (MiProcessCommitIntact.c)
 *     MiLockStealUserVm @ 0x140458690 (MiLockStealUserVm.c)
 *     MiTrimViewLockProcessPte @ 0x140465EA0 (MiTrimViewLockProcessPte.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14049109C (MiCaptureWriteWatchDirtyBit.c)
 *     MiUnlockVirtualAddreses @ 0x1404A3C98 (MiUnlockVirtualAddreses.c)
 *     MiFindPlaceholderVadToReplace @ 0x1404C5AC8 (MiFindPlaceholderVadToReplace.c)
 *     MiCanGrantExecute @ 0x1404CCA70 (MiCanGrantExecute.c)
 *     MiObtainReferencedSecureVad @ 0x1404DE4B8 (MiObtainReferencedSecureVad.c)
 *     MiFaultRedirectToProto @ 0x14050B390 (MiFaultRedirectToProto.c)
 *     MmCheckForSafeExecution @ 0x14087B208 (MmCheckForSafeExecution.c)
 *     MiMapChildLargePageVads @ 0x140885FAC (MiMapChildLargePageVads.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A05828 (MiCoalescePlaceholderAllocations.c)
 *     MiUnlockVadRange @ 0x140A06150 (MiUnlockVadRange.c)
 *     MiLockUnlockVmCleanup @ 0x140A063BC (MiLockUnlockVmCleanup.c)
 *     MiLockUnlockVmPrepare @ 0x140A064C0 (MiLockUnlockVmPrepare.c)
 *     MiLockVadRange @ 0x140A0666C (MiLockVadRange.c)
 *     MiCloneVadTree @ 0x140A075D8 (MiCloneVadTree.c)
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
