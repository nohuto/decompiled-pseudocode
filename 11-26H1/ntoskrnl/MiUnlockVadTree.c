/*
 * XREFs of MiUnlockVadTree @ 0x140328470
 * Callers:
 *     MiSharedVaToPartition @ 0x140282C7C (MiSharedVaToPartition.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiHandleTransitionFault @ 0x1402D85D0 (MiHandleTransitionFault.c)
 *     MiImagePageOk @ 0x1402D91C0 (MiImagePageOk.c)
 *     MiBeginProcessClean @ 0x140315D5C (MiBeginProcessClean.c)
 *     MiLeapPrefetch @ 0x1403164F4 (MiLeapPrefetch.c)
 *     MiUpdatePrefetchPriority @ 0x1403169DC (MiUpdatePrefetchPriority.c)
 *     MiPerformVadSplitting @ 0x140317B74 (MiPerformVadSplitting.c)
 *     MiWalkLeap @ 0x1403280E0 (MiWalkLeap.c)
 *     MiWalkPageTablesRecursively @ 0x140329110 (MiWalkPageTablesRecursively.c)
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
 *     MiProcessCommitIntact @ 0x140445A40 (MiProcessCommitIntact.c)
 *     MiReturnLockedVadOrNextVa @ 0x140446910 (MiReturnLockedVadOrNextVa.c)
 *     MiTrimViewLockProcessPte @ 0x140465EA0 (MiTrimViewLockProcessPte.c)
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 *     MiCanGrantExecute @ 0x1404CCA70 (MiCanGrantExecute.c)
 *     MiObtainReferencedSecureVad @ 0x1404DE4B8 (MiObtainReferencedSecureVad.c)
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 *     MiFaultRedirectToProto @ 0x14050B390 (MiFaultRedirectToProto.c)
 *     MiExceptionForMappedVa @ 0x1406FBB6C (MiExceptionForMappedVa.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __fastcall MiUnlockVadTree(char a1, KIRQL a2)
{
  unsigned __int64 v2; // rbx
  volatile LONG *v4; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  if ( (a1 & 4) != 0 )
    v4 = (volatile LONG *)&stru_140E34D88.Header.WaitListHead.Blink + 1;
  else
    v4 = (volatile LONG *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8] + 1;
  if ( (a1 & 2) != 0 )
  {
    if ( (a1 & 1) != 0 )
    {
      if ( (a1 & 8) != 0 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
LABEL_9:
          *v4 = 0;
          return;
        }
        goto LABEL_15;
      }
LABEL_13:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        goto LABEL_9;
LABEL_15:
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
      return;
    }
    if ( (a1 & 8) != 0 )
    {
      ExReleaseSpinLockExclusive(v4, a2);
      return;
    }
    if ( a2 == 17 )
      goto LABEL_13;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v4 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
    goto LABEL_34;
  }
  if ( (a1 & 1) != 0 )
  {
    if ( (a1 & 8) != 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v4);
      return;
    }
LABEL_26:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v4, 0xBFFFFFFF);
      _InterlockedDecrement(v4);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v4, retaddr);
    }
    return;
  }
  if ( (a1 & 8) != 0 )
  {
    ExReleaseSpinLockShared(v4, a2);
    return;
  }
  if ( a2 == 17 )
    goto LABEL_26;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(v4, 0xBFFFFFFF);
    _InterlockedDecrement(v4);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v4, retaddr);
  }
LABEL_34:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  __writecr8(v2);
}
