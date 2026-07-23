/*
 * XREFs of ObCheckActiveHandles @ 0x140AF6940
 * Callers:
 *     MiFinishCreateSection @ 0x14098BADC (MiFinishCreateSection.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

bool __fastcall ObCheckActiveHandles(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rbx
  __int64 v10; // rdi
  signed __int64 v11; // rax
  signed __int64 v12; // rdx
  __int64 v13; // rtt

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 - 32);
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire(a1 - 32, 0LL, 0LL, a4);
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
  v10 = *(_QWORD *)(a1 - 40);
  _m_prefetchw((const void *)(a1 - 32));
  v11 = *(_QWORD *)(a1 - 32);
  v12 = v11 - 16;
  if ( (v11 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v12 = 0LL;
  if ( (v11 & 2) != 0
    || (v13 = *(_QWORD *)(a1 - 32), v13 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 32), v12, v11)) )
  {
    ExfReleasePushLock((_QWORD *)(a1 - 32));
  }
  KeAbPostRelease(a1 - 32);
  KeLeaveCriticalRegion();
  return v10 != 0;
}
