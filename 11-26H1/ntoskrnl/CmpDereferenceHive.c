/*
 * XREFs of CmpDereferenceHive @ 0x1408CCB50
 * Callers:
 *     CmpDoFlushAll @ 0x14049BE84 (CmpDoFlushAll.c)
 *     CmpUnblockTwoHiveWrites @ 0x1408B7C2C (CmpUnblockTwoHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x1408B83AC (CmpBlockHiveWrites.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408B8450 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpBlockTwoHiveWrites @ 0x1408B86EC (CmpBlockTwoHiveWrites.c)
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x1408B9680 (CmpGetNextHive.c)
 *     CmpDestroyHive @ 0x1408BD394 (CmpDestroyHive.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1408C051C (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C9F40 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockHashEntryByKcb @ 0x1408CC824 (CmpUnlockHashEntryByKcb.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408CCC40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmpDelayCloseWorker @ 0x1408D4CD0 (CmpDelayCloseWorker.c)
 *     CmpUnlockHashEntryByIndex @ 0x1408D5368 (CmpUnlockHashEntryByIndex.c)
 *     CmpVEExecuteOpenLogic @ 0x1408DF920 (CmpVEExecuteOpenLogic.c)
 *     CmpLateUnloadHiveWorker @ 0x140AD1A90 (CmpLateUnloadHiveWorker.c)
 *     CmpUnblockHiveWrites @ 0x140ADBC68 (CmpUnblockHiveWrites.c)
 *     CmpQuitNextHive @ 0x140B0123C (CmpQuitNextHive.c)
 * Callees:
 *     CmpDeleteKcbCache @ 0x1408CEA04 (CmpDeleteKcbCache.c)
 *     CmpLockHiveListExclusive @ 0x1408CEA7C (CmpLockHiveListExclusive.c)
 *     CmpReleaseGlobalQuota @ 0x1408CEAE4 (CmpReleaseGlobalQuota.c)
 *     HvFreeDirtyData @ 0x1408CEB28 (HvFreeDirtyData.c)
 *     CmpUnlockHiveList @ 0x1408CEBE8 (CmpUnlockHiveList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
