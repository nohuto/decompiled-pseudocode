/*
 * XREFs of MiUnlockVadTree @ 0x140326440
 * Callers:
 *     MiSharedVaToPartition @ 0x14028370C (MiSharedVaToPartition.c)
 *     MiObtainReferencedVadEx @ 0x1402D0160 (MiObtainReferencedVadEx.c)
 *     MiHandleTransitionFault @ 0x1402F6550 (MiHandleTransitionFault.c)
 *     MiImagePageOk @ 0x1402F7140 (MiImagePageOk.c)
 *     MiBeginProcessClean @ 0x140313D2C (MiBeginProcessClean.c)
 *     MiLeapPrefetch @ 0x1403144C4 (MiLeapPrefetch.c)
 *     MiUpdatePrefetchPriority @ 0x1403149AC (MiUpdatePrefetchPriority.c)
 *     MiPerformVadSplitting @ 0x140315B44 (MiPerformVadSplitting.c)
 *     MiWalkLeap @ 0x1403260B0 (MiWalkLeap.c)
 *     MiWalkPageTablesRecursively @ 0x1403270E0 (MiWalkPageTablesRecursively.c)
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
 *     MiProcessCommitIntact @ 0x14044D910 (MiProcessCommitIntact.c)
 *     MiReturnLockedVadOrNextVa @ 0x14044E7E0 (MiReturnLockedVadOrNextVa.c)
 *     MiTrimViewLockProcessPte @ 0x14046C720 (MiTrimViewLockProcessPte.c)
 *     MiRemoveFromSystemSpace @ 0x14048FFF8 (MiRemoveFromSystemSpace.c)
 *     MiCanGrantExecute @ 0x1404D3200 (MiCanGrantExecute.c)
 *     MiObtainReferencedSecureVad @ 0x1404E4F18 (MiObtainReferencedSecureVad.c)
 *     MiInsertInSystemSpace @ 0x1404EDA44 (MiInsertInSystemSpace.c)
 *     MiFaultRedirectToProto @ 0x140511920 (MiFaultRedirectToProto.c)
 *     MiExceptionForMappedVa @ 0x1406F6EFC (MiExceptionForMappedVa.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __fastcall MiUnlockVadTree(char a1, KIRQL a2)
{
  unsigned __int64 v2; // rbx
  volatile LONG *v4; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  if ( (a1 & 4) != 0 )
    v4 = (volatile LONG *)&stru_140E34C08.Header.WaitListHead.Blink + 1;
  else
    v4 = (volatile LONG *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8] + 1;
  if ( (a1 & 2) != 0 )
  {
    if ( (a1 & 1) != 0 )
    {
      if ( (a1 & 8) != 0 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        {
LABEL_9:
          *v4 = 0;
          return;
        }
        goto LABEL_15;
      }
LABEL_13:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
