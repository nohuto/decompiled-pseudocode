/*
 * XREFs of EtwpQueueNotification @ 0x140914660
 * Callers:
 *     EtwpSendDataBlock @ 0x140914478 (EtwpSendDataBlock.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     EtwpAddDataSource @ 0x1409148C4 (EtwpAddDataSource.c)
 *     PsChargeProcessWakeCounter @ 0x14098F230 (PsChargeProcessWakeCounter.c)
 *     EtwpReleaseQueueEntry @ 0x140A8BB28 (EtwpReleaseQueueEntry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpQueueNotification(void *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r12d
  char v7; // r15
  __int64 v8; // r14
  __int64 Pool2; // rax
  struct _KLOCK_ENTRIES *v10; // r9
  _QWORD *v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // rbx
  _QWORD *v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  signed __int64 v19; // rax
  signed __int64 v20; // rdx
  __int64 v21; // rtt
  struct _KEVENT *v23; // rcx
  void *v24; // rbx
  unsigned int i; // edx
  __int16 v26; // [rsp+88h] [rbp+20h]

  v4 = 0;
  v7 = 1;
  v26 = *(_WORD *)(a3 + 98) & 0x80;
  v8 = EtwpAddDataSource();
  if ( !v8 )
    return (unsigned int)-1073741801;
  Pool2 = ExAllocatePool2(0x40uLL);
  v11 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *(_QWORD *)(Pool2 + 16) = a2;
  *(_QWORD *)(Pool2 + 24) = a3;
  *(_WORD *)(Pool2 + 48) = *(_WORD *)(a3 + 96);
  *(_DWORD *)(Pool2 + 52) = 1;
  if ( !*(_BYTE *)(a2 + 12) )
  {
LABEL_4:
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = (AutoBoost *)KeAbPreAcquire(v8 + 16, 0LL, 0LL, v10);
    v15 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 16), v13, v8 + 16);
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v15, v14);
      else
        *((_BYTE *)v15 + 10) = 1;
    }
    v16 = *(_QWORD **)(v8 + 24);
    v17 = (_QWORD *)(v8 + 24);
    while ( v16 != v17 )
    {
      if ( (v26 != 0) == *(_BYTE *)(v16[3] + 98LL) >> 7 )
      {
        v7 = 0;
        break;
      }
      v16 = (_QWORD *)*v16;
    }
    v18 = *(_QWORD **)(v8 + 32);
    if ( (_QWORD *)*v18 != v17 )
      __fastfail(3u);
    *v11 = v17;
    v11[1] = v18;
    *v18 = v11;
    *(_QWORD *)(v8 + 32) = v11;
    if ( !v7 )
      goto LABEL_17;
    if ( v26 )
    {
      v23 = *(struct _KEVENT **)(v8 + 8);
      if ( !v23 )
        goto LABEL_17;
    }
    else
    {
      v23 = *(struct _KEVENT **)v8;
      if ( !*(_QWORD *)v8 )
      {
LABEL_17:
        _m_prefetchw((const void *)(v8 + 16));
        v19 = *(_QWORD *)(v8 + 16);
        v20 = v19 - 16;
        if ( (v19 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v20 = 0LL;
        if ( (v19 & 2) != 0
          || (v21 = *(_QWORD *)(v8 + 16),
              v21 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), v20, v19)) )
        {
          ExfReleasePushLock((_QWORD *)(v8 + 16));
        }
        KeAbPostRelease(v8 + 16);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        return v4;
      }
    }
    KeSetEvent(v23, 1, 0);
    goto LABEL_17;
  }
  v24 = *(void **)(a2 + 24);
  *(_DWORD *)(Pool2 + 52) |= 2u;
  PsReferenceSiloContext(v24);
  v11[4] = v24;
  v11[5] = PsChargeProcessWakeCounter(a1);
  for ( i = 0; i < 4; ++i )
  {
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 8LL * i + 48), (signed __int64)v11, 0LL) )
    {
      *((_WORD *)v11 + 25) = i;
      goto LABEL_4;
    }
  }
  v4 = -1073741823;
  EtwpReleaseQueueEntry(v11);
  return v4;
}
