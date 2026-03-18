/*
 * XREFs of ExpRemoveHandleTable @ 0x1409587E8
 * Callers:
 *     ExDestroyHandleTable @ 0x140959168 (ExDestroyHandleTable.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall ExpRemoveHandleTable(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rdi
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.StackBase, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock.StackBase, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PspSiloMonitorLock.StackBase,
      v6,
      (__int64)&PspSiloMonitorLock.StackBase);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = (_QWORD *)(a1 + 24);
  v11 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v11 + 8) != a1 + 24 || (v12 = *(_QWORD **)(a1 + 32), (_QWORD *)*v12 != v10) )
    __fastfail(3u);
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock.StackBase, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.StackBase);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.StackBase);
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread, v13, v14);
  *(_QWORD *)(a1 + 32) = a1 + 24;
  *v10 = v10;
  return result;
}
