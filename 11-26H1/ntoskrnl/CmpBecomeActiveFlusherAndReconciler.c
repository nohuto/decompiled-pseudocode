/*
 * XREFs of CmpBecomeActiveFlusherAndReconciler @ 0x14085D050
 * Callers:
 *     CmShutdownSystem1 @ 0x1406E64F0 (CmShutdownSystem1.c)
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 *     CmpRefreshHive @ 0x140854058 (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x140854570 (CmpSaveKeyByFileCopy.c)
 *     CmReplaceKey @ 0x14085F020 (CmReplaceKey.c)
 * Callees:
 *     CmpIsWriteQueueActive @ 0x1404B6690 (CmpIsWriteQueueActive.c)
 *     CmpAcquireWriteQueue @ 0x1404C594C (CmpAcquireWriteQueue.c)
 *     CmpLockRegistryFreezeAware @ 0x1408BA574 (CmpLockRegistryFreezeAware.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140B35738 (CmpWaitOnHiveWriteQueue.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C5ED14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C5ED30 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpBecomeActiveFlusherAndReconciler(__int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rdi
  _QWORD *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v11; // rcx

  v2 = (_QWORD *)(a1 + 4216);
  v3 = (_QWORD *)(a1 + 4200);
  while ( 1 )
  {
    CmpLockRegistryFreezeAware(0LL);
    HvLockHiveFlusherExclusive(a1);
    if ( CmpIsWriteQueueActive(v2) )
    {
      v4 = v2;
      goto LABEL_4;
    }
    if ( !CmpIsWriteQueueActive(v3) )
      break;
    v4 = v3;
LABEL_4:
    CmpWaitOnHiveWriteQueue(a1, v4);
  }
  CmpAcquireWriteQueue(v2, v5, v6, v7);
  CmpAcquireWriteQueue(v3, v8, v9, v10);
  HvUnlockHiveFlusherExclusive(a1);
  return CmpUnlockRegistry(v11);
}
