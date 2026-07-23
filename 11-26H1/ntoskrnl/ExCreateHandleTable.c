/*
 * XREFs of ExCreateHandleTable @ 0x1409BCDDC
 * Callers:
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14077D3D0 (AlpcpAllocateMessageFromExtendedTables.c)
 *     AlpcpInitSystem @ 0x1407C3E88 (AlpcpInitSystem.c)
 *     ObInitProcess @ 0x1409BCC28 (ObInitProcess.c)
 *     ExDupHandleTable @ 0x1409BD030 (ExDupHandleTable.c)
 *     PspInitializeJobStructures @ 0x140CDF360 (PspInitializeJobStructures.c)
 *     PspInitPhase0 @ 0x140D0D27C (PspInitPhase0.c)
 *     ObInitSystem @ 0x140D0F63C (ObInitSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExpAllocateHandleTable @ 0x1409BCEF8 (ExpAllocateHandleTable.c)
 */

__int64 __fastcall ExCreateHandleTable(ULONG_PTR a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 result; // rax
  struct _KLOCK_ENTRIES *v5; // r9
  __int64 v6; // rdi
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rsi
  _QWORD *AutoBoostThreadState; // rcx
  _KSWAPPABLE_PAGE ***v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx

  CurrentThread = KeGetCurrentThread();
  result = ExpAllocateHandleTable(a1);
  v6 = result;
  if ( result )
  {
    if ( a2 )
    {
      --CurrentThread->KernelApcDisable;
      v7 = (AutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.StackBase, 0LL, 0LL, v5);
      v9 = _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock.StackBase, 0LL);
      v10 = v7;
      if ( v9 )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&PspSiloMonitorLock.StackBase,
          v7,
          (__int64)&PspSiloMonitorLock.StackBase);
      if ( v10 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v10, v8);
        else
          *((_BYTE *)v10 + 10) = 1;
      }
      AutoBoostThreadState = PspSiloMonitorLock.AutoBoostThreadState;
      v12 = (_KSWAPPABLE_PAGE ***)(v6 + 24);
      if ( *(struct _KTHREAD **)PspSiloMonitorLock.AutoBoostThreadState != (struct _KTHREAD *)&PspSiloMonitorLock.SchedulerSharedSwappablePage )
        __fastfail(3u);
      *v12 = &PspSiloMonitorLock.SchedulerSharedSwappablePage;
      *(_QWORD *)(v6 + 32) = AutoBoostThreadState;
      *AutoBoostThreadState = v12;
      PspSiloMonitorLock.AutoBoostThreadState = (void *)(v6 + 24);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock.StackBase, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.StackBase);
      KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.StackBase);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v14);
    }
    else
    {
      v13 = (_QWORD *)(result + 24);
      v13[1] = v13;
      *v13 = v13;
    }
    return v6;
  }
  return result;
}
