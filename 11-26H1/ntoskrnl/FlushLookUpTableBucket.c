/*
 * XREFs of FlushLookUpTableBucket @ 0x1404C4898
 * Callers:
 *     LookUpTableFlushPartial @ 0x140AEFFE8 (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x140AF012C (LookUpTableFlushComplete.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     FlattenEventEntryTree @ 0x1404C49BC (FlattenEventEntryTree.c)
 *     FlushEventEntryList @ 0x140ADDD90 (FlushEventEntryList.c)
 */

__int64 __fastcall FlushLookUpTableBucket(__int64 a1, unsigned int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbp
  unsigned __int64 *v7; // rdi
  KIRQL v8; // r15
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rsi
  const EVENT_DESCRIPTOR *v12; // r14
  unsigned int v13; // eax
  unsigned int v14; // ebp

  v4 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2) )
    return 0LL;
  v7 = (unsigned __int64 *)(a1 + 272);
  v8 = 0;
  v9 = (AutoBoost *)KeAbPreAcquire(a1 + 272, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v9, (__int64)v7);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( !*(_BYTE *)(a1 + 373) )
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 280));
  v12 = *(const EVENT_DESCRIPTOR **)(a1 + 8 * v4);
  *(_QWORD *)(a1 + 8 * v4) = 0LL;
  v13 = FlattenEventEntryTree(v12);
  *(_DWORD *)(a1 + 256) -= v13;
  v14 = v13;
  if ( !*(_BYTE *)(a1 + 373) )
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 280), v8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  KeAbPostRelease((unsigned __int64)v7);
  FlushEventEntryList(*(_QWORD *)(*(_QWORD *)(a1 + 344) + 32LL), v12);
  return v14;
}
