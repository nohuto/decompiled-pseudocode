/*
 * XREFs of MiLockVadTree @ 0x140328600
 * Callers:
 *     MiSharedVaToPartition @ 0x140282C7C (MiSharedVaToPartition.c)
 *     MiHandleTransitionFault @ 0x1402D85D0 (MiHandleTransitionFault.c)
 *     MiImagePageOk @ 0x1402D91C0 (MiImagePageOk.c)
 *     MiVadSupportsCombine @ 0x1402E9A8C (MiVadSupportsCombine.c)
 *     MiBeginProcessClean @ 0x140315D5C (MiBeginProcessClean.c)
 *     MiLeapPrefetch @ 0x1403164F4 (MiLeapPrefetch.c)
 *     MiUpdatePrefetchPriority @ 0x1403169DC (MiUpdatePrefetchPriority.c)
 *     MiPerformVadSplitting @ 0x140317B74 (MiPerformVadSplitting.c)
 *     MiInsertVad @ 0x140318030 (MiInsertVad.c)
 *     MiWalkPageTablesRecursively @ 0x140329110 (MiWalkPageTablesRecursively.c)
 *     MiWsleFlush @ 0x14032C540 (MiWsleFlush.c)
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
 *     MiRemoveVad @ 0x14044DF80 (MiRemoveVad.c)
 *     MiLockStealUserVm @ 0x140458690 (MiLockStealUserVm.c)
 *     MiTrimViewLockProcessPte @ 0x140465EA0 (MiTrimViewLockProcessPte.c)
 *     MiSetVadDeleted @ 0x140468E88 (MiSetVadDeleted.c)
 *     MiWriteVadFlags @ 0x14046CF50 (MiWriteVadFlags.c)
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14049109C (MiCaptureWriteWatchDirtyBit.c)
 *     MiCanGrantExecute @ 0x1404CCA70 (MiCanGrantExecute.c)
 *     MiObtainReferencedSecureVad @ 0x1404DE4B8 (MiObtainReferencedSecureVad.c)
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 *     MiFaultRedirectToProto @ 0x14050B390 (MiFaultRedirectToProto.c)
 *     MiExceptionForMappedVa @ 0x1406FBB6C (MiExceptionForMappedVa.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
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
    v4 = (volatile LONG *)&stru_140E34D88.Header.WaitListHead.Blink + 1;
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
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
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
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
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
