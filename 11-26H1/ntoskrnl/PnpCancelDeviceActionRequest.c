/*
 * XREFs of PnpCancelDeviceActionRequest @ 0x1405DB734
 * Callers:
 *     PiCMDeviceAction @ 0x14098CC84 (PiCMDeviceAction.c)
 *     PiControlGetSetDeviceStatus @ 0x1409A74C0 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x140B60570 (PiQueueDeviceRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 */

void __fastcall PnpCancelDeviceActionRequest(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rbx
  signed __int64 v10; // rax
  signed __int64 v11; // rdx
  __int64 v12; // rtt

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 88);
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire(a1 + 88, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v7, (__int64)v5);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  *(_BYTE *)(a1 + 96) = 1;
  _m_prefetchw((const void *)(a1 + 88));
  v10 = *(_QWORD *)(a1 + 88);
  v11 = v10 - 16;
  if ( (v10 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v11 = 0LL;
  if ( (v10 & 2) != 0
    || (v12 = *(_QWORD *)(a1 + 88), v12 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v11, v10)) )
  {
    ExfReleasePushLock((_QWORD *)(a1 + 88));
  }
  KeAbPostRelease(a1 + 88);
  KeLeaveCriticalRegion();
}
