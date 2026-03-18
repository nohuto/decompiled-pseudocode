/*
 * XREFs of CmpDrainDelayDerefContext @ 0x140446E30
 * Callers:
 *     CmDeleteLayeredKey @ 0x140446A10 (CmDeleteLayeredKey.c)
 *     CmpUnfreezeHive @ 0x14077B2EC (CmpUnfreezeHive.c)
 *     CmpSaveBootControlSet @ 0x14084CBB8 (CmpSaveBootControlSet.c)
 *     CmpRefreshHive @ 0x14084DD4C (CmpRefreshHive.c)
 *     CmpCloneHwProfile @ 0x140852134 (CmpCloneHwProfile.c)
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14085EDB4 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x14085EEFC (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCommitLightWeightTransaction @ 0x1408AE64C (CmpCommitLightWeightTransaction.c)
 *     CmpCleanUpKCBCacheTable @ 0x1408AFB20 (CmpCleanUpKCBCacheTable.c)
 *     CmpPerformUnloadKey @ 0x1408AFC14 (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x1408B9ACC (CmpCompleteUnloadKey.c)
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408BC6D0 (CmpTransMgrFreeVolatileData.c)
 *     CmEnumerateKey @ 0x1408C21A0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1408C5660 (CmQueryKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1408C9470 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpDelayCloseWorker @ 0x1408CE720 (CmpDelayCloseWorker.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     CmpLinkHiveToMaster @ 0x14097C11C (CmpLinkHiveToMaster.c)
 *     CmpEnumerateLayeredKey @ 0x140982A88 (CmpEnumerateLayeredKey.c)
 *     CmRestoreKey @ 0x140986024 (CmRestoreKey.c)
 *     CmpCleanUpHigherLayerKcbCaches @ 0x140986E48 (CmpCleanUpHigherLayerKcbCaches.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B3181C (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     CmpLockHashEntryExclusiveByKcb @ 0x1408BC550 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C3970 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpLockKcbExclusive @ 0x1408CEB50 (CmpLockKcbExclusive.c)
 *     CmpUnlockHashEntry @ 0x140A345F0 (CmpUnlockHashEntry.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 */

void __fastcall CmpDrainDelayDerefContext(_QWORD **a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rcx
  ULONG_PTR v4; // rbp
  void *v5; // r15
  __int64 v6; // rax
  ULONG_PTR v7; // r14
  __int64 v8; // rcx

  if ( *a1 != a1 )
  {
    while ( 1 )
    {
      v2 = *a1;
      if ( *a1 == a1 )
        break;
      if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
        __fastfail(3u);
      *a1 = v3;
      v4 = (ULONG_PTR)(v2 - 28);
      v3[1] = a1;
      v2[1] = v2;
      *v2 = v2;
      *((_BYTE *)v2 - 160) &= ~1u;
      v5 = (void *)*(v2 - 24);
      CmpLockHashEntryExclusiveByKcb((ULONG_PTR)(v2 - 28));
      CmpLockKcbExclusive(v4);
      v6 = *(_QWORD *)(v4 + 192);
      v7 = 0LL;
      if ( v6 )
      {
        v8 = *(_QWORD *)(v6 + 24);
        if ( v8 )
        {
          v7 = *(_QWORD *)(v8 + 16);
          CmpUnlockKcb(v4);
          CmpLockKcbExclusive(v7);
          CmpLockKcbExclusive(v4);
        }
      }
      CmpDereferenceKeyControlBlockWithLock(v4);
      CmpUnlockKcb(v4);
      if ( v7 )
        CmpUnlockKcb(v7);
      CmpUnlockHashEntry(v5);
    }
  }
}
