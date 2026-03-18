/*
 * XREFs of CmpLockHiveListShared @ 0x1408B31AC
 * Callers:
 *     CmpTransMgrPrepare @ 0x1408AEE6C (CmpTransMgrPrepare.c)
 *     CmpGetLastHive @ 0x1408B13C8 (CmpGetLastHive.c)
 *     CmpDoFlushNextHive @ 0x1408B1C20 (CmpDoFlushNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x1408B2110 (CmpBlockTwoHiveWrites.c)
 *     CmpGetNextActiveHive @ 0x1408B3048 (CmpGetNextActiveHive.c)
 *     CmpGetNextHive @ 0x1408B30D0 (CmpGetNextHive.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpDoReconcileNextHive @ 0x140AAB490 (CmpDoReconcileNextHive.c)
 *     CmpDoLocalizeNextHive @ 0x140AD63C0 (CmpDoLocalizeNextHive.c)
 *     CmFreezeRegistry @ 0x140AE3390 (CmFreezeRegistry.c)
 *     CmEtwRunDown @ 0x140AFF0F8 (CmEtwRunDown.c)
 *     CmpHandlePageFileOpenNotification @ 0x140B57D54 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall CmpLockHiveListShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  LegacyAutoBoost *v4; // rbx
  __int64 v5; // rdx

  v4 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CmpCallbackListLock.ApcState.ApcListHead[1], 0LL, 0LL, a4);
  v5 = 17LL;
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&CmpCallbackListLock.ApcState.ApcListHead[1].Flink,
         17LL,
         0LL) )
  {
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&CmpCallbackListLock.ApcState.ApcListHead[1],
      0,
      v4,
      (struct _KTHREAD *)&CmpCallbackListLock.ApcStateFill[16]);
  }
  if ( v4 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v4, (void *)v5);
    else
      *((_BYTE *)v4 + 10) = 1;
  }
}
