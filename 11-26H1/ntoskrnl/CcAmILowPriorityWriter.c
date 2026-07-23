/*
 * XREFs of CcAmILowPriorityWriter @ 0x14047E3C8
 * Callers:
 *     CcFlushCacheAcquireRange @ 0x14039BA5C (CcFlushCacheAcquireRange.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

bool __fastcall CcAmILowPriorityWriter(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rsi
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rdi
  bool v8; // di

  v4 = *(_QWORD *)(a1 + 536);
  v5 = (AutoBoost *)KeAbPreAcquire(v4 + 1280, 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 1280), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 1280), v5, v4 + 1280);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  v8 = *(_QWORD *)(v4 + 1256) == (_QWORD)KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 1280), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 1280));
  KeAbPostRelease(v4 + 1280);
  return v8;
}
