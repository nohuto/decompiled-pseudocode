/*
 * XREFs of CmpRemoveHiveFromNamespace @ 0x1404C6120
 * Callers:
 *     CmpCompleteUnloadKey @ 0x1408C009C (CmpCompleteUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x14093E12C (CmpLinkHiveToMaster.c)
 * Callees:
 *     CmpLogHiveDestroyEvent @ 0x14085B5F8 (CmpLogHiveDestroyEvent.c)
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x1408BE608 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpDiscardKcb @ 0x1408C033C (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1408C065C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1408C06E4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1408C2B20 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpFreeKeyByCell @ 0x1408C3264 (CmpFreeKeyByCell.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     CmpUnlockHashEntryByKcb @ 0x1408CC824 (CmpUnlockHashEntryByKcb.c)
 *     CmpLockKcbExclusive @ 0x1408D5100 (CmpLockKcbExclusive.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpRemoveHiveFromNamespace(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // rdi
  ULONG_PTR v6; // rsi

  v3 = *(_QWORD *)(a2 + 72);
  v6 = *(_QWORD *)(v3 + 72);
  CmpLockHashEntryExclusiveByKcb(v3);
  CmpLockKcbExclusive(v6);
  CmpLockKcbExclusive(v3);
  HvLockHiveFlusherShared(*(_QWORD *)(v3 + 32));
  CmpFreeKeyByCell(*(_QWORD *)(v3 + 32));
  CmpFlushNotifiesOnKeyBodyList(v3, 1LL, a3);
  CmpMarkKeyUnbacked(v3, a3);
  CmpDiscardKcb(v3);
  CmpRemoveLayerLinkForDiscardedKcb(v3, a3);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveDestroyEvent(a1);
  HvUnlockHiveFlusherShared(*(_QWORD *)(v3 + 32));
  CmpUnlockKcb(v3);
  CmpUnlockKcb(v6);
  return CmpUnlockHashEntryByKcb(v3);
}
