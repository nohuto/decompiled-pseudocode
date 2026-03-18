/*
 * XREFs of MiLockVadTree @ 0x1403265D0
 * Callers:
 *     MiSharedVaToPartition @ 0x14028370C (MiSharedVaToPartition.c)
 *     MiHandleTransitionFault @ 0x1402F6550 (MiHandleTransitionFault.c)
 *     MiImagePageOk @ 0x1402F7140 (MiImagePageOk.c)
 *     MiVadSupportsCombine @ 0x140307A0C (MiVadSupportsCombine.c)
 *     MiBeginProcessClean @ 0x140313D2C (MiBeginProcessClean.c)
 *     MiLeapPrefetch @ 0x1403144C4 (MiLeapPrefetch.c)
 *     MiUpdatePrefetchPriority @ 0x1403149AC (MiUpdatePrefetchPriority.c)
 *     MiPerformVadSplitting @ 0x140315B44 (MiPerformVadSplitting.c)
 *     MiInsertVad @ 0x140316000 (MiInsertVad.c)
 *     MiWalkPageTablesRecursively @ 0x1403270E0 (MiWalkPageTablesRecursively.c)
 *     MiWsleFlush @ 0x14032A510 (MiWsleFlush.c)
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
 *     MiRemoveVad @ 0x140455D20 (MiRemoveVad.c)
 *     MiLockStealUserVm @ 0x14045EF90 (MiLockStealUserVm.c)
 *     MiTrimViewLockProcessPte @ 0x14046C720 (MiTrimViewLockProcessPte.c)
 *     MiSetVadDeleted @ 0x14046F708 (MiSetVadDeleted.c)
 *     MiWriteVadFlags @ 0x1404737D0 (MiWriteVadFlags.c)
 *     MiRemoveFromSystemSpace @ 0x14048FFF8 (MiRemoveFromSystemSpace.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14049754C (MiCaptureWriteWatchDirtyBit.c)
 *     MiCanGrantExecute @ 0x1404D3200 (MiCanGrantExecute.c)
 *     MiObtainReferencedSecureVad @ 0x1404E4F18 (MiObtainReferencedSecureVad.c)
 *     MiInsertInSystemSpace @ 0x1404EDA44 (MiInsertInSystemSpace.c)
 *     MiFaultRedirectToProto @ 0x140511920 (MiFaultRedirectToProto.c)
 *     MiExceptionForMappedVa @ 0x1406F6EFC (MiExceptionForMappedVa.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BC90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402EE000 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

KIRQL __fastcall MiLockVadTree(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  volatile LONG *v4; // rbx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  unsigned __int8 CurrentIrql; // di
  signed __int32 v9; // eax
  signed __int32 v10; // ett

  v3 = a1;
  if ( (a1 & 4) != 0 )
    v4 = (volatile LONG *)&stru_140E34C08.Header.WaitListHead.Blink + 1;
  else
    v4 = (volatile LONG *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8] + 1;
  if ( (a1 & 2) != 0 )
  {
    if ( (a1 & 1) != 0 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v4);
      return 17;
    }
    else
    {
      return ExAcquireSpinLockExclusive(v4);
    }
  }
  else if ( (a1 & 1) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      _m_prefetchw((const void *)v4);
      v5 = *v4 & 0x7FFFFFFF;
      while ( 1 )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange(v4, v5 + 1, v5);
        if ( v6 == v5 )
          break;
        if ( v5 < 0 )
        {
          LOBYTE(v3) = -1;
          ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)v4, v3, a3);
          return 17;
        }
      }
      return 17;
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v4, 0xFFu);
      return 17;
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v3) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v3);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      _m_prefetchw((const void *)v4);
      v9 = *v4 & 0x7FFFFFFF;
      while ( 1 )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange(v4, v9 + 1, v9);
        if ( v10 == v9 )
          break;
        if ( v9 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)v4, CurrentIrql, a3);
          return CurrentIrql;
        }
      }
      return CurrentIrql;
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v4, CurrentIrql);
      return CurrentIrql;
    }
  }
}
