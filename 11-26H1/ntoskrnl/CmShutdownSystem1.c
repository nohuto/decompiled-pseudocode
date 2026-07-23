/*
 * XREFs of CmShutdownSystem1 @ 0x1406E64F0
 * Callers:
 *     CmShutdownSystem @ 0x14085A594 (CmShutdownSystem.c)
 * Callees:
 *     HvpMakeHiveReadOnly @ 0x1406E6C04 (HvpMakeHiveReadOnly.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     CmCloseRmHandle @ 0x14077993C (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x140779964 (CmCloseTmHandle.c)
 *     CmpRecordShutdownStopTime @ 0x14085A938 (CmpRecordShutdownStopTime.c)
 *     CmpShutdownWorkers @ 0x14085AEB4 (CmpShutdownWorkers.c)
 *     CmFcShutdownSystem @ 0x14085AFA4 (CmFcShutdownSystem.c)
 *     CmpTraceShutdownFlushStart @ 0x14085BA68 (CmpTraceShutdownFlushStart.c)
 *     CmpTraceShutdownFlushStop @ 0x14085BAD8 (CmpTraceShutdownFlushStop.c)
 *     CmpTraceShutdownStart @ 0x14085BBB8 (CmpTraceShutdownStart.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14085D050 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14085D0E0 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpWaitForHiveLoadUnloadRundownRelease @ 0x140864D94 (CmpWaitForHiveLoadUnloadRundownRelease.c)
 *     CmShutdownCmRM @ 0x1408B5760 (CmShutdownCmRM.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408B7808 (UNLOCK_HIVE_LOAD.c)
 *     CmpGetNextActiveHive @ 0x1408B95EC (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     LOCK_HIVE_LOAD @ 0x1408BABC0 (LOCK_HIVE_LOAD.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     HvMarkBaseBlockDirty @ 0x140AE1304 (HvMarkBaseBlockDirty.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C5ED14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C5ED30 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmShutdownSystem1(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rcx
  __int64 v5; // rdx
  void *v6; // rdi
  void *v7; // rsi
  __int64 NextActiveHive; // rbx
  __int64 j; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rbx
  unsigned __int64 ThreadLock; // rdx
  int v16; // eax
  unsigned int v17; // eax
  struct _KTHREAD *Thread; // rcx
  __int64 k; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 m; // rcx
  __int64 v23; // rbx
  __int64 n; // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState.ApcListHead[1], 0, 32);
  CmpTraceShutdownStart(a1, a2, a3, a4, 0LL, 0LL);
  CmpWaitForHiveLoadUnloadRundownRelease();
  CmpAttachToRegistryProcess(&ApcState);
  for ( i = 0LL; ; i = NextActiveHive )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    if ( !NextActiveHive )
      break;
    LOCK_HIVE_LOAD();
    CmpLockRegistryExclusive();
    LOBYTE(v5) = 1;
    v6 = (void *)CmCloseRmHandle(*(_QWORD *)(NextActiveHive + 4160), v5);
    v7 = (void *)CmCloseTmHandle(*(_QWORD *)(NextActiveHive + 4160));
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    if ( v6 )
    {
      ZwClose(v6);
      ZwClose(v7);
    }
  }
  LOCK_HIVE_LOAD();
  CmpLockRegistryExclusive();
  for ( j = CmpGetNextActiveHive(0LL); ; j = CmpGetNextActiveHive(v14) )
  {
    v14 = j;
    if ( !j )
      break;
    v10 = *(_QWORD *)(j + 4160);
    if ( v10 )
    {
      v11 = *(_QWORD *)(j + 64);
      v12 = *(_DWORD *)(v11 + 144);
      if ( *(_QWORD *)(v10 + 16) == v10 + 16 )
        v13 = v12 & 0xFFFFFFFE;
      else
        v13 = v12 | 1;
      *(_DWORD *)(v11 + 144) = v13;
      HvMarkBaseBlockDirty(v14);
    }
  }
  if ( *(_QWORD *)&WheapPfaLock.WaitBlockFill11[16] )
  {
    ThreadLock = stru_140E098B8.WaitBlock[2].Thread->ThreadLock;
    v16 = *(_DWORD *)(ThreadLock + 144);
    if ( *(_QWORD *)(*(_QWORD *)&WheapPfaLock.WaitBlockFill11[16] + 16LL) == *(_QWORD *)&WheapPfaLock.WaitBlockFill11[16]
                                                                           + 16LL )
      v17 = v16 & 0xFFFFFFFE;
    else
      v17 = v16 | 1;
    Thread = stru_140E098B8.WaitBlock[2].Thread;
    *(_DWORD *)(ThreadLock + 144) = v17;
    HvMarkBaseBlockDirty(Thread);
  }
  for ( k = 0LL; ; k = v21 )
  {
    v20 = CmpGetNextActiveHive(k);
    v21 = v20;
    if ( !v20 )
      break;
    CmShutdownCmRM(*(_QWORD *)(v20 + 4160), 0LL);
  }
  if ( !LOBYTE(ExpPlatformBinaryLock.SListFaultAddress) )
    CmpShutdownWorkers();
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  CmFcShutdownSystem(1LL);
  CmpRecordShutdownStopTime();
  for ( m = 0LL; ; m = v23 )
  {
    v23 = CmpGetNextActiveHive(m);
    if ( !v23 )
      break;
    CmpLockRegistry();
    HvpMakeHiveReadOnly(v23);
    CmpUnlockRegistry();
  }
  CmpTraceShutdownFlushStart();
  for ( n = 0LL; ; n = v26 )
  {
    v25 = CmpGetNextActiveHive(n);
    v26 = v25;
    if ( !v25 )
      break;
    CmpBecomeActiveFlusherAndReconciler(v25);
    CmpLockRegistry();
    HvLockHiveFlusherExclusive(v26);
    *(_DWORD *)(v26 + 164) |= 4u;
    HvUnlockHiveFlusherExclusive(v26);
    CmpUnlockRegistry();
    CmpFinishBeingActiveFlusherAndReconciler(v26);
    if ( !BYTE1(NlsMbOemCodePageTag) && (*(_DWORD *)(v26 + 160) & 2) == 0 )
      *(_BYTE *)(v26 + 4792) = (int)CmpFlushHive(v26, 76LL) >= 0;
  }
  CmpTraceShutdownFlushStop();
  return CmpDetachFromRegistryProcess(&ApcState);
}
