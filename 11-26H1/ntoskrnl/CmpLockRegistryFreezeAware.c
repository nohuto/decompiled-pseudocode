/*
 * XREFs of CmpLockRegistryFreezeAware @ 0x1408BA574
 * Callers:
 *     CmpTryToRundownHive @ 0x14045CB08 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x140467F14 (CmpLoadKeyCommon.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14085D050 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpStartRMLogs @ 0x1408B2F7C (CmpStartRMLogs.c)
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 *     CmpDoFlushNextHive @ 0x1408B8230 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     ExpWatchProductTypeWork @ 0x140935C60 (ExpWatchProductTypeWork.c)
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140AD1A90 (CmpLateUnloadHiveWorker.c)
 *     CmpResolveHiveLoadConflict @ 0x140ADF3F4 (CmpResolveHiveLoadConflict.c)
 *     NtFlushKey @ 0x140B018C0 (NtFlushKey.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     CmpLockFreezeQueue @ 0x14077354C (CmpLockFreezeQueue.c)
 *     CmpUnLockFreezeQueue @ 0x140773C7C (CmpUnLockFreezeQueue.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpLockRegistryFreezeAware(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  v16 = 0LL;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( a1 )
    CmpLockRegistryExclusive(v3);
  else
    CmpLockRegistry(v3, v2, v4, v5);
  while ( HIDWORD(WheapPfaLock.SwapListEntry.Next) == 1 )
  {
    KeResetEvent(&Event);
    CmpLockFreezeQueue(v8, v7, v9, v10);
    if ( *(struct _KTHREAD **)CmpFreezeListLock.SListFaultAddress != (struct _KTHREAD *)&CmpFreezeListLock.Header.WaitListHead.Blink )
      __fastfail(3u);
    *((_QWORD *)&v16 + 1) = CmpFreezeListLock.SListFaultAddress;
    *(_QWORD *)&v16 = &CmpFreezeListLock.Header.WaitListHead.Blink;
    *(_QWORD *)CmpFreezeListLock.SListFaultAddress = &v16;
    CmpFreezeListLock.SListFaultAddress = &v16;
    CmpUnLockFreezeQueue();
    CmpUnlockRegistry(v11);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( a1 )
      CmpLockRegistryExclusive(v13);
    else
      CmpLockRegistry(v13, v12, v14, v15);
  }
  return 0LL;
}
