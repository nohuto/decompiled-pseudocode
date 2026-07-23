/*
 * XREFs of ExpWnfGetPermanentDataStore @ 0x140B352CC
 * Callers:
 *     ExpWnfDeletePermanentStateData @ 0x14084D268 (ExpWnfDeletePermanentStateData.c)
 *     ExpWnfCreateNameInstance @ 0x1409CB5E8 (ExpWnfCreateNameInstance.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExpWnfDestroyPermanentDataStore @ 0x14084D4A8 (ExpWnfDestroyPermanentDataStore.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x140B69B74 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfGetPermanentDataStore(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rsi
  __int64 v8; // rax
  __int64 Pool2; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // r14
  int PermanentDataStoreHandleByScopeId; // ebp
  struct _KLOCK_ENTRIES *v14; // r9
  AutoBoost *v15; // rax
  void *v16; // rdx
  signed __int8 v17; // cf
  AutoBoost *v18; // rbp
  _QWORD *Object; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _KLOCK_ENTRIES *v22; // r9

  v4 = 72LL;
  if ( a2 - 2 > 1 )
    v4 = 64LL;
  v8 = *(_QWORD *)(v4 + a1);
  if ( v8 )
  {
    *a4 = v8;
    return 0LL;
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  v11 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)Pool2 = 3148042LL;
  v12 = (_QWORD *)(Pool2 + 24);
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_QWORD *)(Pool2 + 32) = Pool2 + 24;
  *(_QWORD *)(Pool2 + 24) = Pool2 + 24;
  *(_DWORD *)(Pool2 + 40) = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(Pool2 + 44) = *(_DWORD *)(a1 + 20);
  memmove((void *)(Pool2 + 48), *(const void **)(a1 + 24), *(unsigned int *)(a1 + 20));
  PermanentDataStoreHandleByScopeId = ExpWnfGetPermanentDataStoreHandleByScopeId(
                                        *(unsigned int *)(a1 + 16),
                                        a2,
                                        *(_QWORD *)(a1 + 24));
  if ( PermanentDataStoreHandleByScopeId >= 0 )
  {
    v15 = (AutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.Timer.TimerListEntry, 0LL, 0LL, v14);
    v17 = _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock.Timer.TimerListEntry, 0LL);
    v18 = v15;
    if ( v17 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PspSiloMonitorLock.Timer.TimerListEntry,
        v15,
        (__int64)&PspSiloMonitorLock.Timer.TimerListEntry);
    if ( v18 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v18, v16);
      else
        *((_BYTE *)v18 + 10) = 1;
    }
    Object = ExpPlatformBinaryLock.WaitBlock[3].Object;
    if ( *(struct _KTHREAD **)ExpPlatformBinaryLock.WaitBlock[3].Object != (struct _KTHREAD *)&ExpPlatformBinaryLock.WaitBlockFill11[168] )
      __fastfail(3u);
    v12[1] = ExpPlatformBinaryLock.WaitBlock[3].Object;
    *v12 = &ExpPlatformBinaryLock.WaitBlock[3].Thread;
    *Object = v12;
    ExpPlatformBinaryLock.Spare18 = (unsigned __int64)v12;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PspSiloMonitorLock.Timer.TimerListEntry.Flink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.Timer.TimerListEntry);
    KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.Timer.TimerListEntry);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + a1), (signed __int64)v11, 0LL) )
      ExpWnfDestroyPermanentDataStore(v11, v20, v21, v22);
    *a4 = *(_QWORD *)(v4 + a1);
    return 0LL;
  }
  ExFreePoolWithTag(v11, 0x20666E57u);
  return (unsigned int)PermanentDataStoreHandleByScopeId;
}
