/*
 * XREFs of CmpDereferenceHive @ 0x1408C6580
 * Callers:
 *     CmpDoFlushAll @ 0x1404A2354 (CmpDoFlushAll.c)
 *     CmpUnblockTwoHiveWrites @ 0x1408B1620 (CmpUnblockTwoHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x1408B1DD0 (CmpBlockHiveWrites.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408B1E74 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpBlockTwoHiveWrites @ 0x1408B2110 (CmpBlockTwoHiveWrites.c)
 *     CmLoadAppKey @ 0x1408B2250 (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x1408B30D0 (CmpGetNextHive.c)
 *     CmpDestroyHive @ 0x1408B6DC4 (CmpDestroyHive.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1408B9F4C (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C3970 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockHashEntryByKcb @ 0x1408C6254 (CmpUnlockHashEntryByKcb.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpDelayCloseWorker @ 0x1408CE720 (CmpDelayCloseWorker.c)
 *     CmpUnlockHashEntryByIndex @ 0x1408CEDB8 (CmpUnlockHashEntryByIndex.c)
 *     CmpVEExecuteOpenLogic @ 0x1408D9360 (CmpVEExecuteOpenLogic.c)
 *     CmpLateUnloadHiveWorker @ 0x140AD4630 (CmpLateUnloadHiveWorker.c)
 *     CmpUnblockHiveWrites @ 0x140ADEA78 (CmpUnblockHiveWrites.c)
 *     CmpQuitNextHive @ 0x140AFF4BC (CmpQuitNextHive.c)
 * Callees:
 *     CmpDeleteKcbCache @ 0x1408C8450 (CmpDeleteKcbCache.c)
 *     CmpLockHiveListExclusive @ 0x1408C84C8 (CmpLockHiveListExclusive.c)
 *     CmpReleaseGlobalQuota @ 0x1408C8530 (CmpReleaseGlobalQuota.c)
 *     HvFreeDirtyData @ 0x1408C8574 (HvFreeDirtyData.c)
 *     CmpUnlockHiveList @ 0x1408C8634 (CmpUnlockHiveList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDereferenceHive(char *P)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // rax
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 1060, 0xFFFFFFFF) == 1 )
  {
    v2 = P + 1608;
    if ( (_QWORD *)*v2 != v2 )
    {
      CmpLockHiveListExclusive();
      v3 = *v2;
      if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
        __fastfail(3u);
      *v4 = v3;
      *(_QWORD *)(v3 + 8) = v4;
      CmpUnlockHiveList();
    }
    *(_DWORD *)P = -1160724768;
    HvFreeDirtyData(P);
    CmpDeleteKcbCache(P);
    v5 = (void *)*((_QWORD *)P + 232);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x624E4D43u);
    v6 = (void *)*((_QWORD *)P + 230);
    if ( v6 )
      ExFreePoolWithTag(v6, 0x20204D43u);
    v7 = (void *)*((_QWORD *)P + 234);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    v8 = (void *)*((_QWORD *)P + 603);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    CmpReleaseGlobalQuota(4832LL);
    ExFreePoolWithTag(P, 0);
  }
}
