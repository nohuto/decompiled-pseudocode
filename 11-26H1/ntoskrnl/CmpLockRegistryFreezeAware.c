/*
 * XREFs of CmpLockRegistryFreezeAware @ 0x1408B3FA0
 * Callers:
 *     CmpTryToRundownHive @ 0x140463B48 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x14046E794 (CmpLoadKeyCommon.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140856CB8 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpStartRMLogs @ 0x1408ACB38 (CmpStartRMLogs.c)
 *     CmpPerformUnloadKey @ 0x1408AFC14 (CmpPerformUnloadKey.c)
 *     CmpDoFlushNextHive @ 0x1408B1C20 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x1408B2250 (CmLoadAppKey.c)
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     ExpWatchProductTypeWork @ 0x140973C50 (ExpWatchProductTypeWork.c)
 *     CmRestoreKey @ 0x140986024 (CmRestoreKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140AD4630 (CmpLateUnloadHiveWorker.c)
 *     CmpResolveHiveLoadConflict @ 0x140AE1F04 (CmpResolveHiveLoadConflict.c)
 *     NtFlushKey @ 0x140AFFC30 (NtFlushKey.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     CmpLockFreezeQueue @ 0x14077054C (CmpLockFreezeQueue.c)
 *     CmpUnLockFreezeQueue @ 0x140770C7C (CmpUnLockFreezeQueue.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpLockRegistryFreezeAware(char a1)
{
  __int64 v2; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  v10 = 0LL;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( a1 )
    CmpLockRegistryExclusive(v2);
  else
    CmpLockRegistry();
  while ( *(_DWORD *)&WheapPfaLock.ApcStateFill[12] == 1 )
  {
    KeResetEvent(&Event);
    CmpLockFreezeQueue(v5, v4, v6, v7);
    if ( *(struct _KTHREAD **)CmpFreezeListLock.SListFaultAddress != (struct _KTHREAD *)&CmpFreezeListLock.Header.WaitListHead.Blink )
      __fastfail(3u);
    *((_QWORD *)&v10 + 1) = CmpFreezeListLock.SListFaultAddress;
    *(_QWORD *)&v10 = &CmpFreezeListLock.Header.WaitListHead.Blink;
    *(_QWORD *)CmpFreezeListLock.SListFaultAddress = &v10;
    CmpFreezeListLock.SListFaultAddress = &v10;
    CmpUnLockFreezeQueue();
    CmpUnlockRegistry(v8);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( a1 )
      CmpLockRegistryExclusive(v9);
    else
      CmpLockRegistry();
  }
  return 0LL;
}
